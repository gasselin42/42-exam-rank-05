/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:35:24 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:47:05 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::~ASpell() {}

ASpell::ASpell(ASpell const & rhs) { *this = rhs; }

ASpell::ASpell(std::string const & _name, std::string const & _effects)
{
	this->name = _name;
	this->effects = _effects;
}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	name = rhs.name;
	effects = rhs.effects;
	return (*this);
}

std::string const & ASpell::getName() const { return (name); }
std::string const & ASpell::getEffects() const { return (effects); }

void ASpell::launch(ATarget const & target) { target.getHitBySpell((*this)); }