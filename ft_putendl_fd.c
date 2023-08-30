/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:05:40 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/30 17:26:45 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned long	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// void	ft_putendl_fd(char *s, int fd)
// {
// 	if (!s)
// 		return ;
// 	write(fd, s, ft_strlen(s));
// 	write(fd, "\n", 1);
// }

// int main() {
//     char *myString = "Hello, world!";
//     int fd = 1;  // File descriptor for standard output (stdout)

//     ft_putendl_fd(myString, fd);

//     return 0;
// }