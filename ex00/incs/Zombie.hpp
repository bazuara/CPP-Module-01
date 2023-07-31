/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:59:46 by bazuara           #+#    #+#             */
/*   Updated: 2023/07/31 14:02:42 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name) : name(name) {}
    ~Zombie();
    void announce();
};
