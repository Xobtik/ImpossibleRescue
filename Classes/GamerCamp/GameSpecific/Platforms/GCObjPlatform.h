////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Alex Darby 2018
// Distributed under the MIT license - see readme.md
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef _GCOBJPLATFORMS_H_
#define _GCOBJPLATFORMS_H_

#include "../../GCCocosInterface/GCFactory_ObjSpritePhysics.h"
#include "../../GCCocosInterface/GCObjSpritePhysics.h"

class CGCObjPlatform
	: public CGCObjSpritePhysics
{
protected:
	// Current action pointer, store it for stopping action
	cocos2d::Action*	m_pCurrentAction;

public:
	//////////////////////////////////////////////////////////////////////////
	// Constructor
	//////////////////////////////////////////////////////////////////////////
	CGCObjPlatform();

	// Overloaded Constructor
	CGCObjPlatform( GCTypeID idDerivedType );

	//////////////////////////////////////////////////////////////////////////
	// GCFactory Marcos
	//////////////////////////////////////////////////////////////////////////
	GCFACTORY_DECLARE_CREATABLECLASS( CGCObjPlatform );
};
#endif