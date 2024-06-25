/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:03 by lbaumeis          #+#    #+#             */
/*   Updated: 2024/06/25 14:54:28 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	find;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	str = (char *)s;
	find = (char)c;
	while (i > 0)
	{
		if (c == '\0')
			return (&str[i]);
		if (str[i] == find)
			return (&str[i]);
		else
			i--;
	}
	if (str[0] == find)
		return (&str[i]);
	return (NULL);
}
