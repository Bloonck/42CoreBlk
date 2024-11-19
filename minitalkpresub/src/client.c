/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:03:06 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/11/19 17:32:14 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

// SENDING SIGNALS BY GOING THROUGH EACH BIT AND PERFORMING A MODULUS OPERATION

void	minispeak(int process_id, unsigned char bit_octet)
{
	int				bit_pos;
	unsigned char	temp_bit;

	bit_pos = 8;
	temp_bit = bit_octet;
	while (bit_pos-- > 0)
	{
		temp_bit = bit_octet >> bit_pos;
		if (temp_bit % 2 == 0)
			kill(process_id, SIGUSR2);
		else
			kill(process_id, SIGUSR1);
		usleep(100);
	}
}
//=======================================================================

// HANDLING INVALID INPUT AND PARSING VALID INPUT TO BE SENT TO SERVER 

int	main(int argc, char **argv)
{
	int		server_id;
	int		str_increment;
	char	*string_to_send;

	if (argc != 3)
	{
		ft_printf("Usage: ./client [PID] [Message]\n");
		return (0);
	}
	server_id = ft_atoi(argv[1]);
	string_to_send = argv[2];
	str_increment = 0;
	while (string_to_send[str_increment])
	{
		minispeak(server_id, (unsigned char)string_to_send[str_increment]);
		str_increment++;
	}
	return (0);
}

//=======================================================================
