#ifndef _com_sun_java_swing_plaf_motif_MotifSplitPaneDivider$MotifMouseHandler_h_
#define _com_sun_java_swing_plaf_motif_MotifSplitPaneDivider$MotifMouseHandler_h_
//$ class com.sun.java.swing.plaf.motif.MotifSplitPaneDivider$MotifMouseHandler
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler

#include <javax/swing/plaf/basic/BasicSplitPaneDivider$MouseHandler.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifSplitPaneDivider;
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

class $import MotifSplitPaneDivider$MotifMouseHandler : public ::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler {
	$class(MotifSplitPaneDivider$MotifMouseHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler)
public:
	MotifSplitPaneDivider$MotifMouseHandler();
	void init$(::com::sun::java::swing::plaf::motif::MotifSplitPaneDivider* this$0);
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifSplitPaneDivider* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifSplitPaneDivider$MotifMouseHandler_h_