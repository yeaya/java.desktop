#include <bug4275046$2.h>

#include <bug4275046.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _bug4275046$2_FieldInfo_[] = {
	{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$2, this$0)},
	{}
};

$MethodInfo _bug4275046$2_MethodInfo_[] = {
	{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(static_cast<void(bug4275046$2::*)($bug4275046*)>(&bug4275046$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4275046$2_EnclosingMethodInfo_ = {
	"bug4275046",
	"test",
	"()V"
};

$InnerClassInfo _bug4275046$2_InnerClassesInfo_[] = {
	{"bug4275046$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4275046$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4275046$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4275046$2_FieldInfo_,
	_bug4275046$2_MethodInfo_,
	nullptr,
	&_bug4275046$2_EnclosingMethodInfo_,
	_bug4275046$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4275046"
};

$Object* allocate$bug4275046$2($Class* clazz) {
	return $of($alloc(bug4275046$2));
}

void bug4275046$2::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$2::run() {
	if (this->this$0->frame != nullptr) {
		$nc(this->this$0->frame)->dispose();
	}
}

bug4275046$2::bug4275046$2() {
}

$Class* bug4275046$2::load$($String* name, bool initialize) {
	$loadClass(bug4275046$2, name, initialize, &_bug4275046$2_ClassInfo_, allocate$bug4275046$2);
	return class$;
}

$Class* bug4275046$2::class$ = nullptr;