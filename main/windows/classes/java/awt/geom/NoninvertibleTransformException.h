#ifndef _java_awt_geom_NoninvertibleTransformException_h_
#define _java_awt_geom_NoninvertibleTransformException_h_
//$ class java.awt.geom.NoninvertibleTransformException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {
		namespace geom {

class $export NoninvertibleTransformException : public ::java::lang::Exception {
	$class(NoninvertibleTransformException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	NoninvertibleTransformException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x552BCDD6FECD38C2;
	NoninvertibleTransformException(const NoninvertibleTransformException& e);
	NoninvertibleTransformException wrapper$();
	virtual void throwWrapper$() override;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_NoninvertibleTransformException_h_