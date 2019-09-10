/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:18:10 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/10 15:33:02 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>


int main(void)
{
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strncmp test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("      Length of ");
	ft_putstr("'Hello, World!' -  ");
	ft_putnbr(ft_strlen("Hello, World!"));
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strlen test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("      Length of ");
	ft_putstr("'Hello, World!' -  ");
	ft_putnbr(ft_strlen("Hello, World!"));
	ft_putstr("\n");

/*
** =================================================
*/

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strcpy test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	char des1[] = "dest";
	char src1[] = "test";
	ft_putstr("      dest before '");
	ft_putstr(des1);
	ft_putstr("' dest after '");
	ft_strcpy(des1, src1);
	ft_putstr(des1 + 1);
	ft_putstr("'\n");

/*
** =================================================
*/

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strncpy test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	char des2[] = "abcd";
	char src2[] = "test";
	ft_putstr("      dest before '");
	ft_putstr(des2);
	ft_putstr("' dest after '");
	ft_strncpy(des2, src2, 2);
	ft_putstr(des1);
	ft_putstr("'\n");
/*
** =================================================
*/

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strdup test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr((ft_strdup("      duplicate this string")));
	ft_putstr("\n");

/*
** =================================================
*/
	char des3[] = "     conca";
	char src3[] = "tenate these strings";

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strcat test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr(ft_strcat(des3, src3));
	ft_putstr("\n");
/*
** =================================================
*/

	char des4[] = "     concatenate 3 ";
	char src4[]= "words to me";

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strncat test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr(ft_strncat(des4, src4, 10));
	ft_putstr("\n");
/*
** =================================================
*/

	char des5[] = "concatenate 3 ";
	char src5[] = "words to me";
	char des52[] = "concatenate 3 ";
	char src52[] = "words to me";

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strlcat test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putnbr(ft_strlcat(des5, src5, sizeof(des5)));
	ft_putstr(" returned by ft_strlcat");
	ft_putstr("\n      ");
	ft_putnbr(strlcat(des52, src52, sizeof(des5)));
	ft_putstr(" returned by strlcat");
	ft_putstr("\n");
/*
** =================================================
*/

	char locate1[] = "dsafdftasdfasdf";

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strchr test                │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putchar(*ft_strchr(locate1, 116));
	ft_putstr(" - found by ft_strchr");
	ft_putstr("\n      ");
	ft_putchar(*strchr(locate1, 116));
	ft_putstr(" - found by strchr");
	ft_putstr("\n");
/*
** =================================================
*/
	char locate2[] = "absdfadfsdfvsfabf";

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strrchr test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putchar(*ft_strrchr(locate2, 98));
	ft_putstr(" - found by ft_strchr");
	ft_putstr("\n      ");
	ft_putchar(*strrchr(locate2, 98));
	ft_putstr(" - found by strchr");
	ft_putstr("\n");
/*
** =================================================
*/

	char haystack1[] = "absdfadfsdfvsfabf";
	char needle1[] = "fab";

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strstr test                │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr(ft_strstr(haystack1, needle1));
	ft_putstr(" - found by ft_strstr");
	ft_putstr("\n      ");
	ft_putstr(strstr(haystack1, needle1));
	ft_putstr(" - found by strstr");
	ft_putstr("\n");
/*
** =================================================
*/
	char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar";
	/* char *largestring2 = "Foo Bar Baz"; */
	/* char *smallstring2 = "Bar"; */

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strnstr test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_strnstr(largestring, smallstring, 4);
	ft_putstr(ft_strnstr(largestring, smallstring, 4));
	ft_putstr(" - found by ft_strnstr");
	ft_putstr("\n      ");
	/* ft_putstr(strnstr(largestring2, smallstring2, 4)); */
	ft_putstr(" - found by strnstr");
	ft_putstr("\n");
/*
** =================================================
*/
	char cmp1[] = "Compare me";
	char cmp2[] = "Compare me";
	char cmp3[] = "Compareme";
	char cmp4[] = "Compare me";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strcmp test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putnbr(ft_strcmp(cmp1, cmp2));
	ft_putstr(" - returned by ft_strcmp");
	ft_putstr("\n      ");
	ft_putnbr(strcmp(cmp1, cmp2));
	ft_putstr(" - returned by strcmp");
	ft_putstr("\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_strcmp(cmp3, cmp4));
	ft_putstr(" - returned by ft_strcmp");
	ft_putstr("\n      ");
	ft_putnbr(strcmp(cmp3, cmp4));
	ft_putstr(" - returned by strcmp");
	ft_putstr("\n");

/*
** =================================================
*/

	char ncmp1[] = "Compareme";
	char ncmp2[] = "Compare me";
	char ncmp3[] = "Compareme";
	char ncmp4[] = "Compare me";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_strncmp test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putnbr(ft_strncmp(ncmp1, ncmp2, 7));
	ft_putstr(" - returned by ft_strncmp");
	ft_putstr("\n      ");
	ft_putnbr(strncmp(ncmp1, ncmp2, 7));
	ft_putstr(" - returned by strncmp");
	ft_putstr("\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_strncmp(ncmp3, ncmp4, 10));
	ft_putstr(" - returned by ft_strncmp");
	ft_putstr("\n      ");
	ft_putnbr(strncmp(ncmp3, ncmp4, 10));
	ft_putstr(" - returned by strncmp");
	ft_putstr("\n");

/*
** =================================================
*/

	char atoi1[] = "123";
	char atoi2[] = "     -+23";
	char atoi3[] = "-2147483648";
	char atoi4[] = "2147483647";
	char atoi5[] = "-123";
	char atoi6[] = "123ad45";
	char atoi7[] = "123  -23";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │           ft_atoi test                  │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi1));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi1));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi2));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi2));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi3));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi3));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi4));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi4));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi5));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi5));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi6));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi6));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_atoi(atoi7));
	ft_putstr(" - returned by ft_atoi");
	ft_putstr("\n      ");
	ft_putnbr(atoi(atoi7));
	ft_putstr(" - returned by atoi\n");
	ft_putstr("\n");

