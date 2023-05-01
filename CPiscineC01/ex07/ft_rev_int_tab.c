/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:31:12 by matsanto          #+#    #+#             */
/*   Updated: 2023/03/20 16:51:27 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	count;
	int	i;

	i = 0;
	count = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[count];
		tab[count] = swap;
		i++;
		count--;
	}
}
