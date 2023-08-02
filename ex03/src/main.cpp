/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:55:32 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:57:15 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <HumanB.hpp>
#include <Weapon.hpp>
#include <iostream>

int main(void) {
  Weapon  club1 = Weapon("crude spiked club");
  HumanA bob("Bob", club1);
  bob.attack();
  club1.setType("some other type of club");
  bob.attack();

  Weapon  club2 = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(club2);
  jim.attack();
  club2.setType("some other type of club");
  jim.attack();

  std::cout << "---System stopped---\n"
               "Check for leaks with 'leaks  UnnecessaryViolence'\n"
               "Press enter when done"
            << std::endl;
  getchar();
}
