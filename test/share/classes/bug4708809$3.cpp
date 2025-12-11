#include <bug4708809$3.h>

#include <bug4708809$3$1.h>
#include <bug4708809.h>
#include <java/awt/event/AdjustmentListener.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $bug4708809 = ::bug4708809;
using $bug4708809$3$1 = ::bug4708809$3$1;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;

$MethodInfo _bug4708809$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4708809$3::*)()>(&bug4708809$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4708809$3_EnclosingMethodInfo_ = {
	"bug4708809",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4708809$3_InnerClassesInfo_[] = {
	{"bug4708809$3", nullptr, nullptr, 0},
	{"bug4708809$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4708809$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4708809$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4708809$3_MethodInfo_,
	nullptr,
	&_bug4708809$3_EnclosingMethodInfo_,
	_bug4708809$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4708809"
};

$Object* allocate$bug4708809$3($Class* clazz) {
	return $of($alloc(bug4708809$3));
}

void bug4708809$3::init$() {
}

void bug4708809$3::run() {
	$init($bug4708809);
	int32_t oldValue = $nc($bug4708809::sbar)->getValue();
	$nc($bug4708809::sbar)->addAdjustmentListener($$new($bug4708809$3$1, this, oldValue));
}

bug4708809$3::bug4708809$3() {
}

$Class* bug4708809$3::load$($String* name, bool initialize) {
	$loadClass(bug4708809$3, name, initialize, &_bug4708809$3_ClassInfo_, allocate$bug4708809$3);
	return class$;
}

$Class* bug4708809$3::class$ = nullptr;