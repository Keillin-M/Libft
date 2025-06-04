/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:23:22 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/13 17:50:58 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "Copy string";
	char	dst[10];
	size_t	result;

	result = ft_strlcpy(dst, src, sizeof (dst));
	printf("src = %s\n", src);
	printf("size of src = %ld\n", result);
	printf("size of dest = %ld\n", sizeof (dst));
	printf("dest = %s\n", dst);
	return (0);
}
