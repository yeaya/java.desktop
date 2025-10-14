#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$DefaultsListener_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$DefaultsListener_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener
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
				class NimbusDefaults;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$DefaultsListener : public ::java::beans::PropertyChangeListener {
	$class(NimbusDefaults$DefaultsListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	NimbusDefaults$DefaultsListener();
	void init$(::javax::swing::plaf::nimbus::NimbusDefaults* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::plaf::nimbus::NimbusDefaults* this$0 = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$DefaultsListener_h_