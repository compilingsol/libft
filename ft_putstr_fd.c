/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:57:56 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/22 14:04:47 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if(!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int main() {
//     char *myString = "Hello, world!";
//     int fd = 1;  // File descriptor for standard output (stdout)

//     ft_putstr_fd(myString, fd);

//     return 0;
// }