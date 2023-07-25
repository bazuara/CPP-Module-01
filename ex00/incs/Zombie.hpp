/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:59:46 by bazuara           #+#    #+#             */
/*   Updated: 2023/03/02 17:00:44 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name) : name(name) {}
    ~Zombie() {
        std::cout << "Zombie " << name << " has been destroyed" << std::endl;
    }
    void announce() {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};
