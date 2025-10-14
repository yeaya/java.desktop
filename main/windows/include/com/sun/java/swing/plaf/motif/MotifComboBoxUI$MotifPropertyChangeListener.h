#ifndef _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifPropertyChangeListener_h_
#define _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifPropertyChangeListener_h_
//$ class com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifComboBoxUI;
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

class $import MotifComboBoxUI$MotifPropertyChangeListener : public ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler {
	$class(MotifComboBoxUI$MotifPropertyChangeListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler)
public:
	MotifComboBoxUI$MotifPropertyChangeListener();
	void init$(::com::sun::java::swing::plaf::motif::MotifComboBoxUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifComboBoxUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifPropertyChangeListener_h_