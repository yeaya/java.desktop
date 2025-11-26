#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$Orientation_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$Orientation_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$Orientation
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$Orientation : public ::java::lang::Enum {
	$class(GTKConstants$Orientation, 0, ::java::lang::Enum)
public:
	GTKConstants$Orientation();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation* HORIZONTAL;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation* VERTICAL;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("VERTICAL")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$Orientation_h_