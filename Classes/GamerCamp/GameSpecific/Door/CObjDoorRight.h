#ifndef _GCOBJDOORRIGHT_H_
#define _GCOBJDOORRIGHT_H_

#include "../../GCCocosInterface/GCFactory_ObjSpritePhysics.h"
#include "../../GCCocosInterface/GCObjSpritePhysics.h"

class CObjDoorRight
	: public CGCObjSpritePhysics
{
private:
	// Current action, it is used to stop action
	cocos2d::Action* m_pCurrentAction;

public:
	//////////////////////////////////////////////////////////////////////////
	// Constructor and Destructor
	//////////////////////////////////////////////////////////////////////////
	CObjDoorRight();
	virtual ~CObjDoorRight();

	//////////////////////////////////////////////////////////////////////////
	// GCFactory Marcos
	//////////////////////////////////////////////////////////////////////////
	GCFACTORY_DECLARE_CREATABLECLASS( CObjDoorRight );

	//////////////////////////////////////////////////////////////////////////
	// CGCObjSpritePhysics Virtual Methods
	//////////////////////////////////////////////////////////////////////////
	virtual void VOnResourceAcquire() override;
	virtual void VOnResurrected() override;
	virtual void VOnReset() override;
};
#endif