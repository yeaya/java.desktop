#ifndef _javax_swing_plaf_basic_BasicToolTipUI_h_
#define _javax_swing_plaf_basic_BasicToolTipUI_h_
//$ class javax.swing.plaf.basic.BasicToolTipUI
//$ extends javax.swing.plaf.ToolTipUI

#include <javax/swing/plaf/ToolTipUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
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

class $export BasicToolTipUI : public ::javax::swing::plaf::ToolTipUI {
	$class(BasicToolTipUI, 0, ::javax::swing::plaf::ToolTipUI)
public:
	BasicToolTipUI();
	void init$();
	void componentChanged(::javax::swing::JComponent* c);
	::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JComponent* c);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	void installComponents(::javax::swing::JComponent* c);
	virtual void installDefaults(::javax::swing::JComponent* c);
	virtual void installListeners(::javax::swing::JComponent* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void uninstallComponents(::javax::swing::JComponent* c);
	virtual void uninstallDefaults(::javax::swing::JComponent* c);
	virtual void uninstallListeners(::javax::swing::JComponent* c);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::basic::BasicToolTipUI* sharedInstance;
	static ::java::beans::PropertyChangeListener* sharedPropertyChangedListener;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolTipUI_h_