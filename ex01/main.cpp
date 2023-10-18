/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:39:10 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 13:50:19 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *zombie = zombieHorde(N, "Apocalypse");
	while (--N >= 0)
		zombie[N].announce();
	delete[] zombie;
	return (0);
}