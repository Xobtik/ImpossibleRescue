#ifndef _GCOBJDOOR_H_
#define _GCOBJDOOR_H_

#include "../../GCCocosInterface/GCFactory_ObjSpritePhysics.h"
#include "../../GCCocosInterface/GCObjSpritePhysics.h"

class CObjDoor
	: public CGCObjSpritePhysics
{
public:
	//////////////////////////////////////////////////////////////////////////
	// Constructor and Destructor
	//////////////////////////////////////////////////////////////////////////
	CObjDoor();
	virtual ~CObjDoor();

	//////////////////////////////////////////////////////////////////////////
	// GCFactory Marcos
	//////////////////////////////////////////////////////////////////////////
	GCFACTORY_DECLARE_CREATABLECLASS( CObjDoor );

	//////////////////////////////////////////////////////////////////////////
	// CGCObjSpritePhysics Virtual Methods
	//////////////////////////////////////////////////////////////////////////
	virtual void VOnResourceAcquire() override;
};
#endif