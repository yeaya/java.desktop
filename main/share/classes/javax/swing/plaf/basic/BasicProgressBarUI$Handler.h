#ifndef _javax_swing_plaf_basic_BasicProgressBarUI$Handler_h_
#define _javax_swing_plaf_basic_BasicProgressBarUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicProgressBarUI$Handler
//$ extends javax.swing.event.ChangeListener
//$ implements java.beans.PropertyChangeListener,java.awt.event.HierarchyListener

#include <java/awt/event/HierarchyListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class HierarchyEvent;
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
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicProgressBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicProgressBarUI$Handler : public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener, public ::java::awt::event::HierarchyListener {
	$class(BasicProgressBarUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener, ::java::awt::event::HierarchyListener)
public:
	BasicProgressBarUI$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicProgressBarUI* this$0);
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* he) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicProgressBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicProgressBarUI$Handler_h_