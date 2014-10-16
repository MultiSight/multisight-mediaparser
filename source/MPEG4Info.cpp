//=============================================================================
//Copyright (c) 2011 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: MPEG4Info.cpp $
// $Revision:$
// $Date:$
// $Author: Tony Di Croce $
//=============================================================================

#include "MediaParser/MPEG4Info.h"

using namespace MEDIA_PARSER;

MPEG4Info::MPEG4Info() :
  MediaInfo(),
  _videoObjectLayerShape( 0 ),
  _vopTimeIncrementResolution( 0 ),
  _fixedVOPRate( false ),
  _fixedVOPTimeIncrement( 0 ),
  _profileLevelID( 0 )
{
}

MPEG4Info::~MPEG4Info()
{
}

uint32_t MPEG4Info::GetVideoObjectLayerShape()
{
  return _videoObjectLayerShape;
}

uint32_t MPEG4Info::GetVOPTimeIncrementResolution()
{
  return _vopTimeIncrementResolution;
}

bool MPEG4Info::IsFixedVOPRate()
{
  return _fixedVOPRate;
}

uint32_t MPEG4Info::GetFixedVOPTimeIncrement()
{
  return _fixedVOPTimeIncrement;
}

uint8_t MPEG4Info::GetProfileLevelID()
{
  return _profileLevelID;
}
