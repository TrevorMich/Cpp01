/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:24:38 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:33:42 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const newType) : type(newType){}

Weapon::~Weapon() {}

std::string	const &Weapon::getType() const {
	return(this->type);
}

void	Weapon::setType(std::string const newType) {
	this->type = newType;
}
