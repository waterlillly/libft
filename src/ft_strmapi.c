/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:57:31 by lbaumeis          #+#    #+#             */
/*   Updated: 2025/02/03 14:38:13 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*z;
	char			*str;

	x = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)s;
	z = (char *)malloc(sizeof(char) * ((ft_strlen(s) + 1)));
	if (!z)
		return (NULL);
	while (str[x] != '\0')
	{
		z[x] = f(x, str[x]);
		x++;
	}
	z[x] = '\0';
	return (z);
}

/*
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*out;
	int		i;

	len = ft_strlen(s);
	i = -1;
	out = (char *)ft_calloc((len + 1), sizeof(char));
	if (!out)
		return (NULL);
	while (++i < len)
		out[i] = (*f)(i, s[i]);
	return (out);
}
*/