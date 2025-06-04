/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:01:41 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 11:10:59 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	ft_putendl_fd("Good morning!", 1);
	ft_putendl_fd("Error", 2);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	ft_putendl_fd("Good morning file!", fd);
	close(fd);
	return (0);
}
