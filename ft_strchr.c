/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:06:11 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/16 01:22:30 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Salut";
	int		c;

	c = 'u';
	printf("%s\n", ft_strchr(str, c));
}
*/
