/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:34:43 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/15 21:46:19 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "Hi, How. are you.";
// 	const char ch = '.';
// 	char *ret;

// 	ret = ft_memchr(str, ch, strlen(str));

// 	printf("String after |%c| is - |%s|\n", ch, ret);

// 	return(0);
// }