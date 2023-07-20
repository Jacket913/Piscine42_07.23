/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:07:07 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 05:45:55 by xabaudhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);
void    ft_fill_units(char **split, char *trim);
int		ft_strlen(char *str);
char    *trim_space(char *buffer, int count);
char    *ft_strdup(char *str);
int		ft_strlen(char *str);
void	ft_fill_thousands(char **split, char *trim);
void    ft_fill_tens(char **split, char *trim);
void    ft_fill_twenty(char **split, char *trim);
void    ft_fill_units(char **split, char *trim);
char 	**ft_split(char *buffer, int count);
char    *ft_dict(char *av, int *ptr);
int		checknum(char *str);
int		ft_strlenfromi(char *str, int n);
char	*ft_strdupfromi(char *src, int n);
char	*cleannb(char *str);
void	ft_strcmp_split_unit(char **split, char c,int i, int j);
void	ft_strcmp_split_tens(char **split, char c, int i, int j);
void	print_split(char *str);
void	ft_putchar(char c);
void	print_split_hundred(char *str, char c);
void    ft_number_hundred(char **split, char *nb, int len_nb);
void    ft_number(char **split, char *nb);
char    *modulo_nb(char *nb);
void    ft_print_thousands(char **split, int len_nb);
void    free_split(char **split, int n, char *nb);
int		check_arg(int ac, char **av);
int		error_return(int n);
int		check_split(char **split);

#endif
