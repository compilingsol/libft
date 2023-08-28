/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:46:21 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/28 21:12:59 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (size == 0)
		return (ft_strlen(dst));
	len_src = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	len_dst = i;
	while (src[i - len_dst] && i < size - 1)
	{
		dst[i] = src[i - len_dst];
		i++;
	}
	if (len_dst < size)
		dst[i] = '\0';
	return (len_dst + len_src);
}