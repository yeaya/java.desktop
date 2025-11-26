#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$Title$2_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$Title$2_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$2
//$ extends java.awt.event.MouseListener

#include <java/awt/event/MouseListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameTitlePane;
						class MotifInternalFrameTitlePane$Title;
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

class $import MotifInternalFrameTitlePane$Title$2 : public ::java::awt::event::MouseListener {
	$class(MotifInternalFrameTitlePane$Title$2, $NO_CLASS_INIT, ::java::awt::event::MouseListener)
public:
	MotifInternalFrameTitlePane$Title$2();
	void init$(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title* this$1, ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* val$this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title* this$1 = nullptr;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* val$this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$Title$2_h_