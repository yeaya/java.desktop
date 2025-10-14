#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$1_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$1_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameTitlePane;
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

class $export MotifInternalFrameTitlePane$1 : public ::java::awt::event::ActionListener {
	$class(MotifInternalFrameTitlePane$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	MotifInternalFrameTitlePane$1();
	void init$(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$1_h_