#include <bug7088744$2$1.h>

#include <bug7088744$2.h>
#include <bug7088744.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $bug7088744 = ::bug7088744;
using $bug7088744$2 = ::bug7088744$2;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug7088744$2$1_FieldInfo_[] = {
	{"this$0", "Lbug7088744$2;", nullptr, $FINAL | $SYNTHETIC, $field(bug7088744$2$1, this$0)},
	{}
};

$MethodInfo _bug7088744$2$1_MethodInfo_[] = {
	{"<init>", "(Lbug7088744$2;)V", nullptr, 0, $method(static_cast<void(bug7088744$2$1::*)($bug7088744$2*)>(&bug7088744$2$1::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7088744$2$1_EnclosingMethodInfo_ = {
	"bug7088744$2",
	"run",
	"()V"
};

$InnerClassInfo _bug7088744$2$1_InnerClassesInfo_[] = {
	{"bug7088744$2", nullptr, nullptr, 0},
	{"bug7088744$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7088744$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7088744$2$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	_bug7088744$2$1_FieldInfo_,
	_bug7088744$2$1_MethodInfo_,
	nullptr,
	&_bug7088744$2$1_EnclosingMethodInfo_,
	_bug7088744$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7088744"
};

$Object* allocate$bug7088744$2$1($Class* clazz) {
	return $of($alloc(bug7088744$2$1));
}

void bug7088744$2$1::init$($bug7088744$2* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void bug7088744$2$1::mouseClicked($MouseEvent* e) {
	$bug7088744::processEvent(1, e);
}

void bug7088744$2$1::mousePressed($MouseEvent* e) {
	$bug7088744::processEvent(2, e);
}

void bug7088744$2$1::mouseReleased($MouseEvent* e) {
	$bug7088744::processEvent(3, e);
}

bug7088744$2$1::bug7088744$2$1() {
}

$Class* bug7088744$2$1::load$($String* name, bool initialize) {
	$loadClass(bug7088744$2$1, name, initialize, &_bug7088744$2$1_ClassInfo_, allocate$bug7088744$2$1);
	return class$;
}

$Class* bug7088744$2$1::class$ = nullptr;