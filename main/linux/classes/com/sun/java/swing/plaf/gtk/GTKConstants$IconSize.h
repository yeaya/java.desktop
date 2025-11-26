#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$IconSize_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$IconSize_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$IconSize
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BUTTON")
#undef BUTTON
#pragma push_macro("DIALOG")
#undef DIALOG
#pragma push_macro("DND")
#undef DND
#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("LARGE_TOOLBAR")
#undef LARGE_TOOLBAR
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("SMALL_TOOLBAR")
#undef SMALL_TOOLBAR

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$IconSize : public ::java::lang::Enum {
	$class(GTKConstants$IconSize, 0, ::java::lang::Enum)
public:
	GTKConstants$IconSize();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* INVALID;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* MENU;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* SMALL_TOOLBAR;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* LARGE_TOOLBAR;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* BUTTON;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* DND;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize* DIALOG;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$IconSize>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BUTTON")
#pragma pop_macro("DIALOG")
#pragma pop_macro("DND")
#pragma pop_macro("INVALID")
#pragma pop_macro("LARGE_TOOLBAR")
#pragma pop_macro("MENU")
#pragma pop_macro("SMALL_TOOLBAR")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$IconSize_h_