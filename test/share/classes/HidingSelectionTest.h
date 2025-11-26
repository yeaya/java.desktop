#ifndef _HidingSelectionTest_h_
#define _HidingSelectionTest_h_
//$ class HidingSelectionTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JMenu;
		class JTextField;
	}
}

class $export HidingSelectionTest : public ::java::lang::Object {
	$class(HidingSelectionTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HidingSelectionTest();
	void init$();
	static bool biEqual(::java::awt::image::BufferedImage* i1, ::java::awt::image::BufferedImage* i2);
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void lambda$main$3();
	static void main($StringArray* args);
	static ::javax::swing::JTextField* field1;
	static ::javax::swing::JTextField* field2;
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Rectangle* bounds;
	static ::javax::swing::JMenu* menu;
	static ::javax::swing::JTextField* anotherWindow;
	static ::java::awt::Point* menuLoc;
	static ::javax::swing::JFrame* frame2;
};

#endif // _HidingSelectionTest_h_