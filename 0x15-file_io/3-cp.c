#include <stdio.h>
#include <stdlib.h>

void check_exit(int condition, const char *error_msg, int exit_code)
{
    if (condition)
    {
        perror(error_msg);
        exit(exit_code);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(1);
    }

    int fd_from = open(argv[1], O_RDONLY);
    check_exit(fd_from == -1, "Error: Can't read from file", 1);

    mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
    int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
    check_exit(fd_to == -1, "Error: Can't write to file", 1);

    char buffer[1024];
    ssize_t lenr, lenw;
    while ((lenr = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        lenw = write(fd_to, buffer, lenr);
        check_exit(lenw != lenr, "Error: Can't write to file", 1);
    }

    check_exit(lenr == -1, "Error: Can't read from file", 1);

    int close_to = close(fd_to);
    check_exit(close_to == -1, "Error: Can't close file descriptor", 1);

    int close_from = close(fd_from);
    check_exit(close_from == -1, "Error: Can't close file descriptor", 1);

    return 0;
}
