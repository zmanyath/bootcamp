//SHCOOL HEADER

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i  = 0;
	j = 0;
	if (n == 0)
		return (0);
	//main logic try to understand this or change it if you want
	while ((s1[i] != '\0' && (s1[i] == s2[i])) && n > 0)
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
		n--;
	}
	return (s1[i] - s2[j]);
}

//DELELTE THE CODE BELOW
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("Zazazisto", "zazazisto", 4));
	return 0;
}
