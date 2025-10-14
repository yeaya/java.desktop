#ifndef _com_sun_accessibility_internal_resources_accessibility_sv_h_
#define _com_sun_accessibility_internal_resources_accessibility_sv_h_
//$ class com.sun.accessibility.internal.resources.accessibility_sv
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

class accessibility_sv : public ::java::util::ListResourceBundle {
	$class(accessibility_sv, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	accessibility_sv();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com

#endif // _com_sun_accessibility_internal_resources_accessibility_sv_h_