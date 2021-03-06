/*! 
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Copyright(c) 2013 Apogee Instruments, Inc. 
*
* \class AspenData 
* \brief Aspen platform constants 
* 
*/ 


#ifndef ASPENDATA_INCLUDE_H__ 
#define ASPENDATA_INCLUDE_H__ 

#include "PlatformData.h"

class AspenData : public PlatformData
{ 
    public: 
        AspenData();
        virtual ~AspenData(); 

    private:
        //disabling the copy ctor and assignment operator
        //generated by the compiler - don't want them
        //Effective C++ Item 6
        AspenData(const AspenData&);
        AspenData& operator=(AspenData&);

}; 

#endif
