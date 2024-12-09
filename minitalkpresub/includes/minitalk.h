/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:43:29 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/10/15 12:56:51 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define SIGUSR1 1
# define SIGUSR2 0

# include "ft_printf.h"
# include <unistd.h>
# include <signal.h>

// ====XROSS FUNCTIONS====

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);

#endif
