//
//  MCThing.h
//  MacaroniCore
//
//  Created by Johannes Ekberg on 2013-01-15.
//  Copyright (c) 2013 MacaroniCode. All rights reserved.
//

#ifndef __MacaroniCore__MCThing__
#define __MacaroniCore__MCThing__

#include "../Core/MCObject.h"

class MCThing : public MCObject
{
public:
	MCThing(MCKernel *kernel);
	virtual ~MCThing();
};

#endif /* defined(__MacaroniCore__MCThing__) */
