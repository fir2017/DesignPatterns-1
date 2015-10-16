// Based on "Design Patterns: Elements of Reusable Object-Oriented Software"
// book by Erich Gamma, John Vlissides, Ralph Johnson, and Richard Helm 
//
// Created by Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan.

#ifndef CREATIONAL_ABSTRACTFACTORY_MAZE_FACTORY_H_
#define CREATIONAL_ABSTRACTFACTORY_MAZE_FACTORY_H_

#include "maze_factory_interface.h"

namespace patterns
{
	class MazeFactory : public MazeFactoryInterface
	{
	public:
		virtual Maze* MakeMaze() const override;
		virtual Wall* MakeWall() const override;
		virtual Room* MakeRoom(const int& room_number) const override;
		virtual Door* MakeDoor(const Room& first_room, const Room& second_room) const override;

		static MazeFactoryInterface* Instance();

	protected:
		MazeFactory();

	private:
		static MazeFactoryInterface* instance_;
	};
}

#endif