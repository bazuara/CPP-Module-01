/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:11:20 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/03 22:12:30 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
  std::string filename, newFilename;
  std::string line;
  std::string s1, s2;
  std::ifstream inputFile;

  if (argc > 4) {
    std::cout << "Sorry, too many arguments" << std::endl;
    return 1;
  } else if (argc < 4) {
    std::cout << "Sorry, not enough arguments" << std::endl;
    return 2;
  } else {
    // load file
    filename = argv[1];
    inputFile.open(filename);
    if (inputFile.is_open()) {
      while (getline(inputFile, line)) {
        std::cout << line << '\n';
      }
      inputFile.close();
    }
    // newFilename = filename + ".replace";
    // std::cout << newFilename << std::endl;
    return 0;}
}
