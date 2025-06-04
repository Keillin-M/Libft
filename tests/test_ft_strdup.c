/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:46:25 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 16:13:01 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s = "Hey, there!";
	char	*copy1;
	char	*copy2;

	copy1 = ft_strdup(s);
	if (copy1)
	{
		printf("ft_strdup = Original: %s\nCopy: %s\n", s, copy1);
		free(copy1);
	}
	copy2 = strdup(s);
	if (copy2)
	{
		printf("strdup = Original: %s\nCopy: %s\n", s, copy2);
		free(copy2);
	}
	return (0);
}
