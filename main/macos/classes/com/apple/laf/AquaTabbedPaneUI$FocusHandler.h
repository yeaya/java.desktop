#ifndef _com_apple_laf_AquaTabbedPaneUI$FocusHandler_h_
#define _com_apple_laf_AquaTabbedPaneUI$FocusHandler_h_
//$ class com.apple.laf.AquaTabbedPaneUI$FocusHandler
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$FocusHandler : public ::java::awt::event::FocusAdapter {
	$class(AquaTabbedPaneUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	AquaTabbedPaneUI$FocusHandler();
	void init$(::com::apple::laf::AquaTabbedPaneUI* this$0);
	virtual void adjustPaintingRectForFocusRing(::java::awt::event::FocusEvent* e);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::java::awt::Container* getTopLevelFocusCycleRootAncestor(::java::awt::Container* container);
	virtual bool isDefaultFocusReceiver(::javax::swing::JComponent* component);
	::com::apple::laf::AquaTabbedPaneUI* this$0 = nullptr;
	::java::awt::Rectangle* sWorkingRect = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$FocusHandler_h_