/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:43:57 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 10:12:17 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*s = "Hello, Hello!";
	char	c = 'l';
	char	*result1;
	char	*result2;

	result1 = ft_strrchr(s, c);
	result2 = strrchr(s, c);
	if (result1)
		printf("ft_strrchr = Found last '%c' at position %s\n", c, result1);
	if (result2)
		printf("strrchr = Found last '%c' at position: %s\n", c, result2);
	else
		printf("Character not found\n");
	return (0);
}
