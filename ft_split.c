/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:43:39 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/19 17:08:05 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Etape 1 : compter le nombre de mots [[[[]]]]
// Etape 2 : allouer le tableau de pointeurs **

size_t	nbr_de_mots(char const *s, char c)
{
	size_t	nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			nbr++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nbr);
}

char	*remplir(char const *s, char *mot, int debut, int fin)
{
	size_t	j;

	j = 0;
	while (debut < fin)
	{
		mot[j] = s[debut];
		j++;
		debut++;
	}
	mot[j] = '\0';
	return (mot);
}

void	free_allocation(char **tableau, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(tableau[i]);
		i++;
	}
	free(tableau);
}

char	**mots_par_mots(char **tableau, char const *s, char c,
		size_t nbr_de_mots)
{
	size_t	i;
	size_t	n;
	int		debut;
	char	*mot;

	i = 0;
	n = 0;
	while (s[i] && n < nbr_de_mots)
	{
		while (s[i] && s[i] == c)
			i++;
		debut = i;
		while (s[i] && s[i] != c)
			i++;
		mot = ft_calloc((i - debut) + 1, sizeof(char));
		if (!mot)
		{
			free_allocation(tableau, n);
			return (NULL);
		}
		tableau[n] = remplir(s, mot, debut, i);
		n++;
	}
	tableau[n] = NULL;
	return (tableau);
}

char	**ft_split(char const *s, char c)
{
	int		nbr;
	char	**tableau;

	nbr = 0;
	if (!s)
		return (NULL);
	nbr = nbr_de_mots(s, c);
	tableau = ft_calloc(nbr + 1, sizeof(char *));
	if (!tableau)
		return (NULL);
	tableau = mots_par_mots(tableau, s, c, nbr);
	return (tableau);
}
/*
int	main(void)
{
	char	s[] = "CeciEUnETest";
	char	c;
	char	**result;
	int		i;

	c = 'E';
	result = ft_split(s, c);
	i = 0;
	while (result[i] != NULL)
	{
		printf("Mot %d = %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
