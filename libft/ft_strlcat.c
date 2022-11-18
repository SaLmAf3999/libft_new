/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:40:52 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 18:16:09 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	b;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	b = len_dst;
	while (b + 1 < dstsize && i < len_src)
	{
		dst[b] = src[i];
		i++;
		b++;
	}
	if (dstsize != 0 && b < dstsize)
		dst[b] = '\0';
	if (dstsize > len_dst)
		return (len_dst + len_src);
	else
		return (dstsize + len_src);
}