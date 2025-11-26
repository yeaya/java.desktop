#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$DesktopIconMouseListener_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$DesktopIconMouseListener_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopIconUI;
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

class $export MotifDesktopIconUI$DesktopIconMouseListener : public ::java::awt::event::MouseAdapter {
	$class(MotifDesktopIconUI$DesktopIconMouseListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	MotifDesktopIconUI$DesktopIconMouseListener();
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$DesktopIconMouseListener_h_