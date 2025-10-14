#ifndef _com_sun_java_swing_plaf_motif_MotifMenuUI$MotifChangeHandler_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuUI$MotifChangeHandler_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler
//$ extends javax.swing.plaf.basic.BasicMenuUI$ChangeHandler

#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>

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
namespace javax {
	namespace swing {
		class JMenu;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifMenuUI$MotifChangeHandler : public ::javax::swing::plaf::basic::BasicMenuUI$ChangeHandler {
	$class(MotifMenuUI$MotifChangeHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI$ChangeHandler)
public:
	MotifMenuUI$MotifChangeHandler();
	void init$(::com::sun::java::swing::plaf::motif::MotifMenuUI* this$0, ::javax::swing::JMenu* m, ::com::sun::java::swing::plaf::motif::MotifMenuUI* ui);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifMenuUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuUI$MotifChangeHandler_h_