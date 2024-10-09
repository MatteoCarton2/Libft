/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:22:47 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/08 08:22:47 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void * ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t i;
    unsigned char *dest_tmp;
    const unsigned char *src_tmp;

    i = 0;
    dest_tmp = (unsigned char *) dest;
    src_tmp = (const unsigned char *) src;

    while (i < size)
    {
        dest_tmp[i] = src_tmp[i];
        i++;
    }

    return(dest);
}