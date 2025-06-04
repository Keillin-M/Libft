/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:27:37 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/15 11:30:51 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Welcome ";
	char	*s2 = "home!";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("ft_strjoin = %s\n", ft_strjoin(s1, s2));
	return (0);
}
