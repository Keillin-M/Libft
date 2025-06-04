/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:07:06 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/13 10:59:47 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "Today is a great day";
	char	dest1[50];
	char	dest2[50];
	
	ft_memcpy(dest1, src, sizeof (src));
	memcpy(dest2, src, sizeof (src));
	printf("src = %s\n", src);
	printf("ft_memcpy = %s\n", dest1);
	printf("memcpy = %s\n", dest2);
	return (0);
}
