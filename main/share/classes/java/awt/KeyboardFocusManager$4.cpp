#include <java/awt/KeyboardFocusManager$4.h>

#include <java/awt/KeyboardFocusManager.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace awt {

$MethodInfo _KeyboardFocusManager$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyboardFocusManager$4::*)()>(&KeyboardFocusManager$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyboardFocusManager$4_EnclosingMethodInfo_ = {
	"java.awt.KeyboardFocusManager",
	"retargetFocusGained",
	"(Ljava/awt/event/FocusEvent;)Ljava/awt/event/FocusEvent;"
};

$InnerClassInfo _KeyboardFocusManager$4_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyboardFocusManager$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.KeyboardFocusManager$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_KeyboardFocusManager$4_MethodInfo_,
	nullptr,
	&_KeyboardFocusManager$4_EnclosingMethodInfo_,
	_KeyboardFocusManager$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager"
};

$Object* allocate$KeyboardFocusManager$4($Class* clazz) {
	return $of($alloc(KeyboardFocusManager$4));
}

void KeyboardFocusManager$4::init$() {
}

void KeyboardFocusManager$4::run() {
	$KeyboardFocusManager::processCurrentLightweightRequests();
}

KeyboardFocusManager$4::KeyboardFocusManager$4() {
}

$Class* KeyboardFocusManager$4::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager$4, name, initialize, &_KeyboardFocusManager$4_ClassInfo_, allocate$KeyboardFocusManager$4);
	return class$;
}

$Class* KeyboardFocusManager$4::class$ = nullptr;

	} // awt
} // java