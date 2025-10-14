#ifndef _javax_accessibility_AccessibleRole_h_
#define _javax_accessibility_AccessibleRole_h_
//$ class javax.accessibility.AccessibleRole
//$ extends javax.accessibility.AccessibleBundle

#include <javax/accessibility/AccessibleBundle.h>

#pragma push_macro("ALERT")
#undef ALERT
#pragma push_macro("AWT_COMPONENT")
#undef AWT_COMPONENT
#pragma push_macro("CANVAS")
#undef CANVAS
#pragma push_macro("CHECK_BOX")
#undef CHECK_BOX
#pragma push_macro("COLOR_CHOOSER")
#undef COLOR_CHOOSER
#pragma push_macro("COLUMN_HEADER")
#undef COLUMN_HEADER
#pragma push_macro("COMBO_BOX")
#undef COMBO_BOX
#pragma push_macro("DATE_EDITOR")
#undef DATE_EDITOR
#pragma push_macro("DESKTOP_ICON")
#undef DESKTOP_ICON
#pragma push_macro("DESKTOP_PANE")
#undef DESKTOP_PANE
#pragma push_macro("DIALOG")
#undef DIALOG
#pragma push_macro("DIRECTORY_PANE")
#undef DIRECTORY_PANE
#pragma push_macro("EDITBAR")
#undef EDITBAR
#pragma push_macro("FILE_CHOOSER")
#undef FILE_CHOOSER
#pragma push_macro("FILLER")
#undef FILLER
#pragma push_macro("FONT_CHOOSER")
#undef FONT_CHOOSER
#pragma push_macro("FOOTER")
#undef FOOTER
#pragma push_macro("FRAME")
#undef FRAME
#pragma push_macro("GLASS_PANE")
#undef GLASS_PANE
#pragma push_macro("GROUP_BOX")
#undef GROUP_BOX
#pragma push_macro("HEADER")
#undef HEADER
#pragma push_macro("HTML_CONTAINER")
#undef HTML_CONTAINER
#pragma push_macro("HYPERLINK")
#undef HYPERLINK
#pragma push_macro("ICON")
#undef ICON
#pragma push_macro("INTERNAL_FRAME")
#undef INTERNAL_FRAME
#pragma push_macro("LABEL")
#undef LABEL
#pragma push_macro("LAYERED_PANE")
#undef LAYERED_PANE
#pragma push_macro("LIST")
#undef LIST
#pragma push_macro("LIST_ITEM")
#undef LIST_ITEM
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("MENU_BAR")
#undef MENU_BAR
#pragma push_macro("MENU_ITEM")
#undef MENU_ITEM
#pragma push_macro("OPTION_PANE")
#undef OPTION_PANE
#pragma push_macro("PAGE_TAB")
#undef PAGE_TAB
#pragma push_macro("PAGE_TAB_LIST")
#undef PAGE_TAB_LIST
#pragma push_macro("PANEL")
#undef PANEL
#pragma push_macro("PARAGRAPH")
#undef PARAGRAPH
#pragma push_macro("PASSWORD_TEXT")
#undef PASSWORD_TEXT
#pragma push_macro("POPUP_MENU")
#undef POPUP_MENU
#pragma push_macro("PROGRESS_BAR")
#undef PROGRESS_BAR
#pragma push_macro("PROGRESS_MONITOR")
#undef PROGRESS_MONITOR
#pragma push_macro("PUSH_BUTTON")
#undef PUSH_BUTTON
#pragma push_macro("RADIO_BUTTON")
#undef RADIO_BUTTON
#pragma push_macro("ROOT_PANE")
#undef ROOT_PANE
#pragma push_macro("ROW_HEADER")
#undef ROW_HEADER
#pragma push_macro("RULER")
#undef RULER
#pragma push_macro("SCROLL_BAR")
#undef SCROLL_BAR
#pragma push_macro("SCROLL_PANE")
#undef SCROLL_PANE
#pragma push_macro("SEPARATOR")
#undef SEPARATOR
#pragma push_macro("SLIDER")
#undef SLIDER
#pragma push_macro("SPIN_BOX")
#undef SPIN_BOX
#pragma push_macro("SPLIT_PANE")
#undef SPLIT_PANE
#pragma push_macro("STATUS_BAR")
#undef STATUS_BAR
#pragma push_macro("SWING_COMPONENT")
#undef SWING_COMPONENT
#pragma push_macro("TABLE")
#undef TABLE
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("TOGGLE_BUTTON")
#undef TOGGLE_BUTTON
#pragma push_macro("TOOL_BAR")
#undef TOOL_BAR
#pragma push_macro("TOOL_TIP")
#undef TOOL_TIP
#pragma push_macro("TREE")
#undef TREE
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("VIEWPORT")
#undef VIEWPORT
#pragma push_macro("WINDOW")
#undef WINDOW

