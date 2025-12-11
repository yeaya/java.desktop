#ifndef _com_apple_laf_AquaButtonUI$AquaButtonListener_h_
#define _com_apple_laf_AquaButtonUI$AquaButtonListener_h_
//$ class com.apple.laf.AquaButtonUI$AquaButtonListener
//$ extends javax.swing.plaf.basic.BasicButtonListener
//$ implements javax.swing.event.AncestorListener

#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaButtonUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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
		class AbstractButton;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonUI$AquaButtonListener : public ::javax::swing::plaf::basic::BasicButtonListener, public ::javax::swing::event::AncestorListener {
	$class(AquaButtonUI$AquaButtonListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicButtonListener, ::javax::swing::event::AncestorListener)
public:
	AquaButtonUI$AquaButtonListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaButtonUI* this$0, ::javax::swing::AbstractButton* b);
	virtual void ancestorAdded(::javax::swing::event::AncestorEvent* e) override;
	virtual void ancestorMoved(::javax::swing::event::AncestorEvent* e) override;
	virtual void ancestorRemoved(::javax::swing::event::AncestorEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void updateDefaultButton();
	::com::apple::laf::AquaButtonUI* this$0 = nullptr;
	::javax::swing::AbstractButton* b = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonUI$AquaButtonListener_h_