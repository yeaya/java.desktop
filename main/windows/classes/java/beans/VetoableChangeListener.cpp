#include <java/beans/VetoableChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace beans {

$MethodInfo _VetoableChangeListener_MethodInfo_[] = {
	{"vetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.beans.PropertyVetoException"},
	{}
};

$ClassInfo _VetoableChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.VetoableChangeListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_VetoableChangeListener_MethodInfo_
};

$Object* allocate$VetoableChangeListener($Class* clazz) {
	return $of($alloc(VetoableChangeListener));
}

$Class* VetoableChangeListener::load$($String* name, bool initialize) {
	$loadClass(VetoableChangeListener, name, initialize, &_VetoableChangeListener_ClassInfo_, allocate$VetoableChangeListener);
	return class$;
}

$Class* VetoableChangeListener::class$ = nullptr;

	} // beans
} // java