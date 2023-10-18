/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:33:45 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 16:39:45 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("mouth");
		bob.attack();
		}{
		Weapon club = Weapon("Gun");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("fists");
		jim.attack();
	}
	return 0;
}