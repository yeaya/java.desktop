#include <ContextMenuScrollTest$3.h>

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

$MethodInfo _ContextMenuScrollTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$3::*)()>(&ContextMenuScrollTest$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$3_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$3_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$3_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$3_EnclosingMethodInfo_,
	_ContextMenuScrollTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$3($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$3));
}

void ContextMenuScrollTest$3::init$() {
}

void ContextMenuScrollTest$3::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$3::ContextMenuScrollTest$3() {
}

$Class* ContextMenuScrollTest$3::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$3, name, initialize, &_ContextMenuScrollTest$3_ClassInfo_, allocate$ContextMenuScrollTest$3);
	return class$;
}

$Class* ContextMenuScrollTest$3::class$ = nullptr;