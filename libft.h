/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:55:21 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 18:55:21 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int ft_isalpha(int x);
int ft_isdigit(int x);
int ft_isalnum(int x);
int ft_isascii(int x);
int ft_isprint(int x);
int ft_strlen(char *str);
int ft_toupper(int x);
int ft_tolower(int x);
char ft_strchr(char *str,int x);
char ft_strrchr(char *str,int x);

#endif
