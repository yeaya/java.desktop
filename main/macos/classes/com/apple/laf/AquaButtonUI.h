#ifndef _com_apple_laf_AquaButtonUI_h_
#define _com_apple_laf_AquaButtonUI_h_
//$ class com.apple.laf.AquaButtonUI
//$ extends javax.swing.plaf.basic.BasicButtonUI
//$ implements com.apple.laf.AquaUtilControlSize$Sizeable

#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>

#pragma push_macro("BUTTON_TYPE")
#undef BUTTON_TYPE
#pragma push_macro("SEGMENTED_BUTTON_POSITION")
#undef SEGMENTED_BUTTON_POSITION

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaButtonBorder;
			class AquaButtonUI$AquaButtonListener;
			class AquaButtonUI$AquaHierarchyButtonListener;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonUI : public ::javax::swing::plaf::basic::BasicButtonUI, public ::com::apple::laf::AquaUtilControlSize$Sizeable {
	$class(AquaButtonUI, 0, ::javax::swing::plaf::basic::BasicButtonUI, ::com::apple::laf::AquaUtilControlSize$Sizeable)
public:
	AquaButtonUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void applySizeFor(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* size) override;
	virtual ::javax::swing::plaf::basic::BasicButtonListener* createButtonListener(::javax::swing::AbstractButton* b) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::com::apple::laf::AquaButtonUI$AquaButtonListener* getAquaButtonListener(::javax::swing::AbstractButton* b);
	static ::com::apple::laf::AquaButtonUI$AquaHierarchyButtonListener* getAquaHierarchyButtonListener();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void installHierListener(::javax::swing::AbstractButton* b);
	virtual void installKeyboardActions(::javax::swing::AbstractButton* b) override;
	virtual void installListeners(::javax::swing::AbstractButton* b) override;
	virtual bool isBorderFromProperty(::javax::swing::AbstractButton* button);
	static bool isOnToolbar(::javax::swing::AbstractButton* b);
	virtual $String* layoutAndGetText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::com::apple::laf::AquaButtonBorder* aquaBorder, ::java::awt::Insets* i, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	using ::javax::swing::plaf::basic::BasicButtonUI::paintIcon;
	virtual void paintIcon(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* localIconRect);
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* localTextRect, $String* text) override;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* localTextRect, $String* text) override;
	virtual void setButtonMarginIfNeeded(::javax::swing::AbstractButton* b, ::java::awt::Insets* insets);
	virtual bool setButtonType(::javax::swing::AbstractButton* b, Object$* prop);
	virtual void setThemeBorder(::javax::swing::AbstractButton* b);
	bool shouldInstallHierListener(::javax::swing::AbstractButton* b);
	virtual $String* toString() override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	virtual void uninstallHierListener(::javax::swing::AbstractButton* b);
	virtual void uninstallKeyboardActions(::javax::swing::AbstractButton* b) override;
	virtual void uninstallListeners(::javax::swing::AbstractButton* b) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static void updateBorder(::javax::swing::AbstractButton* b);
	static $String* BUTTON_TYPE;
	static $String* SEGMENTED_BUTTON_POSITION;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* buttonUI;
	bool defaults_initialized = false;
	::java::awt::Color* defaultDisabledTextColor = nullptr;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* fHierListener;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("BUTTON_TYPE")
#pragma pop_macro("SEGMENTED_BUTTON_POSITION")

#endif // _com_apple_laf_AquaButtonUI_h_