#include <java/awt/Component$AWTTreeLock.h>

#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Component$AWTTreeLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Component$AWTTreeLock::*)()>(&Component$AWTTreeLock::init$))},
	{}
};

$InnerClassInfo _Component$AWTTreeLock_InnerClassesInfo_[] = {
	{"java.awt.Component$AWTTreeLock", "java.awt.Component", "AWTTreeLock", $STATIC},
	{}
};

$ClassInfo _Component$AWTTreeLock_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$AWTTreeLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Component$AWTTreeLock_MethodInfo_,
	nullptr,
	nullptr,
	_Component$AWTTreeLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$AWTTreeLock($Class* clazz) {
	return $of($alloc(Component$AWTTreeLock));
}

void Component$AWTTreeLock::init$() {
}

Component$AWTTreeLock::Component$AWTTreeLock() {
}

$Class* Component$AWTTreeLock::load$($String* name, bool initialize) {
	$loadClass(Component$AWTTreeLock, name, initialize, &_Component$AWTTreeLock_ClassInfo_, allocate$Component$AWTTreeLock);
	return class$;
}

$Class* Component$AWTTreeLock::class$ = nullptr;

	} // awt
} // java