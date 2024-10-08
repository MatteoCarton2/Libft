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

#include <stddef.h>
#include <stdio.h>
#include <string.h>


void ft_memmove(char *dest, char *src, size_t size)
{
    int i;

    i = 0;

}

int main(void)
{
    char dest[50];
    char src[50] = "TestCarJeComprendsPas";
    size_t size = sizeof(src);
    memmove(src, src + 12, 4);
    printf("Resultat avec chevauchement : %s\n", src);
}