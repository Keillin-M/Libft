/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:06:48 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 11:12:36 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("ft_memcmp = 'hello' and 'hello': %d\n", ft_memcmp("hello", "hello", 5));
	printf("memcmp = 'hello' and 'hello': %d\n", memcmp("hello", "hello", 5));
	printf("ft_memcmp = 'hello' and 'hell': %d\n", ft_memcmp("hello", "hell", 5));
	printf("memcmp = 'hello' and 'hell': %d\n", memcmp("hello", "hell", 5));
	printf("ft_memcmp = 'abcd' and 'abcf': %d\n", ft_memcmp("abcd", "abcf", 4));
	printf("memcmp = 'abcd' and 'abcf': %d\n", memcmp("abcd", "abcf", 4));
	printf("ft_memcmp = '' and 'banana': %d\n", ft_memcmp("", "banana", 5));
	printf("memcmp = '' and 'banana': %d\n", memcmp("", "banana", 5));
	return (0);
}
