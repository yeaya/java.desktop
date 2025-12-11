#include <ContextMenuScrollTest$4.h>

#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ContextMenuScrollTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$4::*)()>(&ContextMenuScrollTest$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$4_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$4_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$4",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$4_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$4_EnclosingMethodInfo_,
	_ContextMenuScrollTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$4($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$4));
}

void ContextMenuScrollTest$4::init$() {
}

void ContextMenuScrollTest$4::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$4::ContextMenuScrollTest$4() {
}

$Class* ContextMenuScrollTest$4::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$4, name, initialize, &_ContextMenuScrollTest$4_ClassInfo_, allocate$ContextMenuScrollTest$4);
	return class$;
}

$Class* ContextMenuScrollTest$4::class$ = nullptr;