/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:14:34 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 21:55:38 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	d;
	size_t	k;

	i = 0;
	k = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		d = 0;
		while (haystack[i + d] == needle[d] && needle[d] != '\0' && i + d < len)
		{
			d++;
		}
		if (d == k)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
