/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:29:59 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/17 17:30:02 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}

// int main(void)
// {
//     printf("strcmp = %d\n", ft_strncmp("aaa", "aab", 13));
//     printf("strcmp = %d\n", ft_strncmp("a", "A", 1));
//     printf("strcmp = %d\n", ft_strncmp("a", "c", 5));
//     printf("strcmp = %d\n", ft_strncmp("z", "d", 2));
//     printf("strcmp = %d\n", ft_strncmp("abhgyuigi", "abed", 5));
//     printf("strcmp = %d\n", ft_strncmp("apple", "apple", 5));
// 	return (0);
// }