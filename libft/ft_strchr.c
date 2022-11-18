/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:45:05 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 16:45:06 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *string, int character)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] == (char)character)
			return ((char *)&string [index]);
		index++;
	}
	if ((char) character == '\0')
		return ((char *) &string[index]);
	return (NULL);
}