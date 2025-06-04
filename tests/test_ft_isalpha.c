/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:50:52 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 17:13:17 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c[] = {'M', 'o', '5', ' '};
	size_t	i = 0;

	while (i < sizeof (c))
	{
		printf("Character: '%c'\n", c[i]);
		printf("ft_isalpha = %d\n", ft_isalpha(c[i]));
		printf("isalpha = %d\n", isalpha(c[i]));
		printf("\n");
		i++;
	}
	return (0);
}
