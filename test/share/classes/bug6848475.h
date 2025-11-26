#ifndef _bug6848475_h_
#define _bug6848475_h_
//$ class bug6848475
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JSlider;
	}
}

class $export bug6848475 : public ::java::lang::Object {
	$class(bug6848475, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6848475();
	void init$();
	static ::java::awt::Rectangle* getThumbRectField();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JSlider* slider;
	static ::java::awt::Robot* robot;
	static int32_t thumbRectX;
};

#endif // _bug6848475_h_