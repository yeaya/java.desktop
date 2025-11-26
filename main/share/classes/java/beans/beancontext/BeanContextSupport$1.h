#ifndef _java_beans_beancontext_BeanContextSupport$1_h_
#define _java_beans_beancontext_BeanContextSupport$1_h_
//$ class java.beans.beancontext.BeanContextSupport$1
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextSupport;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class BeanContextSupport$1 : public ::java::beans::PropertyChangeListener {
	$class(BeanContextSupport$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BeanContextSupport$1();
	void init$(::java::beans::beancontext::BeanContextSupport* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	::java::beans::beancontext::BeanContextSupport* this$0 = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextSupport$1_h_