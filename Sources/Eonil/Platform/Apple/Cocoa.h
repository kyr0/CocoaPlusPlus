//
//  Cocoa.h
//  Cocoa++
//
//  Created by Hoon H. on 14/4/24.
//  Copyright (c) 2014 Eonil. All rights reserved.
//

#pragma once

#ifndef __cplusplus
#error	"This library is C++ only library. Include only in a C++ code context."
#endif



#include "Common.h"

#include "CoreFoundation/Type.h"
#include "CoreFoundation/Data.h"
#include "CoreGraphics/Rect.h"
#include "CoreGraphics/Color.h"
#include "CoreGraphics/DataProvider.h"
#include "CoreGraphics/Image.h"

#ifdef __OBJC__
#include "ObjectiveC/Any.h"
#include "ObjectiveC/None.h"
#include "CoreAnimation/Layer.h"
#include "Foundation/Object.h"
#include "AppKit/Color.h"
#include "AppKit/View.h"
#include "AppKit/Control.h"
#include "AppKit/TableView.h"
#include "AppKit/Responder.h"
#include "AppKit/Window.h"
#endif
