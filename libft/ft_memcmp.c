/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:10 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/21 15:02:03 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*m;
	const unsigned char		*j;
	size_t					i;

	i = 0;
	m = (const unsigned char *)s1;
	j = (const unsigned char *)s2;
	while (i < n)
	{
		if (m[i] != j[i])
			return (m[i] - j[i]);
			i++;
	}
	return (0);
}
