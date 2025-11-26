#ifndef _sun_print_resources_serviceui_de_h_
#define _sun_print_resources_serviceui_de_h_
//$ class sun.print.resources.serviceui_de
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace print {
		namespace resources {

class serviceui_de : public ::java::util::ListResourceBundle {
	$class(serviceui_de, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serviceui_de();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // print
} // sun

#endif // _sun_print_resources_serviceui_de_h_