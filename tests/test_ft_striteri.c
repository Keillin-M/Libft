/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:31:38 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/16 18:49:17 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	f(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int	main(void)
{
	char	s[] = "THANK GOD IT'S FRIDAY";

	printf("s before = %s\n", s);
	ft_striteri(s, f);
	printf("s after = %s\n", s);
	return (0);
}
