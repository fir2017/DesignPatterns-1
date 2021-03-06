// Based on "Design Patterns: Elements of Reusable Object-Oriented Software"
// book by Erich Gamma, John Vlissides, Ralph Johnson, and Richard Helm 
//
// Created by Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan.

#ifndef STRUCTURAL_PROXY_TEXT_DOCUMENT_H_
#define STRUCTURAL_PROXY_TEXT_DOCUMENT_H_

#include "graphic_interface.h"

namespace structural
{
namespace proxy
{
class TextDocument
{
	public:
	TextDocument();

	void Insert(GraphicInterface*);
	const commons::Point<float> &GetExtent();

	private:
	GraphicInterface* graphic_;
	commons::Point<float> extent_;
};
}
}

#endif

