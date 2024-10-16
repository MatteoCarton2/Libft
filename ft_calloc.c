/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 04:17:19 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/16 04:35:11 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tableau;

	i = 0;
	tableau = malloc(count * size);
	if (!tableau)
		return (NULL);
	while (i < count * size)
	{
		tableau[i] = 0;
		i++;
	}
	return (tableau);
}

/*
int	main(void)
{
	size_t	count;
	size_t	size;
	int		*resultat;
	size_t	i;

	count = 10;
	size = sizeof(int);
	resultat = (int *)ft_calloc(count, size);
	if (resultat == NULL)
	{
		printf("NULL\n");
		return (0);
	}
	i = 0;
	while (i < count)
	{
		printf("%d\n", resultat[i]);
		i++;
	}
	free(resultat);
	return (0);
}
*/
