#ifndef _com_sun_java_swing_plaf_gtk_GTKIconFactory_h_
#define _com_sun_java_swing_plaf_gtk_GTKIconFactory_h_
//$ class com.sun.java.swing.plaf.gtk.GTKIconFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ASCENDING_SORT_ICON")
#undef ASCENDING_SORT_ICON
#pragma push_macro("CHECK_BOX_ICON")
#undef CHECK_BOX_ICON
#pragma push_macro("CHECK_BOX_MENU_ITEM_CHECK_ICON")
#undef CHECK_BOX_MENU_ITEM_CHECK_ICON
#pragma push_macro("CHECK_ICON_EXTRA_INSET")
#undef CHECK_ICON_EXTRA_INSET
#pragma push_macro("DEFAULT_ICON_SIZE")
#undef DEFAULT_ICON_SIZE
#pragma push_macro("DEFAULT_ICON_SPACING")
#undef DEFAULT_ICON_SPACING
#pragma push_macro("DEFAULT_TOGGLE_MENU_ITEM_SIZE")
#undef DEFAULT_TOGGLE_MENU_ITEM_SIZE
#pragma push_macro("DESCENDING_SORT_ICON")
#undef DESCENDING_SORT_ICON
#pragma push_macro("MENU_ARROW_ICON")
#undef MENU_ARROW_ICON
#pragma push_macro("RADIO_BUTTON_ICON")
#undef RADIO_BUTTON_ICON
#pragma push_macro("RADIO_BUTTON_MENU_ITEM_CHECK_ICON")
#undef RADIO_BUTTON_MENU_ITEM_CHECK_ICON
#pragma push_macro("TOOL_BAR_HANDLE_ICON")
#undef TOOL_BAR_HANDLE_ICON
#pragma push_macro("TREE_COLLAPSED_ICON")
#undef TREE_COLLAPSED_ICON
#pragma push_macro("TREE_EXPANDED_ICON")
#undef TREE_EXPANDED_ICON

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKIconFactory$DelegatingIcon;
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthIcon;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKIconFactory : public ::java::lang::Object {
	$class(GTKIconFactory, 0, ::java::lang::Object)
public:
	GTKIconFactory();
	void init$();
	static ::javax::swing::Icon* getAscendingSortIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getCheckBoxIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getCheckBoxMenuItemCheckIcon();
	static ::javax::swing::Icon* getDescendingSortIcon();
	static ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon* getIcon($String* methodName);
	static ::javax::swing::plaf::synth::SynthIcon* getMenuArrowIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getRadioButtonIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getRadioButtonMenuItemCheckIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getToolBarHandleIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getTreeCollapsedIcon();
	static ::javax::swing::plaf::synth::SynthIcon* getTreeExpandedIcon();
	static void resetIcons();
	static const int32_t CHECK_ICON_EXTRA_INSET = 1;
	static const int32_t DEFAULT_ICON_SPACING = 2;
	static const int32_t DEFAULT_ICON_SIZE = 13;
	static const int32_t DEFAULT_TOGGLE_MENU_ITEM_SIZE = 12;
	static $String* RADIO_BUTTON_ICON;
	static $String* CHECK_BOX_ICON;
	static $String* MENU_ARROW_ICON;
	static $String* CHECK_BOX_MENU_ITEM_CHECK_ICON;
	static $String* RADIO_BUTTON_MENU_ITEM_CHECK_ICON;
	static $String* TREE_EXPANDED_ICON;
	static $String* TREE_COLLAPSED_ICON;
	static $String* ASCENDING_SORT_ICON;
	static $String* DESCENDING_SORT_ICON;
	static $String* TOOL_BAR_HANDLE_ICON;
	static ::java::util::Map* iconsPool;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ASCENDING_SORT_ICON")
#pragma pop_macro("CHECK_BOX_ICON")
#pragma pop_macro("CHECK_BOX_MENU_ITEM_CHECK_ICON")
#pragma pop_macro("CHECK_ICON_EXTRA_INSET")
#pragma pop_macro("DEFAULT_ICON_SIZE")
#pragma pop_macro("DEFAULT_ICON_SPACING")
#pragma pop_macro("DEFAULT_TOGGLE_MENU_ITEM_SIZE")
#pragma pop_macro("DESCENDING_SORT_ICON")
#pragma pop_macro("MENU_ARROW_ICON")
#pragma pop_macro("RADIO_BUTTON_ICON")
#pragma pop_macro("RADIO_BUTTON_MENU_ITEM_CHECK_ICON")
#pragma pop_macro("TOOL_BAR_HANDLE_ICON")
#pragma pop_macro("TREE_COLLAPSED_ICON")
#pragma pop_macro("TREE_EXPANDED_ICON")

#endif // _com_sun_java_swing_plaf_gtk_GTKIconFactory_h_