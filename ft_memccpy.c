/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:10:09 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/15 19:43:21 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}

// char string1[60] = "Taj Mahal is a historic monument in India.";
// int main ()
// {
// 	char buffer[61];
// 	char *pdest;
// 	printf( "Function: _memccpy 42 characters or to character 'c'\n" );
// 	printf( "Source: %s\n", string1 );
// 	pdest = ft_memccpy( buffer, string1, 'c', 42);
// 	*pdest = '\0';
// 	printf( "Result: %s\n", buffer );
// 	printf( "Length: %lu characters\n", strlen( buffer ) );
// }