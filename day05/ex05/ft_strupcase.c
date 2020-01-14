//SCHOOL HEADER

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

//DELETE THE CODE BELOW

#include <stdio.h>

int	main(void)
{
	char str[6] = "zanele"
	char *ptr;

	ptr = ft_strupcase("zanele");
	printf("%s\n", ptr);
	return 0;
}
