#ifndef _Test8003400_h_
#define _Test8003400_h_
//$ class Test8003400
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OBJECTS")
#undef OBJECTS
#pragma push_macro("TITLE")
#undef TITLE

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class JTree;
	}
}

class $export Test8003400 : public ::java::lang::Object {
	$class(Test8003400, 0, ::java::lang::Object)
public:
	Test8003400();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static void lambda$main$0();
	static void main($StringArray* args);
	static $String* TITLE;
	static ::java::util::List* OBJECTS;
	static ::javax::swing::JScrollPane* pane;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTree* tree;
	static ::java::awt::Point* point;
	static ::java::awt::Rectangle* rect;
};

#pragma pop_macro("OBJECTS")
#pragma pop_macro("TITLE")

#endif // _Test8003400_h_