/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robferna <robferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 13:43:08 by robferna          #+#    #+#             */
/*   Updated: 2023/03/05 16:20:06 by robferna         ###   ########.fr       */
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
		ft_putchar('/');
		a++;
	}
	while (a < y)
	{
		if (a > 1 && a < y)
		{
			ft_putchar('*');
			a++;
		}
	}
	if (a == y)
	{
		write(1, "\\", 1);
		ft_putchar('\n');
	}
	return (0);
}

int	mid_line(int x, int y)
{
	int	b;

	b = 1;
	if (b == 1)
	{
		ft_putchar('*');
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
		write(1, "*", 1);
		ft_putchar('\n');
	}
	return (0);
}

int	final_line(int x, int y)
{
	int	c;

	c = 1;
	if (c == 1)
	{
		ft_putchar('\\');
		c++;
	}
	while (c < y)
	{
		if (c > 1 && c < y)
		{
			ft_putchar('*');
			c++;
		}
	}
	if (c == y)
	{
		write(1, "/\n", 2);
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
	final_line(x, y);
	return (0);
}
