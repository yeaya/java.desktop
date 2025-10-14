#ifndef _javax_swing_Painter_h_
#define _javax_swing_Painter_h_
//$ interface javax.swing.Painter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics2D;
	}
}

namespace javax {
	namespace swing {

class $import Painter : public ::java::lang::Object {
	$interface(Painter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paint(::java::awt::Graphics2D* g, Object$* object, int32_t width, int32_t height) {}
};

	} // swing
} // javax

#endif // _javax_swing_Painter_h_