#ifndef _com_sun_java_swing_plaf_gtk_XColors_h_
#define _com_sun_java_swing_plaf_gtk_XColors_h_
//$ class com.sun.java.swing.plaf.gtk.XColors
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class XColors$XColor;
					}
				}
			}
		}
	}
}
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

class XColors : public ::java::lang::Object {
	$class(XColors, 0, ::java::lang::Object)
public:
	XColors();
	void init$();
	static ::java::awt::Color* lookupColor($String* name);
	static ::com::sun::java::swing::plaf::gtk::XColors$XColor* key;
	static $Array<::com::sun::java::swing::plaf::gtk::XColors$XColor>* colors;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_XColors_h_