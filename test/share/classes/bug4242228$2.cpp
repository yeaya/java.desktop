#include <bug4242228$2.h>

#include <bug4242228.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug4242228 = ::bug4242228;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$MethodInfo _bug4242228$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4242228$2::*)()>(&bug4242228$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4242228$2_EnclosingMethodInfo_ = {
	"bug4242228",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4242228$2_InnerClassesInfo_[] = {
	{"bug4242228$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4242228$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4242228$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4242228$2_MethodInfo_,
	nullptr,
	&_bug4242228$2_EnclosingMethodInfo_,
	_bug4242228$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4242228"
};

$Object* allocate$bug4242228$2($Class* clazz) {
	return $of($alloc(bug4242228$2));
}

void bug4242228$2::init$() {
}

void bug4242228$2::run() {
	for (int32_t i = 0; i < 50; ++i) {
		$init($bug4242228);
		$nc($bug4242228::tabPane)->setSelectedIndex(i % 2);
	}
	$init($bug4242228);
	$nc($bug4242228::frame)->dispose();
}

bug4242228$2::bug4242228$2() {
}

$Class* bug4242228$2::load$($String* name, bool initialize) {
	$loadClass(bug4242228$2, name, initialize, &_bug4242228$2_ClassInfo_, allocate$bug4242228$2);
	return class$;
}

$Class* bug4242228$2::class$ = nullptr;