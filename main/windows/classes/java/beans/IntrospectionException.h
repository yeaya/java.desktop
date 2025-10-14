#ifndef _java_beans_IntrospectionException_h_
#define _java_beans_IntrospectionException_h_
//$ class java.beans.IntrospectionException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace beans {

class $export IntrospectionException : public ::java::lang::Exception {
	$class(IntrospectionException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	IntrospectionException();
	void init$($String* mess);
	static const int64_t serialVersionUID = (int64_t)0xCC42F2D623EF4625;
	IntrospectionException(const IntrospectionException& e);
	IntrospectionException wrapper$();
	virtual void throwWrapper$() override;
};

	} // beans
} // java

#endif // _java_beans_IntrospectionException_h_