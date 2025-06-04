/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:38:17 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/12 17:49:49 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*argv = "My first project";

	printf("ft_strlen = %zu\n", ft_strlen(argv));
	printf("strlen = %zu\n", strlen(argv));
	return (0);
}
