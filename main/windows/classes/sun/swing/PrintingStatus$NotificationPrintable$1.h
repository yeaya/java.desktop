#ifndef _sun_swing_PrintingStatus$NotificationPrintable$1_h_
#define _sun_swing_PrintingStatus$NotificationPrintable$1_h_
//$ class sun.swing.PrintingStatus$NotificationPrintable$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace swing {
		class PrintingStatus$NotificationPrintable;
	}
}

namespace sun {
	namespace swing {

class PrintingStatus$NotificationPrintable$1 : public ::java::lang::Runnable {
	$class(PrintingStatus$NotificationPrintable$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PrintingStatus$NotificationPrintable$1();
	void init$(::sun::swing::PrintingStatus$NotificationPrintable* this$1, int32_t val$pageIndex);
	virtual void run() override;
	::sun::swing::PrintingStatus$NotificationPrintable* this$1 = nullptr;
	int32_t val$pageIndex = 0;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus$NotificationPrintable$1_h_