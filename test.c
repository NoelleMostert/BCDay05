#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;
	int begin;

	i = 0;
	j = 0;
	//while (str[i] != '\0')
	//{
		begin = i;
		while (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) && str[1] != '\0')
		{
			if (j == 0 && str[j + begin] >= 'a' && str[j + begin] <= 'z')
				str[j + begin] = str[j + begin] - 32;
			else if (str[j + begin] >= 'A' && str[j + begin] <= 'Z')
				str[j + begin] = str[j + begin] + 32;
			j++;
			i++;
		}
		//j = 0;
		//i++;
	//}
	return (str);
}

int main()
{
   char haystack[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
   char *ret;

   ret = ft_strcapitalize(haystack);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
