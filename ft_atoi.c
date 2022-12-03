/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhappenh <vhappenh@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:07:17 by vhappenh          #+#    #+#             */
/*   Updated: 2022/10/15 15:32:44 by vhappenh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				sum;
	int				i;
	int				sign;

	i = 0;
	sum = 0;
	sign = 1;
	while ((nptr[i] <= 13 && nptr[i] > 8) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (!(nptr[i] >= '0' && nptr[i] <= '9'))
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + nptr[i] - '0';
		i++;
	}
	return (sum * sign);
}
/*
int	main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("2194969846484644847483649"));
	printf("atoi: %d\n", atoi("2194969846484644847483649"));
}*/
