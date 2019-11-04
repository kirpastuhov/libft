/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:20:25 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 21:05:16 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ┌────────────────────────────────────────────────┐
** │                general includes                │
** └────────────────────────────────────────────────┘
*/
#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

#define BLUE   "\033[1;36m"
#define GREEN  "\033[1;32m"
#define NC     "\033[0m"    //No color
#define RED    "\033[1;31m"
#define YELLOW "\033[1;33m"

#define MK_YELLOW(text)	{ ft_putstr(YELLOW text NC "\n");}
#define CONCAT(front, back) front ## back

typedef struct 	s_list
{
	void 			*content;
	size_t 			content_size;
	struct s_list 	*next;
} 				t_list;

/*
** ┌────────────────────────────────────────────────┐
** │          libft function declarations           │
** └────────────────────────────────────────────────┘
*/


/*
** ┌────────────────────────────────────────────────┐
** │                  PART 1                        │
** └────────────────────────────────────────────────┘
*/

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(char const *s);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dest, char const *src);
char			*ft_strncpy(char *dest, char const *src, size_t len);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *s1, char *s2, size_t n);
size_t			ft_strlcat(char *dst, char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *hay, const char *nee, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

/*
** ┌────────────────────────────────────────────────┐
** │                  PART 2                        │
** └────────────────────────────────────────────────┘
*/

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(int c);
void			ft_putstr(char const *str);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(int c, int fd);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
** ┌────────────────────────────────────────────────┐
** │                  BONUS PART                    │
** └────────────────────────────────────────────────┘
*/

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** ┌────────────────────────────────────────────────┐
** │                  EXTRA PART                    │
** └────────────────────────────────────────────────┘
*/

t_list			*ft_lstfind(t_list *begin_list, void *data_ref, int (*cmp)());
void			ft_lstappend(t_list **begin_list, t_list *new_node);
void			ft_lstprint(t_list *list);
void			ft_lstrev(t_list **begin_list);
void			ft_strrev(char *str);
void 			ft_striter_test(char *c);
void 			ft_striteri_test(unsigned int i, char *c);
char 			ft_strmap_test(char c);
char 			ft_strmapi_test(unsigned int i, char c);
#endif


