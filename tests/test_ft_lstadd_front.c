/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:11:43 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 13:25:29 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head = ft_lstnew("Head");
	t_list	*new = ft_lstnew("New Head");

	printf("Original = %s\n", (char *)head->content);
	ft_lstadd_front(&head, new);
	printf("New = %s -> ", (char *)head->content);
	printf("%s -> NULL\n", (char *)head->next->content);
	free(head);
	return (0);
}
