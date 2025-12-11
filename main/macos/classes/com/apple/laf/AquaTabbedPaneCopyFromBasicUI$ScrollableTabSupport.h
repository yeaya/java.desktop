#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport
//$ extends java.awt.event.ActionListener
//$ implements javax.swing.event.ChangeListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
			class AquaTabbedPaneCopyFromBasicUI$CroppedEdge;
			class AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;
			class AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport : public ::java::awt::event::ActionListener, public ::javax::swing::event::ChangeListener {
	$class(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::javax::swing::event::ChangeListener)
public:
	AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0, int32_t tabPlacement);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void createButtons();
	virtual void scrollBackward(int32_t tabPlacement);
	virtual void scrollForward(int32_t tabPlacement);
	virtual void setLeadingTabIndex(int32_t tabPlacement, int32_t index);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	void updateView();
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport* viewport = nullptr;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel* tabPanel = nullptr;
	::javax::swing::JButton* scrollForwardButton = nullptr;
	::javax::swing::JButton* scrollBackwardButton = nullptr;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$CroppedEdge* croppedEdge = nullptr;
	int32_t leadingTabIndex = 0;
	::java::awt::Point* tabViewPosition = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_h_