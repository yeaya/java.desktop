#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$DesktopIconActionListener_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$DesktopIconActionListener_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

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

class $export MotifDesktopIconUI$DesktopIconActionListener : public ::java::awt::event::ActionListener {
	$class(MotifDesktopIconUI$DesktopIconActionListener, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	MotifDesktopIconUI$DesktopIconActionListener();
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$DesktopIconActionListener_h_