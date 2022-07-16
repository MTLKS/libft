/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:51:20 by maliew            #+#    #+#             */
/*   Updated: 2022/07/16 17:20:54 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*buffer;

	if (!dest && !src)
		return (0);
	buffer = dest;
	while (n-- > 0)
	{
		*((char *) dest) = *((char *) src);
		dest++;
		src++;
	}
	return (buffer);
}
