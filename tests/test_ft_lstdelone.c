/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:04:00 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 16:59:35 by kmaeda           ###   ########.fr       */
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
	t_list	*n1 = ft_lstnew(ft_strdup("Good"));
	t_list	*n2 = ft_lstnew(ft_strdup("Hello"));
	t_list	*n3 = ft_lstnew(ft_strdup("Morning"));

	n1->next = n2;
	n2->next = n3;

	printf("Original = %s -> %s -> %s -> NULL\n", (char *)n1->content, (char *)n2->content, (char *)n3->content);
	ft_lstdelone(n2, del_content);
	n1->next = n3;
	printf("New = %s -> %s -> NULL\n", (char *)n1->content, (char *)n3->content);
	del_content(n1->content);
	del_content(n3->content);
	free(n1);
	free(n3);
	return (0);
}
