/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:35:54 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:18:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Converts a lowercase character 'c' (passed as integer) to uppercase.
 *
 * @details If the arguments passed to the tolower() function is other than 
 * an uppercase alphabet, it returns the same character that is passed to 
 * the function.
 *
 * @param c character passed as integer
 * @return The character 'c' converted to uppercase, otherwise just 'c'.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
