/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:02:30 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 10:02:32 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str);
void	ft_bzero(void *s, int n);

void	*
ft_calloc(size_t count, size_t size);

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t s);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);

char	*
ft_strdup(const char *s1);

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
