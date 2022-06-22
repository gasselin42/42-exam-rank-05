/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:33:08 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:40:47 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget *>::iterator it = tgt.begin();
	while (it != tgt.end())
	{
		delete it->second;
		it++;
	}
	tgt.clear();
}

void TargetGenerator::learnTargetType(ATarget * target)
{
	if (target)
		tgt.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const & target)
{
	std::map<std::string, ATarget *>::iterator it = tgt.find(target);
	if (it != tgt.end())
	{
		delete it->second;
		tgt.erase(it);
	}
}

ATarget * TargetGenerator::createTarget(std::string const & target)
{
	std::map<std::string, ATarget *>::iterator it = tgt.find(target);
	if (it != tgt.end())
		return (tgt[target]);
	return (NULL);
}