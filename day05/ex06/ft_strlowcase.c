//SCHOOL HEADER

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i - 1] += 32;
		}
	}
	return (str);
}

//DELETE CODE BELOW

#include <stdio.h>

int	main(void)
{
	char *ptr;

	ptr = ft_strlowercase("ZANELE");
	printf("%s\n", ptr);
	return 0;
}
