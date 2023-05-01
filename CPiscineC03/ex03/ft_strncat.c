/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:20:46 by matsanto          #+#    #+#             */
/*   Updated: 2023/03/23 15:50:27 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c_dest;
	unsigned int	c_src;

	c_dest = 0;
	c_src = 0;
	while (dest[c_dest] != '\0')
	{
		c_dest++;
	}
	while (src[c_src] != '\0' && c_src < nb)
	{
		dest[c_dest] = src[c_src];
		c_dest++;
		c_src++;
	}
	dest[c_dest] = '\0';
	return (dest);
}
