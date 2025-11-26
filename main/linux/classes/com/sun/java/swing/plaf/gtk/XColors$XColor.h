#ifndef _com_sun_java_swing_plaf_gtk_XColors$XColor_h_
#define _com_sun_java_swing_plaf_gtk_XColors$XColor_h_
//$ class com.sun.java.swing.plaf.gtk.XColors$XColor
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class XColors$XColor : public ::java::lang::Comparable {
	$class(XColors$XColor, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	XColors$XColor();
	void init$($String* name, int32_t red, int32_t green, int32_t blue);
	virtual int32_t compareTo(::com::sun::java::swing::plaf::gtk::XColors$XColor* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual ::java::awt::Color* toColor();
	$String* name = nullptr;
	int32_t red = 0;
	int32_t green = 0;
	int32_t blue = 0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_XColors$XColor_h_