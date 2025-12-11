#ifndef _com_apple_laf_AquaKeyBindings_h_
#define _com_apple_laf_AquaKeyBindings_h_
//$ class com.apple.laf.AquaKeyBindings
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaKeyBindings$LateBoundInputMap;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultEditorKit$DefaultKeyTypedAction;
			class JTextComponent;
			class TextAction;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaKeyBindings : public ::java::lang::Object {
	$class(AquaKeyBindings, 0, ::java::lang::Object)
public:
	AquaKeyBindings();
	void init$();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getComboBoxInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getFormattedTextFieldInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getListInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getMultiLineTextInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getPasswordFieldInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getScrollBarInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getScrollBarRightToLeftInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getScrollPaneInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getSliderInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getSliderRightToLeftInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getSpinnerInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getTableInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getTableRightToLeftInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getTextFieldInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getTreeInputMap();
	virtual ::com::apple::laf::AquaKeyBindings$LateBoundInputMap* getTreeRightToLeftInputMap();
	virtual void installAquaUpDownActions(::javax::swing::text::JTextComponent* component);
	static ::com::apple::laf::AquaKeyBindings* instance();
	virtual void setDefaultAction($String* keymapName);
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance$;
	::javax::swing::text::DefaultEditorKit$DefaultKeyTypedAction* defaultKeyTypedAction = nullptr;
	static $String* upMultilineAction;
	static $String* downMultilineAction;
	static $String* pageUpMultiline;
	static $String* pageDownMultiline;
	$StringArray* commonTextEditorBindings = nullptr;
	::javax::swing::text::TextAction* moveUpMultilineAction = nullptr;
	::javax::swing::text::TextAction* moveDownMultilineAction = nullptr;
	::javax::swing::text::TextAction* pageUpMultilineAction = nullptr;
	::javax::swing::text::TextAction* pageDownMultilineAction = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaKeyBindings_h_