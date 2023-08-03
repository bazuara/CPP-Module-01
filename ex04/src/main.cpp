/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:11:20 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/03 21:22:08 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char **argv) {
  std::string filename, newfilename;
  std::string s1, s2;

  if (argc > 4) {
    std::cout << "Sorry, too many arguments" << std::endl;
    return 1;
  } else if (argc < 4) {
    std::cout << "Sorry, not enough arguments" << std::endl;
    return 2;
  } else {
    filename = argv[1];
    newfilename = filename + ".replace";
    std::cout << newfilename << std::endl;
    return 0;}
}
