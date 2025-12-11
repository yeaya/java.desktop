#ifndef _com_apple_laf_AquaInternalFrameDockIconUI_h_
#define _com_apple_laf_AquaInternalFrameDockIconUI_h_
//$ class com.apple.laf.AquaInternalFrameDockIconUI
//$ extends javax.swing.plaf.DesktopIconUI
//$ implements java.awt.event.MouseListener,java.awt.event.MouseMotionListener

#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/plaf/DesktopIconUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameDockIconUI$DockLabel;
			class AquaInternalFrameDockIconUI$ScaledImageLabel;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
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
		class JInternalFrame;
		class JInternalFrame$JDesktopIcon;
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

class AquaInternalFrameDockIconUI : public ::javax::swing::plaf::DesktopIconUI, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener {
	$class(AquaInternalFrameDockIconUI, $NO_CLASS_INIT, ::javax::swing::plaf::DesktopIconUI, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener)
public:
	AquaInternalFrameDockIconUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	void installComponents();
	void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	void uninstallComponents();
	void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateIcon();
	::javax::swing::JInternalFrame$JDesktopIcon* fDesktopIcon = nullptr;
	::javax::swing::JInternalFrame* fFrame = nullptr;
	::com::apple::laf::AquaInternalFrameDockIconUI$ScaledImageLabel* fIconPane = nullptr;
	::com::apple::laf::AquaInternalFrameDockIconUI$DockLabel* fDockLabel = nullptr;
	bool fTrackingIcon = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameDockIconUI_h_