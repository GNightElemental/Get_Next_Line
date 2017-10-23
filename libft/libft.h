/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 13:33:18 by sjuery            #+#    #+#             */
/*   Updated: 2017/10/21 18:08:24 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	*ft_memalloc(size_t size);
void	ft_swap(int *a, int *b);
char	*ft_strchr(const char *s, int c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strcpy(char *dst, char const *src);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);

#endif
