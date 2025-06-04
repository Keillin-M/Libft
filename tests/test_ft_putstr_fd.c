/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:38:22 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 10:54:08 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main (void)
{
	int	fd;

	ft_putstr_fd("Good morning!\n", 1);
	ft_putstr_fd("Error\n", 2);
	fd = open("test_str.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	{
		if (fd == -1)
		{
			perror("Error opening file");
			return (1);
		}
		ft_putstr_fd("Hello test file!\n", fd);
		close(fd);
		return (0);
	}
}
