#ifndef _com_apple_laf_AquaInternalFramePaneUI_h_
#define _com_apple_laf_AquaInternalFramePaneUI_h_
//$ class com.apple.laf.AquaInternalFramePaneUI
//$ extends javax.swing.plaf.basic.BasicDesktopPaneUI
//$ implements java.awt.event.MouseListener

#include <java/awt/event/MouseListener.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFramePaneUI$DockLayoutManager;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
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

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFramePaneUI : public ::javax::swing::plaf::basic::BasicDesktopPaneUI, public ::java::awt::event::MouseListener {
	$class(AquaInternalFramePaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicDesktopPaneUI, ::java::awt::event::MouseListener)
public:
	AquaInternalFramePaneUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::JComponent* getDock();
	virtual void installDesktopManager() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallDesktopManager() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	::javax::swing::JComponent* fDock = nullptr;
	::com::apple::laf::AquaInternalFramePaneUI$DockLayoutManager* fLayoutMgr = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFramePaneUI_h_