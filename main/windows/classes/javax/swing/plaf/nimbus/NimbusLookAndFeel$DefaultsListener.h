#ifndef _javax_swing_plaf_nimbus_NimbusLookAndFeel$DefaultsListener_h_
#define _javax_swing_plaf_nimbus_NimbusLookAndFeel$DefaultsListener_h_
//$ class javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusLookAndFeel$DefaultsListener : public ::java::beans::PropertyChangeListener {
	$class(NimbusLookAndFeel$DefaultsListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	NimbusLookAndFeel$DefaultsListener();
	void init$(::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0 = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusLookAndFeel$DefaultsListener_h_