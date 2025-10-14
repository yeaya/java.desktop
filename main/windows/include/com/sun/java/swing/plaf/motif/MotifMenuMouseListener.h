#ifndef _com_sun_java_swing_plaf_motif_MotifMenuMouseListener_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuMouseListener_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuMouseListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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

class $import MotifMenuMouseListener : public ::java::awt::event::MouseAdapter {
	$class(MotifMenuMouseListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	MotifMenuMouseListener();
	void init$();
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuMouseListener_h_