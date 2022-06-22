/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:00:03 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:39:27 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

#include <map>

class SpellBook {
	private:
		std::map<std::string, ASpell *> book;

		SpellBook & operator=(SpellBook const &);
		SpellBook(SpellBook const &);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		ASpell * createSpell(std::string const &);
};