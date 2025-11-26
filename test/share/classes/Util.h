#ifndef _Util_h_
#define _Util_h_
//$ class Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
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
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}

class $export Util : public ::java::lang::Object {
	$class(Util, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Util();
	void init$();
	static bool compareBufferedImages(::java::awt::image::BufferedImage* bufferedImage0, ::java::awt::image::BufferedImage* bufferedImage1);
	static void convertRectToScreen(::java::awt::Rectangle* r, ::java::awt::Component* c);
	static ::javax::swing::JDialog* createModalDialogWithPassFailButtons($String* failString);
	static ::java::awt::Component* findSubComponent(::java::awt::Component* parent, $String* className);
	static void generateOOME();
	static ::java::awt::Point* getCenterPoint(::java::awt::Component* component);
	static ::java::util::ArrayList* getKeyCodesFromKeyMask(int32_t modifiers);
	static ::java::util::ArrayList* getSystemMnemonicKeyCodes();
	static void glide(::java::awt::Robot* robot, int32_t x0, int32_t y0, int32_t x1, int32_t y1);
	static void hitKeys(::java::awt::Robot* robot, $ints* keys);
	static void hitMnemonics(::java::awt::Robot* robot, $ints* keys);
	static $Object* invokeOnEDT(::java::util::concurrent::Callable* task);
};

#endif // _Util_h_