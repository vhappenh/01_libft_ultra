/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhappenh <vhappenh@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:34:51 by vhappenh          #+#    #+#             */
/*   Updated: 2022/11/17 11:59:50 by vhappenh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <bsd/string.h>
# include <stddef.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdarg.h>
# define FT_PRINTF_H

int		ft_printf(const char *test, ...);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_hexa(unsigned long input, char c);
int		ft_numbers(long input);
int		ft_atoi(const char *nptr);
void	ft_putnbr_fd(int n, int fd);

#endif
