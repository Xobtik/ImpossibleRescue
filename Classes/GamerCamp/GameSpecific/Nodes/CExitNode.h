#ifndef _CEXITNODE_H_
#define _CEXITNODE_H_

#include "../../GCCocosInterface/GCFactory_ObjSpritePhysics.h"
#include "../../GCCocosInterface/GCObjSpritePhysics.h"

class CExitNode
	: public CGCObjSpritePhysics
{
public:
	//////////////////////////////////////////////////////////////////////////
	// Constructor
	//////////////////////////////////////////////////////////////////////////
	CExitNode();

	//////////////////////////////////////////////////////////////////////////
	// GCFactory Marcos
	//////////////////////////////////////////////////////////////////////////
	GCFACTORY_DECLARE_CREATABLECLASS( CExitNode );

	//////////////////////////////////////////////////////////////////////////
	// CGCObjSpritePhysics Virtual Methods
	//////////////////////////////////////////////////////////////////////////
	virtual void VOnResourceAcquire() override;
};
#endif