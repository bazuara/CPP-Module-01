/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:06:35 by bazuara           #+#    #+#             */
/*   Updated: 2023/07/31 14:06:41 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.h>

Zombie::~Zombie() {
  std::cout << "Zombie " << name << " has been destroyed" << std::endl;
}
void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
