#ifndef _com_sun_java_swing_plaf_gtk_GTKConstants$ExpanderStyle_h_
#define _com_sun_java_swing_plaf_gtk_GTKConstants$ExpanderStyle_h_
//$ class com.sun.java.swing.plaf.gtk.GTKConstants$ExpanderStyle
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("COLLAPSED")
#undef COLLAPSED
#pragma push_macro("EXPANDED")
#undef EXPANDED
#pragma push_macro("SEMI_COLLAPSED")
#undef SEMI_COLLAPSED
#pragma push_macro("SEMI_EXPANDED")
#undef SEMI_EXPANDED

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKConstants$ExpanderStyle : public ::java::lang::Enum {
	$class(GTKConstants$ExpanderStyle, 0, ::java::lang::Enum)
public:
	GTKConstants$ExpanderStyle();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle* COLLAPSED;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle* SEMI_COLLAPSED;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle* SEMI_EXPANDED;
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle* EXPANDED;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("COLLAPSED")
#pragma pop_macro("EXPANDED")
#pragma pop_macro("SEMI_COLLAPSED")
#pragma pop_macro("SEMI_EXPANDED")

#endif // _com_sun_java_swing_plaf_gtk_GTKConstants$ExpanderStyle_h_