/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:21:57 by ioduwole          #+#    #+#             */
/*   Updated: 2023/09/29 18:54:17 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include	<iostream>

class Zombie {
private:
	std::string		name;

public:
	Zombie( std::string name );
	~Zombie( void );

	void			announce(void);
} ;

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
