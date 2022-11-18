/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:05 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 16:44:06 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cs;

	i = 0;
	str = (char *)s;
	cs = (unsigned char)c;
	while (i < n)
	{
		if (cs == str[i])
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}