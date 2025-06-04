/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:57:29 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/15 14:16:56 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s[] = "Welcome back home!";
	size_t	len = 15;
	int	start = 10;
	char	*substr = ft_substr(s, start, len);

	printf("substr = %s\n", substr);
	free(substr);
	return (0);
}
