/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:54:36 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/08 08:54:36 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void * ft_memmove(char *dest, char *src, size_t size)
{
    size_t i;
    unsigned char *dest_tmp;
    const unsigned char *src_tmp;

    dest_tmp = (unsigned char *)dest;
    src_tmp = (const unsigned char *)src;
    i = 0;

    if (src_tmp < dest_tmp && src_tmp + size > dest_tmp)
    {
        while (size > 0)
        {
            size--;
            dest_tmp[size] = src_tmp[size];
        }
    }
    else
    {
        while (i < size)
        {
            dest_tmp[i] = src_tmp[i];
            i++;
        }
    }
    return (dest);
}
/*
#include <stddef.h>
#include <string.h>
int main(void)
{
    char dest[50];
    char src[50] = "TestCarJeComprendsPas";
    size_t size = sizeof(src);

    printf("Resultat avec VRAI memmove : %s\n", (char *)memmove(src, src + 2, 4));
    ft_memmove(dest, src, size);
    printf("Resultat avec MON memmove : %s\n", dest);

    return 0;
}
*/