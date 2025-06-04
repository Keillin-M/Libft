/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:25:03 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 17:43:40 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c[] = {' ', '\t', 'a', '^'};
	size_t	i = 0;

	while (i < sizeof (c))
	{
		printf("Character = '%c'\n", c[i]);
		printf("ft_isprint = %d\n", ft_isprint(c[i]));
		printf("isprint = %d\n", isprint(c[i]));
		printf("\n");
		i++;
	}
	return (0);
}
