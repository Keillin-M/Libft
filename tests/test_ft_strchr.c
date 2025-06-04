/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:42:48 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 10:10:14 by kmaeda           ###   ########.fr       */
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

	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	if (result1)
		printf("ft_strchr = Found '%c' at position: %s\n", c, result1);
	if (result2)
		printf("strchr = Found '%c' at position: %s\n", c, result2);
	else
		printf("Character not found\n");
	return (0);
}
