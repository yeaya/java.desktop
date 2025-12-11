#include <java/beans/PropertyChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _PropertyChangeListener_MethodInfo_[] = {
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PropertyChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.PropertyChangeListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_PropertyChangeListener_MethodInfo_
};

$Object* allocate$PropertyChangeListener($Class* clazz) {
	return $of($alloc(PropertyChangeListener));
}

$Class* PropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(PropertyChangeListener, name, initialize, &_PropertyChangeListener_ClassInfo_, allocate$PropertyChangeListener);
	return class$;
}

$Class* PropertyChangeListener::class$ = nullptr;

	} // beans
} // java