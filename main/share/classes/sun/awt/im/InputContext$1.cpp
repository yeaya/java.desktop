#include <sun/awt/im/InputContext$1.h>

#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputContext$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/InputContext;", nullptr, $FINAL | $SYNTHETIC, $field(InputContext$1, this$0)},
	{}
};

$MethodInfo _InputContext$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/InputContext;)V", nullptr, 0, $method(static_cast<void(InputContext$1::*)($InputContext*)>(&InputContext$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InputContext$1_EnclosingMethodInfo_ = {
	"sun.awt.im.InputContext",
	"removeNotify",
	"(Ljava/awt/Component;)V"
};

$InnerClassInfo _InputContext$1_InnerClassesInfo_[] = {
	{"sun.awt.im.InputContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InputContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.InputContext$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_InputContext$1_FieldInfo_,
	_InputContext$1_MethodInfo_,
	nullptr,
	&_InputContext$1_EnclosingMethodInfo_,
	_InputContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.InputContext"
};

$Object* allocate$InputContext$1($Class* clazz) {
	return $of($alloc(InputContext$1));
}

void InputContext$1::init$($InputContext* this$0) {
	$set(this, this$0, this$0);
}

void InputContext$1::run() {
	$nc(($cast($InputMethodContext, this->this$0)))->releaseCompositionArea();
}

InputContext$1::InputContext$1() {
}

$Class* InputContext$1::load$($String* name, bool initialize) {
	$loadClass(InputContext$1, name, initialize, &_InputContext$1_ClassInfo_, allocate$InputContext$1);
	return class$;
}

$Class* InputContext$1::class$ = nullptr;

		} // im
	} // awt
} // sun