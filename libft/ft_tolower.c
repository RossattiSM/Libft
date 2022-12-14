/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:34:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:19:30 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Converts an uppercase character 'c' (passed as integer) to lowercase.
 *
 * @details If the arguments passed to the toupper() function is other than a
 * lowercase alphabet, it returns the same character that is passed 
 * to the function.
 *
 * @param c character passed as integer
 * @return The character 'c' converted to lowercase, otherwise just 'c'.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
