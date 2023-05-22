#ifndef MAIN_H
#define MAIN_H
/*
 * all the function calls
 * Author: mikias hailu
 * Cdynamic libraries
*/
int _atoi(char *m);
int _strlen(char *s);
int _isupper(int m);
char *_strchr(char *s, char m);
int _islower(int m);
int _isalpha(int m);
int _abs(int d);
char *_memcpy(char *dest, char *src, unsigned int d);
int _putchar(char m);
char *_strncat(char *dest, char *src, int n);
char *_strstr(char *haystack, char *needle);
int _isdigit(int m);
void _puts(char *n);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest,  int d, char *src);
int _strcmp(char *s1, char *s2);
char *_memset( unsigned int n, char *s, char b);
char *_strncat(char *dest, char *src, int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strcpy(char *dest, char *src);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
