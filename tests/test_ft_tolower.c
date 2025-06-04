/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:16:15 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/13 18:18:37 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	a = 'a';
	int	b = 'Z';
	int	c = '9';

	printf("%c = %c\n", a, ft_tolower(a));
	printf("%c = %c\n", b, ft_tolower(b));
	printf("%c = %c\n", c, ft_tolower(c));
	return (0);
}
