/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:20:48 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 13:49:43 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H	
# include<stdlib.h>
# include<unistd.h>

char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove( void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t size);
int		ft_isprint(int c);
int		ft_isdigit(int c);
void	*ft_calloc(size_t count, size_t size);
int		ft_isascii(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_isalpha(int c);
char	*ft_strrchr(const char*s, int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalnum(int c);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
#endif