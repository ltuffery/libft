/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltuffery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:35:34 by ltuffery          #+#    #+#             */
/*   Updated: 2022/09/30 22:16:23 by ltuffery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*tmp;

	i = 0;
	tmp = s;
	while (i < n && tmp[i])
	{
		if (tmp[i] == c)
			return ((void *) &tmp[i]);
		i++;
	}
	if (tmp[i] == c && c == '\0')
		return ((void *) &tmp[i]);
	return (NULL);
}
