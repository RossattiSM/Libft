/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:37:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:30:31 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies a null terminated 'src' string into a sized buffer 'dst'
 * 
 * @details With the strlcpy() function only 'dstsize' characters
 * maximum are copied, and the value returned is the size of 'src'.
 * The value returned is always the size of string 'src'
 * regardless of how many characters are copied.
 *
 * @param dst destination string
 * @param src source string
 * @param dstsize destination buffer size
 * @return The length of 'src'.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
