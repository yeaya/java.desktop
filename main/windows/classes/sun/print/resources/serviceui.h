#ifndef _sun_print_resources_serviceui_h_
#define _sun_print_resources_serviceui_h_
//$ class sun.print.resources.serviceui
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace print {
		namespace resources {

class serviceui : public ::java::util::ListResourceBundle {
	$class(serviceui, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serviceui();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // print
} // sun

#endif // _sun_print_resources_serviceui_h_