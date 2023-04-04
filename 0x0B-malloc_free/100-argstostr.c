#include "main.h"
#include "string.h"

/**
* argstostr - concatenates all the arguments of your program
* @ac: 
*/
char *argstostr(int ac, char **av)
{
	int i;
    size_t len = 0;
    char *_all_args, *all_args;

    for (i=1; i < ac; i++)
	{
        len += strlen(av[i]);
    }

    _all_args = all_args = (char *) malloc(len + ac - 1);

    for(i=1; i < ac; i++) {
        memcpy(_all_args, av[i], strlen(av[i]));
        _all_args += strlen(av[i])+1;
        *(_all_args-1) = ' ';
    }
    *(_all_args-1) = 0;

    printf("All %d args: '%s'\n", ac, all_args);

    return (all_args);
}