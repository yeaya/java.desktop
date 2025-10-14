#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameUI$1_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameUI$1_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1
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

class $export MotifInternalFrameUI$1 : public ::javax::swing::AbstractAction {
	$class(MotifInternalFrameUI$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	MotifInternalFrameUI$1();
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

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameUI$1_h_