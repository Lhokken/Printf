/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:23:06 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/03 18:59:49 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>
#include <limits.h>

int	main(void)
{
	int			i;
	void		*p;
	int			m;
	int			hex;
	const char	*c;

	i = 0;
	p = NULL;
	c = NULL;
	m = -23567;
	hex = 0x12ad51e;
	i = printf("ggg%d\n", ft_printf("|j|%s|||||%p|%d|%i\n", c, p, m, m));
	i = printf("%d\n", printf("|j|%s|||||%p|%d|%i\n", c, p, m, m));
	i = printf("%d\n", ft_printf("|j|%s||||||%x|%X|%%\n", c, hex, hex));
	i = printf("%d\n", printf("|j|%s||||||%x|%X|%%\n", c, hex, hex));
	write(1, "decimal int min\n", 17);
	i = ft_printf("%d\n", INT_MIN);
	i = printf("%d\n", INT_MIN);
	write(1, "esadecimal int min\n", 20);
	i = ft_printf("%x\n", INT_MIN);
	i = printf("%x\n", INT_MIN);
	i = ft_printf("%s%c\n", c, '\0');
	i = printf("%s%c\n", c, '\0');
}
