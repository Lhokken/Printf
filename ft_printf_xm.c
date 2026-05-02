/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:23:06 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/12 14:44:37 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	ft_printf_xm(unsigned long p)
{
	int		i;
	char	*num;
	char	d;

	num = ft_itoa_hex(p);
	i = 0;
	while (num[i])
	{
		d = num[i];
		if (d >= 'a' && d <= 'f')
			d = d - 32;
		write(1, &d, 1);
		i++;
	}
	free (num);
	return (i);
}

/*
{
	int		i;
	char	*num;
	char	d;

	if (p == -2147483648)
		num = "80000000";
	else
		num = ft_itoa_hexm(p);
	i = 0;
	while (num[i])
	{
		d = num[i];
		write(1, &d, 1);
		i++;
	}
	return (i);
}*/
