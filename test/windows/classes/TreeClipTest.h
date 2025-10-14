#ifndef _TreeClipTest_h_
#define _TreeClipTest_h_
//$ class TreeClipTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

class $export TreeClipTest : public ::java::lang::Object {
	$class(TreeClipTest, 0, ::java::lang::Object)
public:
	TreeClipTest();
	void init$();
	static bool checkImage(::java::awt::image::BufferedImage* img, int32_t clipY);
	static void main($StringArray* args);
	static bool passed;
};

#endif // _TreeClipTest_h_