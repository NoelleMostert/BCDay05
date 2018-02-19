#include <stdio.h>

char *ft_strcapitalize(char *str)

{
    int i;
    int upper;
    
    i = 0;
    upper = 1;
    while(str[i] != '\0')
    {        
        //if(i == 0)
        //    str[i] = str[i] - 32;
        if(str[i] >= 'a' && str[i] <= 'z' && upper == 1)
            {
                str[i] = str[i] - 32;
                upper = 0;
            }
        else if(str[i] >= 'A' && str[i] <= 'Z' && upper == 0)
            {
                str[i] = str[i] + 32;
                upper = 0;
            }
        else if (str[i] >= '0' && str[i] <= '9' && upper == 0)
            {
                upper = 0;
            }
        else
            {
                upper = 1;
            }
            
        //if(str[i] == 32)
          //  upper = 1;
        //else
          //  upper = 0;
            i++;
    }
    return(str);
}

int main()
{
   char haystack[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
   char *ret;

   ret = ft_strcapitalize(haystack);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
