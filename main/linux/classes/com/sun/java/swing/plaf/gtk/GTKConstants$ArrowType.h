#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$ArrowType_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$ArrowType_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$ArrowType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("UP")
#undef UP

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$ArrowType : public ::java::lang::Enum {
	$class(GTKConstants$ArrowType, 0, ::java::lang::Enum)
public:
	GTKConstants$ArrowType();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* UP;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* DOWN;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* LEFT;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType* RIGHT;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("DOWN")
#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")
#pragma pop_macro("UP")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$ArrowType_h_