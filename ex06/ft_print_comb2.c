/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:55:18 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 15:04:19 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int i, int j, int k, int l)
{
	int	dig_left;
	int	dig_right;

	dig_left = ((i - 48) * 10 + (j - 48));
	dig_right = ((k - 48) * 10 + (l - 48));
	if (dig_left != dig_right && dig_left < dig_right)
	{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, " ", 1);
		write (1, &k, 1);
		write (1, &l, 1);
		if (dig_left != 98)
			write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 47;
	while (++i <= 57)
	{
		j = 47;
		while (++j <= 57)
		{
			k = 47;
			while (++k <= 57)
			{
				l = 47;
				while (++l <= 57)
					ft_putchar(i, j, k, l);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
