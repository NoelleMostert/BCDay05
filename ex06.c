#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
            i++;
    }
    return(str);
}

int main()
{
   char haystack[100] = "Pointless";
   char *ret;

   ret = ft_strlowcase(haystack);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
