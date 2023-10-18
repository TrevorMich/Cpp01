/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:01:57 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:11:13 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
	std::string	name;
	Weapon const	&weapon;

	public:
	HumanA (std::string const newName, Weapon const &newWeapon);
	~HumanA ( void );

	void	attack ( void ) const;
} ;

#endif