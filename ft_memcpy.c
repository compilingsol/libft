/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:25:40 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/30 18:37:26 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

// int main()
// {
//     char str1[] = "This is ";
//     char str2[] = "now this";

//     puts("str1 before memcpy ");
//     puts(str1);

//     /* Copies contents of str2 to str1 */
//     memcpy(str1, str2, sizeof(str2));

//     puts("\nstr1 after memcpy ");
//     puts(str1);

// 	    /* Copies contents of str2 to str1 */
//     ft_memcpy(str1, str2, sizeof(str2));

//     puts("\nstr1 after ft_memcpy ");
//     puts(str1);

//     return 0;
// }