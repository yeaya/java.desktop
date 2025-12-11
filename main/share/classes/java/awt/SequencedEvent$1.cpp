#include <java/awt/SequencedEvent$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/SequencedEvent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _SequencedEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SequencedEvent$1::*)()>(&SequencedEvent$1::init$))},
	{"create", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PUBLIC},
	{"getNested", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PUBLIC},
	{"isSequencedEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SequencedEvent$1_EnclosingMethodInfo_ = {
	"java.awt.SequencedEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _SequencedEvent$1_InnerClassesInfo_[] = {
	{"java.awt.SequencedEvent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$SequencedEventAccessor", "sun.awt.AWTAccessor", "SequencedEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SequencedEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SequencedEvent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$SequencedEventAccessor",
	nullptr,
	_SequencedEvent$1_MethodInfo_,
	nullptr,
	&_SequencedEvent$1_EnclosingMethodInfo_,
	_SequencedEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.SequencedEvent"
};

$Object* allocate$SequencedEvent$1($Class* clazz) {
	return $of($alloc(SequencedEvent$1));
}

void SequencedEvent$1::init$() {
}

$AWTEvent* SequencedEvent$1::getNested($AWTEvent* sequencedEvent) {
	return $nc(($cast($SequencedEvent, sequencedEvent)))->nested;
}

bool SequencedEvent$1::isSequencedEvent($AWTEvent* event) {
	return $instanceOf($SequencedEvent, event);
}

$AWTEvent* SequencedEvent$1::create($AWTEvent* event) {
	return $new($SequencedEvent, event);
}

SequencedEvent$1::SequencedEvent$1() {
}

$Class* SequencedEvent$1::load$($String* name, bool initialize) {
	$loadClass(SequencedEvent$1, name, initialize, &_SequencedEvent$1_ClassInfo_, allocate$SequencedEvent$1);
	return class$;
}

$Class* SequencedEvent$1::class$ = nullptr;

	} // awt
} // java