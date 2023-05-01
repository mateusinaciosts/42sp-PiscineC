/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:05:44 by matsanto          #+#    #+#             */
/*   Updated: 2023/03/12 19:05:44 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	rotate(char *array[], int size);
void	print(char *array[], int size);

int	main(int argc, char *argv[])
{
	if (argc != 5)
	{
		write(1, "Erro: o programa deve receber 4 argumentos.\n", 43);
		return (0);
	}
	rotate(argv, argc - 1);
	print(argv, argc - 1);
	rotate(argv, argc - 1);
	print(argv, argc - 1);
	rotate(argv, argc - 1);
	print(argv, argc - 1);
	rotate(argv, argc - 1);
	print(argv, argc - 1);
	return (0);
}

void	rotate(char *array[], int size)
{
	int	i;
	char	*first_element;

	*first_element = array[0];
	i = 0;
	while (i < size - 1)
	{
		array[i] = array[i + 1];
		i++;
	}
	array[size - 1] = first_element;
}

void	print(char *array[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, array[i], strlen(array[i]));
		write(1, " ", 1);
		i++;
	}
	write(1, "$\n", 2);
}
