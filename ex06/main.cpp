/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 08:18:26 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/09 16:02:32 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2)
	{
		std::cout<<"You must input an arguement"<<std::endl;
		return (1);
	}
	Harl	harl;
	
	harl.complain(argv[1]);

	return (0);
}