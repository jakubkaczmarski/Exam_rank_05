/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:25:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/09/19 13:41:28 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ASpell
{
    public:
    ASpell(std::string name, str::string effects);
    std::string getName() const;
    std::string getEffects() const;
    virtual ASpell *clone() const = 0;
    protected:
    std::string name;
    std::string effects;
};