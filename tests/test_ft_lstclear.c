/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:41:58 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 16:58:02 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	void	del_content(void *content)
	{
		free(content);
	}
	t_list *n1 = ft_lstnew(strdup("First"));
	t_list *n2 = ft_lstnew(strdup("Second"));
	t_list *n3 = ft_lstnew(strdup("Third"));
	t_list *n4 = ft_lstnew(strdup("Forth"));

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	printf("Original = %s -> %s -> %s -> %s -> NULL\n", (char *)n1->content, (char *)n2->content, (char *)n3->content, (char *)n4->content);
	ft_lstclear(&n2, del_content);
	if (n2 == NULL)
		printf("n2 is NULL\n");
	printf("New = %s", (char *)n1->content);
	del_content(n1->content);
	free(n1);
	return (0);
}
