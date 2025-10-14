#ifndef _javax_swing_plaf_basic_BasicSeparatorUI_h_
#define _javax_swing_plaf_basic_BasicSeparatorUI_h_
//$ class javax.swing.plaf.basic.BasicSeparatorUI
//$ extends javax.swing.plaf.SeparatorUI

#include <javax/swing/plaf/SeparatorUI.h>

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JSeparator;
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

class $export BasicSeparatorUI : public ::javax::swing::plaf::SeparatorUI {
	$class(BasicSeparatorUI, $NO_CLASS_INIT, ::javax::swing::plaf::SeparatorUI)
public:
	BasicSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::JSeparator* s);
	virtual void installListeners(::javax::swing::JSeparator* s);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void uninstallDefaults(::javax::swing::JSeparator* s);
	virtual void uninstallListeners(::javax::swing::JSeparator* s);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* highlight = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSeparatorUI_h_