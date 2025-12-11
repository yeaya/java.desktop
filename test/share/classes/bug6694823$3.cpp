#include <bug6694823$3.h>

#include <bug6694823.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $Dimension = ::java::awt::Dimension;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6694823$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6694823$3::*)()>(&bug6694823$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6694823$3_EnclosingMethodInfo_ = {
	"bug6694823",
	"checkPopup",
	"()V"
};

$InnerClassInfo _bug6694823$3_InnerClassesInfo_[] = {
	{"bug6694823$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6694823$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6694823$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6694823$3_MethodInfo_,
	nullptr,
	&_bug6694823$3_EnclosingMethodInfo_,
	_bug6694823$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6694823"
};

$Object* allocate$bug6694823$3($Class* clazz) {
	return $of($alloc(bug6694823$3));
}

void bug6694823$3::init$() {
}

void bug6694823$3::run() {
	$init($bug6694823);
	$var($Dimension, screenSize, $nc($bug6694823::toolkit)->getScreenSize());
	$nc($bug6694823::frame)->setLocation($nc(screenSize)->width / 2, screenSize->height - $nc($bug6694823::frame)->getHeight() - $nc($bug6694823::screenInsets)->bottom);
	$nc($bug6694823::frame)->setVisible(true);
}

bug6694823$3::bug6694823$3() {
}

$Class* bug6694823$3::load$($String* name, bool initialize) {
	$loadClass(bug6694823$3, name, initialize, &_bug6694823$3_ClassInfo_, allocate$bug6694823$3);
	return class$;
}

$Class* bug6694823$3::class$ = nullptr;