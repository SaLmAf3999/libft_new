/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:16 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 16:44:17 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *dest;
    char    *source;

    i = 0;
    dest = (char *)dst;
    source = (char *)src;
    if (dest == source || !n)
    {
        return (dest);
    }
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dest);
}