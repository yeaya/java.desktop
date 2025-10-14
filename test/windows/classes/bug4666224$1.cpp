#include <bug4666224$1.h>

#include <bug4666224.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
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
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug4666224 = ::bug4666224;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$FieldInfo _bug4666224$1_FieldInfo_[] = {
	{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$1, this$0)},
	{}
};

$MethodInfo _bug4666224$1_MethodInfo_[] = {
	{"<init>", "(Lbug4666224;)V", nullptr, 0, $method(static_cast<void(bug4666224$1::*)($bug4666224*)>(&bug4666224$1::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4666224$1_EnclosingMethodInfo_ = {
	"bug4666224",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4666224$1_InnerClassesInfo_[] = {
	{"bug4666224$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4666224$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4666224$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	_bug4666224$1_FieldInfo_,
	_bug4666224$1_MethodInfo_,
	nullptr,
	&_bug4666224$1_EnclosingMethodInfo_,
	_bug4666224$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4666224"
};

$Object* allocate$bug4666224$1($Class* clazz) {
	return $of($alloc(bug4666224$1));
}

void bug4666224$1::init$($bug4666224* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void bug4666224$1::mouseClicked($MouseEvent* e) {
	$var($Point, pt, $nc(e)->getPoint());
	$init($System);
	$nc($System::out)->println($$str({"Index at location: "_s, $$str($nc(this->this$0->tabPane)->indexAtLocation($nc(pt)->x, pt->y))}));
}

bug4666224$1::bug4666224$1() {
}

$Class* bug4666224$1::load$($String* name, bool initialize) {
	$loadClass(bug4666224$1, name, initialize, &_bug4666224$1_ClassInfo_, allocate$bug4666224$1);
	return class$;
}

$Class* bug4666224$1::class$ = nullptr;