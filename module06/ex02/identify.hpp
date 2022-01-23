/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:35 by ylee              #+#    #+#             */
/*   Updated: 2022/01/23 19:58:59 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base*	generate();
void	identify(Base* p);
void	identify(Base& p);

#endif

