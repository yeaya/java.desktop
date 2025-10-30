#include <java/awt/SequencedEvent$2.h>

#include <java/awt/SequencedEvent.h>
#include <jcpp.h>

using $SequencedEvent = ::java::awt::SequencedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$MethodInfo _SequencedEvent$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SequencedEvent$2::*)()>(&SequencedEvent$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SequencedEvent$2_EnclosingMethodInfo_ = {
	"java.awt.SequencedEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _SequencedEvent$2_InnerClassesInfo_[] = {
	{"java.awt.SequencedEvent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SequencedEvent$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SequencedEvent$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SequencedEvent$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_SequencedEvent$2_EnclosingMethodInfo_,
	_SequencedEvent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.SequencedEvent"
};

$Object* allocate$SequencedEvent$2($Class* clazz) {
	return $of($alloc(SequencedEvent$2));
}

void SequencedEvent$2::init$() {
}

$Object* SequencedEvent$2::run() {
	$init($SequencedEvent);
	$SequencedEvent::fxAppThreadIsDispatchThread = "true"_s->equals($($System::getProperty("javafx.embed.singleThread"_s)));
	return $of(nullptr);
}

SequencedEvent$2::SequencedEvent$2() {
}

$Class* SequencedEvent$2::load$($String* name, bool initialize) {
	$loadClass(SequencedEvent$2, name, initialize, &_SequencedEvent$2_ClassInfo_, allocate$SequencedEvent$2);
	return class$;
}

$Class* SequencedEvent$2::class$ = nullptr;

	} // awt
} // java