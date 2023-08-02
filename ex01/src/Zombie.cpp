/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:06:35 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 11:57:56 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

// Zombie::Zombie(std::string name) : name(name) {}

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
  Name = name;
}

Zombie::~Zombie() {
  std::cout << "Zombie " << Name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
  Name = name;
}

void Zombie::announce() {
  std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
