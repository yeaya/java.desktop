#ifndef _sun_swing_PrintColorUIResource_h_
#define _sun_swing_PrintColorUIResource_h_
//$ class sun.swing.PrintColorUIResource
//$ extends javax.swing.plaf.ColorUIResource

#include <javax/swing/plaf/ColorUIResource.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace sun {
	namespace swing {

class $import PrintColorUIResource : public ::javax::swing::plaf::ColorUIResource {
	$class(PrintColorUIResource, $NO_CLASS_INIT, ::javax::swing::plaf::ColorUIResource)
public:
	PrintColorUIResource();
	void init$(int32_t rgb, ::java::awt::Color* printColor);
	virtual ::java::awt::Color* getPrintColor();
	$Object* writeReplace();
	::java::awt::Color* printColor = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_PrintColorUIResource_h_