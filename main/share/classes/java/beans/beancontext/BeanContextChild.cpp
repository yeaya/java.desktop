#include <java/beans/beancontext/BeanContextChild.h>

#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/beancontext/BeanContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextChild_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBeanContext", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.beans.PropertyVetoException"},
	{}
};

$ClassInfo _BeanContextChild_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextChild",
	nullptr,
	nullptr,
	nullptr,
	_BeanContextChild_MethodInfo_
};

$Object* allocate$BeanContextChild($Class* clazz) {
	return $of($alloc(BeanContextChild));
}

$Class* BeanContextChild::load$($String* name, bool initialize) {
	$loadClass(BeanContextChild, name, initialize, &_BeanContextChild_ClassInfo_, allocate$BeanContextChild);
	return class$;
}

$Class* BeanContextChild::class$ = nullptr;

		} // beancontext
	} // beans
} // java