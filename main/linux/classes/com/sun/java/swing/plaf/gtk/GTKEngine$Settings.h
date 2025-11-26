#ifndef _com_sun_java_swing_plaf_gtk_GTKEngine$Settings_h_
#define _com_sun_java_swing_plaf_gtk_GTKEngine$Settings_h_
//$ class com.sun.java.swing.plaf.gtk.GTKEngine$Settings
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("GTK_CURSOR_BLINK")
#undef GTK_CURSOR_BLINK
#pragma push_macro("GTK_CURSOR_BLINK_TIME")
#undef GTK_CURSOR_BLINK_TIME
#pragma push_macro("GTK_FONT_NAME")
#undef GTK_FONT_NAME
#pragma push_macro("GTK_ICON_SIZES")
#undef GTK_ICON_SIZES

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKEngine$Settings : public ::java::lang::Enum {
	$class(GTKEngine$Settings, 0, ::java::lang::Enum)
public:
	GTKEngine$Settings();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$Settings>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$Settings>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings* GTK_FONT_NAME;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings* GTK_ICON_SIZES;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings* GTK_CURSOR_BLINK;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings* GTK_CURSOR_BLINK_TIME;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$Settings>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("GTK_CURSOR_BLINK")
#pragma pop_macro("GTK_CURSOR_BLINK_TIME")
#pragma pop_macro("GTK_FONT_NAME")
#pragma pop_macro("GTK_ICON_SIZES")

#endif // _com_sun_java_swing_plaf_gtk_GTKEngine$Settings_h_