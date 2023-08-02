/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:30:05 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:53:00 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weaponRef) :
  WeaponRef(weaponRef), Name(name) {}

HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << Name
    << " attacks with their "
    << WeaponRef.getType() << std::endl;
}
