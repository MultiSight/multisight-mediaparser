//=============================================================================
//Copyright (c) 2011 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: MJPEG4MediaParser.h $
// $Revision:$
// $Date:$
// $Author: Tony Di Croce $
//=============================================================================

#ifndef _MPEG4MediaParser_h_
#define _MPEG4MediaParser_h_

#include "MediaParser/Defines.h"
#include "XSDK/XSharedLib.h"

namespace MEDIA_PARSER
{
    class MPEG4Info;
    class MediaInfo;

    class MPEG4MediaParser
    {
    public:
        X_API MPEG4MediaParser(const uint8_t* buffer, const size_t bufferSize);
        X_API bool IsYourType(void) const;
        X_API bool Parse(MediaInfo &) const;
        X_API bool Parse(MPEG4Info &) const;
    private:
        MPEG4MediaParser(const MPEG4MediaParser &);
        MPEG4MediaParser & operator=(const MPEG4MediaParser &);

        const uint8_t*  _buffer;
        const size_t _bufferSize;
    };
};

#endif
