#ifndef _com_sun_java_swing_plaf_motif_MotifButtonListener_h_
#define _com_sun_java_swing_plaf_motif_MotifButtonListener_h_
//$ class com.sun.java.swing.plaf.motif.MotifButtonListener
//$ extends javax.swing.plaf.basic.BasicButtonListener

#include <javax/swing/plaf/basic/BasicButtonListener.h>

namespace javax {
	namespace swing {
		class AbstractButton;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifButtonListener : public ::javax::swing::plaf::basic::BasicButtonListener {
	$class(MotifButtonListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicButtonListener)
public:
	MotifButtonListener();
	void init$(::javax::swing::AbstractButton* b);
	virtual void checkOpacity(::javax::swing::AbstractButton* b) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifButtonListener_h_