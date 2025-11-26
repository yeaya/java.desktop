#ifndef _javax_swing_plaf_metal_MetalToolBarUI_h_
#define _javax_swing_plaf_metal_MetalToolBarUI_h_
//$ class javax.swing.plaf.metal.MetalToolBarUI
//$ extends javax.swing.plaf.basic.BasicToolBarUI

#include <javax/swing/plaf/basic/BasicToolBarUI.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JMenuBar;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalToolBarUI : public ::javax::swing::plaf::basic::BasicToolBarUI {
	$class(MetalToolBarUI, 0, ::javax::swing::plaf::basic::BasicToolBarUI)
public:
	MetalToolBarUI();
	void init$();
	virtual ::java::awt::event::ContainerListener* createContainerListener();
	virtual ::javax::swing::event::MouseInputListener* createDockingListener() override;
	virtual ::javax::swing::border::Border* createNonRolloverBorder() override;
	::javax::swing::border::Border* createNonRolloverToggleBorder();
	virtual ::javax::swing::border::Border* createRolloverBorder() override;
	virtual ::java::beans::PropertyChangeListener* createRolloverListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static bool doesMenuBarBorderToolBar(::javax::swing::JMenuBar* c);
	static $Object* findRegisteredComponentOfType(::javax::swing::JComponent* from, $Class* target);
	virtual void installListeners() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void register$(::javax::swing::JComponent* c);
	virtual void setBorderToNonRollover(::java::awt::Component* c) override;
	virtual void setDragOffset(::java::awt::Point* p);
	void setLastMenuBar(::javax::swing::JMenuBar* lastMenuBar);
	virtual void uninstallListeners() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static void unregister(::javax::swing::JComponent* c);
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static ::java::util::List* components;
	::java::awt::event::ContainerListener* contListener = nullptr;
	::java::beans::PropertyChangeListener* rolloverListener = nullptr;
	static ::javax::swing::border::Border* nonRolloverBorder;
	::javax::swing::JMenuBar* lastMenuBar = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalToolBarUI_h_