#include <sun/awt/im/ExecutableInputMethodManager$2.h>

#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _ExecutableInputMethodManager$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$2, this$0)},
	{}
};

$MethodInfo _ExecutableInputMethodManager$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(static_cast<void(ExecutableInputMethodManager$2::*)($ExecutableInputMethodManager*)>(&ExecutableInputMethodManager$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ExecutableInputMethodManager$2_EnclosingMethodInfo_ = {
	"sun.awt.im.ExecutableInputMethodManager",
	"showInputMethodMenuOnRequesterEDT",
	"(Ljava/awt/Component;)V"
};

$InnerClassInfo _ExecutableInputMethodManager$2_InnerClassesInfo_[] = {
	{"sun.awt.im.ExecutableInputMethodManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExecutableInputMethodManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.ExecutableInputMethodManager$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_ExecutableInputMethodManager$2_FieldInfo_,
	_ExecutableInputMethodManager$2_MethodInfo_,
	nullptr,
	&_ExecutableInputMethodManager$2_EnclosingMethodInfo_,
	_ExecutableInputMethodManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.ExecutableInputMethodManager"
};

$Object* allocate$ExecutableInputMethodManager$2($Class* clazz) {
	return $of($alloc(ExecutableInputMethodManager$2));
}

void ExecutableInputMethodManager$2::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

void ExecutableInputMethodManager$2::run() {
	this->this$0->showInputMethodMenu();
}

ExecutableInputMethodManager$2::ExecutableInputMethodManager$2() {
}

$Class* ExecutableInputMethodManager$2::load$($String* name, bool initialize) {
	$loadClass(ExecutableInputMethodManager$2, name, initialize, &_ExecutableInputMethodManager$2_ClassInfo_, allocate$ExecutableInputMethodManager$2);
	return class$;
}

$Class* ExecutableInputMethodManager$2::class$ = nullptr;

		} // im
	} // awt
} // sun