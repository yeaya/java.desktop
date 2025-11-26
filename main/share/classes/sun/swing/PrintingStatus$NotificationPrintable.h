#ifndef _sun_swing_PrintingStatus$NotificationPrintable_h_
#define _sun_swing_PrintingStatus$NotificationPrintable_h_
//$ class sun.swing.PrintingStatus$NotificationPrintable
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
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

class PrintingStatus$NotificationPrintable : public ::java::awt::print::Printable {
	$class(PrintingStatus$NotificationPrintable, 0, ::java::awt::print::Printable)
public:
	PrintingStatus$NotificationPrintable();
	void init$(::sun::swing::PrintingStatus* this$0, ::java::awt::print::Printable* delegatee);
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) override;
	void updateStatusOnEDT(int32_t pageIndex);
	::sun::swing::PrintingStatus* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::awt::print::Printable* printDelegatee = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus$NotificationPrintable_h_