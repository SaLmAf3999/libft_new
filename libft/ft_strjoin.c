/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:45:25 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/16 17:35:58 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total1(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		total;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total = s1_len + s2_len;
	return (total);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*new;
	int		i;
	int		ij;

	if (!s1)
		return (NULL);
	total = total1(s1, s2);
	i = 0;
	new = malloc(sizeof(char) * (total + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	ij = 0;
	while (s2[ij])
		new[i++] = s2[ij++];
	new[total] = '\0';
	return (new);
}
