/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedIsForLoosers.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:16:57 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/04 22:21:13 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sedIsForLoosers.hpp>

void sedIsForLoosers(std::string &str_, std::string s1, std::string s2) {
  size_t pos = 0;

  if (s1.empty() || s2.empty() || str_.empty())
    return;
  if (s1.length() > str_.length() || s2.length() > str_.length())
    return;
  while (pos < str_.length() + 1) {
    pos = str_.find(s1, pos);
    if (pos >= 0 && pos < str_.length() + 1) {
      str_.erase(pos, s1.length());
      str_.insert(pos, s2);
      pos += s2.length();
    }
  }
}
