/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:39:47 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/18 18:39:47 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int ft_printf(const char *str, ...);
int write_char(int c);
int write_str(char *str);
int write_ptr(unsigned long long int ptr, int is_up);
int write_decimal(int n);
int write_integer(int n);
int write_unsigned(unsigned int n);
int write_hex(unsigned int n, int is_up);
int write_perc(void);
int write_octal(unsigned int n);
#endif