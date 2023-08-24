/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:38:49 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/16 18:24:45 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     char str[50] = "Hola, como estas hoy?";
//     printf("\nBefore memset(): %s\n", str);
  
//     // Fill 8 characters starting from str[13] with '.'
//     memset(str, '.', 4*sizeof(char));
  
//     printf("After memset():  %s\n", str);
	
// 	ft_memset(str, '+', 4*sizeof(char));
// 	printf("After ft_memset():  %s\n", str);
//     return 0;
// }