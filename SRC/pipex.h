/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:40:04 by clecat            #+#    #+#             */
/*   Updated: 2022/06/14 08:56:47 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <errno.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

char	*getpath(char **envp);
char	*gpathcmd(char *p, char *cmd);
void	exec(char **envp, char *argv);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
