#ifndef _TestBadBreak_h_
#define _TestBadBreak_h_
//$ class TestBadBreak
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
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

class $export TestBadBreak : public ::java::lang::Object {
	$class(TestBadBreak, 0, ::java::lang::Object)
public:
	TestBadBreak();
	void init$();
	static void lambda$test$0();
	static void main($StringArray* args);
	static void test($String* text, ::java::awt::image::BufferedImage* i1);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	static $String* withCombiningDiaeresis;
	static $String* withoutCombiningDiaeresis;
};

#endif // _TestBadBreak_h_