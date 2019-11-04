/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:17:58 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/04 20:05:05 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int			ft_isalnum(int ch);
int			ft_isaplha(int ch);
int			ft_isascii(int ch);
int			ft_isprint(int ch);
int			ft_toupper(int ch);
int			ft_tolower(int ch);
int			ft_atoi(const char *str);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		*ft_memchr(const void *str, int c, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);

#endif
