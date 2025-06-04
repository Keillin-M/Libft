/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:20:00 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 17:40:47 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c[] = {'\t', 'Z', '0', ';', 128};
	size_t	i = 0;

	while (i < sizeof (c))
	{
		printf("Character: '%c'\n", c[i]);
		printf("ft_isascii = %d\n", ft_isascii(c[i]));
		printf("isascii = %d\n", isascii(c[i]));
		printf("\n");
		i++;
	}
	return (0);
}
