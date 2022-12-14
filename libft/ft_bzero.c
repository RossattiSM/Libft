/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:01:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:37:07 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Turns the first 'n' bytes of 's' to NULL.
 *
 * @param s string to be modified
 * @param n length of bytes
 * @return None.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = s;
	while (i < n)
	{
		ma[i++] = 0;
	}
}
