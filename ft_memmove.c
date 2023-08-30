/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:43:55 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/30 18:38:48 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
//     char str1[] = "Hi"; // Array of size 100
//     char str2[] = "Bye"; // Array of size 5

//     puts("str1 before memmove ");
//     puts(str1);

//     /* Copies contents of str2 to sr1 */
//     ft_memmove(str1, str2, sizeof(str2));

//     puts("\nstr1 after memmove ");
//     puts(str1);

//     return 0;
// }