namespace javax {
	namespace accessibility {

class $import AccessibleRole : public ::javax::accessibility::AccessibleBundle {
	$class(AccessibleRole, 0, ::javax::accessibility::AccessibleBundle)
public:
	AccessibleRole();
	void init$($String* key);
	static ::javax::accessibility::AccessibleRole* ALERT;
	static ::javax::accessibility::AccessibleRole* COLUMN_HEADER;
	static ::javax::accessibility::AccessibleRole* CANVAS;
	static ::javax::accessibility::AccessibleRole* COMBO_BOX;
	static ::javax::accessibility::AccessibleRole* DESKTOP_ICON;
	static ::javax::accessibility::AccessibleRole* HTML_CONTAINER;
	static ::javax::accessibility::AccessibleRole* INTERNAL_FRAME;
	static ::javax::accessibility::AccessibleRole* DESKTOP_PANE;
	static ::javax::accessibility::AccessibleRole* OPTION_PANE;
	static ::javax::accessibility::AccessibleRole* WINDOW;
	static ::javax::accessibility::AccessibleRole* FRAME;
	static ::javax::accessibility::AccessibleRole* DIALOG;
	static ::javax::accessibility::AccessibleRole* COLOR_CHOOSER;
	static ::javax::accessibility::AccessibleRole* DIRECTORY_PANE;
	static ::javax::accessibility::AccessibleRole* FILE_CHOOSER;
	static ::javax::accessibility::AccessibleRole* FILLER;
	static ::javax::accessibility::AccessibleRole* HYPERLINK;
	static ::javax::accessibility::AccessibleRole* ICON;
	static ::javax::accessibility::AccessibleRole* LABEL;
	static ::javax::accessibility::AccessibleRole* ROOT_PANE;
	static ::javax::accessibility::AccessibleRole* GLASS_PANE;
	static ::javax::accessibility::AccessibleRole* LAYERED_PANE;
	static ::javax::accessibility::AccessibleRole* LIST;
	static ::javax::accessibility::AccessibleRole* LIST_ITEM;
	static ::javax::accessibility::AccessibleRole* MENU_BAR;
	static ::javax::accessibility::AccessibleRole* POPUP_MENU;
	static ::javax::accessibility::AccessibleRole* MENU;
	static ::javax::accessibility::AccessibleRole* MENU_ITEM;
	static ::javax::accessibility::AccessibleRole* SEPARATOR;
	static ::javax::accessibility::AccessibleRole* PAGE_TAB_LIST;
	static ::javax::accessibility::AccessibleRole* PAGE_TAB;
	static ::javax::accessibility::AccessibleRole* PANEL;
	static ::javax::accessibility::AccessibleRole* PROGRESS_BAR;
	static ::javax::accessibility::AccessibleRole* PASSWORD_TEXT;
	static ::javax::accessibility::AccessibleRole* PUSH_BUTTON;
	static ::javax::accessibility::AccessibleRole* TOGGLE_BUTTON;
	static ::javax::accessibility::AccessibleRole* CHECK_BOX;
	static ::javax::accessibility::AccessibleRole* RADIO_BUTTON;
	static ::javax::accessibility::AccessibleRole* ROW_HEADER;
	static ::javax::accessibility::AccessibleRole* SCROLL_PANE;
	static ::javax::accessibility::AccessibleRole* SCROLL_BAR;
	static ::javax::accessibility::AccessibleRole* VIEWPORT;
	static ::javax::accessibility::AccessibleRole* SLIDER;
	static ::javax::accessibility::AccessibleRole* SPLIT_PANE;
	static ::javax::accessibility::AccessibleRole* TABLE;
	static ::javax::accessibility::AccessibleRole* TEXT;
	static ::javax::accessibility::AccessibleRole* TREE;
	static ::javax::accessibility::AccessibleRole* TOOL_BAR;
	static ::javax::accessibility::AccessibleRole* TOOL_TIP;
	static ::javax::accessibility::AccessibleRole* AWT_COMPONENT;
	static ::javax::accessibility::AccessibleRole* SWING_COMPONENT;
	static ::javax::accessibility::AccessibleRole* UNKNOWN;
	static ::javax::accessibility::AccessibleRole* STATUS_BAR;
	static ::javax::accessibility::AccessibleRole* DATE_EDITOR;
	static ::javax::accessibility::AccessibleRole* SPIN_BOX;
	static ::javax::accessibility::AccessibleRole* FONT_CHOOSER;
	static ::javax::accessibility::AccessibleRole* GROUP_BOX;
	static ::javax::accessibility::AccessibleRole* HEADER;
	static ::javax::accessibility::AccessibleRole* FOOTER;
	static ::javax::accessibility::AccessibleRole* PARAGRAPH;
	static ::javax::accessibility::AccessibleRole* RULER;
	static ::javax::accessibility::AccessibleRole* EDITBAR;
	static ::javax::accessibility::AccessibleRole* PROGRESS_MONITOR;
};

	} // accessibility
} // javax

