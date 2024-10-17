/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:59:45 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/17 02:39:35 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_de_chiffre(int n)
{
	int	nbr;

	nbr = 0;
	if (n <= 0)
		nbr++;
	while (n != 0)
	{
		n = n / 10;
		nbr++;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		longueur;
	char	*resultat;
	long	nbr;

	nbr = n;
	longueur = nbr_de_chiffre(nbr);
	resultat = ft_calloc(longueur + 1, sizeof(char));
	if (!resultat)
		return (NULL);
	if (nbr == 0)
		resultat[0] = '0';
	if (nbr < 0)
	{
		resultat[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		resultat[--longueur] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (resultat);
}
/*
int	main(void)
{
	int	n;

	n = -1234;
	printf("%s\n", ft_itoa(n));
}
*/
