/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensarda <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:25:46 by juliensarda       #+#    #+#             */
/*   Updated: 2023/09/19 21:25:50 by juliensarda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_strlen(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *s1);
int		ft_strlen(char *str);
char	*ft_strncat(char *s1, char *s2, int len);
size_t	ft_strlcat(char *dest, char *src, size_t destsize);
char	*ft_strncpy(char *dest, char *src, int len);
void	ft_to_lower(char *str);
void	ft_to_upper(char *str);
int		ft_is_alpha(int c);
int		ft_is_digit(int n);
int		ft_is_alnum(int a);
int		ft_is_print(int p);
int		ft_is_ascii(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int len);
void	*ft_memset(void *dest, int value, size_t len);

#endif
