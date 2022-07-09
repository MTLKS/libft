/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:49:52 by maliew            #+#    #+#             */
/*   Updated: 2022/07/09 14:56:57 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (0);
	res = (void *)malloc(count * size);
	if (!res)
		return (0);
	ft_bzero(res, count * size);
	return (res);
}
