/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:20:25 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/09 14:05:38 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ┌────────────────────────────────────────────────┐
** │                general includes                │
** └────────────────────────────────────────────────┘
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BLUE   "\033[1;36m"
#define GREEN  "\033[1;32m"
#define NC     "\033[0m"    //No color
#define RED    "\033[1;31m"
#define YELLOW "\033[1;33m"

#define MK_YELLOW(text)	{ ft_putstr(YELLOW text NC "\n");}
#define CONCAT(front, back) front ## back

/*
** ┌────────────────────────────────────────────────┐
** │          libft function declarations           │
** └────────────────────────────────────────────────┘
*/

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char const *str);
int		ft_strncmp(char const *s1, char const *s2, unsigned int n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int 	ft_memcmp(void *s1, void *s2, size_t n);
int 	ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);
void	ft_strrev(char *str);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putchar(int c);
void	ft_putchar_fd(int c, int fd);
void	ft_putnbr(long nb);
void	ft_putnbr_fd(long nb, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);
void 	*ft_memalloc(size_t size);
void 	*ft_memccpy(void *dst, const void *src, int c, size_t size);
void 	*ft_memchr(void *s, int c, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t size);
void 	*ft_memset(void *b, int c, size_t len);
void 	ft_bzero(void *s, size_t n);
void 	ft_memdel(void **ap);
void 	ft_putendl(char const *s);
void 	ft_putendl_fd(char const *s, int fd);
void 	ft_strclr(char *s);
void 	ft_strdel(char **as);
void 	ft_striter(char *s, void (*f)(char *));
void 	ft_striteri(char *s, void (*f)(unsigned int, char *));
char 	*ft_itoa(int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *s1, char const *s2);
char	*ft_strdup(char *src);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strncpy(char *dest, char const *src, unsigned int n);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(char *str, char *to_find);
char 	**ft_strsplit(char const *s, char c);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strmap(char const *s, char (*f)(char));
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char 	*ft_strnew(size_t size);
char 	*ft_strsub(char const *s, unsigned int start, size_t len);
char 	*ft_strtrim(char const *s);
size_t	ft_strlcat(char *dst, char *src, size_t size);


void 	ft_striter_test(char *c);
void 	ft_striteri_test(unsigned int i, char *c);

char 	ft_strmap_test(char c);
char 	ft_strmapi_test(unsigned int i, char c);
