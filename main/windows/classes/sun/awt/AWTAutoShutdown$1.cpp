#include <sun/awt/AWTAutoShutdown$1.h>

#include <java/awt/AWTEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;

namespace sun {
	namespace awt {

$MethodInfo _AWTAutoShutdown$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", nullptr, 0, $method(static_cast<void(AWTAutoShutdown$1::*)(Object$*,int32_t)>(&AWTAutoShutdown$1::init$))},
	{}
};

$EnclosingMethodInfo _AWTAutoShutdown$1_EnclosingMethodInfo_ = {
	"sun.awt.AWTAutoShutdown",
	"getShutdownEvent",
	"()Ljava/awt/AWTEvent;"
};

$InnerClassInfo _AWTAutoShutdown$1_InnerClassesInfo_[] = {
	{"sun.awt.AWTAutoShutdown$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AWTAutoShutdown$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AWTAutoShutdown$1",
	"java.awt.AWTEvent",
	nullptr,
	nullptr,
	_AWTAutoShutdown$1_MethodInfo_,
	nullptr,
	&_AWTAutoShutdown$1_EnclosingMethodInfo_,
	_AWTAutoShutdown$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAutoShutdown"
};

$Object* allocate$AWTAutoShutdown$1($Class* clazz) {
	return $of($alloc(AWTAutoShutdown$1));
}

void AWTAutoShutdown$1::init$(Object$* source, int32_t id) {
	$AWTEvent::init$(source, id);
}

AWTAutoShutdown$1::AWTAutoShutdown$1() {
}

$Class* AWTAutoShutdown$1::load$($String* name, bool initialize) {
	$loadClass(AWTAutoShutdown$1, name, initialize, &_AWTAutoShutdown$1_ClassInfo_, allocate$AWTAutoShutdown$1);
	return class$;
}

$Class* AWTAutoShutdown$1::class$ = nullptr;

	} // awt
} // sun