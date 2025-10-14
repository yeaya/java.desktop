#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabSupport_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabSupport_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport
//$ extends java.awt.event.ActionListener
//$ implements javax.swing.event.ChangeListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTabbedPaneUI;
				class BasicTabbedPaneUI$CroppedEdge;
				class BasicTabbedPaneUI$ScrollableTabPanel;
				class BasicTabbedPaneUI$ScrollableTabViewport;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTabbedPaneUI$ScrollableTabSupport : public ::java::awt::event::ActionListener, public ::javax::swing::event::ChangeListener {
	$class(BasicTabbedPaneUI$ScrollableTabSupport, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::javax::swing::event::ChangeListener)
public:
	BasicTabbedPaneUI$ScrollableTabSupport();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0, int32_t tabPlacement);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void createButtons();
	virtual void scrollBackward(int32_t tabPlacement);
	virtual void scrollForward(int32_t tabPlacement);
	virtual void setLeadingTabIndex(int32_t tabPlacement, int32_t index);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	void updateView();
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
	::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabViewport* viewport = nullptr;
	::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabPanel* tabPanel = nullptr;
	::javax::swing::JButton* scrollForwardButton = nullptr;
	::javax::swing::JButton* scrollBackwardButton = nullptr;
	::javax::swing::plaf::basic::BasicTabbedPaneUI$CroppedEdge* croppedEdge = nullptr;
	int32_t leadingTabIndex = 0;
	::java::awt::Point* tabViewPosition = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabSupport_h_