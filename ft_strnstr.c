/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltuffery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:56:13 by ltuffery          #+#    #+#             */
/*   Updated: 2022/09/28 19:29:18 by ltuffery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *) big);
	while (i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] && little[j])
			{
				if (little[j] != big[i + j])
					break ;
				j++;
			}
			if (little[j] == '\0' && (j < len || big[j] == '\0'))
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
