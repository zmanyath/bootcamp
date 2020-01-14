//Don't forget school header

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	//check if there's something to look for...if not return the original string
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		//if you don't understand this part text me I'll what that does it
		while ((str[i + j] == to_find[j]) && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (str); 
}


//DELETE THIS BEFORE SUBMITTING
#include <stdio.h>

int	main(void)
{
	//using printf to test this function
	printf("%s\n", ft_strstr("Welcome to wethinkcode zazazisto hope you enjoying bootcamp", "zazazisto"));
	return 0;
}
