//
//  telefonGen3.hpp
//  Zadatak21Cas6
//
//  Created by Milovan Tomasevic on 18/03/2017.
//  Copyright © 2017 Milovan Tomasevic. All rights reserved.
//

#ifndef TELEFONGEN3_HPP_INCLUDED
#define TELEFONGEN3_HPP_INCLUDED

#include "videoKamera.hpp"
#include "telefonGen2.hpp"

class TelefonGen3 : public TelefonGen2 {
    
protected:
    VideoKamera vk;
    
public:
    TelefonGen3() : TelefonGen2(), vk() {} // moze i samo TelefonGen3() {}
    
    TelefonGen3(int mp, int fsp, string broj) : TelefonGen2(mp, fsp, broj), vk(mp,fsp) {}
    
    int getVideoCounter() const {
        return vk.getVideoCounter();
    }
    
    bool snimiVideo(int sec){
        return vk.snimaj(sec);
    }
    
};

#endif // TELEFONGEN3_HPP_INCLUDED
