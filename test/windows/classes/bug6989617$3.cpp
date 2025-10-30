#include <bug6989617$3.h>

#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $bug6989617$MyPanel = ::bug6989617$MyPanel;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;

$MethodInfo _bug6989617$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6989617$3::*)()>(&bug6989617$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6989617$3_EnclosingMethodInfo_ = {
	"bug6989617",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6989617$3_InnerClassesInfo_[] = {
	{"bug6989617$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6989617$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6989617$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6989617$3_MethodInfo_,
	nullptr,
	&_bug6989617$3_EnclosingMethodInfo_,
	_bug6989617$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6989617"
};

$Object* allocate$bug6989617$3($Class* clazz) {
	return $of($alloc(bug6989617$3));
}

void bug6989617$3::init$() {
}

void bug6989617$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6989617);
	$var($Rectangle, pr, $nc($bug6989617::panel)->getPaintRectangle());
	if (!$nc($($nc(pr)->getSize()))->equals($($nc($bug6989617::button)->getSize()))) {
		$throwNew($RuntimeException, "wrong size of the dirty area"_s);
	}
	if (!$nc($($nc(pr)->getLocation()))->equals($($nc($bug6989617::button)->getLocation()))) {
		$throwNew($RuntimeException, "wrong location of the dirty area"_s);
	}
}

bug6989617$3::bug6989617$3() {
}

$Class* bug6989617$3::load$($String* name, bool initialize) {
	$loadClass(bug6989617$3, name, initialize, &_bug6989617$3_ClassInfo_, allocate$bug6989617$3);
	return class$;
}

$Class* bug6989617$3::class$ = nullptr;