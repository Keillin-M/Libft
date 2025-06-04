/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:49:17 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 10:55:12 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const void	*s = "Good morning!";
	char	c = 'r';
	void	*result1;
	void	*result2;

	result1 = ft_memchr(s, c, 13);
	result2 = memchr(s, c, 13);
	if (result1)
		printf("ft_memchr = Found '%c' at position: %s\n", c, (char *)result1);
	if (result2)
		printf("memchr = Found '%c' at position: %s\n", c, (char *)result2);
	else
		printf("Character not found\n");
	return (0);
}
