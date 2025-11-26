#ifndef _java_awt_AttributeValue_h_
#define _java_awt_AttributeValue_h_
//$ class java.awt.AttributeValue
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $export AttributeValue : public ::java::lang::Object {
	$class(AttributeValue, 0, ::java::lang::Object)
public:
	AttributeValue();
	void init$(int32_t value, $StringArray* names);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	int32_t value = 0;
	$StringArray* names = nullptr;
};

	} // awt
} // java

#endif // _java_awt_AttributeValue_h_