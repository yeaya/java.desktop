#ifndef _com_apple_laf_AquaMenuUI_h_
#define _com_apple_laf_AquaMenuUI_h_
//$ class com.apple.laf.AquaMenuUI
//$ extends javax.swing.plaf.basic.BasicMenuUI
//$ implements com.apple.laf.AquaMenuPainter$Client

#include <com/apple/laf/AquaMenuPainter$Client.h>
#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>

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
		class JMenu;
		class JMenuItem;
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
			class MenuDragMouseListener;
			class MouseInputListener;
		}
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

class AquaMenuUI : public ::javax::swing::plaf::basic::BasicMenuUI, public ::com::apple::laf::AquaMenuPainter$Client {
	$class(AquaMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI, ::com::apple::laf::AquaMenuPainter$Client)
public:
	AquaMenuUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JMenuItem* access$000(::com::apple::laf::AquaMenuUI* x0);
	static ::javax::swing::JMenuItem* access$100(::com::apple::laf::AquaMenuUI* x0);
	static ::javax::swing::JMenuItem* access$200(::com::apple::laf::AquaMenuUI* x0);
	static ::javax::swing::JMenuItem* access$300(::com::apple::laf::AquaMenuUI* x0);
	static void access$400(::com::apple::laf::AquaMenuUI* x0, ::javax::swing::JMenu* x1);
	static ::javax::swing::JMenuItem* access$500(::com::apple::laf::AquaMenuUI* x0);
	static void access$600(::com::apple::laf::AquaMenuUI* x0, ::javax::swing::JMenu* x1);
	static void appendPath($Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuElement* elem);
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::event::MenuDragMouseListener* createMenuDragMouseListener(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::JComponent* c, ::javax::swing::Icon* localCheckIcon, ::javax::swing::Icon* localArrowIcon, int32_t localDefaultTextIconGap) override;
	virtual void installDefaults() override;
	using ::javax::swing::plaf::basic::BasicMenuUI::paintBackground;
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t menuWidth, int32_t menuHeight) override;
	virtual void paintMenuItem(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::javax::swing::Icon* localCheckIcon, ::javax::swing::Icon* localArrowIcon, ::java::awt::Color* background, ::java::awt::Color* foreground, int32_t localDefaultTextIconGap) override;
	virtual $String* toString() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuUI_h_