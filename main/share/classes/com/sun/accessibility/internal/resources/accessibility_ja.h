#ifndef _com_sun_accessibility_internal_resources_accessibility_ja_h_
#define _com_sun_accessibility_internal_resources_accessibility_ja_h_
//$ class com.sun.accessibility.internal.resources.accessibility_ja
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

class accessibility_ja : public ::java::util::ListResourceBundle {
	$class(accessibility_ja, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	accessibility_ja();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com

#endif // _com_sun_accessibility_internal_resources_accessibility_ja_h_