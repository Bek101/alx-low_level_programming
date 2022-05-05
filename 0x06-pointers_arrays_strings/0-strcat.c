#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

int main()
{
    char dest[20]="bek";
    char src[20]="magna";

int a = -1, i;
for (i = 0; dest[i] != '\0'; i++);

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

printf("%s",dest);
return (0);
}
