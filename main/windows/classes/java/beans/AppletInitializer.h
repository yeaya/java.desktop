#ifndef _java_beans_AppletInitializer_h_
#define _java_beans_AppletInitializer_h_
//$ interface java.beans.AppletInitializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace applet {
		class Applet;
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

class $export AppletInitializer : public ::java::lang::Object {
	$interface(AppletInitializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void activate(::java::applet::Applet* newApplet) {}
	virtual void initialize(::java::applet::Applet* newAppletBean, ::java::beans::beancontext::BeanContext* bCtxt) {}
};

	} // beans
} // java

#endif // _java_beans_AppletInitializer_h_