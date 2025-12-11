#include <java/beans/beancontext/BeanContextMembershipListener.h>

#include <java/beans/beancontext/BeanContextMembershipEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextMembershipListener_MethodInfo_[] = {
	{"childrenAdded", "(Ljava/beans/beancontext/BeanContextMembershipEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"childrenRemoved", "(Ljava/beans/beancontext/BeanContextMembershipEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextMembershipListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextMembershipListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_BeanContextMembershipListener_MethodInfo_
};

$Object* allocate$BeanContextMembershipListener($Class* clazz) {
	return $of($alloc(BeanContextMembershipListener));
}

$Class* BeanContextMembershipListener::load$($String* name, bool initialize) {
	$loadClass(BeanContextMembershipListener, name, initialize, &_BeanContextMembershipListener_ClassInfo_, allocate$BeanContextMembershipListener);
	return class$;
}

$Class* BeanContextMembershipListener::class$ = nullptr;

		} // beancontext
	} // beans
} // java