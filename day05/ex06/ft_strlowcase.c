//SCHOOL HEADER

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

//DELETE CODE BELOW

#include <stdio.h>

int	main(void)
{
	char str[6] = "ZANELE";
	char *ptr;

	ptr = ft_strlowercase(str);
	printf("%s\n", ptr);
	return 0;
}
