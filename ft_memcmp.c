/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:05:09 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/16 15:47:27 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n && *src1 && (*src1 == *src2))
	{
		src1++;
		src2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*src1 - *src2);
}

// int main()
// {
// 	int result = 0;
// 	char str1[] = "aabc";
// 	char str2[] = "aabc";

// 	result = ft_memcmp(str1, str2, 4);

// 	if (result > 0)
// 	{
// 		printf("The size of strng1 is more than the size of strng2");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("The size of strng1 is less than the size of strng2");
// 	}
// 	else
// 	{
// 		printf("The size of strng1 is equal to the size of strng2");
// 	}
// return 0;  
// }
