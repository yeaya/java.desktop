#ifndef _sun_print_resources_serviceui_fr_h_
#define _sun_print_resources_serviceui_fr_h_
//$ class sun.print.resources.serviceui_fr
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace print {
		namespace resources {

class serviceui_fr : public ::java::util::ListResourceBundle {
	$class(serviceui_fr, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serviceui_fr();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // print
} // sun

#endif // _sun_print_resources_serviceui_fr_h_