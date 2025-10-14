#ifndef _PressedIconTest_h_
#define _PressedIconTest_h_
//$ class PressedIconTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COLOR_1X")
#undef COLOR_1X
#pragma push_macro("COLOR_2X")
#undef COLOR_2X
#pragma push_macro("IMAGE_SIZE")
#undef IMAGE_SIZE

namespace java {
	namespace awt {
		class Color;
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
	}
}

class $export PressedIconTest : public ::java::lang::Object {
	$class(PressedIconTest, 0, ::java::lang::Object)
public:
	PressedIconTest();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::image::BufferedImage* generateImage(int32_t scale, ::java::awt::Color* c);
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static bool similar(::java::awt::Color* c1, ::java::awt::Color* c2);
	static bool similar(int32_t n, int32_t m);
	static const int32_t IMAGE_SIZE = 300;
	static ::java::awt::Color* COLOR_1X;
	static ::java::awt::Color* COLOR_2X;
	static ::javax::swing::JFrame* frame;
	static $volatile(double) scale;
	static $volatile(int32_t) centerX;
	static $volatile(int32_t) centerY;
};

#pragma pop_macro("COLOR_1X")
#pragma pop_macro("COLOR_2X")
#pragma pop_macro("IMAGE_SIZE")

#endif // _PressedIconTest_h_