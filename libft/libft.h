/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:36:07 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**
 * @brief verifies if 'c' is alphabetic
 * 
 * @param c 
 * @return 1 (T) 0 (F)
 */
int		ft_isalpha(int c);
/**
 * @brief verifies if 'c' is numeric
 * 
 * @param c 
 * @return 1 (T) 0 (F)
 */
int		ft_isdigit(int c);
/**
 * @brief verifies if 'c' is alphabetic or numeric
 * 
 * @param c 
 * @return  1 (T) 0 (F)
 */
int		ft_isalnum(int c);
/**
 * @brief verifies if 'c' is ascii
 * 
 * @param c 
 * @return 1 (T) 0 (F)
 */
int		ft_isascii(int c);
/**
 * @brief verifies if 'c' is printable
 * 
 * @param c 
 * @return 1 (T) 0 (F)
 */
int		ft_isprint(int c);
/**
 * @brief counts the characters in a string
 * 
 * @param s string
 * @return size of string
*/
size_t	ft_strlen(const char *s);
/**
 * @brief sets the first 'len' bytes of 'b' to the value c.
 * 
 * @param b string
 * @param c int value
 * @param len length
 * @return a pointer to 'b'
 */
void	*ft_memset(void *b, int c, size_t len);
/**
 * @file ft_bzero.c
 * @brief turns first 'n' bytes of 's' to NULL
 * 
 * @param s string
 * @param n length
 * @return none
 */
void	ft_bzero(void *b, size_t n);
/**
 * @brief copies 'n' bytes from src to dst
 * 
 * @param dst destination string
 * @param src source string
 * @param n bytes length
 * @return a pointer to dst
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief copies "len" bytes from src memory into dst memory
 * 
 * @param dst destination string
 * @param src source string
 * @param len bytes length
 * @return a pointer to dst
 */
void	*ft_memmove(void *dst, const void *src, size_t len);
/**
 * @brief copies a string but limits the destination buffer length
 * 
 * @param dst destination string
 * @param src destination source
 * @param dstsize destination buffer length
 * @return the length of src
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief appends string src to the end of dst and it depends on dstsize
 * 
 * @param dst destination string
 * @param src source string
 * @param dstsize destination buffer length
 * @return the combined length of src and dst
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/**
 * @brief converts uppercases into lowercases
 * 
 * @param c 
 * @return lowercases
 */
int		ft_tolower(int c);
/**
 * @brief converts lowercases into uppercases
 * 
 * @param c 
 * @return uppercases
 */
int		ft_toupper(int c);
/**
 * @brief finds the first occurrence of a character in a string
 * 
 * @param s string
 * @param c character to find
 * @return a pointer to first occurrence of 'c' in 's' 
 * and NULL if 'c' doesn't exist in 's'
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief finds the last occurrence of a character in a string
 * 
 * @param s 
 * @param c 
 * @return a pointer to last occurrence of 'c' in 's' 
 * and NULL if 'c' doesn't exist in 's'.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief compares 'n' bytes of s1 and s2
 * 
 * @param s1 string 1
 * @param s2 string 2
 * @param n bytes length
 * @return 0 (s1 = s2) -0 (s1 < s2) +0 (s1 > s2) 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief Searches for the first occurrence of a character 'c'
 * in the first 'n' bytes given of a string 's'.
 *
 * @param s string
 * @param c character to be found in string
 * @param n length of bytes
 * @return A pointer to the first occurrence of 'c' in 's'
 * or NULL if 'c' is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief Compares the first 'n' bytes of the memory areas 's1' and 's2'.
 *
 * @details The memcmp() returns zero if the two strings are identical,
 * otherwise it returns the difference between the first two differing
 * bytes (treated as unsigned char).
 *
 * @param s1 string 1
 * @param s2 string 2
 * @param n bytes length
 * @return An integer less than 0 if (s1 < s2), equal to 0 if (s1 = s2),
 * or greater than 0 if (s1 > s2). If 'n' is 0, the return value is 0.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief Locates the first occurrence of the null-terminated string 'little'
 * in the string 'big', where not more than 'len' characters are searched.
 *
 * @details Characters that appear after a `\0' character are not searched.
 *
 * @param big source string
 * @param little string to be located
 * @param len bytes length to search
 * @return If 'little' is an empty string, 'big' is returned; if 'little'
 * occurs nowhere in 'big', NULL is returned; otherwise a pointer to the
 * first character of the first occurrence of 'little' is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**
 * @brief sends the 'c' character to the file descriptor
 * 
 * @param c character
 * @param fd file descriptor
 * @return none
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief sends the 's' pointer to the file descriptor
 * 
 * @param s string
 * @param fd file descriptor
 * @return none
 */
void	ft_putstr_fd(char *s, int fd);

#endif