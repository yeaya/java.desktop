#ifndef _java_beans_DesignMode_h_
#define _java_beans_DesignMode_h_
//$ interface java.beans.DesignMode
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PROPERTYNAME")
#undef PROPERTYNAME

namespace java {
	namespace beans {

class $export DesignMode : public ::java::lang::Object {
	$interface(DesignMode, 0, ::java::lang::Object)
public:
	virtual bool isDesignTime() {return false;}
	virtual void setDesignTime(bool designTime) {}
	static $String* PROPERTYNAME;
};

	} // beans
} // java

#pragma pop_macro("PROPERTYNAME")

#endif // _java_beans_DesignMode_h_