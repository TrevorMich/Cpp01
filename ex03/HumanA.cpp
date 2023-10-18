/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:04:57 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:38:51 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string const newName, Weapon const &newWeapon)
				: name(newName), weapon(newWeapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) const {
	std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;

}
