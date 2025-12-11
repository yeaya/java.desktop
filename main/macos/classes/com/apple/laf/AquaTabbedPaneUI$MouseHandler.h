#ifndef _com_apple_laf_AquaTabbedPaneUI$MouseHandler_h_
#define _com_apple_laf_AquaTabbedPaneUI$MouseHandler_h_
//$ class com.apple.laf.AquaTabbedPaneUI$MouseHandler
//$ extends javax.swing.event.MouseInputAdapter
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/event/MouseInputAdapter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JMenuItem;
		class JTabbedPane;
		class Timer;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$MouseHandler : public ::javax::swing::event::MouseInputAdapter, public ::java::awt::event::ActionListener {
	$class(AquaTabbedPaneUI$MouseHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter, ::java::awt::event::ActionListener)
public:
	AquaTabbedPaneUI$MouseHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTabbedPaneUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual ::javax::swing::JMenuItem* createMenuItem(int32_t i);
	virtual void dispose();
	virtual int32_t getCurrentTab(::javax::swing::JTabbedPane* pane, ::java::awt::Point* p);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void repaint(::javax::swing::JTabbedPane* pane, int32_t tab);
	virtual void showFullPopup(bool firstTab);
	virtual $String* toString() override;
	::com::apple::laf::AquaTabbedPaneUI* this$0 = nullptr;
	int32_t trackingTab = 0;
	::javax::swing::Timer* popupTimer = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$MouseHandler_h_