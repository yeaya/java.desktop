#include <bug7146377$2.h>

#include <bug7146377.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $bug7146377 = ::bug7146377;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _bug7146377$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7146377$2::*)()>(&bug7146377$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7146377$2_EnclosingMethodInfo_ = {
	"bug7146377",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7146377$2_InnerClassesInfo_[] = {
	{"bug7146377$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7146377$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7146377$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7146377$2_MethodInfo_,
	nullptr,
	&_bug7146377$2_EnclosingMethodInfo_,
	_bug7146377$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7146377"
};

$Object* allocate$bug7146377$2($Class* clazz) {
	return $of($alloc(bug7146377$2));
}

void bug7146377$2::init$() {
}

void bug7146377$2::run() {
	$init($bug7146377);
	$assignStatic($bug7146377::point, $nc($bug7146377::label)->getLocationOnScreen());
}

bug7146377$2::bug7146377$2() {
}

$Class* bug7146377$2::load$($String* name, bool initialize) {
	$loadClass(bug7146377$2, name, initialize, &_bug7146377$2_ClassInfo_, allocate$bug7146377$2);
	return class$;
}

$Class* bug7146377$2::class$ = nullptr;