/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:13:53 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:09:26 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string type) {
  Type = type;
}

void Weapon::setType(std::string type) {
  Type = type;
}

std::string Weapon::getType() {
  return Type;
}

