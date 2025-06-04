/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:58:49 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/16 12:48:20 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s = "  Keillin  Ayumi      Maeda ";
	char	c = ' ';
	char	**result;
	int	i = 0;

	result = ft_split(s, c);
	printf("s = %s\n", s);
	while (result[i] != NULL)
	{
		printf("ft_split = %s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
