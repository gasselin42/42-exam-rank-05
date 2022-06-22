/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:09:41 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:38:36 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it = book.begin();
	while (it != book.end())
	{
		delete it->second;
		it++;
	}
	book.clear();
}

void SpellBook::learnSpell(ASpell * spell)
{
	if (spell)
		book.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const & spell)
{
	std::map<std::string, ASpell *>::iterator it = book.find(spell);
	if (it != book.end())
	{
		delete it->second;
		book.erase(it);
	}
}

ASpell * SpellBook::createSpell(std::string const & spell)
{
	std::map<std::string, ASpell *>::iterator it = book.find(spell);
	if (it != book.end())
		return (book[spell]);
	return (NULL);
}