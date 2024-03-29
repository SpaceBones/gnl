/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:53:10 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/03 11:03:47 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int src)
{
	int		r;

	r = 0;
	if ((src >= 'A' && src <= 'Z') || (src >= 'a' && src <= 'z'))
		r++;
	return (r);
}
