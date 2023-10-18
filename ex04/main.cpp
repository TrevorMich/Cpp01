/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:34:09 by ioduwole          #+#    #+#             */
/*   Updated: 2023/10/04 14:34:09 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: program must take a file and two strings" << std::endl;
		return 1;
	}

	FileData	file(argv[1]);
	file.replace(argv[2], argv[3]);
	return 0;
}