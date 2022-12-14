#ifndef OOP_LB2_GAME_H
#define OOP_LB2_GAME_H

#include "SFML/Graphics.hpp"

#include "../Core/Field.h"
#include "../Drawing/FieldDraw.h"
#include "../Core/Player.h"

#include "../Control/CommandReader.h"

#include "../Command/ConfigFile.h"
#include "../Command/Mediator.h"
#include "../Command/Handler.h"

#include "../Logging/Message.h"
#include "../Logging/Logger.h"
#include "../Logging/FileLog.h"
#include "../Logging/ConsoleLog.h"
#include "../Logging/Log.h"

#include "../Logging/ErrorLog.h"
#include "../Logging/ObjectLog.h"
#include "../Logging/StatusLog.h"

#include "../Observing/Observer.h"

#include "../FieldGeneration/LevelGeneration.h"

class Game{

public:
    void start_game();
};

#endif