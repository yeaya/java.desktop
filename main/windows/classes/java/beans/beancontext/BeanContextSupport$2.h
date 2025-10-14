#ifndef _java_beans_beancontext_BeanContextSupport$2_h_
#define _java_beans_beancontext_BeanContextSupport$2_h_
//$ class java.beans.beancontext.BeanContextSupport$2
//$ extends java.beans.VetoableChangeListener

#include <java/beans/VetoableChangeListener.h>

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

class BeanContextSupport$2 : public ::java::beans::VetoableChangeListener {
	$class(BeanContextSupport$2, $NO_CLASS_INIT, ::java::beans::VetoableChangeListener)
public:
	BeanContextSupport$2();
	void init$(::java::beans::beancontext::BeanContextSupport* this$0);
	virtual void vetoableChange(::java::beans::PropertyChangeEvent* pce) override;
	::java::beans::beancontext::BeanContextSupport* this$0 = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextSupport$2_h_