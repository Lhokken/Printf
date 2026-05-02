/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:55:37 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/12 14:49:35 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdlib.h>

char	*ft_itoa(int n);
char	*ft_itoa_hex(int n);
char	*ft_itoa_hexpun(unsigned long n);
char	*ft_itoa_uns_int(unsigned int n);
int		ft_printf_c(char c);
int		ft_printf_d(int p);
int		ft_printf_i(int p);
int		ft_printf_p(void *p);
int		ft_printf_s(char *c);
int		ft_printf_u(unsigned int p);
int		ft_printf_x(unsigned long p);
int		ft_printf_xm(unsigned long p);
int		ft_printf_per(void);
int		ft_printf(const char *format, ...);

#endif