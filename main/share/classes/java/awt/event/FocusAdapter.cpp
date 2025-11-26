#include <java/awt/event/FocusAdapter.h>

#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _FocusAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FocusAdapter::*)()>(&FocusAdapter::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FocusAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.FocusAdapter",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	nullptr,
	_FocusAdapter_MethodInfo_
};

$Object* allocate$FocusAdapter($Class* clazz) {
	return $of($alloc(FocusAdapter));
}

void FocusAdapter::init$() {
}

void FocusAdapter::focusGained($FocusEvent* e) {
}

void FocusAdapter::focusLost($FocusEvent* e) {
}

FocusAdapter::FocusAdapter() {
}

$Class* FocusAdapter::load$($String* name, bool initialize) {
	$loadClass(FocusAdapter, name, initialize, &_FocusAdapter_ClassInfo_, allocate$FocusAdapter);
	return class$;
}

$Class* FocusAdapter::class$ = nullptr;

		} // event
	} // awt
} // java