/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:44:28 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/13 12:18:35 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "abcdef";
	char	*dest1 = src + 1;
	char	*dest2 = src + 1;

	ft_memmove(dest1, src, 5);
	memmove(dest2, src, 5);
	printf("src = %s\n", src);
	printf("ft_memmove dest = %s\n", dest1);
	printf("memmove dest = %s\n", dest2);
	return (0);
}
