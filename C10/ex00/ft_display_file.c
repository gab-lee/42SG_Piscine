#include "ft.h" 

int main(int argc, char** argv)
{
    int file;

    if (argc <= 1)
        ft_putstr("File name missing");
    else if (argc > 2)
        ft_putstr("Too mnany arguments");
    file = open(argv[1], O_RDONLY);
    if (!file)
        ft_putstr("cannot read file");
    ft_display_file(file);
    close(file);
    return(0);
}

void ft_display_file(int file)
{
    ssize_t n;
    int i; 
    char buf[1024];

    n = read(file, buf, 1024);
    while (n)
    {
        ft_printNchar (buf,n);
        n = read(file, buf, 1024);
    }
}