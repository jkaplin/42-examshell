/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:17:10 by jkaplin           #+#    #+#             */
/*   Updated: 2019/02/16 18:21:48 by jkaplin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;

	i = 128;
	while (i)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
}
