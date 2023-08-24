/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:37:52 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/16 15:00:01 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main(void)
// {
//     char str[50] = "Hola, como estas hoy?";
//     printf("\nBefore bzero(): %s\n", str);
  
//     bzero(str + 2, 2*sizeof(char));
  
//     printf("After bzero():  %s\n", str);
	
// 	ft_bzero(str + 2, 2*sizeof(char));
// 	printf("After ft_bzero():  %s\n", str);
//     return 0;
// }