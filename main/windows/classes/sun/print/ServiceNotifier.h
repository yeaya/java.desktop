#ifndef _sun_print_ServiceNotifier_h_
#define _sun_print_ServiceNotifier_h_
//$ class sun.print.ServiceNotifier
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintServiceAttributeSet;
		}
	}
}
namespace javax {
	namespace print {
		namespace event {
			class PrintServiceAttributeListener;
		}
	}
}

namespace sun {
	namespace print {

class ServiceNotifier : public ::java::lang::Thread {
	$class(ServiceNotifier, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ServiceNotifier();
	void init$(::javax::print::PrintService* service);
	virtual void addListener(::javax::print::event::PrintServiceAttributeListener* listener);
	virtual bool isEmpty();
	virtual void removeListener(::javax::print::event::PrintServiceAttributeListener* listener);
	virtual void run() override;
	virtual void stopNotifier();
	virtual void wake();
	::javax::print::PrintService* service = nullptr;
	::java::util::Vector* listeners = nullptr;
	bool stop$ = false;
	::javax::print::attribute::PrintServiceAttributeSet* lastSet = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceNotifier_h_