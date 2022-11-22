#ifndef OOP_LB2_WEAPONUPGRADER_H
#define OOP_LB2_WEAPONUPGRADER_H

#include "PlayerEvent.h"

class WeaponUpgrader: public PlayerEvent{
    void make_event(Player* player, Field* field, Cell* cell) override;
};

#endif