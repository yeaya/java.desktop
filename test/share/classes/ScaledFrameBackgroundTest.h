#ifndef _ScaledFrameBackgroundTest_h_
#define _ScaledFrameBackgroundTest_h_
//$ class ScaledFrameBackgroundTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BACKGROUND")
#undef BACKGROUND

namespace java {
	namespace awt {
		class Color;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export ScaledFrameBackgroundTest : public ::java::lang::Object {
	$class(ScaledFrameBackgroundTest, 0, ::java::lang::Object)
public:
	ScaledFrameBackgroundTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1($Array<::java::awt::Rectangle>* rects);
	static void lambda$main$2();
	static void main($StringArray* args);
	static ::java::awt::Color* BACKGROUND;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("BACKGROUND")

#endif // _ScaledFrameBackgroundTest_h_