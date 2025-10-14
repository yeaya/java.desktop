#ifndef _sun_print_resources_serviceui_sv_h_
#define _sun_print_resources_serviceui_sv_h_
//$ class sun.print.resources.serviceui_sv
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace print {
		namespace resources {

class serviceui_sv : public ::java::util::ListResourceBundle {
	$class(serviceui_sv, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serviceui_sv();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // print
} // sun

#endif // _sun_print_resources_serviceui_sv_h_