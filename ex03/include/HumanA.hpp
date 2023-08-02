/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:04:36 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:51:54 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDE_HUMANA_HPP_
#define EX03_INCLUDE_HUMANA_HPP_

#include <Weapon.hpp>
#include <string>

class HumanA {
 private:
  Weapon& WeaponRef;
  std::string Name;
 public:
  HumanA(std::string name, Weapon& weaponRef);
  ~HumanA();
  void attack();
};

#endif  // EX03_INCLUDE_HUMANA_HPP_
