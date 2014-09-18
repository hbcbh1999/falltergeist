/*
 * Copyright 2012-2014 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef FALLTERGEIST_GAMEITEMOBJECT_H
#define FALLTERGEIST_GAMEITEMOBJECT_H

// C++ standard includes

// Falltergeist includes
#include "../Game/GameObject.h"

// Third party includes

namespace Falltergeist
{

class GameItemObject : public GameObject
{
protected:
    unsigned int _amount = 1;
    unsigned int _weight = 0;
    int _inventoryFID = -1;
    std::shared_ptr<ActiveUI> _inventoryUi;
    std::shared_ptr<ActiveUI> _inventorySlotUi;
    std::shared_ptr<ActiveUI> _inventoryDragUi;
    virtual void _generateUi();
public:
    GameItemObject();
    virtual ~GameItemObject();

    unsigned int amount();
    void setAmount(unsigned int value);

    unsigned int weight();
    void setWeight(unsigned int value);

    int inventoryFID();
    void setInventoryFID(int value);

    std::shared_ptr<ActiveUI> inventoryUi();
    std::shared_ptr<ActiveUI> inventorySlotUi();
    std::shared_ptr<ActiveUI> inventoryDragUi();
};

}
#endif // FALLTERGEIST_GAMEITEMOBJECT_H
