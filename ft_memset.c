/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:15:21 by juliensarda       #+#    #+#             */
/*   Updated: 2023/09/26 11:10:43 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int value, size_t len)
{
	size_t			i;
	unsigned char	*newdest;

	i = 0;
	newdest = dest;
	while (i < len)
	{
		newdest[i] = value;
		i++;
	}
	return (dest);
}
