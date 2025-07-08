#include <iostream>

#define RETURN_FAILURE 0
#define RETURN_SUCCESS 1

using namespace std; 

static int islower(char c) {
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
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return 0;
    }

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            c = argv[i][j];
            if (islower(c))
                c -= 32;
            cout << c;
            j++;
        }
        i++;
    }

    cout << endl;
    return 0;
}