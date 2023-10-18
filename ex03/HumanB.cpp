/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:10:20 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:24:32 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string const newName) : name(newName) {}

HumanB::~HumanB ( void ) {}

void	HumanB::attack() const {
	if (this->weapon)
		std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
	else
		std::cout<<this->name<<" attacks with their "<<"Teeth"<<std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon) {

	this->weapon = &newWeapon;
}
