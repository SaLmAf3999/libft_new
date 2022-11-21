/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:45:36 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/21 15:10:39 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destinationSize)
{
	size_t	index;
	size_t	counter;

	counter = 0;
	index = 0;
	while (src[counter])
	{
		counter++;
	}
	while (src[index] != '\0' && index + 1 < destinationSize)
	{
		dst[index] = src[index];
		index++;
	}
	if (destinationSize)
	{
		dst[index] = '\0';
	}
	return (counter);
}
