// Based on "Design Patterns: Elements of Reusable Object-Oriented Software"
// book by Erich Gamma, John Vlissides, Ralph Johnson, and Richard Helm 
//
// Created by Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan.

#ifndef STRUCTURAL_FACADE_VARIABLE_NODE_INTERFACE_H_
#define STRUCTURAL_FACADE_VARIABLE_NODE_INTERFACE_H_

#include <string>

namespace structural
{
namespace facade
{
class VariableNodeInterface
{
	public:
	virtual ~VariableNodeInterface() { }

	virtual std::string name() const = 0;
};
}
}

#endif

