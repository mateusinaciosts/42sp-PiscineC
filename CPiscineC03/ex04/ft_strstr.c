/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:21:07 by matsanto          #+#    #+#             */
/*   Updated: 2023/03/23 15:51:45 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (to_find[l] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + l] == to_find[l] && str[i + l] != '\0')
		{
			l++;
			if (to_find[l] == '\0')
				return (str + i);
		}
		i++;
		l = 0;
	}
	return (0);
}
