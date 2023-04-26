/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:26:04 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/18 18:26:04 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  convert_arg(va_list vargs, const char fmt)
{   
    int length;

    length = 0;
    if (fmt == 'c')
        len += write_char(va_arg(vargs, int));
    else if (fmt == 's')
        len += write_str(va_arg(vargs, char *));
    else if (fmt == 'p')
        len += write_ptr(va_arg(vargs, unsigned long long int), 0);
    else if (fmt == 'd')
        len += write_decimal(va_arg(vargs, int));
    else if (fmt == 'i')
        len += write_integer(va_arg(vargs, int));
    else if (fmt == 'u')
        len += write_unsigned(va_arg(vargs, unsigned int));
    else if (fmt == 'x' || fmt == 'X')
        len += write_hex(va_arg(vargs, unsigned int), fmt == 'X');
    else if (fmt == '%')
        len += write_perc();
    else if (fmt == 'o')
        len += write_octal(va_arg(vargs, unsigned int));
    return (len);
}

int ft_printf(const char *str)
{
    va_list     vargs;
    int         ret;

    ret = 0;
    va_start(vargs, str);
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            ret += convert_arg(vargs, *str);
        }
        else
            ret += ft_print_char(*str);
        str++;
    }
    va_end(vargs);
    return (ret);
}