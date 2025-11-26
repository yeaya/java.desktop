#ifndef _java_beans_beancontext_BeanContextChild_h_
#define _java_beans_beancontext_BeanContextChild_h_
//$ interface java.beans.beancontext.BeanContextChild
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
		class VetoableChangeListener;
	}
}
namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContext;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextChild : public ::java::lang::Object {
	$interface(BeanContextChild, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) {}
	virtual void addVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) {}
	virtual ::java::beans::beancontext::BeanContext* getBeanContext() {return nullptr;}
	virtual void removePropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) {}
	virtual void removeVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) {}
	virtual void setBeanContext(::java::beans::beancontext::BeanContext* bc) {}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextChild_h_