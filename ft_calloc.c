/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:38:59 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/25 14:05:18 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// int main()

//     // This pointer will hold the
//     // base address of the block created
//     int* ptr;
// 	int* ptr2;
//     int n, i, j;

//     // Get the number of elements for the array
//     n = 5;
//     printf("Enter number of elements: %d\n", n);

//     // Dynamically allocate memory using calloc()
//     ptr = (int*)calloc(n, sizeof(int));
// 	ptr2 = (int*)ft_calloc(n, sizeof(int));

//     // Check if the memory has been successfully
//     // allocated by calloc or not
//     if ((ptr == NULL) || (ptr2 == NULL)) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }
//     else {

//         // Memory has been successfully allocated
//         printf("Memory successfully allocated using calloc.\n");

//         // Get the elements of the array
//         // for (i = 0; i < n; ++i) {
//         //     ptr[i] = i + 5;
//         // }

//         // Print the elements of the array
//         printf("The elements of the calloc array are: ");
//         for (i = 0; i < n; ++i) {
//             printf("%d, ", ptr[i]);
//         }

// 		// Get the elements of the array
//         for (j = 0; j < n; ++j) {
//             ptr2[j] = j + 1;
//         }

//         // Print the elements of the array
//         printf("\nThe elements of the ft_calloc array are: ");
//         for (j = 0; j < n; ++j) {
//             printf("%d, ", ptr2[j]);
//         }
//     }

//     return 0;
// }

// int main()
// {
//     // Both of these allocate the same number of bytes,
//     // which is the amount of bytes that is required to
//     // store 5 int values.

//     // The memory allocated by calloc will be
//     // zero-initialized, but the memory allocated with
//     // malloc will be uninitialized so reading it would be
//     // undefined behavior.
//     int* allocated_with_malloc = malloc(5 * sizeof(int));
//     int* allocated_with_calloc = ft_calloc(5, sizeof(int));

//     // As you can see, all of the values are initialized to
//     // zero.
//     printf("Values of allocated_with_calloc: ");
//     for (size_t i = 0; i < 5; ++i) {
//         printf("%d ", allocated_with_calloc[i]);
//     }
//     putchar('\n');

//     // This malloc requests 1 terabyte of dynamic memory,
//     // which is unavailable in this case, and so the
//     // allocation fails and returns NULL.
//     int* failed_malloc = malloc(1000000000000);
//     if (failed_malloc == NULL) {
//         printf("The allocation failed, the value of "
//                "failed_malloc is: %p",
//                (void*)failed_malloc);
//     }

//     // Remember to always free dynamically allocated memory.
//     free(allocated_with_malloc);
//     free(allocated_with_calloc);
// }