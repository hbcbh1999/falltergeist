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
 */

// C++ standard includes
#include <iostream>

// Falltergeist includes
#include "../../VM/Handlers/Opcode80BCHandler.h"
#include "../../Engine/CrossPlatform.h"
#include "../../VM/VM.h"
#include "../../Game/GameCritterObject.h"

// Third party includes

namespace Falltergeist
{

Opcode80BCHandler::Opcode80BCHandler(VM* vm) : OpcodeHandler(vm)
{
}

void Opcode80BCHandler::_run()
{
    _vm->pushDataPointer(_vm->owner());

    CrossPlatform::debug("[+] GameObject* self_obj()", DEBUG_SCRIPT);

}

}
