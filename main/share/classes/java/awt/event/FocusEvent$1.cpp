#include <java/awt/event/FocusEvent$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _FocusEvent$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/event/FocusEvent;", nullptr, $FINAL | $SYNTHETIC, $field(FocusEvent$1, this$0)},
	{}
};

$MethodInfo _FocusEvent$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0, $method(static_cast<void(FocusEvent$1::*)($FocusEvent*)>(&FocusEvent$1::init$))},
	{}
};

$EnclosingMethodInfo _FocusEvent$1_EnclosingMethodInfo_ = {
	"java.awt.event.FocusEvent",
	"readResolve",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _FocusEvent$1_InnerClassesInfo_[] = {
	{"java.awt.event.FocusEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.event.FocusEvent$1",
	"java.awt.Component",
	nullptr,
	_FocusEvent$1_FieldInfo_,
	_FocusEvent$1_MethodInfo_,
	nullptr,
	&_FocusEvent$1_EnclosingMethodInfo_,
	_FocusEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.event.FocusEvent"
};

$Object* allocate$FocusEvent$1($Class* clazz) {
	return $of($alloc(FocusEvent$1));
}

void FocusEvent$1::init$($FocusEvent* this$0) {
	$set(this, this$0, this$0);
	$Component::init$();
}

FocusEvent$1::FocusEvent$1() {
}

$Class* FocusEvent$1::load$($String* name, bool initialize) {
	$loadClass(FocusEvent$1, name, initialize, &_FocusEvent$1_ClassInfo_, allocate$FocusEvent$1);
	return class$;
}

$Class* FocusEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java