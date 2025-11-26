#ifndef _sun_swing_PrintingStatus$1_h_
#define _sun_swing_PrintingStatus$1_h_
//$ class sun.swing.PrintingStatus$1
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace sun {
	namespace swing {
		class PrintingStatus;
	}
}

namespace sun {
	namespace swing {

class PrintingStatus$1 : public ::javax::swing::AbstractAction {
	$class(PrintingStatus$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	PrintingStatus$1();
	void init$(::sun::swing::PrintingStatus* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::sun::swing::PrintingStatus* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus$1_h_