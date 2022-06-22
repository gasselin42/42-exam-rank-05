/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:59:26 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:58:21 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string& _name, const std::string& _title)
{
	this->name = _name;
	this->title = _title;
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
	std::map<std::string, ASpell *>::iterator it = spells.begin();
	while (it != spells.end())
	{
		delete it->second;
		it++;
	}
	spells.clear();
}

std::string const & Warlock::getName() const { return (name); }
std::string const & Warlock::getTitle() const { return (title); }

void Warlock::setTitle(const std::string& _title) { title = _title; }

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell * spell)
{
	if (spell)
		spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string const & spell)
{
	std::map<std::string, ASpell *>::iterator it = spells.find(spell);
	if (it != spells.end())
	{
		delete it->second;
		spells.erase(it);
	}
}

void Warlock::launchSpell(std::string const & spell, ATarget & target)
{
	std::map<std::string, ASpell *>::iterator it = spells.find(spell);
	if (it != spells.end())
		(it->second)->launch(target);
}

