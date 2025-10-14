#ifndef _java_beans_PropertyChangeListener_h_
#define _java_beans_PropertyChangeListener_h_
//$ interface java.beans.PropertyChangeListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace java {
	namespace beans {

class $export PropertyChangeListener : public ::java::util::EventListener {
	$interface(PropertyChangeListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) {}
};

	} // beans
} // java

#endif // _java_beans_PropertyChangeListener_h_