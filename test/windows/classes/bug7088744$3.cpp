#include <bug7088744$3.h>

#include <bug7088744.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $bug7088744 = ::bug7088744;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _bug7088744$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7088744$3::*)()>(&bug7088744$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7088744$3_EnclosingMethodInfo_ = {
	"bug7088744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7088744$3_InnerClassesInfo_[] = {
	{"bug7088744$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7088744$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug7088744$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7088744$3_MethodInfo_,
	nullptr,
	&_bug7088744$3_EnclosingMethodInfo_,
	_bug7088744$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7088744"
};

$Object* allocate$bug7088744$3($Class* clazz) {
	return $of($alloc(bug7088744$3));
}

void bug7088744$3::init$() {
}

void bug7088744$3::run() {
	$init($bug7088744);
	$var($Point, pt, $nc($bug7088744::label)->getLocationOnScreen());
	$nc($bug7088744::point)->x = $nc(pt)->x + $nc($bug7088744::label)->getWidth() / 2;
	$nc($bug7088744::point)->y = pt->y + $nc($bug7088744::label)->getHeight() / 2;
}

bug7088744$3::bug7088744$3() {
}

$Class* bug7088744$3::load$($String* name, bool initialize) {
	$loadClass(bug7088744$3, name, initialize, &_bug7088744$3_ClassInfo_, allocate$bug7088744$3);
	return class$;
}

$Class* bug7088744$3::class$ = nullptr;