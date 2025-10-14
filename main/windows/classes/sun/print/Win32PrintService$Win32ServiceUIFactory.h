#ifndef _sun_print_Win32PrintService$Win32ServiceUIFactory_h_
#define _sun_print_Win32PrintService$Win32ServiceUIFactory_h_
//$ class sun.print.Win32PrintService$Win32ServiceUIFactory
//$ extends javax.print.ServiceUIFactory

#include <java/lang/Array.h>
#include <javax/print/ServiceUIFactory.h>

namespace sun {
	namespace print {
		class Win32PrintService;
	}
}

namespace sun {
	namespace print {

class Win32PrintService$Win32ServiceUIFactory : public ::javax::print::ServiceUIFactory {
	$class(Win32PrintService$Win32ServiceUIFactory, $NO_CLASS_INIT, ::javax::print::ServiceUIFactory)
public:
	Win32PrintService$Win32ServiceUIFactory();
	void init$(::sun::print::Win32PrintService* s);
	virtual $Object* getUI(int32_t role, $String* ui) override;
	virtual $StringArray* getUIClassNamesForRole(int32_t role) override;
	::sun::print::Win32PrintService* service = nullptr;
};

	} // print
} // sun

#endif // _sun_print_Win32PrintService$Win32ServiceUIFactory_h_