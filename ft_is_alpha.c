/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:41:41 by juliensarda       #+#    #+#             */
/*   Updated: 2023/09/22 09:41:47 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(int c)
{
	return (c <= 'a' && c >= 'z' || c <= 'A' && c >= 'Z');
}
