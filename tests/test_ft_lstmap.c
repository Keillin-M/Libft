/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:50:37 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/20 12:53:09 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*f(void *c)
{
	char	*str = (char *)c;
	size_t	len = strlen(str);
	char	*new_str = malloc(len + 2);

	if(!new_str)
		return (NULL);
	strcpy(new_str, str);
	new_str[len] = '!';
	new_str[len + 1] = '\0';
	return (new_str);
}

void	del(void *c)
{
	free(c);
}

int	main(void)
{
	t_list	*a = ft_lstnew(ft_strdup("a"));
	t_list	*b = ft_lstnew(strdup("b"));
	t_list	*c = ft_lstnew(strdup("c"));

	a->next = b;
	b->next = c;
	printf("Original = %s -> %s -> %s -> NULL\n", (char *)a->content, (char *)b->content, (char *)c->content);
	t_list	*new = ft_lstmap(a, f, del);
	printf("New = %s -> %s -> %s -> NULL\n", (char *)new->content, (char *)new->next->content, (char *)new->next->next->content);
	ft_lstclear(&a, del);
	ft_lstclear(&new, del);
	return (0);
}
