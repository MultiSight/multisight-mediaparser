//=============================================================================
//Copyright (c) 2011 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: MediaInfo.cpp $
// $Revision:$
// $Date:$
// $Author: Tony Di Croce $
//=============================================================================

#include "MediaParser/MediaInfo.h"

#include <cstring>

using namespace std;
using namespace MEDIA_PARSER;

MediaInfo::MediaInfo() :
    _hasStreamInfo(false),
    _frameType(FRAME_TYPE_UNKNOWN),
    _frameWidth(0),
    _frameHeight(0),
    _frameRate(0),
    _bitRate(0),
    _mediaType(MEDIA_TYPE_UNKNOWN),
    _chromaFormat(CHROMA_FORMAT_UNKNOWN),
    _containsKeyFrame(false),
    _nalUnits(),
    _userData(),
    _sdpCodecData()
{
}


vector<NALUnit> MediaInfo::GetNALUnits(int type) const
{
    vector<NALUnit> retval;

    for(size_t i = 0, e = _nalUnits.size(); i < e; ++i)
    {
        if(_nalUnits[i].type == type)
            retval.push_back(_nalUnits[i]);
    }

    return retval;
}
