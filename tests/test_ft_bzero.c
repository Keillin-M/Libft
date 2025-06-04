/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:07:31 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 18:14:27 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	temp[5];
	int	i = 0;

	ft_bzero(temp, sizeof (temp));
	printf("ft_bzero = ");	
	while (i < 5)
	{
		printf("%d ", temp[i]);
		i++;
	}
	i = 0;
	bzero(temp, sizeof (temp));
	printf("\nbzero = ");
	while(i < 5)
	{
		printf("%d ", temp[i]);
		i++;
	}
	return (0);
}
