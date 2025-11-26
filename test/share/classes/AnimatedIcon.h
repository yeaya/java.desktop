#ifndef _AnimatedIcon_h_
#define _AnimatedIcon_h_
//$ class AnimatedIcon
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
	}
}

class $export AnimatedIcon : public ::java::lang::Object {
	$class(AnimatedIcon, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnimatedIcon();
	void init$();
	static void isAnimated(::java::awt::image::BufferedImage* bi, ::javax::swing::JButton* button);
	static void lambda$main$0();
	static void main($StringArray* args);
};

#endif // _AnimatedIcon_h_