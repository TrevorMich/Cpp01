/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:32:54 by ioduwole          #+#    #+#             */
/*   Updated: 2023/09/29 22:50:18 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include	<iostream>

class Zombie {
private:
	std::string		name;

public:
	Zombie( void );
	~Zombie( void );

	void			announce(void);
	void	setName(std::string name);
} ;

Zombie	*zombieHorde(int N, std::string name);

#endif
