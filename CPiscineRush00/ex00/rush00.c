/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 13:43:06 by robferna          #+#    #+#             */
/*   Updated: 2023/03/05 16:21:41 by robferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	command_line(int x, int y)
{
	int	a;

	a = 1;
	if (a == 1)
	{
		ft_putchar('o');
		a++;
	}
	while (a < y)
	{
		if (a > 1 && a < y)
		{
			ft_putchar('-');
			a++;
		}
	}
	if (a == y)
	{
		write(1, "o\n", 2);
		a++;
	}
	return (0);
}

int	mid_line(int x, int y)
{
	int	b;

	b = 1;
	if (b == 1)
	{
		ft_putchar('|');
		b++;
	}
	while (b < y)
	{
		if (b > 1 && b < y)
		{
			ft_putchar(' ');
			b++;
		}
	}
	if (b == y)
	{
		write(1, "|\n", 2);
		b++;
	}
	return (0);
}

int	rush(int x, int y)

{
	int	r;

	r = 1;
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	command_line(x, y);
	while (r < x - 1)
	{
		mid_line(x, y);
		r++;
	}
	command_line(x, y);
	return (0);
}
