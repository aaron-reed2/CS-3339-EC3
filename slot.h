/*********************
 * Name: Aaron Reed
 * Extra Credit 3: Cache Simulator
 * Professor: Randy Klepetko
 * Purpose: This program illustrates how a cache works by assinging slots for different memory addresses.
**********************/

#ifndef SLOT_H
#define SLOT_H

struct Slot {
    int tag;
    bool valid;
};

#endif