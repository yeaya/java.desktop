#include <java/awt/KeyEventDispatcher.h>

#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
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