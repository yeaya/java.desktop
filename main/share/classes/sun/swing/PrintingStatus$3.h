#ifndef _sun_swing_PrintingStatus$3_h_
#define _sun_swing_PrintingStatus$3_h_
//$ class sun.swing.PrintingStatus$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace swing {
		class PrintingStatus;
	}
}

namespace sun {
	namespace swing {

class PrintingStatus$3 : public ::java::lang::Runnable {
	$class(PrintingStatus$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PrintingStatus$3();
	void init$(::sun::swing::PrintingStatus* this$0, bool val$isModal);
	virtual void run() override;
	::sun::swing::PrintingStatus* this$0 = nullptr;
	bool val$isModal = false;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus$3_h_