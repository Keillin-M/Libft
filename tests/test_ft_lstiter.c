/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:05:50 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 17:30:04 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	f(void *c)
{
	char	*str = (char *)c;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

int	main(void)
{
	t_list	*n1 = ft_lstnew(ft_strdup("hello"));
	t_list	*n2 = ft_lstnew(ft_strdup("good"));
	t_list	*n3 = ft_lstnew(ft_strdup("morning"));

	n1->next = n2;
	n2->next = n3;

	printf("Original = %s -> %s -> %s -> NULL\n", (char *)n1->content, (char *)n2->content, (char *)n3->content);
	ft_lstiter(n1, f);
	printf("New = %s -> %s -> %s -> NULL\n", (char *)n1->content, (char *)n2->content, (char *)n3->content);
	free(n1->content);
	free(n2->content);
	free(n3->content);
	free(n1);
	free(n2);
	free(n3);
	return (0);
}
