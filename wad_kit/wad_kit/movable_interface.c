//
//  movable_interface.c
//  wad_kit
//
//  Created by Евгений Лютц on 06.06.20.
//  Copyright © 2020 Eugene Lutz. All rights reserved.
//

#include "private_interface.h"


MOVABLE_ID movableGetId(MOVABLE* movable)
{
	assert(movable);
	return movable->movableId;
}


unsigned int movableGetNumMeshes(MOVABLE* movable)
{
	assert(movable);
	return movable->numMeshes;
}

unsigned int movableGetMeshIndex(MOVABLE* movable, unsigned int movableMeshIndex)
{
	assert(movable);
	assert(movableMeshIndex < movable->numMeshes);
	return movable->meshIndices[movableMeshIndex];
}

MESH* movableGetMesh(MOVABLE* movable, unsigned int movableMeshIndex, WK_WAD* wad)
{
	assert(movable);
	assert(movableMeshIndex < movable->numMeshes);
	assert(wad);
	
	unsigned int meshIndex = movable->meshIndices[movableMeshIndex];
	return wadGetMesh(wad, meshIndex);
}

unsigned int movableGetSkeletonIndex(MOVABLE* movable)
{
	assert(movable);
	return movable->skeletonIndex;
}

unsigned int movableGetNumAnimations(MOVABLE* movable)
{
	assert(movable);
	return movable->numAnimations;
}

ANIMATION* movableGetAnimation(MOVABLE* movable, unsigned int animationIndex)
{
	assert(movable);
	assert(animationIndex < movable->numAnimations);
	return &(movable->animations[animationIndex]);
}
