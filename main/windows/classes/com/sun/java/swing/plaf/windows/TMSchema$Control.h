#ifndef _com_sun_java_swing_plaf_windows_TMSchema$Control_h_
#define _com_sun_java_swing_plaf_windows_TMSchema$Control_h_
//$ class com.sun.java.swing.plaf.windows.TMSchema$Control
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BUTTON")
#undef BUTTON
#pragma push_macro("COMBOBOX")
#undef COMBOBOX
#pragma push_macro("EDIT")
#undef EDIT
#pragma push_macro("HEADER")
#undef HEADER
#pragma push_macro("LISTBOX")
#undef LISTBOX
#pragma push_macro("LISTVIEW")
#undef LISTVIEW
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("PROGRESS")
#undef PROGRESS
#pragma push_macro("REBAR")
#undef REBAR
#pragma push_macro("SCROLLBAR")
#undef SCROLLBAR
#pragma push_macro("SPIN")
#undef SPIN
#pragma push_macro("TAB")
#undef TAB
#pragma push_macro("TOOLBAR")
#undef TOOLBAR
#pragma push_macro("TRACKBAR")
#undef TRACKBAR
#pragma push_macro("TREEVIEW")
#undef TREEVIEW
#pragma push_macro("WINDOW")
#undef WINDOW

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export TMSchema$Control : public ::java::lang::Enum {
	$class(TMSchema$Control, 0, ::java::lang::Enum)
public:
	TMSchema$Control();
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$Control>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$Control>* values();
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* BUTTON;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* COMBOBOX;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* EDIT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* HEADER;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* LISTBOX;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* LISTVIEW;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* MENU;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* PROGRESS;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* REBAR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* SCROLLBAR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* SPIN;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* TAB;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* TOOLBAR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* TRACKBAR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* TREEVIEW;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Control* WINDOW;
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$Control>* $VALUES;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BUTTON")
#pragma pop_macro("COMBOBOX")
#pragma pop_macro("EDIT")
#pragma pop_macro("HEADER")
#pragma pop_macro("LISTBOX")
#pragma pop_macro("LISTVIEW")
#pragma pop_macro("MENU")
#pragma pop_macro("PROGRESS")
#pragma pop_macro("REBAR")
#pragma pop_macro("SCROLLBAR")
#pragma pop_macro("SPIN")
#pragma pop_macro("TAB")
#pragma pop_macro("TOOLBAR")
#pragma pop_macro("TRACKBAR")
#pragma pop_macro("TREEVIEW")
#pragma pop_macro("WINDOW")

#endif // _com_sun_java_swing_plaf_windows_TMSchema$Control_h_