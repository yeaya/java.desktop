#ifndef _javax_swing_border_Border_h_
#define _javax_swing_border_Border_h_
//$ interface javax.swing.border.Border
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $export Border : public ::java::lang::Object {
	$interface(Border, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) {return nullptr;}
	virtual bool isBorderOpaque() {return false;}
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {}
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_Border_h_