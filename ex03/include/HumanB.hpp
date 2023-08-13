/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:04:36 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:53:49 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include <string>
#include <Weapon.hpp>

class HumanB {
 private:
  Weapon* WeaponPtr;
  std::string Name;
 public:
  explicit HumanB(std::string name);
  ~HumanB();
  void attack();
  void setWeapon(Weapon& weaponPtr);
};

#endif  // HUMANB_HPP_
