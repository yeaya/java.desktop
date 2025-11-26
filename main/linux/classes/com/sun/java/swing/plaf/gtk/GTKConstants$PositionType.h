#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$PositionType_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$PositionType_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$PositionType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("TOP")
#undef TOP

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$PositionType : public ::java::lang::Enum {
	$class(GTKConstants$PositionType, 0, ::java::lang::Enum)
public:
	GTKConstants$PositionType();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* LEFT;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* RIGHT;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* TOP;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* BOTTOM;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BOTTOM")
#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")
#pragma pop_macro("TOP")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$PositionType_h_