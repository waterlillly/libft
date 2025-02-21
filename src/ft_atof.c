/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:10:38 by lbaumeis          #+#    #+#             */
/*   Updated: 2025/02/03 14:38:13 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	ft_atof(char *s)
{
	long	d;
	double	f;
	double	power;
	int		sign;
	int		i;

	d = 0;
	f = 0;
	sign = 1;
	power = 1;
	i = ft_white(s);
	if (s[i] == '-')
		sign *= -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] && s[i] != '.')
		d = (d * 10) + (s[i++] - 48);
	if (s[i] == '.')
		i++;
	while (s[i])
	{
		power /= 10;
		f = f + (s[i++] - 48) * power;
	}
	return ((d + f) * sign);
}
