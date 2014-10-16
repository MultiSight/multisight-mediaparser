//=============================================================================
//Copyright (c) 2011 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: MJPEGInfo.h $
// $Revision:$
// $Date:$
// $Author: Tony Di Croce $
//=============================================================================

#ifndef MJPEGInfo_h
#define MJPEGInfo_h

#include "MediaParser/MediaInfo.h"
#include "XSDK/XSharedLib.h"

namespace MEDIA_PARSER
{

class MediaParser;
class MJPEGMediaParser;

class MJPEGInfo : public MediaInfo
{
  friend class MediaParser;
public:
  X_API MJPEGInfo();
  X_API virtual ~MJPEGInfo();

private:
  MJPEGInfo( const MJPEGInfo& obj );
  MJPEGInfo& operator = ( const MJPEGInfo& obj );
};

};

#endif
