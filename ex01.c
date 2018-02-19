#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = 0;
    
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void)
{
	char dest[100];
	char src[100];
	unsigned int size;

	printf("%s", "provide dest");
	scanf("%s", dest);
	printf("%s", "provide src?");
	scanf("%s", src);
	printf("%s", "provide size");
	scanf("%d", &size);
	ft_strncpy(dest,src,size);
//	strncpy(dest,src,size);
	printf("%s", dest);
}