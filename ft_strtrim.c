/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:44:48 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/16 14:52:11 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	s1_est_dans_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		debut;
	int		fin;
	int		longueurtotal;
	char	*str;
	int		i;

	debut = 0;
	fin = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[debut] && s1_est_dans_set(set, s1[debut]))
		debut++;
	while (fin > debut && s1_est_dans_set(set, s1[fin - 1]))
		fin--;
	if (debut >= fin)
		return (ft_strdup(""));
	longueurtotal = fin - debut + 1;
	str = ft_calloc(longueurtotal, sizeof(char));
	if (!str)
		return (NULL);
	while (debut < fin)
		str[i++] = s1[debut++];
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "cceci est un test oc";
	char	set[] = "ce";

	printf("%s\n", ft_strtrim(s1, set));
}
*/