#pragma pop_macro("ALERT")
#pragma pop_macro("AWT_COMPONENT")
#pragma pop_macro("CANVAS")
#pragma pop_macro("CHECK_BOX")
#pragma pop_macro("COLOR_CHOOSER")
#pragma pop_macro("COLUMN_HEADER")
#pragma pop_macro("COMBO_BOX")
#pragma pop_macro("DATE_EDITOR")
#pragma pop_macro("DESKTOP_ICON")
#pragma pop_macro("DESKTOP_PANE")
#pragma pop_macro("DIALOG")
#pragma pop_macro("DIRECTORY_PANE")
#pragma pop_macro("EDITBAR")
#pragma pop_macro("FILE_CHOOSER")
#pragma pop_macro("FILLER")
#pragma pop_macro("FONT_CHOOSER")
#pragma pop_macro("FOOTER")
#pragma pop_macro("FRAME")
#pragma pop_macro("GLASS_PANE")
#pragma pop_macro("GROUP_BOX")
#pragma pop_macro("HEADER")
#pragma pop_macro("HTML_CONTAINER")
#pragma pop_macro("HYPERLINK")
#pragma pop_macro("ICON")
#pragma pop_macro("INTERNAL_FRAME")
#pragma pop_macro("LABEL")
#pragma pop_macro("LAYERED_PANE")
#pragma pop_macro("LIST")
#pragma pop_macro("LIST_ITEM")
#pragma pop_macro("MENU")
#pragma pop_macro("MENU_BAR")
#pragma pop_macro("MENU_ITEM")
#pragma pop_macro("OPTION_PANE")
#pragma pop_macro("PAGE_TAB")
#pragma pop_macro("PAGE_TAB_LIST")
#pragma pop_macro("PANEL")
#pragma pop_macro("PARAGRAPH")
#pragma pop_macro("PASSWORD_TEXT")
#pragma pop_macro("POPUP_MENU")
#pragma pop_macro("PROGRESS_BAR")
#pragma pop_macro("PROGRESS_MONITOR")
#pragma pop_macro("PUSH_BUTTON")
#pragma pop_macro("RADIO_BUTTON")
#pragma pop_macro("ROOT_PANE")
#pragma pop_macro("ROW_HEADER")
#pragma pop_macro("RULER")
#pragma pop_macro("SCROLL_BAR")
#pragma pop_macro("SCROLL_PANE")
#pragma pop_macro("SEPARATOR")
#pragma pop_macro("SLIDER")
#pragma pop_macro("SPIN_BOX")
#pragma pop_macro("SPLIT_PANE")
#pragma pop_macro("STATUS_BAR")
#pragma pop_macro("SWING_COMPONENT")
#pragma pop_macro("TABLE")
#pragma pop_macro("TEXT")
#pragma pop_macro("TOGGLE_BUTTON")
#pragma pop_macro("TOOL_BAR")
#pragma pop_macro("TOOL_TIP")
#pragma pop_macro("TREE")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("VIEWPORT")
#pragma pop_macro("WINDOW")

#endif // _javax_accessibility_AccessibleRole_h_