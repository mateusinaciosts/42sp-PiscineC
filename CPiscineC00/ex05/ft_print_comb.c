/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:41:43 by matsanto          #+#    #+#             */
/*   Updated: 2023/03/14 16:01:08 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int digit1, int digit2, int digit3)
{
	write(1, &digit1, 1);
	write(1, &digit2, 1);
	write(1, &digit3, 1);
	if (!(digit1 == 55 && digit2 == 56 && digit3 == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_loop_checker(int column1, int column2, int column3)
{
	while (column1 <= 55 || column2 <= 56 || column3 <= 57)
	{
		ft_print(column1, column2, column3);
		if (column3 != 57)
		{
			column3++;
		}
		else
		{
			if (column2 != 56)
			{
				column2++;
				column3 = column2 + 1;
			}
			else
			{
				column1++;
				column2 = column1 + 1;
				column3 = column2 + 1;
			}
		}
	}
}

void	ft_print_comb(void)
{
	int	column1;
	int	column2;
	int	column3;

	column1 = 48;
	column2 = 49;
	column3 = 50;
	ft_loop_checker(column1, column2, column3);
}
