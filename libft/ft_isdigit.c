/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:05:26 by sferreir          #+#    #+#             */
/*   Updated: 2019/09/20 11:27:11 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int src)
{
	int		r;

	r = 0;
	if (src >= 060 && src <= 071)
		r++;
	return (r);
}
