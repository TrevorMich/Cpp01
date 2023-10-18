/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:03:50 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/03 14:17:20 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	string = "HI! THIS IS BRAIN";
	std::string *stringPTR= &string;
	std::string &stringREF = string;

	std::cout <<&string <<std::endl;
	std::cout <<stringPTR <<std::endl;
	std::cout <<&stringREF <<std::endl;

	std::cout<<"\n";
	
	std::cout <<string <<std::endl;
	std::cout <<*stringPTR <<std::endl;
	std::cout <<stringREF <<std::endl;
}