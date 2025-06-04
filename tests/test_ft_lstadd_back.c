/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:35:28 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 15:46:54 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*n1 = ft_lstnew("First");
	t_list	*n2 = ft_lstnew("Second");
	t_list	*new = ft_lstnew("Third");

	n1->next = n2;
	printf("Original = %s -> ", (char *)n1->content);
	printf("%s -> NULL\n", (char *)n1->next->content);
	ft_lstadd_back(&n1, new);
	printf("New = %s -> ", (char *)n1->content);
	printf("%s -> ", (char *)n1->next->content);
	printf("%s -> NULL\n", (char *)new->content);
	free(new);
	free(n2);
	free(n1);
	return (0);
}
