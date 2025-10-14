#include <WrongSelectionOnMouseOver$3.h>

#include <WrongSelectionOnMouseOver.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _WrongSelectionOnMouseOver$3_FieldInfo_[] = {
	{"this$0", "LWrongSelectionOnMouseOver;", nullptr, $FINAL | $SYNTHETIC, $field(WrongSelectionOnMouseOver$3, this$0)},
	{}
};

$MethodInfo _WrongSelectionOnMouseOver$3_MethodInfo_[] = {
	{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, 0, $method(static_cast<void(WrongSelectionOnMouseOver$3::*)($WrongSelectionOnMouseOver*)>(&WrongSelectionOnMouseOver$3::init$))},
	{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WrongSelectionOnMouseOver$3_EnclosingMethodInfo_ = {
	"WrongSelectionOnMouseOver",
	"createUI",
	"()V"
};

$InnerClassInfo _WrongSelectionOnMouseOver$3_InnerClassesInfo_[] = {
	{"WrongSelectionOnMouseOver$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongSelectionOnMouseOver$3_ClassInfo_ = {
	$ACC_SUPER,
	"WrongSelectionOnMouseOver$3",
	"java.lang.Object",
	"javax.swing.event.MenuListener",
	_WrongSelectionOnMouseOver$3_FieldInfo_,
	_WrongSelectionOnMouseOver$3_MethodInfo_,
	nullptr,
	&_WrongSelectionOnMouseOver$3_EnclosingMethodInfo_,
	_WrongSelectionOnMouseOver$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WrongSelectionOnMouseOver"
};

$Object* allocate$WrongSelectionOnMouseOver$3($Class* clazz) {
	return $of($alloc(WrongSelectionOnMouseOver$3));
}

void WrongSelectionOnMouseOver$3::init$($WrongSelectionOnMouseOver* this$0) {
	$set(this, this$0, this$0);
}

void WrongSelectionOnMouseOver$3::menuSelected($MenuEvent* e) {
	$nc(this->this$0->secondMenuSelected)->countDown();
	$init($System);
	$nc($System::out)->println("Menu2: menuSelected"_s);
}

void WrongSelectionOnMouseOver$3::menuDeselected($MenuEvent* e) {
	$init($System);
	$nc($System::out)->println("Menu2: menuDeselected"_s);
}

void WrongSelectionOnMouseOver$3::menuCanceled($MenuEvent* e) {
	$init($System);
	$nc($System::out)->println("Menu2: menuCanceled"_s);
}

WrongSelectionOnMouseOver$3::WrongSelectionOnMouseOver$3() {
}

$Class* WrongSelectionOnMouseOver$3::load$($String* name, bool initialize) {
	$loadClass(WrongSelectionOnMouseOver$3, name, initialize, &_WrongSelectionOnMouseOver$3_ClassInfo_, allocate$WrongSelectionOnMouseOver$3);
	return class$;
}

$Class* WrongSelectionOnMouseOver$3::class$ = nullptr;