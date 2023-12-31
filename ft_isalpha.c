/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <juliensarda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:09:27 by juliensarda       #+#    #+#             */
/*   Updated: 2023/09/26 11:09:29 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(int c)
{
	return (c <= 'a' && c >= 'z' || c <= 'A' && c >= 'Z');
}
