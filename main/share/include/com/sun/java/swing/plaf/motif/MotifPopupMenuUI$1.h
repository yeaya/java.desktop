#ifndef _com_sun_java_swing_plaf_motif_MotifPopupMenuUI$1_h_
#define _com_sun_java_swing_plaf_motif_MotifPopupMenuUI$1_h_
//$ class com.sun.java.swing.plaf.motif.MotifPopupMenuUI$1
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifPopupMenuUI;
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

class $import MotifPopupMenuUI$1 : public ::javax::swing::event::ChangeListener {
	$class(MotifPopupMenuUI$1, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	MotifPopupMenuUI$1();
	void init$(::com::sun::java::swing::plaf::motif::MotifPopupMenuUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifPopupMenuUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifPopupMenuUI$1_h_