/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:30:05 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:53:31 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name) : Name(name), WeaponPtr(NULL) {}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& weaponPtr) {
  WeaponPtr = &weaponPtr;
}

void HumanB::attack() {
  if(!WeaponPtr)
    std::cout << Name
      << " has no weapon to attack with" << std::endl;
  else
    std::cout << Name
      << " attacks with their "
      << WeaponPtr->getType() << std::endl;
}
