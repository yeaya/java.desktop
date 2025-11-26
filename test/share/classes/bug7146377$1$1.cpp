#include <bug7146377$1$1.h>

#include <bug7146377$1.h>
#include <bug7146377.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $bug7146377 = ::bug7146377;
using $bug7146377$1 = ::bug7146377$1;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug7146377$1$1_FieldInfo_[] = {
	{"this$0", "Lbug7146377$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7146377$1$1, this$0)},
	{}
};

$MethodInfo _bug7146377$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug7146377$1;)V", nullptr, 0, $method(static_cast<void(bug7146377$1$1::*)($bug7146377$1*)>(&bug7146377$1$1::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7146377$1$1_EnclosingMethodInfo_ = {
	"bug7146377$1",
	"run",
	"()V"
};

$InnerClassInfo _bug7146377$1$1_InnerClassesInfo_[] = {
	{"bug7146377$1", nullptr, nullptr, 0},
	{"bug7146377$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7146377$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7146377$1$1",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	_bug7146377$1$1_FieldInfo_,
	_bug7146377$1$1_MethodInfo_,
	nullptr,
	&_bug7146377$1$1_EnclosingMethodInfo_,
	_bug7146377$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7146377"
};

$Object* allocate$bug7146377$1$1($Class* clazz) {
	return $of($alloc(bug7146377$1$1));
}

void bug7146377$1$1::init$($bug7146377$1* this$0) {
	$set(this, this$0, this$0);
}

void bug7146377$1$1::mouseClicked($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mousePressed($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mouseReleased($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mouseEntered($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mouseExited($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

bug7146377$1$1::bug7146377$1$1() {
}

$Class* bug7146377$1$1::load$($String* name, bool initialize) {
	$loadClass(bug7146377$1$1, name, initialize, &_bug7146377$1$1_ClassInfo_, allocate$bug7146377$1$1);
	return class$;
}

$Class* bug7146377$1$1::class$ = nullptr;