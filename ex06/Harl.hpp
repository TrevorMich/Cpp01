/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:55:05 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/06 19:26:20 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_H
#define HARL_H

#include <iostream>

class	Harl {
	private:
	void	_debug( void );
	void	_info(void );
	void	_warning( void );
	void	_error( void );

	public:
	void	complain( std::string level );

	Harl( void );
	~Harl( void );
} ;

#endif