/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:11:20 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/04 22:21:03 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <iostream>
#include <fstream>

void sedIsForLoosers(std::string &str_, std::string s1, std::string s2) {
  size_t pos = 0;

  if (s1.empty() || s2.empty() || str_.empty())
    return;
  if (s1.length() > str_.length() || s2.length() > str_.length())
    return;
  while (pos < str_.length() + 1) {
    pos = str_.find(s1, pos);
    if (pos >= 0 && pos < str_.length() + 1) {
      str_.erase(pos, s1.length());
      str_.insert(pos, s2);
      pos += s2.length();
    }
  }
}

int main(int argc, char **argv) {
  std::string filename, newFilename;
  std::string line;
  std::string s1, s2;
  std::ifstream inputFile;
  std::ofstream outputFile;

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
    newFilename = filename + ".replace";
    outputFile.open(newFilename);

    // Load words
    s1 = argv[2];
    s2 = argv[3];

    // Openfile and read line by line
    if (inputFile.is_open() && outputFile.is_open()) {
      while (getline(inputFile, line)) {
        std::cout << line << '\n';
        sedIsForLoosers(line, s1, s2);
        std::cout << line << '\n';
        outputFile << line << std::endl;
      }
      inputFile.close();
      outputFile.close();
    } else {
      std::cout << "Sorry, something went wrong with your files" << std::endl;
      return 3;
    }
    return 0;}
}
