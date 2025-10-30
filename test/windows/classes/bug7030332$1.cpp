#include <bug7030332$1.h>

#include <bug7030332.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE

using $bug7030332 = ::bug7030332;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug7030332$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7030332$1::*)()>(&bug7030332$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7030332$1_EnclosingMethodInfo_ = {
	"bug7030332",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7030332$1_InnerClassesInfo_[] = {
	{"bug7030332$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7030332$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7030332$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7030332$1_MethodInfo_,
	nullptr,
	&_bug7030332$1_EnclosingMethodInfo_,
	_bug7030332$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7030332"
};

$Object* allocate$bug7030332$1($Class* clazz) {
	return $of($alloc(bug7030332$1));
}

void bug7030332$1::init$() {
}

void bug7030332$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	frame->setContentPane($($bug7030332::createContentPane()));
	frame->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	frame->setSize(600, 400);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

bug7030332$1::bug7030332$1() {
}

$Class* bug7030332$1::load$($String* name, bool initialize) {
	$loadClass(bug7030332$1, name, initialize, &_bug7030332$1_ClassInfo_, allocate$bug7030332$1);
	return class$;
}

$Class* bug7030332$1::class$ = nullptr;