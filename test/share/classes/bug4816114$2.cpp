#include <bug4816114$2.h>

#include <bug4816114.h>
#include <javax/swing/JSplitPane.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $bug4816114 = ::bug4816114;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;

$MethodInfo _bug4816114$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4816114$2::*)()>(&bug4816114$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4816114$2_EnclosingMethodInfo_ = {
	"bug4816114",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4816114$2_InnerClassesInfo_[] = {
	{"bug4816114$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4816114$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4816114$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4816114$2_MethodInfo_,
	nullptr,
	&_bug4816114$2_EnclosingMethodInfo_,
	_bug4816114$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4816114"
};

$Object* allocate$bug4816114$2($Class* clazz) {
	return $of($alloc(bug4816114$2));
}

void bug4816114$2::init$() {
}

void bug4816114$2::run() {
	$init($bug4816114);
	$nc($nc($bug4816114::test)->splitPane)->setOrientation($JSplitPane::VERTICAL_SPLIT);
}

bug4816114$2::bug4816114$2() {
}

$Class* bug4816114$2::load$($String* name, bool initialize) {
	$loadClass(bug4816114$2, name, initialize, &_bug4816114$2_ClassInfo_, allocate$bug4816114$2);
	return class$;
}

$Class* bug4816114$2::class$ = nullptr;