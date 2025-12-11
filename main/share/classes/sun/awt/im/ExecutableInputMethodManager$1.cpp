#include <sun/awt/im/ExecutableInputMethodManager$1.h>

#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _ExecutableInputMethodManager$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$1, this$0)},
	{}
};

$MethodInfo _ExecutableInputMethodManager$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(static_cast<void(ExecutableInputMethodManager$1::*)($ExecutableInputMethodManager*)>(&ExecutableInputMethodManager$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ExecutableInputMethodManager$1_EnclosingMethodInfo_ = {
	"sun.awt.im.ExecutableInputMethodManager",
	"run",
	"()V"
};

$InnerClassInfo _ExecutableInputMethodManager$1_InnerClassesInfo_[] = {
	{"sun.awt.im.ExecutableInputMethodManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExecutableInputMethodManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.ExecutableInputMethodManager$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ExecutableInputMethodManager$1_FieldInfo_,
	_ExecutableInputMethodManager$1_MethodInfo_,
	nullptr,
	&_ExecutableInputMethodManager$1_EnclosingMethodInfo_,
	_ExecutableInputMethodManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.ExecutableInputMethodManager"
};

$Object* allocate$ExecutableInputMethodManager$1($Class* clazz) {
	return $of($alloc(ExecutableInputMethodManager$1));
}

void ExecutableInputMethodManager$1::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

void ExecutableInputMethodManager$1::run() {
	this->this$0->showInputMethodMenu();
}

ExecutableInputMethodManager$1::ExecutableInputMethodManager$1() {
}

$Class* ExecutableInputMethodManager$1::load$($String* name, bool initialize) {
	$loadClass(ExecutableInputMethodManager$1, name, initialize, &_ExecutableInputMethodManager$1_ClassInfo_, allocate$ExecutableInputMethodManager$1);
	return class$;
}

$Class* ExecutableInputMethodManager$1::class$ = nullptr;

		} // im
	} // awt
} // sun