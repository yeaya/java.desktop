#ifndef _com_apple_laf_AquaMenuItemUI_h_
#define _com_apple_laf_AquaMenuItemUI_h_
//$ class com.apple.laf.AquaMenuItemUI
//$ extends javax.swing.plaf.basic.BasicMenuItemUI
//$ implements com.apple.laf.AquaMenuPainter$Client

#include <com/apple/laf/AquaMenuPainter$Client.h>
#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

#pragma push_macro("INDETERMINATE_LISTENER")
#undef INDETERMINATE_LISTENER

namespace com {
	namespace apple {
		namespace laf {
			class AquaMenuItemUI$IndeterminateListener;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JMenuItem;
		class MenuSelectionManager;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuItemUI : public ::javax::swing::plaf::basic::BasicMenuItemUI, public ::com::apple::laf::AquaMenuPainter$Client {
	$class(AquaMenuItemUI, 0, ::javax::swing::plaf::basic::BasicMenuItemUI, ::com::apple::laf::AquaMenuPainter$Client)
public:
	AquaMenuItemUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t type);
	static ::javax::swing::JMenuItem* access$000(::com::apple::laf::AquaMenuItemUI* x0);
	static ::javax::swing::JMenuItem* access$100(::com::apple::laf::AquaMenuItemUI* x0);
	static ::javax::swing::Icon* access$202(::com::apple::laf::AquaMenuItemUI* x0, ::javax::swing::Icon* x1);
	static ::javax::swing::Icon* access$302(::com::apple::laf::AquaMenuItemUI* x0, ::javax::swing::Icon* x1);
	virtual void addListeners();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void doClick(::javax::swing::MenuSelectionManager* msm) override;
	virtual ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::JComponent* c, ::javax::swing::Icon* localCheckIcon, ::javax::swing::Icon* localArrowIcon, int32_t localDefaultTextIconGap) override;
	virtual $String* getPropertyPrefix() override;
	virtual void installListeners() override;
	using ::javax::swing::plaf::basic::BasicMenuItemUI::paintBackground;
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t menuWidth, int32_t menuHeight) override;
	virtual void paintMenuItem(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::javax::swing::Icon* localCheckIcon, ::javax::swing::Icon* localArrowIcon, ::java::awt::Color* background, ::java::awt::Color* foreground, int32_t localDefaultTextIconGap) override;
	virtual void removeListeners();
	virtual void setIsScreenMenu(bool isScreenMenuItem);
	virtual $String* toString() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void updateListenersForScreenMenuItem();
	static const int32_t kPlain = 0;
	static const int32_t kCheckBox = 1;
	static const int32_t kRadioButton = 2;
	static $StringArray* sPropertyPrefixes;
	bool fIsScreenMenuItem = false;
	bool fIsIndeterminate = false;
	int32_t fType = 0;
	static ::com::apple::laf::AquaMenuItemUI$IndeterminateListener* INDETERMINATE_LISTENER;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("INDETERMINATE_LISTENER")

#endif // _com_apple_laf_AquaMenuItemUI_h_