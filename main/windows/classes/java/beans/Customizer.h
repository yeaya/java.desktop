#ifndef _java_beans_Customizer_h_
#define _java_beans_Customizer_h_
//$ interface java.beans.Customizer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}

namespace java {
	namespace beans {

class $export Customizer : public ::java::lang::Object {
	$interface(Customizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual void setObject(Object$* bean) {}
};

	} // beans
} // java

#endif // _java_beans_Customizer_h_