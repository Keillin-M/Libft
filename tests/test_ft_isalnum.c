/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:06:22 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 15:05:45 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c[] = {'o', 'Z', '5', '%', ' '};
	size_t	i = 0;

	while (i < sizeof (c))
	{
		printf("Character: '%c'\n", c[i]);
		printf("ft_isalnum = %d\n", ft_isalnum(c[i]));
		printf("isalnum = %d\n", isalnum(c[i]));
		printf("\n");
		i++;
	}
	return (0);
}
