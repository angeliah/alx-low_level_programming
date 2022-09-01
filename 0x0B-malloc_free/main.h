#include<stdio.h>
#include<stdlib.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
<<<<<<< HEAD
char *str_concat(char *s1, char *s2)
=======
char *str_concat(char *s1, char *s2);
>>>>>>> d7ce15866032f01cab84fb3a87fac53a210b3764
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _putchar(char c);
