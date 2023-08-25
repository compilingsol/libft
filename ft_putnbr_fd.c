/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:09:09 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/25 14:24:22 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		write(fd, &"0123456789"[n % 10], 1);
	}
}

// int main() {
//     ft_putnbr_fd(12345, 1); // Output: 12345
//     ft_putchar_fd('\n', 1);
//     ft_putnbr_fd(-9876, 1); // Output: -9876
//     ft_putchar_fd('\n', 1);
//     ft_putnbr_fd(-2147483648, 1); // Output: -2147483648
//     ft_putchar_fd('\n', 1);

//     return 0;
// }