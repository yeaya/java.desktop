#ifndef _javax_swing_plaf_synth_Region_h_
#define _javax_swing_plaf_synth_Region_h_
//$ class javax.swing.plaf.synth.Region
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARROW_BUTTON")
#undef ARROW_BUTTON
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
#pragma push_macro("DESKTOP_ICON")
#undef DESKTOP_ICON
#pragma push_macro("DESKTOP_PANE")
#undef DESKTOP_PANE
#pragma push_macro("EDITOR_PANE")
#undef EDITOR_PANE
#pragma push_macro("FILE_CHOOSER")
#undef FILE_CHOOSER
#pragma push_macro("FORMATTED_TEXT_FIELD")
#undef FORMATTED_TEXT_FIELD
#pragma push_macro("INTERNAL_FRAME")
#undef INTERNAL_FRAME
#pragma push_macro("INTERNAL_FRAME_TITLE_PANE")
#undef INTERNAL_FRAME_TITLE_PANE
#pragma push_macro("LABEL")
#undef LABEL
#pragma push_macro("LIST")
#undef LIST
#pragma push_macro("LOWER_CASE_NAME_MAP_KEY")
#undef LOWER_CASE_NAME_MAP_KEY
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
#pragma push_macro("PROGRESS_BAR")
#undef PROGRESS_BAR
#pragma push_macro("RADIO_BUTTON")
#undef RADIO_BUTTON
#pragma push_macro("RADIO_BUTTON_MENU_ITEM")
#undef RADIO_BUTTON_MENU_ITEM
#pragma push_macro("ROOT_PANE")
#undef ROOT_PANE
#pragma push_macro("SCROLL_BAR")
#undef SCROLL_BAR
#pragma push_macro("SCROLL_BAR_THUMB")
#undef SCROLL_BAR_THUMB
#pragma push_macro("SCROLL_BAR_TRACK")
#undef SCROLL_BAR_TRACK
#pragma push_macro("SCROLL_PANE")
#undef SCROLL_PANE
#pragma push_macro("SEPARATOR")
#undef SEPARATOR
#pragma push_macro("SLIDER")
#undef SLIDER
#pragma push_macro("SLIDER_THUMB")
#undef SLIDER_THUMB
#pragma push_macro("SLIDER_TRACK")
#undef SLIDER_TRACK
#pragma push_macro("SPINNER")
#undef SPINNER
#pragma push_macro("SPLIT_PANE")
#undef SPLIT_PANE
#pragma push_macro("SPLIT_PANE_DIVIDER")
#undef SPLIT_PANE_DIVIDER
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
#pragma push_macro("TOGGLE_BUTTON")
#undef TOGGLE_BUTTON
#pragma push_macro("TOOL_BAR")
#undef TOOL_BAR
#pragma push_macro("TOOL_BAR_CONTENT")
#undef TOOL_BAR_CONTENT
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
#pragma push_macro("UI_TO_REGION_MAP_KEY")
#undef UI_TO_REGION_MAP_KEY
#pragma push_macro("VIEWPORT")
#undef VIEWPORT

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class UIDefaults;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export Region : public ::java::lang::Object {
	$class(Region, 0, ::java::lang::Object)
public:
	Region();
	void init$($String* name, bool subregion);
	void init$($String* name, $String* ui, bool subregion);
	virtual $String* getLowerCaseName();
	static ::java::util::Map* getLowerCaseNameMap();
	virtual $String* getName();
	static ::javax::swing::plaf::synth::Region* getRegion(::javax::swing::JComponent* c);
	static ::java::util::Map* getUItoRegionMap();
	virtual bool isSubregion();
	static void registerUIs(::javax::swing::UIDefaults* table);
	virtual $String* toString() override;
	static $Object* UI_TO_REGION_MAP_KEY;
	static $Object* LOWER_CASE_NAME_MAP_KEY;
	static ::javax::swing::plaf::synth::Region* ARROW_BUTTON;
	static ::javax::swing::plaf::synth::Region* BUTTON;
	static ::javax::swing::plaf::synth::Region* CHECK_BOX;
	static ::javax::swing::plaf::synth::Region* CHECK_BOX_MENU_ITEM;
	static ::javax::swing::plaf::synth::Region* COLOR_CHOOSER;
	static ::javax::swing::plaf::synth::Region* COMBO_BOX;
	static ::javax::swing::plaf::synth::Region* DESKTOP_PANE;
	static ::javax::swing::plaf::synth::Region* DESKTOP_ICON;
	static ::javax::swing::plaf::synth::Region* EDITOR_PANE;
	static ::javax::swing::plaf::synth::Region* FILE_CHOOSER;
	static ::javax::swing::plaf::synth::Region* FORMATTED_TEXT_FIELD;
	static ::javax::swing::plaf::synth::Region* INTERNAL_FRAME;
	static ::javax::swing::plaf::synth::Region* INTERNAL_FRAME_TITLE_PANE;
	static ::javax::swing::plaf::synth::Region* LABEL;
	static ::javax::swing::plaf::synth::Region* LIST;
	static ::javax::swing::plaf::synth::Region* MENU;
	static ::javax::swing::plaf::synth::Region* MENU_BAR;
	static ::javax::swing::plaf::synth::Region* MENU_ITEM;
	static ::javax::swing::plaf::synth::Region* MENU_ITEM_ACCELERATOR;
	static ::javax::swing::plaf::synth::Region* OPTION_PANE;
	static ::javax::swing::plaf::synth::Region* PANEL;
	static ::javax::swing::plaf::synth::Region* PASSWORD_FIELD;
	static ::javax::swing::plaf::synth::Region* POPUP_MENU;
	static ::javax::swing::plaf::synth::Region* POPUP_MENU_SEPARATOR;
	static ::javax::swing::plaf::synth::Region* PROGRESS_BAR;
	static ::javax::swing::plaf::synth::Region* RADIO_BUTTON;
	static ::javax::swing::plaf::synth::Region* RADIO_BUTTON_MENU_ITEM;
	static ::javax::swing::plaf::synth::Region* ROOT_PANE;
	static ::javax::swing::plaf::synth::Region* SCROLL_BAR;
	static ::javax::swing::plaf::synth::Region* SCROLL_BAR_TRACK;
	static ::javax::swing::plaf::synth::Region* SCROLL_BAR_THUMB;
	static ::javax::swing::plaf::synth::Region* SCROLL_PANE;
	static ::javax::swing::plaf::synth::Region* SEPARATOR;
	static ::javax::swing::plaf::synth::Region* SLIDER;
	static ::javax::swing::plaf::synth::Region* SLIDER_TRACK;
	static ::javax::swing::plaf::synth::Region* SLIDER_THUMB;
	static ::javax::swing::plaf::synth::Region* SPINNER;
	static ::javax::swing::plaf::synth::Region* SPLIT_PANE;
	static ::javax::swing::plaf::synth::Region* SPLIT_PANE_DIVIDER;
	static ::javax::swing::plaf::synth::Region* TABBED_PANE;
	static ::javax::swing::plaf::synth::Region* TABBED_PANE_TAB;
	static ::javax::swing::plaf::synth::Region* TABBED_PANE_TAB_AREA;
	static ::javax::swing::plaf::synth::Region* TABBED_PANE_CONTENT;
	static ::javax::swing::plaf::synth::Region* TABLE;
	static ::javax::swing::plaf::synth::Region* TABLE_HEADER;
	static ::javax::swing::plaf::synth::Region* TEXT_AREA;
	static ::javax::swing::plaf::synth::Region* TEXT_FIELD;
	static ::javax::swing::plaf::synth::Region* TEXT_PANE;
	static ::javax::swing::plaf::synth::Region* TOGGLE_BUTTON;
	static ::javax::swing::plaf::synth::Region* TOOL_BAR;
	static ::javax::swing::plaf::synth::Region* TOOL_BAR_CONTENT;
	static ::javax::swing::plaf::synth::Region* TOOL_BAR_DRAG_WINDOW;
	static ::javax::swing::plaf::synth::Region* TOOL_TIP;
	static ::javax::swing::plaf::synth::Region* TOOL_BAR_SEPARATOR;
	static ::javax::swing::plaf::synth::Region* TREE;
	static ::javax::swing::plaf::synth::Region* TREE_CELL;
	static ::javax::swing::plaf::synth::Region* VIEWPORT;
	$String* name = nullptr;
	bool subregion = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ARROW_BUTTON")
#pragma pop_macro("BUTTON")
#pragma pop_macro("CHECK_BOX")
#pragma pop_macro("CHECK_BOX_MENU_ITEM")
#pragma pop_macro("COLOR_CHOOSER")
#pragma pop_macro("COMBO_BOX")
#pragma pop_macro("DESKTOP_ICON")
#pragma pop_macro("DESKTOP_PANE")
#pragma pop_macro("EDITOR_PANE")
#pragma pop_macro("FILE_CHOOSER")
#pragma pop_macro("FORMATTED_TEXT_FIELD")
#pragma pop_macro("INTERNAL_FRAME")
#pragma pop_macro("INTERNAL_FRAME_TITLE_PANE")
#pragma pop_macro("LABEL")
#pragma pop_macro("LIST")
#pragma pop_macro("LOWER_CASE_NAME_MAP_KEY")
#pragma pop_macro("MENU")
#pragma pop_macro("MENU_BAR")
#pragma pop_macro("MENU_ITEM")
#pragma pop_macro("MENU_ITEM_ACCELERATOR")
#pragma pop_macro("OPTION_PANE")
#pragma pop_macro("PANEL")
#pragma pop_macro("PASSWORD_FIELD")
#pragma pop_macro("POPUP_MENU")
#pragma pop_macro("POPUP_MENU_SEPARATOR")
#pragma pop_macro("PROGRESS_BAR")
#pragma pop_macro("RADIO_BUTTON")
#pragma pop_macro("RADIO_BUTTON_MENU_ITEM")
#pragma pop_macro("ROOT_PANE")
#pragma pop_macro("SCROLL_BAR")
#pragma pop_macro("SCROLL_BAR_THUMB")
#pragma pop_macro("SCROLL_BAR_TRACK")
#pragma pop_macro("SCROLL_PANE")
#pragma pop_macro("SEPARATOR")
#pragma pop_macro("SLIDER")
#pragma pop_macro("SLIDER_THUMB")
#pragma pop_macro("SLIDER_TRACK")
#pragma pop_macro("SPINNER")
#pragma pop_macro("SPLIT_PANE")
#pragma pop_macro("SPLIT_PANE_DIVIDER")
#pragma pop_macro("TABBED_PANE")
#pragma pop_macro("TABBED_PANE_CONTENT")
#pragma pop_macro("TABBED_PANE_TAB")
#pragma pop_macro("TABBED_PANE_TAB_AREA")
#pragma pop_macro("TABLE")
#pragma pop_macro("TABLE_HEADER")
#pragma pop_macro("TEXT_AREA")
#pragma pop_macro("TEXT_FIELD")
#pragma pop_macro("TEXT_PANE")
#pragma pop_macro("TOGGLE_BUTTON")
#pragma pop_macro("TOOL_BAR")
#pragma pop_macro("TOOL_BAR_CONTENT")
#pragma pop_macro("TOOL_BAR_DRAG_WINDOW")
#pragma pop_macro("TOOL_BAR_SEPARATOR")
#pragma pop_macro("TOOL_TIP")
#pragma pop_macro("TREE")
#pragma pop_macro("TREE_CELL")
#pragma pop_macro("UI_TO_REGION_MAP_KEY")
#pragma pop_macro("VIEWPORT")

#endif // _javax_swing_plaf_synth_Region_h_