#ifndef _com_apple_laf_AquaTextFieldSearch_h_
#define _com_apple_laf_AquaTextFieldSearch_h_
//$ class com.apple.laf.AquaTextFieldSearch
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CANCEL_ACTION_KEY")
#undef CANCEL_ACTION_KEY
#pragma push_macro("FIND_ACTION_KEY")
#undef FIND_ACTION_KEY
#pragma push_macro("FIND_POPUP_KEY")
#undef FIND_POPUP_KEY
#pragma push_macro("PROMPT_KEY")
#undef PROMPT_KEY
#pragma push_macro("SEARCH_FIELD_PROPERTY_LISTENER")
#undef SEARCH_FIELD_PROPERTY_LISTENER
#pragma push_macro("SEARCH_VARIANT_VALUE")
#undef SEARCH_VARIANT_VALUE
#pragma push_macro("VARIANT_KEY")
#undef VARIANT_KEY

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaIcon$DynamicallySizingJRSUIIcon;
			class AquaTextFieldSearch$SearchFieldBorder;
			class AquaTextFieldSearch$SearchFieldPropertyListener;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch : public ::java::lang::Object {
	$class(AquaTextFieldSearch, 0, ::java::lang::Object)
public:
	AquaTextFieldSearch();
	void init$();
	static ::javax::swing::JButton* createButton(::javax::swing::text::JTextComponent* c, ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon* icon);
	static ::javax::swing::JButton* getCancelButton(::javax::swing::text::JTextComponent* c);
	static ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon* getCancelIcon();
	static ::javax::swing::JButton* getFindButton(::javax::swing::text::JTextComponent* c);
	static ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon* getFindIcon(::javax::swing::text::JTextComponent* text);
	static ::java::awt::Component* getPromptLabel(::javax::swing::text::JTextComponent* c);
	static ::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder* getSearchTextFieldBorder();
	static ::apple::laf::JRSUIConstants$State* getState(::javax::swing::JButton* b);
	static bool hasPopupMenu(::javax::swing::text::JTextComponent* c);
	static void installSearchField(::javax::swing::text::JTextComponent* c);
	static void installSearchFieldListener(::javax::swing::text::JTextComponent* c);
	static void uninstallSearchField(::javax::swing::text::JTextComponent* c);
	static void uninstallSearchFieldListener(::javax::swing::text::JTextComponent* c);
	static void updateCancelIcon(::javax::swing::JButton* button, ::javax::swing::text::JTextComponent* text);
	static void updateCancelIconOnEDT(::javax::swing::JButton* button, ::javax::swing::text::JTextComponent* text);
	static void updatePromptLabel(::javax::swing::JLabel* label, ::javax::swing::text::JTextComponent* text);
	static void updatePromptLabelOnEDT(::javax::swing::JLabel* label, ::javax::swing::text::JTextComponent* text);
	static bool wantsToBeASearchField(::javax::swing::text::JTextComponent* c);
	static $String* VARIANT_KEY;
	static $String* SEARCH_VARIANT_VALUE;
	static $String* FIND_POPUP_KEY;
	static $String* FIND_ACTION_KEY;
	static $String* CANCEL_ACTION_KEY;
	static $String* PROMPT_KEY;
	static ::com::apple::laf::AquaTextFieldSearch$SearchFieldPropertyListener* SEARCH_FIELD_PROPERTY_LISTENER;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("CANCEL_ACTION_KEY")
#pragma pop_macro("FIND_ACTION_KEY")
#pragma pop_macro("FIND_POPUP_KEY")
#pragma pop_macro("PROMPT_KEY")
#pragma pop_macro("SEARCH_FIELD_PROPERTY_LISTENER")
#pragma pop_macro("SEARCH_VARIANT_VALUE")
#pragma pop_macro("VARIANT_KEY")

#endif // _com_apple_laf_AquaTextFieldSearch_h_