/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:37:50 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/05 21:19:11 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

// Public

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::complain(std::string level) {
  void (Harl::*say)();
  std::string type[4] = {"debug", "info", "warning", "error"};
  for (int i = 0; i < 4; i++) {
  say  = &Harl::debug;
  }
  (this->*say)();
}

// Private

void Harl::debug(void) {
  std::cout << "I love having extra bacon "
    "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
    "I really do!" << std::endl;
}

void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. "
    "You didn’t put enough bacon in my burger! "
    "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << "I think I deserve to have some extra bacon for free. "
    "I’ve been coming for years whereas you started working here "
    "since last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "This is unacceptable! "
    "I want to speak to the manager now." << std::endl;
}

