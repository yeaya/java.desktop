#include <java/awt/KeyEventDispatcher.h>

#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _KeyEventDispatcher_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _KeyEventDispatcher_MethodInfo_[] = {
	{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyEventDispatcher_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.KeyEventDispatcher",
	nullptr,
	nullptr,
	nullptr,
	_KeyEventDispatcher_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_KeyEventDispatcher_Annotations_
};

$Object* allocate$KeyEventDispatcher($Class* clazz) {
	return $of($alloc(KeyEventDispatcher));
}

$Class* KeyEventDispatcher::load$($String* name, bool initialize) {
	$loadClass(KeyEventDispatcher, name, initialize, &_KeyEventDispatcher_ClassInfo_, allocate$KeyEventDispatcher);
	return class$;
}

$Class* KeyEventDispatcher::class$ = nullptr;

	} // awt
} // java