#ifndef _java_awt_geom_IllegalPathStateException_h_
#define _java_awt_geom_IllegalPathStateException_h_
//$ class java.awt.geom.IllegalPathStateException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace awt {
		namespace geom {

class $export IllegalPathStateException : public ::java::lang::RuntimeException {
	$class(IllegalPathStateException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalPathStateException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xB86ACDBE7A47B7BA;
	IllegalPathStateException(const IllegalPathStateException& e);
	IllegalPathStateException wrapper$();
	virtual void throwWrapper$() override;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_IllegalPathStateException_h_