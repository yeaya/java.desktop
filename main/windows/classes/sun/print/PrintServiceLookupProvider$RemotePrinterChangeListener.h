#ifndef _sun_print_PrintServiceLookupProvider$RemotePrinterChangeListener_h_
#define _sun_print_PrintServiceLookupProvider$RemotePrinterChangeListener_h_
//$ class sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace print {
		class PrintServiceLookupProvider;
	}
}

namespace sun {
	namespace print {

class PrintServiceLookupProvider$RemotePrinterChangeListener : public ::java::lang::Runnable {
	$class(PrintServiceLookupProvider$RemotePrinterChangeListener, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PrintServiceLookupProvider$RemotePrinterChangeListener();
	void init$(::sun::print::PrintServiceLookupProvider* this$0);
	virtual void run() override;
	::sun::print::PrintServiceLookupProvider* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrintServiceLookupProvider$RemotePrinterChangeListener_h_