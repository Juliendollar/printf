/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-halle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:02:49 by jd-halle          #+#    #+#             */
/*   Updated: 2024/06/13 18:20:22 by jd-halle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_putstr(char *str);

int	ft_putchar(char c);

int	ft_putnbr(int n);

int	ft_putnbr_u(unsigned int n);

int	ft_check_format(char type, va_list args);

int	ft_printf(const char *format, ...);

int	ft_putnbr_xx(unsigned long long int n, char type);

int	ft_putadress_p(unsigned long long int n);

#endif
