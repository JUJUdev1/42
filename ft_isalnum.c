/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:51:46 by juliensarda       #+#    #+#             */
/*   Updated: 2023/09/22 09:51:49 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_alnum(int a)
{
	return (ft_is_alpha(a) || ft_is_digit(a));
}