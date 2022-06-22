/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:50:59 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:52:48 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

ATarget::ATarget(std::string const & _type)
{
	this->type = _type;
}

ATarget::ATarget(ATarget const & rhs) { *this = rhs; }

ATarget & ATarget::operator=(ATarget const & rhs)
{
	type = rhs.type;
	return (*this);
}

std::string const & ATarget::getType() const { return (this->type); }

void ATarget::getHitBySpell(ASpell const & target) const
{
	std::cout << type << " has been " << target.getEffects() << "!\n";
}