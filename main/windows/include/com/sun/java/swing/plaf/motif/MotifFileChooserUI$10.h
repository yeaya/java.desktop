#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI$10_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI$10_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI$10
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifFileChooserUI;
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

class $import MotifFileChooserUI$10 : public ::java::awt::event::MouseAdapter {
	$class(MotifFileChooserUI$10, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	MotifFileChooserUI$10();
	void init$(::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI$10_h_