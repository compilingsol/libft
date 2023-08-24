/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:28:10 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/22 15:27:00 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	
	i = ft_strlen(s);
	while (*s)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}

// int main()
// {
// 	char *str = "Hola como estas";
// 	printf("strrchr is %p\n", strrchr(str, 'c'));
// 	printf("ft_strrchr is %s\n", ft_strrchr(str, 'c'));
// }