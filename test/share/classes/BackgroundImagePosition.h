#ifndef _BackgroundImagePosition_h_
#define _BackgroundImagePosition_h_
//$ class BackgroundImagePosition
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIZE")
#undef SIZE

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export BackgroundImagePosition : public ::java::lang::Object {
	$class(BackgroundImagePosition, 0, ::java::lang::Object)
public:
	BackgroundImagePosition();
	void init$();
	static void compareImages(::java::awt::image::BufferedImage* img1, ::java::awt::image::BufferedImage* img2);
	static void lambda$test$0($String* x, $String* y, ::java::awt::image::BufferedImage* bi);
	static void main($StringArray* args);
	static ::java::awt::image::BufferedImage* test($String* x, $String* y);
	static ::java::util::List* pos;
	static const int32_t SIZE = 300;
};

#pragma pop_macro("SIZE")

#endif // _BackgroundImagePosition_h_