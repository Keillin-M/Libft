/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:50:31 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/14 13:56:41 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*nptr = "    	-123abc";

	printf("Result for ft_atoi: %d\n", ft_atoi(nptr));
	printf("Result for atoi: %d\n", atoi(nptr));
	return (0);
}
