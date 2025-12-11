#ifndef _com_apple_laf_AquaRootPaneUI_h_
#define _com_apple_laf_AquaRootPaneUI_h_
//$ class com.apple.laf.AquaRootPaneUI
//$ extends javax.swing.plaf.basic.BasicRootPaneUI
//$ implements javax.swing.event.AncestorListener,java.awt.event.WindowListener,java.awt.event.ContainerListener

#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/WindowListener.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
			class WindowEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JRootPane;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorEvent;
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

class AquaRootPaneUI : public ::javax::swing::plaf::basic::BasicRootPaneUI, public ::javax::swing::event::AncestorListener, public ::java::awt::event::WindowListener, public ::java::awt::event::ContainerListener {
	$class(AquaRootPaneUI, 0, ::javax::swing::plaf::basic::BasicRootPaneUI, ::javax::swing::event::AncestorListener, ::java::awt::event::WindowListener, ::java::awt::event::ContainerListener)
public:
	AquaRootPaneUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void ancestorAdded(::javax::swing::event::AncestorEvent* event) override;
	virtual void ancestorMoved(::javax::swing::event::AncestorEvent* event) override;
	virtual void ancestorRemoved(::javax::swing::event::AncestorEvent* event) override;
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void stopTimer();
	virtual $String* toString() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static void updateComponentTreeUIActivation(::java::awt::Component* c, Object$* active);
	virtual void updateDefaultButton(::javax::swing::JRootPane* root);
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* e);
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowLostFocus(::java::awt::event::WindowEvent* e);
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	virtual void windowStateChanged(::java::awt::event::WindowEvent* e);
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* sRootPaneUI;
	static const int32_t kDefaultButtonPaintDelayBetweenFrames = 50;
	::javax::swing::JButton* fCurrentDefaultButton = nullptr;
	::javax::swing::Timer* fTimer = nullptr;
	static bool sUseScreenMenuBar;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaRootPaneUI_h_