#ifndef _bug8057791_h_
#define _bug8057791_h_
//$ class bug8057791
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SELECTED_INDEX")
#undef SELECTED_INDEX

namespace java {
	namespace awt {
		class Color;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class DefaultListModel;
		class JFrame;
		class JList;
	}
}

class $export bug8057791 : public ::java::lang::Object {
	$class(bug8057791, 0, ::java::lang::Object)
public:
	bug8057791();
	void init$();
	static void checkColor(::java::awt::Color* colorCheck, ::java::awt::Rectangle* bounds);
	static void checkNotColor(::java::awt::Color* colorCheck, ::java::awt::Rectangle* bounds);
	static void cleanUp();
	static void createUI();
	static bool findColor(::java::awt::Color* colorCheck, ::java::awt::Rectangle* bounds);
	static bool isMac();
	static void main($StringArray* args);
	static void runColorTestCase();
	static void runSteps();
	static bool tryNimbusLookAndFeel();
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JList* list;
	static ::javax::swing::DefaultListModel* model;
	static ::java::awt::Robot* robot;
	static const int32_t SELECTED_INDEX = 0;
	static $volatile($String*) errorString;
};

#pragma pop_macro("SELECTED_INDEX")

#endif // _bug8057791_h_