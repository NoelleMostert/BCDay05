#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int lstr;
    int sstr;
    int length;
    
    length = 0;
    
   while (to_find[length] != '\0')
       length++;
       
    lstr = 0;
    sstr = 0;
    
	while (str[lstr] != '\0')
	{
		while (str[lstr + sstr] == to_find[sstr])
		{
			if (sstr == length - 1)
				return (to_find);
			sstr++;
		}
		sstr = 0;
		lstr++;
	}
	return (0);
}

int main ()
{
   char haystack[20] = "ABPoint";
   char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}