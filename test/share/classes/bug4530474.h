#ifndef _bug4530474_h_
#define _bug4530474_h_
//$ class bug4530474
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_COLOR")
#undef TEST_COLOR

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

class $export bug4530474 : public ::java::lang::Object {
	$class(bug4530474, 0, ::java::lang::Object)
public:
	bug4530474();
	void init$();
	static void createAndShowGUI();
	static void main($StringArray* args);
	static ::java::awt::Color* TEST_COLOR;
	static ::javax::swing::JEditorPane* jep;
};

#pragma pop_macro("TEST_COLOR")

#endif // _bug4530474_h_