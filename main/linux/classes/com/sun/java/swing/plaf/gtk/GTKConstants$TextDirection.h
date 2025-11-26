#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$TextDirection_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$TextDirection_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LTR")
#undef LTR
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("RTL")
#undef RTL

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$TextDirection : public ::java::lang::Enum {
	$class(GTKConstants$TextDirection, 0, ::java::lang::Enum)
public:
	GTKConstants$TextDirection();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection* NONE;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection* LTR;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection* RTL;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("LTR")
#pragma pop_macro("NONE")
#pragma pop_macro("RTL")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$TextDirection_h_