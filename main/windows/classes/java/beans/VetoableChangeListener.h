#ifndef _java_beans_VetoableChangeListener_h_
#define _java_beans_VetoableChangeListener_h_
//$ interface java.beans.VetoableChangeListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace java {
	namespace beans {

class $export VetoableChangeListener : public ::java::util::EventListener {
	$interface(VetoableChangeListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void vetoableChange(::java::beans::PropertyChangeEvent* evt) {}
};

	} // beans
} // java

#endif // _java_beans_VetoableChangeListener_h_