/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:11:20 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/03 23:32:39 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void sedIsForLoosers(std::string &str_, std::string s1, std::string s2) {
  size_t pos = 0;

  // std::cout << "DEBUG: \n" <<
  //   "s1: " << s1 << "\n" <<
  //   "s2: " << s2 << "\n" <<
  //   "line: " << str_ << "\n" <<
  //   std::endl;
  if (s1.empty() || s2.empty() || str_.empty())
    return;
  if (s1.length() > str_.length() || s2.length() > str_.length())
    return;
  while (pos != std::string::npos) {
    pos = str_.find(s1);
    if (pos >= 0 && pos != std::string::npos) {
      str_.erase(pos, s1.length());
      str_.insert(pos, s2);
    }
  }
}

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
    // Load words
    s1 = argv[2];
    s2 = argv[3];
    if (inputFile.is_open()) {
      while (getline(inputFile, line)) {
        std::cout << line << '\n';
        sedIsForLoosers(line, s1, s2);
        std::cout << line << '\n';
      }
      inputFile.close();
    }
    // newFilename = filename + ".replace";
    // std::cout << newFilename << std::endl;
    return 0;}
}
