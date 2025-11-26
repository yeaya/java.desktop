#ifndef _com_sun_java_swing_plaf_motif_MotifCheckBoxMenuItemUI$ChangeHandler_h_
#define _com_sun_java_swing_plaf_motif_MotifCheckBoxMenuItemUI$ChangeHandler_h_
//$ class com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifCheckBoxMenuItemUI;
					}
				}
			}
		}
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
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifCheckBoxMenuItemUI$ChangeHandler : public ::javax::swing::event::ChangeListener {
	$class(MotifCheckBoxMenuItemUI$ChangeHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	MotifCheckBoxMenuItemUI$ChangeHandler();
	void init$(::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifCheckBoxMenuItemUI$ChangeHandler_h_