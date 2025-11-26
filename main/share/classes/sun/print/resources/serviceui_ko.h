#ifndef _sun_print_resources_serviceui_ko_h_
#define _sun_print_resources_serviceui_ko_h_
//$ class sun.print.resources.serviceui_ko
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace print {
		namespace resources {

class serviceui_ko : public ::java::util::ListResourceBundle {
	$class(serviceui_ko, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serviceui_ko();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // print
} // sun

#endif // _sun_print_resources_serviceui_ko_h_