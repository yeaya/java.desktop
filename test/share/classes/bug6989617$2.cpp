#include <bug6989617$2.h>

#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Component.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $bug6989617$MyPanel = ::bug6989617$MyPanel;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JButton = ::javax::swing::JButton;

$MethodInfo _bug6989617$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6989617$2::*)()>(&bug6989617$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6989617$2_EnclosingMethodInfo_ = {
	"bug6989617",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6989617$2_InnerClassesInfo_[] = {
	{"bug6989617$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6989617$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6989617$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6989617$2_MethodInfo_,
	nullptr,
	&_bug6989617$2_EnclosingMethodInfo_,
	_bug6989617$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6989617"
};

$Object* allocate$bug6989617$2($Class* clazz) {
	return $of($alloc(bug6989617$2));
}

void bug6989617$2::init$() {
}

void bug6989617$2::run() {
	$init($bug6989617);
	$nc($bug6989617::panel)->resetPaintRectangle();
	$nc($bug6989617::button)->repaint();
}

bug6989617$2::bug6989617$2() {
}

$Class* bug6989617$2::load$($String* name, bool initialize) {
	$loadClass(bug6989617$2, name, initialize, &_bug6989617$2_ClassInfo_, allocate$bug6989617$2);
	return class$;
}

$Class* bug6989617$2::class$ = nullptr;