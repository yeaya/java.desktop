#include <ContextMenuScrollTest$2.h>

#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ContextMenuScrollTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$2::*)()>(&ContextMenuScrollTest$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$2_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$2_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$2_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$2_EnclosingMethodInfo_,
	_ContextMenuScrollTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$2($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$2));
}

void ContextMenuScrollTest$2::init$() {
}

void ContextMenuScrollTest$2::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$2::ContextMenuScrollTest$2() {
}

$Class* ContextMenuScrollTest$2::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$2, name, initialize, &_ContextMenuScrollTest$2_ClassInfo_, allocate$ContextMenuScrollTest$2);
	return class$;
}

$Class* ContextMenuScrollTest$2::class$ = nullptr;