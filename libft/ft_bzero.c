/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:41:14 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 16:41:15 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *string, size_t n)
{
    char *str;
    size_t index;

    str = (char *)string;
    index = 0;
    while (index < n)
    {
        str[index] = 0;
        index++;
    }
}