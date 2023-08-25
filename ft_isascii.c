/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:28:43 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/25 14:12:24 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
//     // Test cases
//     char characters[] = {'A', 'a', 'Z', 'z', '0', '9', '@'};

//     for (int i = 0; i < sizeof(characters) / sizeof(char); i++)
//     {
//         int result = ft_isascii(characters[i]);
//         printf("%c: %d\n", characters[i], result);
//     }

//     return 0;
// }