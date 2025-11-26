#include <WrongSelectionOnMouseOver$1.h>

#include <WrongSelectionOnMouseOver.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $WrongSelectionOnMouseOver = ::WrongSelectionOnMouseOver;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $MenuEvent = ::javax::swing::event::MenuEvent;
using $MenuListener = ::javax::swing::event::MenuListener;

$FieldInfo _WrongSelectionOnMouseOver$1_FieldInfo_[] = {
	{"this$0", "LWrongSelectionOnMouseOver;", nullptr, $FINAL | $SYNTHETIC, $field(WrongSelectionOnMouseOver$1, this$0)},
	{}
};

$MethodInfo _WrongSelectionOnMouseOver$1_MethodInfo_[] = {
	{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, 0, $method(static_cast<void(WrongSelectionOnMouseOver$1::*)($WrongSelectionOnMouseOver*)>(&WrongSelectionOnMouseOver$1::init$))},
	{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WrongSelectionOnMouseOver$1_EnclosingMethodInfo_ = {
	"WrongSelectionOnMouseOver",
	"createUI",
	"()V"
};

$InnerClassInfo _WrongSelectionOnMouseOver$1_InnerClassesInfo_[] = {
	{"WrongSelectionOnMouseOver$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongSelectionOnMouseOver$1_ClassInfo_ = {
	$ACC_SUPER,
	"WrongSelectionOnMouseOver$1",
	"java.lang.Object",
	"javax.swing.event.MenuListener",
	_WrongSelectionOnMouseOver$1_FieldInfo_,
	_WrongSelectionOnMouseOver$1_MethodInfo_,
	nullptr,
	&_WrongSelectionOnMouseOver$1_EnclosingMethodInfo_,
	_WrongSelectionOnMouseOver$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WrongSelectionOnMouseOver"
};

$Object* allocate$WrongSelectionOnMouseOver$1($Class* clazz) {
	return $of($alloc(WrongSelectionOnMouseOver$1));
}

void WrongSelectionOnMouseOver$1::init$($WrongSelectionOnMouseOver* this$0) {
	$set(this, this$0, this$0);
}

void WrongSelectionOnMouseOver$1::menuSelected($MenuEvent* e) {
	$nc(this->this$0->firstMenuSelected)->countDown();
	$nc($System::out)->println("Menu1: menuSelected"_s);
}

void WrongSelectionOnMouseOver$1::menuDeselected($MenuEvent* e) {
	$nc($System::out)->println("Menu1: menuDeselected"_s);
}

void WrongSelectionOnMouseOver$1::menuCanceled($MenuEvent* e) {
	$nc($System::out)->println("Menu1: menuCanceled"_s);
}

WrongSelectionOnMouseOver$1::WrongSelectionOnMouseOver$1() {
}

$Class* WrongSelectionOnMouseOver$1::load$($String* name, bool initialize) {
	$loadClass(WrongSelectionOnMouseOver$1, name, initialize, &_WrongSelectionOnMouseOver$1_ClassInfo_, allocate$WrongSelectionOnMouseOver$1);
	return class$;
}

$Class* WrongSelectionOnMouseOver$1::class$ = nullptr;