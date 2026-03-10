#include "pch.h"
#include "PrefabJouet.h"


PrefabJouet::PrefabJouet()
{
	gameManager = GameManager::GInstance();
	componentManager = gameManager->GComponentManager();
	id = gameManager->GNewEntityId();
}

PrefabJouet::~PrefabJouet() {}