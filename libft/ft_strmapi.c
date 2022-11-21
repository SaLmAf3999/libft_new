/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:45:47 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/21 15:10:51 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s1;

	if (!s || !f)
		return (NULL);
	s1 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s1)
	{
		return (0);
	}
	i = 0;
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = 0;
	return (s1);
}
