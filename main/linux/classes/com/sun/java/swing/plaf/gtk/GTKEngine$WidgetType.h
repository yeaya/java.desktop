#ifndef _com_sun_java_swing_plaf_gtk_GTKEngine$WidgetType_h_
#define _com_sun_java_swing_plaf_gtk_GTKEngine$WidgetType_h_
//$ class com.sun.java.swing.plaf.gtk.GTKEngine$WidgetType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BUTTON")
#undef BUTTON
#pragma push_macro("CHECK_BOX")
#undef CHECK_BOX
#pragma push_macro("CHECK_BOX_MENU_ITEM")
#undef CHECK_BOX_MENU_ITEM
#pragma push_macro("COLOR_CHOOSER")
#undef COLOR_CHOOSER
#pragma push_macro("COMBO_BOX")
#undef COMBO_BOX
#pragma push_macro("COMBO_BOX_ARROW_BUTTON")
#undef COMBO_BOX_ARROW_BUTTON
#pragma push_macro("COMBO_BOX_TEXT_FIELD")
#undef COMBO_BOX_TEXT_FIELD
#pragma push_macro("DESKTOP_ICON")
#undef DESKTOP_ICON
#pragma push_macro("DESKTOP_PANE")
#undef DESKTOP_PANE
#pragma push_macro("EDITOR_PANE")
#undef EDITOR_PANE
#pragma push_macro("FORMATTED_TEXT_FIELD")
#undef FORMATTED_TEXT_FIELD
#pragma push_macro("HANDLE_BOX")
#undef HANDLE_BOX
#pragma push_macro("HPROGRESS_BAR")
#undef HPROGRESS_BAR
#pragma push_macro("HSCROLL_BAR")
#undef HSCROLL_BAR
#pragma push_macro("HSCROLL_BAR_BUTTON_LEFT")
#undef HSCROLL_BAR_BUTTON_LEFT
#pragma push_macro("HSCROLL_BAR_BUTTON_RIGHT")
#undef HSCROLL_BAR_BUTTON_RIGHT
#pragma push_macro("HSCROLL_BAR_THUMB")
#undef HSCROLL_BAR_THUMB
#pragma push_macro("HSCROLL_BAR_TRACK")
#undef HSCROLL_BAR_TRACK
#pragma push_macro("HSEPARATOR")
#undef HSEPARATOR
#pragma push_macro("HSLIDER")
#undef HSLIDER
#pragma push_macro("HSLIDER_THUMB")
#undef HSLIDER_THUMB
#pragma push_macro("HSLIDER_TRACK")
#undef HSLIDER_TRACK
#pragma push_macro("HSPLIT_PANE_DIVIDER")
#undef HSPLIT_PANE_DIVIDER
#pragma push_macro("IMAGE")
#undef IMAGE
#pragma push_macro("INTERNAL_FRAME")
#undef INTERNAL_FRAME
#pragma push_macro("INTERNAL_FRAME_TITLE_PANE")
#undef INTERNAL_FRAME_TITLE_PANE
#pragma push_macro("LABEL")
#undef LABEL
#pragma push_macro("LIST")
#undef LIST
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("MENU_BAR")
#undef MENU_BAR
#pragma push_macro("MENU_ITEM")
#undef MENU_ITEM
#pragma push_macro("MENU_ITEM_ACCELERATOR")
#undef MENU_ITEM_ACCELERATOR
#pragma push_macro("OPTION_PANE")
#undef OPTION_PANE
#pragma push_macro("PANEL")
#undef PANEL
#pragma push_macro("PASSWORD_FIELD")
#undef PASSWORD_FIELD
#pragma push_macro("POPUP_MENU")
#undef POPUP_MENU
#pragma push_macro("POPUP_MENU_SEPARATOR")
#undef POPUP_MENU_SEPARATOR
#pragma push_macro("RADIO_BUTTON")
#undef RADIO_BUTTON
#pragma push_macro("RADIO_BUTTON_MENU_ITEM")
#undef RADIO_BUTTON_MENU_ITEM
#pragma push_macro("ROOT_PANE")
#undef ROOT_PANE
#pragma push_macro("SCROLL_PANE")
#undef SCROLL_PANE
#pragma push_macro("SPINNER")
#undef SPINNER
#pragma push_macro("SPINNER_ARROW_BUTTON")
#undef SPINNER_ARROW_BUTTON
#pragma push_macro("SPINNER_TEXT_FIELD")
#undef SPINNER_TEXT_FIELD
#pragma push_macro("SPLIT_PANE")
#undef SPLIT_PANE
#pragma push_macro("TABBED_PANE")
#undef TABBED_PANE
#pragma push_macro("TABBED_PANE_CONTENT")
#undef TABBED_PANE_CONTENT
#pragma push_macro("TABBED_PANE_TAB")
#undef TABBED_PANE_TAB
#pragma push_macro("TABBED_PANE_TAB_AREA")
#undef TABBED_PANE_TAB_AREA
#pragma push_macro("TABLE")
#undef TABLE
#pragma push_macro("TABLE_HEADER")
#undef TABLE_HEADER
#pragma push_macro("TEXT_AREA")
#undef TEXT_AREA
#pragma push_macro("TEXT_FIELD")
#undef TEXT_FIELD
#pragma push_macro("TEXT_PANE")
#undef TEXT_PANE
#pragma push_macro("TITLED_BORDER")
#undef TITLED_BORDER
#pragma push_macro("TOGGLE_BUTTON")
#undef TOGGLE_BUTTON
#pragma push_macro("TOOL_BAR")
#undef TOOL_BAR
#pragma push_macro("TOOL_BAR_DRAG_WINDOW")
#undef TOOL_BAR_DRAG_WINDOW
#pragma push_macro("TOOL_BAR_SEPARATOR")
#undef TOOL_BAR_SEPARATOR
#pragma push_macro("TOOL_TIP")
#undef TOOL_TIP
#pragma push_macro("TREE")
#undef TREE
#pragma push_macro("TREE_CELL")
#undef TREE_CELL
#pragma push_macro("VIEWPORT")
#undef VIEWPORT
#pragma push_macro("VPROGRESS_BAR")
#undef VPROGRESS_BAR
#pragma push_macro("VSCROLL_BAR")
#undef VSCROLL_BAR
#pragma push_macro("VSCROLL_BAR_BUTTON_DOWN")
#undef VSCROLL_BAR_BUTTON_DOWN
#pragma push_macro("VSCROLL_BAR_BUTTON_UP")
#undef VSCROLL_BAR_BUTTON_UP
#pragma push_macro("VSCROLL_BAR_THUMB")
#undef VSCROLL_BAR_THUMB
#pragma push_macro("VSCROLL_BAR_TRACK")
#undef VSCROLL_BAR_TRACK
#pragma push_macro("VSEPARATOR")
#undef VSEPARATOR
#pragma push_macro("VSLIDER")
#undef VSLIDER
#pragma push_macro("VSLIDER_THUMB")
#undef VSLIDER_THUMB
#pragma push_macro("VSLIDER_TRACK")
#undef VSLIDER_TRACK
#pragma push_macro("VSPLIT_PANE_DIVIDER")
#undef VSPLIT_PANE_DIVIDER

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKEngine$WidgetType : public ::java::lang::Enum {
	$class(GTKEngine$WidgetType, 0, ::java::lang::Enum)
public:
	GTKEngine$WidgetType();
	static $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType>* values();
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* BUTTON;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* CHECK_BOX;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* CHECK_BOX_MENU_ITEM;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* COLOR_CHOOSER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* COMBO_BOX;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* COMBO_BOX_ARROW_BUTTON;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* COMBO_BOX_TEXT_FIELD;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* DESKTOP_ICON;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* DESKTOP_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* EDITOR_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* FORMATTED_TEXT_FIELD;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HANDLE_BOX;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HPROGRESS_BAR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSCROLL_BAR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSCROLL_BAR_BUTTON_LEFT;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSCROLL_BAR_BUTTON_RIGHT;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSCROLL_BAR_TRACK;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSCROLL_BAR_THUMB;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSEPARATOR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSLIDER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSLIDER_TRACK;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSLIDER_THUMB;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* HSPLIT_PANE_DIVIDER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* INTERNAL_FRAME;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* INTERNAL_FRAME_TITLE_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* IMAGE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* LABEL;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* LIST;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* MENU;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* MENU_BAR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* MENU_ITEM;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* MENU_ITEM_ACCELERATOR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* OPTION_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* PANEL;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* PASSWORD_FIELD;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* POPUP_MENU;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* POPUP_MENU_SEPARATOR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* RADIO_BUTTON;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* RADIO_BUTTON_MENU_ITEM;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* ROOT_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* SCROLL_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* SPINNER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* SPINNER_ARROW_BUTTON;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* SPINNER_TEXT_FIELD;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* SPLIT_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TABBED_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TABBED_PANE_TAB_AREA;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TABBED_PANE_CONTENT;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TABBED_PANE_TAB;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TABLE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TABLE_HEADER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TEXT_AREA;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TEXT_FIELD;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TEXT_PANE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TITLED_BORDER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TOGGLE_BUTTON;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TOOL_BAR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TOOL_BAR_DRAG_WINDOW;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TOOL_BAR_SEPARATOR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TOOL_TIP;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TREE;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* TREE_CELL;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VIEWPORT;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VPROGRESS_BAR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSCROLL_BAR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSCROLL_BAR_BUTTON_UP;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSCROLL_BAR_BUTTON_DOWN;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSCROLL_BAR_TRACK;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSCROLL_BAR_THUMB;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSEPARATOR;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSLIDER;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSLIDER_TRACK;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSLIDER_THUMB;
	static ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* VSPLIT_PANE_DIVIDER;
	static $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType>* $VALUES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BUTTON")
#pragma pop_macro("CHECK_BOX")
#pragma pop_macro("CHECK_BOX_MENU_ITEM")
#pragma pop_macro("COLOR_CHOOSER")
#pragma pop_macro("COMBO_BOX")
#pragma pop_macro("COMBO_BOX_ARROW_BUTTON")
#pragma pop_macro("COMBO_BOX_TEXT_FIELD")
#pragma pop_macro("DESKTOP_ICON")
#pragma pop_macro("DESKTOP_PANE")
#pragma pop_macro("EDITOR_PANE")
#pragma pop_macro("FORMATTED_TEXT_FIELD")
#pragma pop_macro("HANDLE_BOX")
#pragma pop_macro("HPROGRESS_BAR")
#pragma pop_macro("HSCROLL_BAR")
#pragma pop_macro("HSCROLL_BAR_BUTTON_LEFT")
#pragma pop_macro("HSCROLL_BAR_BUTTON_RIGHT")
#pragma pop_macro("HSCROLL_BAR_THUMB")
#pragma pop_macro("HSCROLL_BAR_TRACK")
#pragma pop_macro("HSEPARATOR")
#pragma pop_macro("HSLIDER")
#pragma pop_macro("HSLIDER_THUMB")
#pragma pop_macro("HSLIDER_TRACK")
#pragma pop_macro("HSPLIT_PANE_DIVIDER")
#pragma pop_macro("IMAGE")
#pragma pop_macro("INTERNAL_FRAME")
#pragma pop_macro("INTERNAL_FRAME_TITLE_PANE")
#pragma pop_macro("LABEL")
#pragma pop_macro("LIST")
#pragma pop_macro("MENU")
#pragma pop_macro("MENU_BAR")
#pragma pop_macro("MENU_ITEM")
#pragma pop_macro("MENU_ITEM_ACCELERATOR")
#pragma pop_macro("OPTION_PANE")
#pragma pop_macro("PANEL")
#pragma pop_macro("PASSWORD_FIELD")
#pragma pop_macro("POPUP_MENU")
#pragma pop_macro("POPUP_MENU_SEPARATOR")
#pragma pop_macro("RADIO_BUTTON")
#pragma pop_macro("RADIO_BUTTON_MENU_ITEM")
#pragma pop_macro("ROOT_PANE")
#pragma pop_macro("SCROLL_PANE")
#pragma pop_macro("SPINNER")
#pragma pop_macro("SPINNER_ARROW_BUTTON")
#pragma pop_macro("SPINNER_TEXT_FIELD")
#pragma pop_macro("SPLIT_PANE")
#pragma pop_macro("TABBED_PANE")
#pragma pop_macro("TABBED_PANE_CONTENT")
#pragma pop_macro("TABBED_PANE_TAB")
#pragma pop_macro("TABBED_PANE_TAB_AREA")
#pragma pop_macro("TABLE")
#pragma pop_macro("TABLE_HEADER")
#pragma pop_macro("TEXT_AREA")
#pragma pop_macro("TEXT_FIELD")
#pragma pop_macro("TEXT_PANE")
#pragma pop_macro("TITLED_BORDER")
#pragma pop_macro("TOGGLE_BUTTON")
#pragma pop_macro("TOOL_BAR")
#pragma pop_macro("TOOL_BAR_DRAG_WINDOW")
#pragma pop_macro("TOOL_BAR_SEPARATOR")
#pragma pop_macro("TOOL_TIP")
#pragma pop_macro("TREE")
#pragma pop_macro("TREE_CELL")
#pragma pop_macro("VIEWPORT")
#pragma pop_macro("VPROGRESS_BAR")
#pragma pop_macro("VSCROLL_BAR")
#pragma pop_macro("VSCROLL_BAR_BUTTON_DOWN")
#pragma pop_macro("VSCROLL_BAR_BUTTON_UP")
#pragma pop_macro("VSCROLL_BAR_THUMB")
#pragma pop_macro("VSCROLL_BAR_TRACK")
#pragma pop_macro("VSEPARATOR")
#pragma pop_macro("VSLIDER")
#pragma pop_macro("VSLIDER_THUMB")
#pragma pop_macro("VSLIDER_TRACK")
#pragma pop_macro("VSPLIT_PANE_DIVIDER")

#endif // _com_sun_java_swing_plaf_gtk_GTKEngine$WidgetType_h_