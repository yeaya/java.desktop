#ifndef _com_sun_java_swing_plaf_motif_MotifScrollPaneUI$1_h_
#define _com_sun_java_swing_plaf_motif_MotifScrollPaneUI$1_h_
//$ class com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifScrollPaneUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifScrollPaneUI$1 : public ::java::beans::PropertyChangeListener {
	$class(MotifScrollPaneUI$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MotifScrollPaneUI$1();
	void init$(::com::sun::java::swing::plaf::motif::MotifScrollPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifScrollPaneUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifScrollPaneUI$1_h_