//=============================================================================
//Copyright (c) 2013 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: RBSPIter.h $
// $Revision:$
// $Date:$
// $Author: Jonathan M Davis $
//=============================================================================

#include "MediaParser/RBSPIter.h"

using namespace MEDIA_PARSER;

RBSPIter& RBSPIter::operator++()
{
    if(_iter == _end)
        X_THROW(("Iterated RBSPIter passed its end"));

    if(*_iter == 0)
        ++_numZeroes;
    else
        _numZeroes = 0;

    ++_iter;

    if(_numZeroes == 2)
    {
        if(*_iter == 3)
        {
            if(++_iter == _end)
                X_THROW(("Invalid RBSP"));
            else
            {
                switch(*_iter)
                {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                        break;
                    default:
                        X_THROW(("Invalid RBSP"));
                }
            }

            _numZeroes = 0;
        }
    }

    return *this;
}


RBSPIter MEDIA_PARSER::GetRBSPFromNAL(const uint8_t* nalUnit, size_t length, RBSPIter* rbspEnd)
{
    for(const uint8_t* nalIter    = nalUnit,
                     * closeToEnd = nalUnit + length - 2;
        nalIter != closeToEnd;
        ++nalIter)
    {
        if(nalIter[0] == 0 && nalIter[1] == 0 && nalIter[2] == 1)
        {
            *rbspEnd = nalIter;
            return RBSPIter(nalUnit, nalIter);
        }
    }

    //For the case where there are no more NAL units in the buffer after this one.
    *rbspEnd = nalUnit + length;
    return RBSPIter(nalUnit, nalUnit + length);
}
