/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:03:37 by maliew            #+#    #+#             */
/*   Updated: 2022/07/09 15:20:03 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 2;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcat(res, s1, len);
	ft_strlcat(res, s2, len);
	return (res);
}
