#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$StateType_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$StateType_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$StateType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ACTIVE")
#undef ACTIVE
#pragma push_macro("INSENSITIVE")
#undef INSENSITIVE
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("PRELIGHT")
#undef PRELIGHT
#pragma push_macro("SELECTED")
#undef SELECTED

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$StateType : public ::java::lang::Enum {
	$class(GTKConstants$StateType, 0, ::java::lang::Enum)
public:
	GTKConstants$StateType();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$StateType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$StateType>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* NORMAL;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* ACTIVE;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* PRELIGHT;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* SELECTED;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* INSENSITIVE;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$StateType>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ACTIVE")
#pragma pop_macro("INSENSITIVE")
#pragma pop_macro("NORMAL")
#pragma pop_macro("PRELIGHT")
#pragma pop_macro("SELECTED")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$StateType_h_