#include "monty.h"

int main(int argc, char **argv)
{
    const char *filename;
    int resu__ullt;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        return EXIT_FAILURE;
    }

    filename = argv[1];
    resu__ullt = process(filename);

    return resu__ullt;
}

int process(const char *filename)
{
    int fd;
    char *buff__eerr;
    size_t size;
    int result = EXIT_SUCCESS;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return EXIT_FAILURE;
    }

    size = get_file_size(fd);
    buff__eerr = malloc(size);
    if (buff__eerr == NULL)
    {
        perror("malloc");
        close(fd);
        return EXIT_FAILURE;
    }

    if (read(fd, buff__eerr, size) == -1)
    {
        perror("read");
        result = EXIT_FAILURE;
    }
    else
    {
        close(fd);
        fd = open(filename, O_WRONLY | O_TRUNC);
        if (fd == -1)
        {
            perror("open");
            result = EXIT_FAILURE;
        }
        else
        {
            if (write(fd, buff__eerr, size) == -1)
            {
                perror("write");
                result = EXIT_FAILURE;
            }
        }
    }

    free(buff__eerr);
    close(fd);

    return result;
}
