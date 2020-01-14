/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:37:54 by relefebv          #+#    #+#             */
/*   Updated: 2019/11/04 17:53:49 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);

int		main()
{
	unsigned int ret;
	int i = 0;
	char tab[20];
	char *s2 = malloc (sizeof (*s2) * 256);
	char *s1 = malloc (sizeof (*s1) * 256);
	ft_strcpy(tab, "Test cpy");
	while(tab[i])
	{
		printf("%c",tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_strncpy(tab, "Test n=10ASS", 10);
	while (tab[i])
	{
		printf("%c",tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("is alpha test\nAffiche 1 si bon: %d\n",ft_str_is_alpha(""));
	printf("Affiche 1 si bon: %d\n",ft_str_is_alpha("AFHDSdfgdfhdfDFGDFG"));
	printf("Affiche 0 si bon: %d\n",ft_str_is_alpha("FDSFd421fd\nsf1ds"));
	printf("\n");
	printf("is num test\nAffiche 1 si bon: %d\n",ft_str_is_numeric(""));
	printf("Affiche 1 si bon: %d\n",ft_str_is_numeric("1504164"));
	printf("Affiche 0 si bon: %d\n",ft_str_is_numeric("211sad1\n"));
	printf("\n");
	printf("is lower case test\nAffiche 1 si bon: %d\n",ft_str_is_lowercase(""));
	printf("Affiche 1 si bon: %d\n",ft_str_is_lowercase("dfdsfehdgssf"));
	printf("Affiche 0 si bon: %d\n",ft_str_is_lowercase("SAgdsg11165"));
	printf("\n");
	printf("is uppercase test\nAffiche 1 si bon: %d\n",ft_str_is_uppercase(""));
	printf("Affiche 1 si bon: %d\n",ft_str_is_uppercase("GDSGDHJVEFDS"));
	printf("Affiche 0 si bon: %d\n",ft_str_is_uppercase("dfdsfdsfDSFDSFSDG15"));
	printf("\n");
	printf("is printable test\n Affiche 1 si bon: %d\n",ft_str_is_printable(""));
	printf("Affiche 1 si bon: %d\n",ft_str_is_printable("dfsg +-df154="));
	printf("Affiche 0 si bon: %d\n",ft_str_is_printable("\ndsfdsf\t"));
	printf("test uppercase\n");
	char str[20] = "sTest+1-2=3DfdsfdsD";
	str[19] = '\0';
	i = 0;
	while (str[i])
	{
		printf("%c",str[i]);
		i++;
	}
	i = 0;
	printf("\nuppered\n");
	ft_strupcase(str);
	while (str[i])
	{
		printf("%c",str[i]);
		i++;
	}
	i = 0;
	printf("\ntest lowcase\n");
	str[2] = 'e';
	ft_strlowcase(str);
	while (str[i])
	{
		printf("%c",str[i]);
		i++;
	}
	i = 0;
	printf("\n");
	char st[11] = "tEst+Vi fa";
	st[10] = '\0';
	while (st[i])
	{
		printf("%c",st[i]);
		i++;
	}
	i = 0;
	while (st[i])
	{
		s2[i] = st[i];
		i++;
	}
	s2[i] = '\0';
	i = 0;
	printf("\n");

	s2 = ft_strcapitalize(st);
	while (s2[i])
	{ 
		printf("%c",s2[i]);
		i++;
	}
	i = 0;
	printf("\ntest strlcpy\n");
	ret = ft_strlcpy(str, st, 19);
	printf("4 = %d\n", ret);
	while (str[i])
	{
		printf("%c",str[i]);
		i++;
	}
	i = 0;
	printf("\n");
/*	char    *test;

	test = (char *)malloc(30 * sizeof(char));
	i = 1;
	while (i <= 30)
	{
		test[i - 1] = i + 123 ;
		i++;
	}
	ft_putstr_non_printable(test);
	printf("\n");
	char n = '\n';
	ft_putstr_non_printable("Coucou\etu 1b ?");
	write(1, &n, 1);
	ft_putstr_non_printable("Coucou\ntu 0a bien ?");
*/	printf("\n");
	return (0);
}
