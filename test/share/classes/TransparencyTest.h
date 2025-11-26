#ifndef _TransparencyTest_h_
#define _TransparencyTest_h_
//$ class TransparencyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("OPACITY")
#undef OPACITY
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class JFrame;
	}
}

class $export TransparencyTest : public ::java::lang::Object {
	$class(TransparencyTest, 0, ::java::lang::Object)
public:
	TransparencyTest();
	void init$();
	static void createAndShowGUI();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JDialog* dialog;
	static ::javax::swing::JDialog* backgroundDialog;
	static const int32_t WIDTH = 250;
	static const int32_t HEIGHT = 250;
	static float OPACITY;
	static $volatile(::java::awt::Point*) dlgPos;
};

#pragma pop_macro("HEIGHT")
#pragma pop_macro("OPACITY")
#pragma pop_macro("WIDTH")

#endif // _TransparencyTest_h_