#ifndef _sun_print_resources_serviceui_es_h_
#define _sun_print_resources_serviceui_es_h_
//$ class sun.print.resources.serviceui_es
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace print {
		namespace resources {

class serviceui_es : public ::java::util::ListResourceBundle {
	$class(serviceui_es, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	serviceui_es();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // print
} // sun

#endif // _sun_print_resources_serviceui_es_h_