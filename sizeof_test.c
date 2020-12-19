/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermelin <fermelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:05:40 by fermelin          #+#    #+#             */
/*   Updated: 2020/11/18 17:57:52 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	char str[] = "Hello\n";

	char *str1 = "Hello world1\n";

	 str[0] = 'P';
	 str1[0] = 'P';


	printf("siseof(str[]) =      %lu\n", sizeof(str));
	printf("siseof(char *str1) = %lu\n", sizeof(str1));

	return (0);
}
