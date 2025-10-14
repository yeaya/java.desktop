#include <ContextMenuScrollTest$7.h>

#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ContextMenuScrollTest = ::ContextMenuScrollTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ContextMenuScrollTest$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextMenuScrollTest$7::*)()>(&ContextMenuScrollTest$7::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ContextMenuScrollTest$7_EnclosingMethodInfo_ = {
	"ContextMenuScrollTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ContextMenuScrollTest$7_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest$7_ClassInfo_ = {
	$ACC_SUPER,
	"ContextMenuScrollTest$7",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_ContextMenuScrollTest$7_MethodInfo_,
	nullptr,
	&_ContextMenuScrollTest$7_EnclosingMethodInfo_,
	_ContextMenuScrollTest$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextMenuScrollTest"
};

$Object* allocate$ContextMenuScrollTest$7($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest$7));
}

void ContextMenuScrollTest$7::init$() {
}

void ContextMenuScrollTest$7::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$7::ContextMenuScrollTest$7() {
}

$Class* ContextMenuScrollTest$7::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$7, name, initialize, &_ContextMenuScrollTest$7_ClassInfo_, allocate$ContextMenuScrollTest$7);
	return class$;
}

$Class* ContextMenuScrollTest$7::class$ = nullptr;