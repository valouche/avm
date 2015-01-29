// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vdiridol <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/28 15:53:25 by vdiridol          #+#    #+#             //
//   Updated: 2015/01/29 15:34:21 by vdiridol         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include <iostream>
# include <fstream>
# include <cstdio>
# include <cstdlib>
# include <string>
# include <list>
#include <algorithm>

static inline std::string &ltrim(std::string &s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
	return s;
}

// trim from end
static inline std::string &rtrim(std::string &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
	return s;
}

// trim from both ends
static inline std::string &trim(std::string &s) {
	return ltrim(rtrim(s));
}

void	check_and_execute(std::list<std::string> *list, std::list<std::string>::iterator it) {

	std::cout << std::endl;

	for(it = list->begin(); it != list->end(); it++) {
		trim(*it);
		if (!(it->compare(0, 4, "push")))
			std::cout << "push detected" << std::endl;
		if (!(it->compare(0, 3, "pop")))
			std::cout << "pop detected" << std::endl;
		if (!(it->compare(0, 4, "dump")))
			std::cout << "dump detected" << std::endl;
		if (!(it->compare(0, 6, "assert")))
			std::cout << "assert detected" << std::endl;
		if (!(it->compare(0, 3, "add")))
			std::cout << "add detected" << std::endl;
		if (!(it->compare(0, 3, "sub")))
			std::cout << "push detected" << std::endl;
		if (!(it->compare(0, 3, "mul")))
			std::cout << "mul detected" << std::endl;
		if (!(it->compare(0, 3, "div")))
			std::cout << "div detected" << std::endl;
		if (!(it->compare(0, 3, "mod")))
			std::cout << "mod detected" << std::endl;
		if (!(it->compare(0, 5, "print")))
			std::cout << "print detected" << std::endl;
		if (!(it->compare(0, 4, "exit"))) {
			std::cout << "exit detected" << std::endl;
			return;
		}
	}
 }
	std::list<std::string>::iterator	it;
int	main(int ac, char **av) {

	std::string							line;
	std::ifstream						file(av[1]);
	std::list<std::string>				list;
	std::list<std::string>::iterator	it;

	if (ac == 1)
		for(; std::getline(std::cin, line); list.push_back(line)) {
			if (!line.compare(";;"))
				break;
		}
	else
		for(; std::getline(file, line); list.push_back(line));
	for(it = list.begin(); it != list.end(); std::cout << *it << std::endl, it++);
	check_and_execute(&list, it);
	it--;
	std::cout << ">" << *it << "<" << std::endl;
	std::cout << "yo" << std::endl;
	return (0);
}
