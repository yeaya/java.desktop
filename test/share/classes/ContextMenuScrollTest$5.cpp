#include <ContextMenuScrollTest$5.h>

#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ContextMenuScrollTest$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$5::*)()>(&ContextMenuScrollTest$5::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$5_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$5_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$5",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$5_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$5_EnclosingMethodInfo_,
	_ContextMenuScrollTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$5($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$5));
}

void ContextMenuScrollTest$5::init$() {
}

void ContextMenuScrollTest$5::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$5::ContextMenuScrollTest$5() {
}

$Class* ContextMenuScrollTest$5::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$5, name, initialize, &_ContextMenuScrollTest$5_ClassInfo_, allocate$ContextMenuScrollTest$5);
	return class$;
}

$Class* ContextMenuScrollTest$5::class$ = nullptr;