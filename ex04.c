#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
        i++;
        //while loop ends here
        //next step checks whether the ascii value is greater or smaller or null ie the same at this position
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);

}
int main ()
{
   char haystack[20] = "Pointless";
   char needle[10] = "Point";
   int length;
   int ret;
   
   length = 4;

   ret = ft_strncmp(haystack, needle, length);

   printf("The substring is: %i\n", ret);
   
   return(0);
}