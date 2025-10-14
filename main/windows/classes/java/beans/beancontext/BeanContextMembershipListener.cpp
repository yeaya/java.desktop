#include <java/beans/beancontext/BeanContextMembershipListener.h>

#include <java/beans/beancontext/BeanContextMembershipEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BeanContextMembershipEvent = ::java::beans::beancontext::BeanContextMembershipEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

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