/*
** =================================================
*/
	int		isalpha1 = 97;
	int		isalpha2 = 118;
	int		isalpha3 = 26;
	int		isalpha4 = 126;
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_isalpha test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalpha(isalpha1));
	ft_putstr(" - returned by ft_isalpha");
	ft_putstr("\n      ");
	ft_putnbr(isalpha(isalpha1));
	ft_putstr(" - returned by isalpha\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalpha(isalpha2));
	ft_putstr(" - returned by ft_isalpha");
	ft_putstr("\n      ");
	ft_putnbr(isalpha(isalpha2));
	ft_putstr(" - returned by isalpha\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalpha(isalpha3));
	ft_putstr(" - returned by ft_isalpha");
	ft_putstr("\n      ");
	ft_putnbr(isalpha(isalpha3));
	ft_putstr(" - returned by isalpha\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalpha(isalpha4));
	ft_putstr(" - returned by ft_isalpha");
	ft_putstr("\n      ");
	ft_putnbr(isalpha(isalpha4));
	ft_putstr(" - returned by isalpha\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_isdigit test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isdigit('5'));
	ft_putstr(" - returned by ft_isdigit");
	ft_putstr("\n      ");
	ft_putnbr(isdigit('5'));
	ft_putstr(" - returned by isdigit\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isdigit('f'));
	ft_putstr(" - returned by ft_isdigit");
	ft_putstr("\n      ");
	ft_putnbr(isdigit('f'));
	ft_putstr(" - returned by isdigit\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isdigit('1'));
	ft_putstr(" - returned by ft_isdigit");
	ft_putstr("\n      ");
	ft_putnbr(isdigit('1'));
	ft_putstr(" - returned by isdigit\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_isalnum test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalnum('5'));
	ft_putstr(" - returned by ft_isalnum");
	ft_putstr("\n      ");
	ft_putnbr(isalnum('5'));
	ft_putstr(" - returned by isalnum\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalnum('f'));
	ft_putstr(" - returned by ft_isalnum");
	ft_putstr("\n      ");
	ft_putnbr(isalnum('f'));
	ft_putstr(" - returned by isalnum\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalnum('1'));
	ft_putstr(" - returned by ft_isalnum");
	ft_putstr("\n      ");
	ft_putnbr(isalnum('1'));
	ft_putstr(" - returned by isalnum\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isalnum('!'));
	ft_putstr(" - returned by ft_isalnum");
	ft_putstr("\n      ");
	ft_putnbr(isalnum('!'));
	ft_putstr(" - returned by isalnum\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_isascii test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isascii('5'));
	ft_putstr(" - returned by ft_isascii");
	ft_putstr("\n      ");
	ft_putnbr(isascii('5'));
	ft_putstr(" - returned by isascii\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isascii(129));
	ft_putstr(" - returned by ft_isascii");
	ft_putstr("\n      ");
	ft_putnbr(isascii(129));
	ft_putstr(" - returned by isascii\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isascii('1'));
	ft_putstr(" - returned by ft_isascii");
	ft_putstr("\n      ");
	ft_putnbr(isascii('1'));
	ft_putstr(" - returned by isascii\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isascii(-1));
	ft_putstr(" - returned by ft_isascii");
	ft_putstr("\n      ");
	ft_putnbr(isascii(-1));
	ft_putstr(" - returned by isascii\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_isprint test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isprint('\t'));
	ft_putstr(" - returned by ft_isprint");
	ft_putstr("\n      ");
	ft_putnbr(isprint('\t'));
	ft_putstr(" - returned by isprint\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isprint(122));
	ft_putstr(" - returned by ft_isprint");
	ft_putstr("\n      ");
	ft_putnbr(isprint(122));
	ft_putstr(" - returned by isprint\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isprint('d'));
	ft_putstr(" - returned by ft_isprint");
	ft_putstr("\n      ");
	ft_putnbr(isprint('d'));
	ft_putstr(" - returned by isprint\n");
	ft_putstr("\n      ");
	ft_putnbr(ft_isprint(-1));
	ft_putstr(" - returned by ft_isprint");
	ft_putstr("\n      ");
	ft_putnbr(isprint(-1));
	ft_putstr(" - returned by isprint\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_tolower test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putchar(ft_tolower('t'));
	ft_putstr(" - returned by ft_tolower");
	ft_putstr("\n      ");
	ft_putchar(tolower('t'));
	ft_putstr(" - returned by tolower\n");
	ft_putstr("\n      ");
	ft_putchar(ft_tolower(65));
	ft_putstr(" - returned by ft_tolower");
	ft_putstr("\n      ");
	ft_putchar(tolower(65));
	ft_putstr(" - returned by tolower\n");
	ft_putstr("\n      ");
	ft_putchar(ft_tolower('D'));
	ft_putstr(" - returned by ft_tolower");
	ft_putstr("\n      ");
	ft_putchar(tolower('D'));
	ft_putstr(" - returned by tolower\n");
	ft_putstr("\n      ");
	ft_putchar(ft_tolower(90));
	ft_putstr(" - returned by ft_tolower");
	ft_putstr("\n      ");
	ft_putchar(tolower(90));
	ft_putstr(" - returned by tolower\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_toupper test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putchar(ft_toupper('t'));
	ft_putstr(" - returned by ft_toupper");
	ft_putstr("\n      ");
	ft_putchar(toupper('t'));
	ft_putstr(" - returned by toupper\n");
	ft_putstr("\n      ");
	ft_putchar(ft_toupper(97));
	ft_putstr(" - returned by ft_toupper");
	ft_putstr("\n      ");
	ft_putchar(toupper(97));
	ft_putstr(" - returned by toupper\n");
	ft_putstr("\n      ");
	ft_putchar(ft_toupper('D'));
	ft_putstr(" - returned by ft_toupper");
	ft_putstr("\n      ");
	ft_putchar(toupper('D'));
	ft_putstr(" - returned by toupper\n");
	ft_putstr("\n      ");
	ft_putchar(ft_toupper(122));
	ft_putstr(" - returned by ft_toupper");
	ft_putstr("\n      ");
	ft_putchar(toupper(122));
	ft_putstr(" - returned by toupper\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │             ft_memset test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char memset1[20] = "TESTSTRING";
	char memset2[20] = "TESTSTRING";
	ft_memset(memset1, '~', 3 * sizeof(char));
	ft_putstr(memset1);
	ft_putstr(" - returned by ft_memset");
	ft_putstr("\n      ");
	memset(memset2, '~', 3 * sizeof(char));
	ft_putstr(memset2);
	ft_putstr(" - returned by memset\n");
	ft_putstr("\n      ");
	char memset3[20] = "TESTSTRING";
	char memset4[20] = "TESTSTRING";
	ft_memset(memset3 + 4, '*', 6 * sizeof(char));
	ft_putstr(memset3);
	ft_putstr(" - returned by ft_memset");
	ft_putstr("\n      ");
	memset(memset4 + 4, '*', 6 * sizeof(char));
	ft_putstr(memset4);
	ft_putstr(" - returned by memset\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │              ft_bzero test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char bzero1[20] = "TESTSTRING";
	char bzero2[20] = "TESTSTRING";
	ft_bzero(bzero1 + 2, 3 * sizeof(char));
	ft_putstr(bzero1);
	ft_putstr(" - returned by ft_bzero");
	ft_putstr("\n      ");
	bzero(bzero2 + 2, 3 * sizeof(char));
	ft_putstr(bzero2);
	ft_putstr(" - returned by bzero\n");
	ft_putstr("\n      ");
	char bzero3[20] = "TESTSTRING";
	char bzero4[20] = "TESTSTRING";
	ft_bzero(bzero3 + 4, 6 * sizeof(char));
	ft_putstr(bzero3);
	ft_putstr(" - returned by ft_bzero");
	ft_putstr("\n      ");
	bzero(bzero4 + 4, 6 * sizeof(char));
	ft_putstr(bzero4);
	ft_putstr(" - returned by bzero\n");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │             ft_memcpy test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char memcpy1[20] = "TESTSTRING";
	char memcpy2[20];
	ft_memcpy(memcpy2, memcpy1,  4 * sizeof(char));
	ft_putstr(memcpy2);
	ft_putstr(" - returned by ft_memcpy");
	ft_putstr("\n      ");
	char memcpy3[20] = "TESTSTRING";
	char memcpy4[20];
	memcpy(memcpy4, memcpy3, 4 * sizeof(char));
	ft_putstr(memcpy4);
	ft_putstr(" - returned by memcpy\n");
	ft_putstr("\n      ");
	char memcpy5[20] = "TESTSTRING";
	char memcpy6[20];
	ft_memcpy(memcpy6, memcpy5,  9 * sizeof(char));
	ft_putstr(memcpy6);
	ft_putstr(" - returned by ft_memcpy");
	ft_putstr("\n      ");
	char memcpy7[20] = "TESTSTRING";
	char memcpy8[20];
	memcpy(memcpy8, memcpy7, 9 * sizeof(char));
	ft_putstr(memcpy8);
	ft_putstr(" - returned by memcpy\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_memccpy test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char memccpy1[20] = "TESTSTRING";
	char memccpy2[20];
	ft_memccpy(memccpy2, memccpy1, 'R', 9 * sizeof(char));
	ft_putstr(memccpy2);
	ft_putstr(" - returned by ft_memccpy");
	ft_putstr("\n      ");
	char memccpy3[20] = "TESTSTRING";
	char memccpy4[20];
	memccpy(memccpy4, memccpy3, 'R', 9 * sizeof(char));
	ft_putstr(memccpy4);
	ft_putstr(" - returned by memccpy\n");
	ft_putstr("\n      ");
	char memccpy5[20] = "TESTSTRING";
	char memccpy6[20];
	ft_memccpy(memccpy6, memccpy5, 'N',  9 * sizeof(char));
	ft_putstr(memccpy6);
	ft_putstr(" - returned by ft_memccpy");
	ft_putstr("\n      ");
	char memccpy7[20] = "TESTSTRING";
	char memccpy8[20];
	memccpy(memccpy8, memccpy7, 'N', 9 * sizeof(char));
	ft_putstr(memccpy8);
	ft_putstr(" - returned by memccpy\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_memmove test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char memmove1[20] = "TESTSTRING";
	char memmove2[11];
	ft_memmove(memmove2, memmove1, 8 * sizeof(char));
	ft_putstr(memmove2);
	ft_putstr(" - returned by ft_memmove");
	ft_putstr("\n      ");
	char memmove3[20] = "TESTSTRING";
	char memmove4[20];
	memmove(memmove4, memmove3, 8 * sizeof(char));
	ft_putstr(memmove4);
	ft_putstr(" - returned by memmove\n");
	ft_putstr("\n      ");
	char memmove5[20] = "TESTSTRING";
	char memmove6[20];
	ft_memmove(memmove6, memmove5,  9 * sizeof(char));
	ft_putstr(memmove6);
	ft_putstr(" - returned by ft_memmove");
	ft_putstr("\n      ");
	char memmove7[20] = "TESTSTRING";
	char memmove8[20];
	memmove(memmove8, memmove7, 9 * sizeof(char));
	ft_putstr(memmove8);
	ft_putstr(" - returned by memmove\n");

/*
** =================================================
*/

	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │             ft_memchr test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char memchr1[20] = "TESTSTRING";
	ft_putstr(ft_memchr(memchr1, 'S', 10));
	ft_putstr(" - returned by ft_memchr");
	ft_putstr("\n      ");
	char memchr3[20] = "TESTSTRING";
	ft_putstr(memchr(memchr3, 'S', 10));
	ft_putstr(" - returned by memchr\n");
	ft_putstr("\n      ");
	/* char memchr2[20] = "TESTSTRING"; */
	/* ft_putstr(ft_memchr(memchr2, 'Z', 10)); */
	/* ft_putstr(" - returned by ft_memchr"); */
	/* ft_putstr("\n      "); */
	/* char memchr4[20] = "TESTSTRING"; */
	/* ft_putstr(memchr(memchr4, 'Z', 10)); */
	/* ft_putstr(" - returned by memchr\n"); */
	/* ft_putstr("\n      "); */
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_memcmp test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char memcmp1[20] = "TESTSTRING";
	char memcmp2[11] = "TESTSTRING";
	ft_putnbr(ft_memcmp(memcmp2, memcmp1, 10 * sizeof(char)));
	ft_putstr(" - returned by ft_memcmp");
	ft_putstr("\n      ");
	char memcmp3[20] = "TESTSTRING";
	char memcmp4[20] = "TESTSTRING";
	memcmp(memcmp4, memcmp3, 10 * sizeof(char));
	ft_putnbr(memcmp(memcmp4, memcmp3, 10 * sizeof(char)));
	ft_putstr(" - returned by memcmp\n");
	ft_putstr("\n      ");
	char memcmp5[20] = "TESTSTRING";
	char memcmp6[20] = "TESTstring";
	ft_memcmp(memcmp6, memcmp5,  9 * sizeof(char));
	ft_putnbr(ft_memcmp(memcmp6, memcmp5,  9 * sizeof(char)));
	ft_putstr(" - returned by ft_memcmp");
	ft_putstr("\n      ");
	char memcmp7[20] = "TESTSTRING";
	char memcmp8[20] = "TESTstring";
	ft_putnbr(ft_memcmp(memcmp8, memcmp7,  9 * sizeof(char)));
	ft_putstr(" - returned by memcmp\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_memalloc test             │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	void *memalloc1 = ft_memalloc(12);
	memalloc1 = "TESTSTRING!@#$%^";
	ft_putstr(memalloc1);
	ft_putstr(" - returned by ft_memalloc");
	ft_putstr("\n      ");
	ft_putstr("\n");
	/* char memalloc3[20] = "TESTSTRING"; */
	/* char memalloc4[20] = "TESTSTRING"; */
	/* memalloc(memalloc4, memalloc3, 10 * sizeof(char)); */
	/* ft_putnbr(memalloc(memalloc4, memalloc3, 10 * sizeof(char))); */
	/* ft_putstr(" - returned by memalloc\n"); */
	/* ft_putstr("\n      "); */
	/* char memalloc5[20] = "TESTSTRING"; */
	/* char memalloc6[20] = "TESTstring"; */
	/* ft_memalloc(memalloc6, memalloc5,  9 * sizeof(char)); */
	/* ft_putnbr(ft_memalloc(memalloc6, memalloc5,  9 * sizeof(char))); */
	/* ft_putstr(" - returned by ft_memalloc"); */
	/* ft_putstr("\n      "); */
	/* char memalloc7[20] = "TESTSTRING"; */
	/* char memalloc8[20] = "TESTstring"; */
	/* ft_putnbr(ft_memalloc(memalloc8, memalloc7,  9 * sizeof(char))); */
	/* ft_putstr(" - returned by memalloc\n"); */

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_memdel test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");

	void *ret = ft_memalloc(4);
	ft_memdel(&ret);
	if (ret != NULL)
		MK_YELLOW("ERROR");
	ft_putstr(" - returned by ft_memdel");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strnew test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putstr(ft_strnew(5));
	ft_putstr(" - returned by ft_strnew");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strdel test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char *strdel;
	strdel = ft_strnew(4);
	ft_strdel(&strdel);
	if (ret != NULL)
		MK_YELLOW("ERROR");
	/* ft_putstr(" - returned by ft_strdel"); */
	ft_putstr("\n");
/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strclr test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char strclr[] = "DELETE ME";
	ft_putstr(strclr);
	ft_putstr(" - before ft_strclr");
	ft_putstr("\n      ");
	ft_strclr(strclr);
	ft_putstr(strclr);
	ft_putstr(" - after ft_strclr\n");
	ft_putstr("\n      ");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_striter test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char striter[] = "DELETE ME";
	ft_striter(striter, ft_striter_test);
	ft_putstr("\n      ");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_striteri test             │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char striteri[] = "DELETE ME";
	ft_striteri(striteri, ft_striteri_test);
	ft_putstr("\n      ");
	ft_putstr("\n");


/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_putendl test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	/* MK_YELLOW("YELLOW"); */
	char putendl[] = "ft_putendl test";
	ft_putendl(putendl);

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_putendl_fd test           │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	/* MK_YELLOW("YELLOW"); */
	char putendl_fd[] = "ft_putendl_fd test";
	ft_putendl_fd(putendl_fd, 1);


/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strmap test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char strmap[] = "DELETE ME";
	ft_strmap(strmap, ft_strmap_test);
	ft_putstr("\n      ");
	ft_putstr("\n");

/*
** =================================================
*/
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strmapi test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	char strmapi[] = "DELETE ME";
	ft_strmapi(strmapi, ft_strmapi_test);
	ft_putstr("\n      ");
	ft_putstr("\n");


/*
** =================================================
*/
	char equ1[] = "Compare me";
	char equ2[] = "Compare me";
	char equ3[] = "Compareme";
	char equ4[] = "Compare me";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strequ test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_strequ(equ1, equ2));
	ft_putstr(" - returned by ft_strequ");
	ft_putstr("\n      ");
	ft_putnbr(ft_strequ(equ3, equ4));
	ft_putstr(" - returned by ft_strequ");
	ft_putstr("\n");

/*
** =================================================
*/
	char nequ1[] = "Compare me";
	char nequ2[] = "Compare me";
	char nequ3[] = "Compareme";
	char nequ4[] = "Compare me";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strnequ test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putnbr(ft_strnequ(nequ1, nequ2, 9));
	ft_putstr(" - returned by ft_strnequ");
	ft_putstr("\n      ");
	ft_putnbr(ft_strnequ(nequ3, nequ4, 7));
	ft_putstr(" - returned by ft_strnequ");
	ft_putstr("\n");

/*
** =================================================
*/
	char sub1[] = "Compare me";
	char sub3[] = "Compareme";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strsub test               │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putstr(ft_strsub(sub3, 0, 4));
	ft_putstr(" - returned by ft_strsub");
	ft_putstr("\n      ");
	ft_putstr(ft_strsub(sub1, 8, 2));
	ft_putstr(" - returned by ft_strsub");
	ft_putstr("\n");

/*
** =================================================
*/
	char join1[] = "con";
	char join2[] = "cat";
	char join3[] = "one ";
	char join4[] = "four";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strjoin test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putstr(ft_strjoin(join1, join2));
	ft_putstr(" - returned by ft_strjoin");
	ft_putstr("\n      ");
	ft_putstr(ft_strjoin(join3, join4));
	ft_putstr(" - returned by ft_strjoin");
	ft_putstr("\n");

/*
** =================================================
*/
	char trim1[] = "\n\tcon\t\t";
	char trim2[] = "cat";
	char trim3[] = "  ds  ee ";
	char trim4[] = "    ";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strtrim test              │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putstr(ft_strtrim(trim1));
	ft_putstr(" - returned by ft_strtrim");
	ft_putstr("\n      ");
	ft_putstr(ft_strtrim(trim2));
	ft_putstr(" - returned by ft_strtrim");
	ft_putstr("\n      ");
	ft_putstr(ft_strtrim(trim3));
	ft_putstr(" - returned by ft_strtrim");
	ft_putstr("\n      ");
	ft_putstr(ft_strtrim(trim4));
	ft_putstr(" - returned by ft_strtrim");
	ft_putstr("\n");

/*
** =================================================
*/
	char **res;
	char split1[] = "*hello*fellow***students*";
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_strsplit test             │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	res = ft_strsplit(split1, '*');
	while (*res)
	{
		ft_putstr(*res++);
		ft_putstr(" - returned by ft_strsplit");
		ft_putstr("\n      ");
	}
	ft_putstr("\n");

/*
** =================================================
*/
	int itoa1 = 123;
	int itoa2 = 32131123;
	int itoa3 = -565;
	ft_putstr(" ┌─────────────────────────────────────────┐ \n");
	ft_putstr(" │            ft_itoa test                 │ \n");
	ft_putstr(" └─────────────────────────────────────────┘ \n");
	ft_putstr("\n      ");
	ft_putstr(ft_itoa(itoa1));
	ft_putstr(" - returned by ft_itoa");
	ft_putstr("\n      ");
	ft_putstr(ft_itoa(itoa2));
	ft_putstr(" - returned by ft_itoa");
	ft_putstr("\n      ");
	ft_putstr(ft_itoa(itoa3));
	ft_putstr(" - returned by ft_itoa");
	ft_putstr("\n");

/*
** =================================================
*/
	return (0);
}
