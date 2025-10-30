#include <WrongSelectionOnMouseOver$2.h>

#include <WrongSelectionOnMouseOver.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $WrongSelectionOnMouseOver = ::WrongSelectionOnMouseOver;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _WrongSelectionOnMouseOver$2_FieldInfo_[] = {
	{"this$0", "LWrongSelectionOnMouseOver;", nullptr, $FINAL | $SYNTHETIC, $field(WrongSelectionOnMouseOver$2, this$0)},
	{}
};

$MethodInfo _WrongSelectionOnMouseOver$2_MethodInfo_[] = {
	{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, 0, $method(static_cast<void(WrongSelectionOnMouseOver$2::*)($WrongSelectionOnMouseOver*)>(&WrongSelectionOnMouseOver$2::init$))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WrongSelectionOnMouseOver$2_EnclosingMethodInfo_ = {
	"WrongSelectionOnMouseOver",
	"createUI",
	"()V"
};

$InnerClassInfo _WrongSelectionOnMouseOver$2_InnerClassesInfo_[] = {
	{"WrongSelectionOnMouseOver$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongSelectionOnMouseOver$2_ClassInfo_ = {
	$ACC_SUPER,
	"WrongSelectionOnMouseOver$2",
	"java.awt.event.MouseAdapter",
	nullptr,
	_WrongSelectionOnMouseOver$2_FieldInfo_,
	_WrongSelectionOnMouseOver$2_MethodInfo_,
	nullptr,
	&_WrongSelectionOnMouseOver$2_EnclosingMethodInfo_,
	_WrongSelectionOnMouseOver$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WrongSelectionOnMouseOver"
};

$Object* allocate$WrongSelectionOnMouseOver$2($Class* clazz) {
	return $of($alloc(WrongSelectionOnMouseOver$2));
}

void WrongSelectionOnMouseOver$2::init$($WrongSelectionOnMouseOver* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void WrongSelectionOnMouseOver$2::mouseEntered($MouseEvent* e) {
	$nc(this->this$0->secondMenuMouseEntered)->countDown();
	$nc($System::out)->println("WrongSelectionOnMouseOver.mouseEntered"_s);
}

WrongSelectionOnMouseOver$2::WrongSelectionOnMouseOver$2() {
}

$Class* WrongSelectionOnMouseOver$2::load$($String* name, bool initialize) {
	$loadClass(WrongSelectionOnMouseOver$2, name, initialize, &_WrongSelectionOnMouseOver$2_ClassInfo_, allocate$WrongSelectionOnMouseOver$2);
	return class$;
}

$Class* WrongSelectionOnMouseOver$2::class$ = nullptr;