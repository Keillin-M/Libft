/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:17:39 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/15 15:25:24 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1 = "abbabccadaabaGood Morning!cadbcadbababbbabaaa";
	char	*set = "abcd";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("s1 = %s\n", s1);
	printf("ft_strtrim = %s", result);
	free(result);
	return (0);
}
