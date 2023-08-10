/********************************************************************
	Minecraft: Pocket Edition - Decompilation Project
	Copyright (C) 2023 iProgramInCpp

	The following code is licensed under the BSD 1 clause license.
	SPDX-License-Identifier: BSD-1-Clause
 ********************************************************************/

#pragma once

#include "Tile.hpp"

class OreTile : public Tile
{
public:
	OreTile(int id, int texture);

	int getResource(int, Random*) override;
	int getResourceCount(Random*) override;
	int getSpawnResourcesAuxValue(int) override;
};
