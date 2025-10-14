#ifndef _javax_swing_JTree$TreeTimer_h_
#define _javax_swing_JTree$TreeTimer_h_
//$ class javax.swing.JTree$TreeTimer
//$ extends javax.swing.Timer

#include <javax/swing/Timer.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}

namespace javax {
	namespace swing {

class JTree$TreeTimer : public ::javax::swing::Timer {
	$class(JTree$TreeTimer, $NO_CLASS_INIT, ::javax::swing::Timer)
public:
	JTree$TreeTimer();
	void init$(::javax::swing::JTree* this$0);
	virtual void fireActionPerformed(::java::awt::event::ActionEvent* ae) override;
	::javax::swing::JTree* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$TreeTimer_h_