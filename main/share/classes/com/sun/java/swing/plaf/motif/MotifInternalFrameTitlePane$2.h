#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$2_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$2_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$2
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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
			class MouseEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifInternalFrameTitlePane$2 : public ::java::awt::event::MouseAdapter {
	$class(MotifInternalFrameTitlePane$2, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	MotifInternalFrameTitlePane$2();
	void init$(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* evt) override;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$2_h_