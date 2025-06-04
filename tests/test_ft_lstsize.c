/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:56:31 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 15:03:08 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*n1 = ft_lstnew("One");
	t_list	*n2 = ft_lstnew("Two");
	t_list	*n3 = ft_lstnew("Three");
	t_list	*n4 = ft_lstnew("four");

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	
	int	size = ft_lstsize(n1);

	printf("List size = %d\n", size);
	free(n4);
	free(n3);
	free(n2);
	free(n1);
	return (0);
}
