#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameUI$3_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameUI$3_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifInternalFrameUI$3 : public ::javax::swing::AbstractAction {
	$class(MotifInternalFrameUI$3, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	MotifInternalFrameUI$3();
	void init$(::com::sun::java::swing::plaf::motif::MotifInternalFrameUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameUI$3_h_