#ifndef _com_sun_beans_introspect_PropertyInfo$Name_h_
#define _com_sun_beans_introspect_PropertyInfo$Name_h_
//$ class com.sun.beans.introspect.PropertyInfo$Name
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

class PropertyInfo$Name : public ::java::lang::Enum {
	$class(PropertyInfo$Name, 0, ::java::lang::Enum)
public:
	PropertyInfo$Name();
	static $Array<::com::sun::beans::introspect::PropertyInfo$Name>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::beans::introspect::PropertyInfo$Name* valueOf($String* name);
	static $Array<::com::sun::beans::introspect::PropertyInfo$Name>* values();
	static ::com::sun::beans::introspect::PropertyInfo$Name* bound;
	static ::com::sun::beans::introspect::PropertyInfo$Name* expert;
	static ::com::sun::beans::introspect::PropertyInfo$Name* hidden;
	static ::com::sun::beans::introspect::PropertyInfo$Name* preferred;
	static ::com::sun::beans::introspect::PropertyInfo$Name* required;
	static ::com::sun::beans::introspect::PropertyInfo$Name* visualUpdate;
	static ::com::sun::beans::introspect::PropertyInfo$Name* description;
	static ::com::sun::beans::introspect::PropertyInfo$Name* enumerationValues;
	static $Array<::com::sun::beans::introspect::PropertyInfo$Name>* $VALUES;
};

			} // introspect
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_introspect_PropertyInfo$Name_h_