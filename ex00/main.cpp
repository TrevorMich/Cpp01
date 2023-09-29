/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:53:17 by ioduwole          #+#    #+#             */
/*   Updated: 2023/09/29 20:21:56 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombie = newZombie("Rizz");
	zombie->announce();

	Zombie	zombie2("Apocalypse");
	zombie2.announce();

	randomChump("Rizz");

	delete zombie;

	return(0);
}
