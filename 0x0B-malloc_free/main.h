<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_
=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> e4d31c9e26608b68235ff0ef0420720791ee4bd6

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
