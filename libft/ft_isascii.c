/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:34:46 by sde-carl          #+#    #+#             */
/*   Updated: 2023/03/31 19:34:46 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{	
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}