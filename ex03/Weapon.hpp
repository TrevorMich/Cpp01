/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:26:56 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:32:38 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
	private:
	std::string type;
public:
	Weapon (std::string const newType);
	~Weapon ( void );

	std::string const &getType() const;
	void	setType(std::string const newType);
} ;

#endif