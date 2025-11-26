#ifndef _com_sun_java_swing_plaf_motif_MotifMenuItemUI$ChangeHandler_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuItemUI$ChangeHandler_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifMenuItemUI;
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

class $import MotifMenuItemUI$ChangeHandler : public ::javax::swing::event::ChangeListener {
	$class(MotifMenuItemUI$ChangeHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	MotifMenuItemUI$ChangeHandler();
	void init$(::com::sun::java::swing::plaf::motif::MotifMenuItemUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifMenuItemUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuItemUI$ChangeHandler_h_