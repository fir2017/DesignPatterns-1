// Based on "Design Patterns: Elements of Reusable Object-Oriented Software"
// book by Erich Gamma, John Vlissides, Ralph Johnson, and Richard Helm 
//
// Created by Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan.

#ifndef CREATIONAL_ABSTRACTFACTORY_ENCHANTED_MAZE_FACTORY_H_
#define CREATIONAL_ABSTRACTFACTORY_ENCHANTED_MAZE_FACTORY_H_

#include "maze_factory.h"

#include "../mazeparts/spell.h"

namespace patterns
{
	class EnchantedMazeFactory : public MazeFactoryInterface
	{
	public:
		virtual Maze* MakeMaze() const override;
		virtual Wall* MakeWall() const override;
		virtual Room* MakeRoom(const int& room_number) const override;
		virtual Door* MakeDoor(const Room& first_room, const Room& second_room) const override;

	protected:
		Spell* CastSpell() const;
	};
}

#endif