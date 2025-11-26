#ifndef _com_sun_java_swing_plaf_gtk_PangoFonts_h_
#define _com_sun_java_swing_plaf_gtk_PangoFonts_h_
//$ class com.sun.java.swing.plaf.gtk.PangoFonts
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHARS_DIGITS")
#undef CHARS_DIGITS

namespace java {
	namespace awt {
		class Font;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class PangoFonts : public ::java::lang::Object {
	$class(PangoFonts, 0, ::java::lang::Object)
public:
	PangoFonts();
	void init$();
	static int32_t getFontSize($String* pangoName);
	static ::java::awt::Font* lookupFont($String* pangoName);
	static $String* CHARS_DIGITS;
	static double fontScale;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("CHARS_DIGITS")

#endif // _com_sun_java_swing_plaf_gtk_PangoFonts_h_