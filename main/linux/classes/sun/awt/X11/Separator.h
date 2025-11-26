#ifndef _sun_awt_X11_Separator_h_
#define _sun_awt_X11_Separator_h_
//$ class sun.awt.X11.Separator
//$ extends java.awt.Canvas

#include <java/awt/Canvas.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class Separator : public ::java::awt::Canvas {
	$class(Separator, $NO_CLASS_INIT, ::java::awt::Canvas)
public:
	Separator();
	void init$(int32_t length, int32_t thickness, int32_t orient);
	virtual void paint(::java::awt::Graphics* g) override;
	static const int32_t HORIZONTAL = 0;
	static const int32_t VERTICAL = 1;
	int32_t orientation = 0;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("VERTICAL")

#endif // _sun_awt_X11_Separator_h_