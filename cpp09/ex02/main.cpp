/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:40:04 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/27 11:34:37 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
From the subject:
"• Your program must be able to use a positive integer sequence as argument.
 • Your program must use the merge-insert sort algorithm to sort the positive integer
sequence.
 To clarify, yes, you need to use the Ford-Johnson algorithm."
*/

int main(int argc, char **argv) {

	if (argc < 3) {
		std::cerr << "Error: wrong number of arguments." << std::endl;
		return (1);
	}

	for(size_t i = 0; i < argc; i++) {
		for (size_t j = 0; argv[i][j] != '\0'; j++) {
			if (!isdigit(argv[i][j])) {
				std::cerr << "Error: all arguments must be positive integers." << std::endl;
				return (1);
			}
			
		}
	}
}
