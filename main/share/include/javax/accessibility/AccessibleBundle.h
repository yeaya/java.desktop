#ifndef _javax_accessibility_AccessibleBundle_h_
#define _javax_accessibility_AccessibleBundle_h_
//$ class javax.accessibility.AccessibleBundle
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleBundle : public ::java::lang::Object {
	$class(AccessibleBundle, 0, ::java::lang::Object)
public:
	AccessibleBundle();
	void init$();
	virtual $String* toDisplayString($String* name, ::java::util::Locale* locale);
	virtual $String* toDisplayString(::java::util::Locale* locale);
	virtual $String* toDisplayString();
	virtual $String* toString() override;
	$String* defaultResourceBundleName = nullptr;
	$String* key = nullptr;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleBundle_h_