/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:46:54 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 17:54:30 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	temp[10];
	int	i = 0;

	ft_memset(temp, 48, sizeof (temp));
	printf("ft_memset = ");
	while (i < 10)
	{
		printf("%c ", temp[i]);
		i++;
	}
	i = 0;
	memset(temp, 48, sizeof (temp));
	printf("\nmemset = ");
	while (i < 10)
	{
		printf("%c ", temp[i]);
		i++;
	}
	return (0);
}
