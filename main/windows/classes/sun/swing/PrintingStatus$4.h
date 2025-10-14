#ifndef _sun_swing_PrintingStatus$4_h_
#define _sun_swing_PrintingStatus$4_h_
//$ class sun.swing.PrintingStatus$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace swing {
		class PrintingStatus;
	}
}

namespace sun {
	namespace swing {

class PrintingStatus$4 : public ::java::lang::Runnable {
	$class(PrintingStatus$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PrintingStatus$4();
	void init$(::sun::swing::PrintingStatus* this$0);
	virtual void run() override;
	::sun::swing::PrintingStatus* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus$4_h_