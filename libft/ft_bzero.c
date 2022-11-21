/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:41:14 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/21 14:15:10 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *string, size_t n)
{
	char	*str;
	size_t	index;

	str = (char *)string;
	index = 0;
	while (index < n)
	{
		str[index] = 0;
		index++;
	}
}
