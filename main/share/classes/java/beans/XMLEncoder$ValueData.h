#ifndef _java_beans_XMLEncoder$ValueData_h_
#define _java_beans_XMLEncoder$ValueData_h_
//$ class java.beans.XMLEncoder$ValueData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		class Expression;
		class XMLEncoder;
	}
}

namespace java {
	namespace beans {

class XMLEncoder$ValueData : public ::java::lang::Object {
	$class(XMLEncoder$ValueData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLEncoder$ValueData();
	void init$(::java::beans::XMLEncoder* this$0);
	::java::beans::XMLEncoder* this$0 = nullptr;
	int32_t refs = 0;
	bool marked = false;
	$String* name = nullptr;
	::java::beans::Expression* exp = nullptr;
};

	} // beans
} // java

#endif // _java_beans_XMLEncoder$ValueData_h_