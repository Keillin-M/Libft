/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:05:44 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/13 17:16:39 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst[20] = "Concatenate ";
	char	src[] = "String";
	size_t	result;

	result = ft_strlcat(dst, src, sizeof (dst));
	printf("Resulting string = %s\n", dst);
	printf("Return value = %lu\n", result);
	return (0);
}
