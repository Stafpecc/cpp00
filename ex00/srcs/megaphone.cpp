#include <iostream>

#define RETURN_FAILURE 0
#define RETURN_SUCCESS 1

static int ft_islower(char c) {
    if (c >= 'a' && c <= 'z')
        return RETURN_SUCCESS;
    return RETURN_FAILURE;
}

int main(int argc, char **argv)
{
    int     j;
    int     i;
    char    c;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            c = argv[i][j];
            if (ft_islower(c))
                c -= 32;
            std::cout << c;
            j++;
        }
        i++;
    }

    std::cout << std::endl;
    return 0;
}