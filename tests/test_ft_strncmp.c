/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:23:18 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 10:33:17 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("ft_strncmp = 'hello' and 'hello': %d\n", ft_strncmp("hello", "hello", 5));
	printf("strncmp = 'hello' and 'hello': %d\n", strncmp("hello", "hello", 5));
	printf("ft_strncmp = 'hello' and 'hell': %d\n", ft_strncmp("hello", "hell", 5));
	printf("strncmp = 'hello' and 'hell': %d\n", strncmp("hello", "hell", 5));
	printf("ft_strncmp = 'abcd' and 'abcf': %d\n", ft_strncmp("abcd", "abcf", 4));
	printf("strncmp = 'abcd' and 'abcf': %d\n", strncmp("abcd", "abcf", 4));
	printf("ft_strncmp = '' and 'banana': %d\n", ft_strncmp("", "banana", 5));
	printf("strncmp = '' and 'banana': %d\n", strncmp("", "banan", 5));
	return (0);
}
