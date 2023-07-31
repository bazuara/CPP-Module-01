/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:59:46 by bazuara           #+#    #+#             */
/*   Updated: 2023/07/31 18:17:28 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
private:
  std::string Name;

public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void setName(std::string name);
  void announce();
};
