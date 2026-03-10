#pragma once

#include "Manager/GameManager.h"
#include "Component/TransformComponent.h"

class PrefabJouet 
{
public:
	TransformComponent* transform = nullptr; 

	PrefabJouet();
	virtual ~PrefabJouet();

	uint64 GID() const { return id; }
protected:
	GameManager* gameManager = nullptr;
	ComponentManager* componentManager = nullptr;
	uint32 id;

};
