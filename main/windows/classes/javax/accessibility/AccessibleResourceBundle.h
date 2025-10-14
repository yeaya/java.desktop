#ifndef _javax_accessibility_AccessibleResourceBundle_h_
#define _javax_accessibility_AccessibleResourceBundle_h_
//$ class javax.accessibility.AccessibleResourceBundle
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace javax {
	namespace accessibility {

class $export AccessibleResourceBundle : public ::java::util::ListResourceBundle {
	$class(AccessibleResourceBundle, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	AccessibleResourceBundle();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleResourceBundle_h_