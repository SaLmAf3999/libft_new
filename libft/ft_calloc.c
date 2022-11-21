/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:41:19 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/21 14:15:56 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*i;

	if (count != 0 && size != 0 && count > SIZE_MAX / size)
		return (NULL);
	i = malloc(count * size);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, count * size);
	return (i);
}
