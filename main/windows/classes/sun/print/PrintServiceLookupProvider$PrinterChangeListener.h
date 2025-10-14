#ifndef _sun_print_PrintServiceLookupProvider$PrinterChangeListener_h_
#define _sun_print_PrintServiceLookupProvider$PrinterChangeListener_h_
//$ class sun.print.PrintServiceLookupProvider$PrinterChangeListener
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace print {
		class PrintServiceLookupProvider;
	}
}

namespace sun {
	namespace print {

class PrintServiceLookupProvider$PrinterChangeListener : public ::java::lang::Runnable {
	$class(PrintServiceLookupProvider$PrinterChangeListener, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PrintServiceLookupProvider$PrinterChangeListener();
	void init$(::sun::print::PrintServiceLookupProvider* this$0);
	virtual void run() override;
	::sun::print::PrintServiceLookupProvider* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrintServiceLookupProvider$PrinterChangeListener_h_