/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:26:07 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/13 17:33:37 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	a = 'a';
	int	b = 'Z';
	int	c = '3';

	printf("%c = %c\n", a, ft_toupper(a));
	printf("%c = %c\n", b, ft_toupper(b));
	printf("%c = %c\n", c, ft_toupper(c));
	return (0);
}
