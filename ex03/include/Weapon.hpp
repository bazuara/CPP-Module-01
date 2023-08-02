/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:56:32 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 18:07:26 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDE_WEAPON_HPP_
#define EX03_INCLUDE_WEAPON_HPP_

#include <string>

class Weapon {
 private:
  std::string Type;

 public:
  explicit Weapon(std::string type);
  void setType(std::string type);
  std::string getType();
};
#endif  // EX03_INCLUDE_WEAPON_HPP_
