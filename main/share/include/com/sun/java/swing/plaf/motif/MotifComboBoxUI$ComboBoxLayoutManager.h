#ifndef _com_sun_java_swing_plaf_motif_MotifComboBoxUI$ComboBoxLayoutManager_h_
#define _com_sun_java_swing_plaf_motif_MotifComboBoxUI$ComboBoxLayoutManager_h_
//$ class com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager

#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifComboBoxUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifComboBoxUI$ComboBoxLayoutManager : public ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager {
	$class(MotifComboBoxUI$ComboBoxLayoutManager, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager)
public:
	MotifComboBoxUI$ComboBoxLayoutManager();
	void init$(::com::sun::java::swing::plaf::motif::MotifComboBoxUI* this$0);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	::com::sun::java::swing::plaf::motif::MotifComboBoxUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifComboBoxUI$ComboBoxLayoutManager_h_