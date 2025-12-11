#include <SetInvokerJPopupMenuTest$1.h>

#include <SetInvokerJPopupMenuTest$MyPopupMenu.h>
#include <SetInvokerJPopupMenuTest.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $SetInvokerJPopupMenuTest = ::SetInvokerJPopupMenuTest;
using $SetInvokerJPopupMenuTest$MyPopupMenu = ::SetInvokerJPopupMenuTest$MyPopupMenu;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SetInvokerJPopupMenuTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetInvokerJPopupMenuTest$1::*)()>(&SetInvokerJPopupMenuTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SetInvokerJPopupMenuTest$1_EnclosingMethodInfo_ = {
	"SetInvokerJPopupMenuTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SetInvokerJPopupMenuTest$1_InnerClassesInfo_[] = {
	{"SetInvokerJPopupMenuTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SetInvokerJPopupMenuTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SetInvokerJPopupMenuTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_SetInvokerJPopupMenuTest$1_MethodInfo_,
	nullptr,
	&_SetInvokerJPopupMenuTest$1_EnclosingMethodInfo_,
	_SetInvokerJPopupMenuTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SetInvokerJPopupMenuTest"
};

$Object* allocate$SetInvokerJPopupMenuTest$1($Class* clazz) {
	return $of($alloc(SetInvokerJPopupMenuTest$1));
}

void SetInvokerJPopupMenuTest$1::init$() {
}

void SetInvokerJPopupMenuTest$1::actionPerformed($ActionEvent* ev) {
	$init($SetInvokerJPopupMenuTest);
	if (!$nc($SetInvokerJPopupMenuTest::popup)->isVisible()) {
		$SetInvokerJPopupMenuTest::postUp();
	} else {
		$SetInvokerJPopupMenuTest::postDown();
	}
}

SetInvokerJPopupMenuTest$1::SetInvokerJPopupMenuTest$1() {
}

$Class* SetInvokerJPopupMenuTest$1::load$($String* name, bool initialize) {
	$loadClass(SetInvokerJPopupMenuTest$1, name, initialize, &_SetInvokerJPopupMenuTest$1_ClassInfo_, allocate$SetInvokerJPopupMenuTest$1);
	return class$;
}

$Class* SetInvokerJPopupMenuTest$1::class$ = nullptr;