#include <bug4962534$5.h>

#include <bug4962534.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug4962534$5_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$5, this$0)},
	{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$5, val$result)},
	{}
};

$MethodInfo _bug4962534$5_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;[Z)V", "()V", 0, $method(static_cast<void(bug4962534$5::*)($bug4962534*,$booleans*)>(&bug4962534$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$5_EnclosingMethodInfo_ = {
	"bug4962534",
	"checkFrameIsOutOfScreenEDT",
	"()Z"
};

$InnerClassInfo _bug4962534$5_InnerClassesInfo_[] = {
	{"bug4962534$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$5_FieldInfo_,
	_bug4962534$5_MethodInfo_,
	nullptr,
	&_bug4962534$5_EnclosingMethodInfo_,
	_bug4962534$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$5($Class* clazz) {
	return $of($alloc(bug4962534$5));
}

void bug4962534$5::init$($bug4962534* this$0, $booleans* val$result) {
	$set(this, this$0, this$0);
	$set(this, val$result, val$result);
}

void bug4962534$5::run() {
	if ($nc(this->this$0->newFrameLocation)->x > $nc(this->this$0->gcBounds)->width || $nc(this->this$0->newFrameLocation)->x < 0 || $nc(this->this$0->newFrameLocation)->y > $nc(this->this$0->gcBounds)->height || $nc(this->this$0->newFrameLocation)->y < 0) {
		$nc(this->val$result)->set(0, true);
	}
}

bug4962534$5::bug4962534$5() {
}

$Class* bug4962534$5::load$($String* name, bool initialize) {
	$loadClass(bug4962534$5, name, initialize, &_bug4962534$5_ClassInfo_, allocate$bug4962534$5);
	return class$;
}

$Class* bug4962534$5::class$ = nullptr;