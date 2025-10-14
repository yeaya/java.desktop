#include <bug6495408$1.h>

#include <bug6495408.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LEFT

using $bug6495408 = ::bug6495408;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$MethodInfo _bug6495408$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6495408$1::*)()>(&bug6495408$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6495408$1_EnclosingMethodInfo_ = {
	"bug6495408",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6495408$1_InnerClassesInfo_[] = {
	{"bug6495408$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6495408$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6495408$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6495408$1_MethodInfo_,
	nullptr,
	&_bug6495408$1_EnclosingMethodInfo_,
	_bug6495408$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6495408"
};

$Object* allocate$bug6495408$1($Class* clazz) {
	return $of($alloc(bug6495408$1));
}

void bug6495408$1::init$() {
}

void bug6495408$1::run() {
	$init($bug6495408);
	$assignStatic($bug6495408::frame, $new($JFrame));
	$nc($bug6495408::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6495408::tabbedPane, $new($JTabbedPane));
	$nc($bug6495408::tabbedPane)->setTabPlacement($JTabbedPane::LEFT);
	$nc($bug6495408::tabbedPane)->addTab("Hello"_s, nullptr);
	$nc($bug6495408::frame)->add(static_cast<$Component*>($bug6495408::tabbedPane));
	$nc($bug6495408::frame)->setSize(400, 400);
	$nc($bug6495408::frame)->setLocationRelativeTo(nullptr);
	$nc($bug6495408::frame)->setVisible(true);
}

bug6495408$1::bug6495408$1() {
}

$Class* bug6495408$1::load$($String* name, bool initialize) {
	$loadClass(bug6495408$1, name, initialize, &_bug6495408$1_ClassInfo_, allocate$bug6495408$1);
	return class$;
}

$Class* bug6495408$1::class$ = nullptr;