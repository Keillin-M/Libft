/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:57:23 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 15:22:20 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	size_t	i;
	int	*result1;
	int	*result2;
	size_t	nmemb = 5;
	size_t	size = sizeof(int);

	result1 = ft_calloc(nmemb, size);
	printf("ft_calloc = ");
	if(result1)
	{
		i = 0;
		while (i < nmemb)
		{
			printf("%d ", result1[i]);
			i++;
		}
	}
	printf("\n");
	result2 = calloc(nmemb, size);
	printf("calloc = ");
	if (result2)
	{
		i = 0;
		while (i < nmemb)
		{
			printf("%d ", result2[i]);
			i++;
		}
	}
	printf("\n");
	free(result1);
	free(result2);
	return (0);
}
