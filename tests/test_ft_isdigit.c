/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:04:00 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 17:40:03 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c[] = {'0', '5', 'a'};
	size_t	i = 0;

	while (i < sizeof (c))
	{
		printf("Character = '%c'\n", c[i]);
		printf("ft_isdigit = %d\n", ft_isdigit(c[i]));
		printf("isdigit = %d\n", isdigit(c[i]));
		printf("\n");
		i++;
	}
	return (0);
}
