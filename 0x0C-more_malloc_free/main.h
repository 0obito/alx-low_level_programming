#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
char *strcat_both(char *str);
char *strcat_two(char *str, char *s1);
char *strcat_one(char *str, char *s2, unsigned int size);
char *strcat_none(char *str, char *s1, char *s2, unsigned int size);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
