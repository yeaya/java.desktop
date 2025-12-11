#include <bug6608456$1.h>

#include <bug6608456$TestRepaintManager.h>
#include <bug6608456.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $bug6608456 = ::bug6608456;
using $bug6608456$TestRepaintManager = ::bug6608456$TestRepaintManager;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $RepaintManager = ::javax::swing::RepaintManager;

$MethodInfo _bug6608456$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6608456$1::*)()>(&bug6608456$1::init$))},
	{"call", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _bug6608456$1_EnclosingMethodInfo_ = {
	"bug6608456",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6608456$1_InnerClassesInfo_[] = {
	{"bug6608456$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6608456$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6608456$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	_bug6608456$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/JComponent;>;",
	&_bug6608456$1_EnclosingMethodInfo_,
	_bug6608456$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6608456"
};

$Object* allocate$bug6608456$1($Class* clazz) {
	return $of($alloc(bug6608456$1));
}

void bug6608456$1::init$() {
}

$Object* bug6608456$1::call() {
	$useLocalCurrentObjectStackCache();
	$RepaintManager::setCurrentManager($$new($bug6608456$TestRepaintManager));
	$var($JFrame, frame, $new($JFrame, "test"_s));
	frame->setLayout($$new($FlowLayout));
	$var($JButton, button, $new($JButton, "default"_s));
	frame->add(static_cast<$Component*>(button));
	$assign(button, $new($JButton, "delegate"_s));
	if (!$bug6608456::registerDelegate(button, $$new($bug6608456$TestRepaintManager))) {
		return $of(nullptr);
	}
	frame->add(static_cast<$Component*>(button));
	frame->pack();
	frame->setVisible(true);
	return $of(button);
}

bug6608456$1::bug6608456$1() {
}

$Class* bug6608456$1::load$($String* name, bool initialize) {
	$loadClass(bug6608456$1, name, initialize, &_bug6608456$1_ClassInfo_, allocate$bug6608456$1);
	return class$;
}

$Class* bug6608456$1::class$ = nullptr;