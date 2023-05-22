#ifndef MAIN_H
#define MAIN_H
/*
 * all the function calls
 * Author: mikias hailu
 * C dynamic libraries
*/
int _atoi(char *s);
int _strlen(char *s);
int _isupper(int c);
char *_strchr(char *s, char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _putchar(char c);
char *_strncat(char *dest, char *src, int n);
char *_strstr(char *haystack, char *needle);
int _isdigit(int c);
void _puts(char *s);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_strncat(char *dest, char *src, int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strcpy(char *dest, char *src);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
