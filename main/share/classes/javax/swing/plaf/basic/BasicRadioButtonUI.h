#ifndef _javax_swing_plaf_basic_BasicRadioButtonUI_h_
#define _javax_swing_plaf_basic_BasicRadioButtonUI_h_
//$ class javax.swing.plaf.basic.BasicRadioButtonUI
//$ extends javax.swing.plaf.basic.BasicToggleButtonUI

#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>

#pragma push_macro("BASIC_RADIO_BUTTON_UI_KEY")
#undef BASIC_RADIO_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyListener;
		}
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class Icon;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicRadioButtonUI : public ::javax::swing::plaf::basic::BasicToggleButtonUI {
	$class(BasicRadioButtonUI, 0, ::javax::swing::plaf::basic::BasicToggleButtonUI)
public:
	BasicRadioButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::javax::swing::Icon* getDefaultIcon();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual $String* getPropertyPrefix() override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintFocus;
	virtual void paintFocus(::java::awt::Graphics* g, ::java::awt::Rectangle* textRect, ::java::awt::Dimension* size);
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* BASIC_RADIO_BUTTON_UI_KEY;
	::javax::swing::Icon* icon = nullptr;
	bool defaults_initialized = false;
	static $String* propertyPrefix;
	::java::awt::event::KeyListener* keyListener = nullptr;
	static ::java::awt::Dimension* size;
	static ::java::awt::Rectangle* viewRect;
	static ::java::awt::Rectangle* iconRect;
	static ::java::awt::Rectangle* textRect;
	static ::java::awt::Rectangle* prefViewRect;
	static ::java::awt::Rectangle* prefIconRect;
	static ::java::awt::Rectangle* prefTextRect;
	static ::java::awt::Insets* prefInsets;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASIC_RADIO_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_basic_BasicRadioButtonUI_h_