#ifndef _com_sun_java_swing_plaf_motif_MotifMenuUI$MouseInputHandler_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuUI$MouseInputHandler_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler
//$ extends javax.swing.event.MouseInputListener

#include <javax/swing/event/MouseInputListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifMenuUI;
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

class $export MotifMenuUI$MouseInputHandler : public ::javax::swing::event::MouseInputListener {
	$class(MotifMenuUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputListener)
public:
	MotifMenuUI$MouseInputHandler();
	void init$(::com::sun::java::swing::plaf::motif::MotifMenuUI* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifMenuUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuUI$MouseInputHandler_h_