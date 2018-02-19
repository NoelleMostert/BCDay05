#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
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
   char haystack[20] = "Point";
   char needle[10] = "Point";
   int ret;

   ret = ft_strcmp(haystack, needle);

   printf("The substring is: %i\n", ret);
   
   return(0);
}