#ifndef _bug7165725$GoldenElement_h_
#define _bug7165725$GoldenElement_h_
//$ class bug7165725$GoldenElement
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$AbstractElement;
		}
	}
}

class bug7165725$GoldenElement : public ::java::lang::Object {
	$class(bug7165725$GoldenElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7165725$GoldenElement();
	void init$($String* goldenName, $Array<bug7165725$GoldenElement>* goldenChildren);
	virtual void checkStructureEquivalence(::javax::swing::text::AbstractDocument$AbstractElement* elem);
	$String* goldenName = nullptr;
	::java::util::List* goldenChildren = nullptr;
};

#endif // _bug7165725$GoldenElement_h_