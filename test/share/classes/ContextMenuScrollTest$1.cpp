#include <ContextMenuScrollTest$1.h>

#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ContextMenuScrollTest = ::ContextMenuScrollTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ContextMenuScrollTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$1::*)()>(&ContextMenuScrollTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$1_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$1_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$1_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$1_EnclosingMethodInfo_,
	_ContextMenuScrollTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$1($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$1));
}

void ContextMenuScrollTest$1::init$() {
}

void ContextMenuScrollTest$1::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$1::ContextMenuScrollTest$1() {
}

$Class* ContextMenuScrollTest$1::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$1, name, initialize, &_ContextMenuScrollTest$1_ClassInfo_, allocate$ContextMenuScrollTest$1);
	return class$;
}

$Class* ContextMenuScrollTest$1::class$ = nullptr;