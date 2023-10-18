/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:36:34 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:01:36 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
	std::string	name;
	Weapon		*weapon;

	public:
	HumanB (std::string const newName);
	~HumanB ( void );

	void	attack ( void ) const;
	void	setWeapon(Weapon &newWeapon);
} ;

#endif