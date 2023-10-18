/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:15:03 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/09 17:15:43 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::_debug() {
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void	Harl::_info() {
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money.";
	std::cout<<" You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl::_warning() {
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free.";
	std::cout<<" I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void	Harl::_error() {
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void	Harl:: complain(std::string level) {
	void (Harl::*func[]) (void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;

	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*func[i])();
			return ;
		}
		i++;
	}
	
}