/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:55:15 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/31 16:26:46 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

//------------ Printf --------------//
int	ft_printf(const char *string, ...);
//----------------------------------//

//------------ Utilities -------------//
int	ft_printchar(int c);
int	ft_printpercent(void);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printptr(unsigned long long pointer);
int	ft_printhex(unsigned int number, const char format);
int	ft_printuint(unsigned int n);
//------------------------------------//

#endif
