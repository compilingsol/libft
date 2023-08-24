/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:28:31 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/17 17:28:34 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (1);
	return (0);
}

// int main(void)
// {
//     // Test cases
//     char characters[] = {'A', 'a', 'Z', 'z', '0', '9', '@'};

//     for (int i = 0; i < sizeof(characters) / sizeof(char); i++)
//     {
//         int result = ft_isalpha(characters[i]);
//         printf("%c: %d\n", characters[i], result);
//     }

//     return 0;
// }