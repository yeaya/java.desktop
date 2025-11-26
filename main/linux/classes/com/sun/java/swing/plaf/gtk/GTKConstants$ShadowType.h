#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$ShadowType_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$ShadowType_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$ShadowType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ETCHED_IN")
#undef ETCHED_IN
#pragma push_macro("ETCHED_OUT")
#undef ETCHED_OUT
#pragma push_macro("IN")
#undef IN
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("OUT")
#undef OUT

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$ShadowType : public ::java::lang::Enum {
	$class(GTKConstants$ShadowType, 0, ::java::lang::Enum)
public:
	GTKConstants$ShadowType();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* NONE;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* IN;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* OUT;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* ETCHED_IN;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType* ETCHED_OUT;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ETCHED_IN")
#pragma pop_macro("ETCHED_OUT")
#pragma pop_macro("IN")
#pragma pop_macro("NONE")
#pragma pop_macro("OUT")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$ShadowType_h_