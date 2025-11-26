#ifndef _java_awt_RenderingHints$Key_h_
#define _java_awt_RenderingHints$Key_h_
//$ class java.awt.RenderingHints$Key
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace java {
	namespace awt {

class $export RenderingHints$Key : public ::java::lang::Object {
	$class(RenderingHints$Key, 0, ::java::lang::Object)
public:
	RenderingHints$Key();
	void init$(int32_t privatekey);
	virtual bool equals(Object$* o) override;
	$String* getIdentity();
	virtual int32_t hashCode() override;
	int32_t intKey();
	virtual bool isCompatibleValue(Object$* val) {return false;}
	static void recordIdentity(::java::awt::RenderingHints$Key* k);
	static ::java::util::HashMap* identitymap;
	int32_t privatekey = 0;
};

	} // awt
} // java

#endif // _java_awt_RenderingHints$Key_h_