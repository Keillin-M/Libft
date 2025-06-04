/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:00:46 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 13:29:20 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	big[] = "Have a great day!";
	const char	little[] = "great";
	const char	*result;

	result = ft_strnstr(big, little, 12);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found!\n");
	return (0);
}
