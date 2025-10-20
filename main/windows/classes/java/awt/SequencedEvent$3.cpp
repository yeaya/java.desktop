#include <java/awt/SequencedEvent$3.h>

#include <java/awt/SequencedEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SequencedEvent = ::java::awt::SequencedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _SequencedEvent$3_FieldInfo_[] = {
	{"this$0", "Ljava/awt/SequencedEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SequencedEvent$3, this$0)},
	{}
};

$MethodInfo _SequencedEvent$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/SequencedEvent;)V", nullptr, 0, $method(static_cast<void(SequencedEvent$3::*)($SequencedEvent*)>(&SequencedEvent$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SequencedEvent$3_EnclosingMethodInfo_ = {
	"java.awt.SequencedEvent",
	"<init>",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _SequencedEvent$3_InnerClassesInfo_[] = {
	{"java.awt.SequencedEvent$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SequencedEvent$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SequencedEvent$3",
	"java.lang.Thread",
	nullptr,
	_SequencedEvent$3_FieldInfo_,
	_SequencedEvent$3_MethodInfo_,
	nullptr,
	&_SequencedEvent$3_EnclosingMethodInfo_,
	_SequencedEvent$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.SequencedEvent"
};

$Object* allocate$SequencedEvent$3($Class* clazz) {
	return $of($alloc(SequencedEvent$3));
}

void SequencedEvent$3::init$($SequencedEvent* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void SequencedEvent$3::run() {
	$useLocalCurrentObjectStackCache();
	while (!this->this$0->isFirstOrDisposed()) {
		try {
			$Thread::sleep(100);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			break;
		}
	}
}

SequencedEvent$3::SequencedEvent$3() {
}

$Class* SequencedEvent$3::load$($String* name, bool initialize) {
	$loadClass(SequencedEvent$3, name, initialize, &_SequencedEvent$3_ClassInfo_, allocate$SequencedEvent$3);
	return class$;
}

$Class* SequencedEvent$3::class$ = nullptr;

	} // awt
} // java