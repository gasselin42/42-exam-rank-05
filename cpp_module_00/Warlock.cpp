/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:59:26 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:58:02 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const & _name, std::string const & _title)
{
	this->name = _name;
	this->title = _title;
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
}

std::string const & Warlock::getName() const { return (name); }
std::string const & Warlock::getTitle() const { return (title); }

void Warlock::setTitle(std::string const & _title) { title = _title; }

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}