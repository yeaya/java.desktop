#include <sun/lwawt/LWCursorManager$1.h>

#include <sun/lwawt/LWCursorManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;

namespace sun {
	namespace lwawt {

$FieldInfo _LWCursorManager$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWCursorManager;", nullptr, $FINAL | $SYNTHETIC, $field(LWCursorManager$1, this$0)},
	{}
};

$MethodInfo _LWCursorManager$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWCursorManager;)V", nullptr, 0, $method(static_cast<void(LWCursorManager$1::*)($LWCursorManager*)>(&LWCursorManager$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWCursorManager$1_EnclosingMethodInfo_ = {
	"sun.lwawt.LWCursorManager",
	"updateCursorLater",
	"(Lsun/lwawt/LWWindowPeer;)V"
};

$InnerClassInfo _LWCursorManager$1_InnerClassesInfo_[] = {
	{"sun.lwawt.LWCursorManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCursorManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWCursorManager$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_LWCursorManager$1_FieldInfo_,
	_LWCursorManager$1_MethodInfo_,
	nullptr,
	&_LWCursorManager$1_EnclosingMethodInfo_,
	_LWCursorManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWCursorManager"
};

$Object* allocate$LWCursorManager$1($Class* clazz) {
	return $of($alloc(LWCursorManager$1));
}

void LWCursorManager$1::init$($LWCursorManager* this$0) {
	$set(this, this$0, this$0);
}

void LWCursorManager$1::run() {
	this->this$0->updateCursor();
}

LWCursorManager$1::LWCursorManager$1() {
}

$Class* LWCursorManager$1::load$($String* name, bool initialize) {
	$loadClass(LWCursorManager$1, name, initialize, &_LWCursorManager$1_ClassInfo_, allocate$LWCursorManager$1);
	return class$;
}

$Class* LWCursorManager$1::class$ = nullptr;

	} // lwawt
} // sun