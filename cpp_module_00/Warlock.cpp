/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:40:43 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/09/19 12:53:27 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;   
}

Warlock::~Warlock()
{
    std::cout << name <<": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
    return name;
}

const std::string& Warlock::getTitle() const 
{
    return title;
}

void Warlock::setTitle(const std::string &str)
{
    title = str;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
