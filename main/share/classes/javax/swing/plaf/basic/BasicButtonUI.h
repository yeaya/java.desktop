#ifndef _javax_swing_plaf_basic_BasicButtonUI_h_
#define _javax_swing_plaf_basic_BasicButtonUI_h_
//$ class javax.swing.plaf.basic.BasicButtonUI
//$ extends javax.swing.plaf.ButtonUI

#include <javax/swing/plaf/ButtonUI.h>

#pragma push_macro("BASIC_BUTTON_UI_KEY")
#undef BASIC_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
		class Dimension;
		class FontMetrics;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class KeyListener;
		}
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
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
				class BasicButtonListener;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicButtonUI : public ::javax::swing::plaf::ButtonUI {
	$class(BasicButtonUI, 0, ::javax::swing::plaf::ButtonUI)
public:
	BasicButtonUI();
	void init$();
	virtual void clearTextShiftOffset();
	virtual ::javax::swing::plaf::basic::BasicButtonListener* createButtonListener(::javax::swing::AbstractButton* b);
	::java::awt::event::KeyListener* createKeyListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::basic::BasicButtonListener* getButtonListener(::javax::swing::AbstractButton* b);
	virtual int32_t getDefaultTextIconGap(::javax::swing::AbstractButton* b);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual $String* getPropertyPrefix();
	virtual int32_t getTextShiftOffset();
	virtual void installDefaults(::javax::swing::AbstractButton* b);
	virtual void installKeyboardActions(::javax::swing::AbstractButton* b);
	virtual void installListeners(::javax::swing::AbstractButton* b);
	virtual void installUI(::javax::swing::JComponent* c) override;
	bool isValidToggleButtonObj(Object$* obj);
	$String* layout(::javax::swing::AbstractButton* b, ::java::awt::FontMetrics* fm, int32_t width, int32_t height);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b);
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect);
	virtual void paintIcon(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* iconRect);
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* textRect, $String* text);
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* textRect, $String* text);
	void selectToggleButton(::java::awt::event::ActionEvent* event, bool next);
	virtual void setTextShiftOffset();
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b);
	virtual void uninstallKeyboardActions(::javax::swing::AbstractButton* b);
	virtual void uninstallListeners(::javax::swing::AbstractButton* b);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	int32_t defaultTextIconGap = 0;
	int32_t shiftOffset = 0;
	int32_t defaultTextShiftOffset = 0;
	static $String* propertyPrefix;
	static $Object* BASIC_BUTTON_UI_KEY;
	::java::awt::event::KeyListener* keyListener = nullptr;
	static ::java::awt::Rectangle* viewRect;
	static ::java::awt::Rectangle* textRect;
	static ::java::awt::Rectangle* iconRect;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASIC_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_basic_BasicButtonUI_h_