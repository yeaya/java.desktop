#include <ContextMenuScrollTest$6.h>

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

$MethodInfo _ContextMenuScrollTest$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$6::*)()>(&ContextMenuScrollTest$6::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$6_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$6_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$6_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$6",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$6_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$6_EnclosingMethodInfo_,
	_ContextMenuScrollTest$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$6($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$6));
}

void ContextMenuScrollTest$6::init$() {
}

void ContextMenuScrollTest$6::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$6::ContextMenuScrollTest$6() {
}

$Class* ContextMenuScrollTest$6::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$6, name, initialize, &_ContextMenuScrollTest$6_ClassInfo_, allocate$ContextMenuScrollTest$6);
	return class$;
}

$Class* ContextMenuScrollTest$6::class$ = nullptr;