/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:20:42 by matsanto          #+#    #+#             */
/*   Updated: 2023/03/23 15:50:16 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c_dest;
	int	c_src;

	c_dest = 0;
	c_src = 0;
	while (dest[c_dest] != '\0')
	{
		c_dest++;
	}
	while (src[c_src] != '\0')
	{
		dest[c_dest] = src[c_src];
		c_dest++;
		c_src++;
	}
	dest[c_dest] = '\0';
	return (dest);
}
