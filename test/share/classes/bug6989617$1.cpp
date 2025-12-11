#include <bug6989617$1.h>

#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6989617 = ::bug6989617;
using $bug6989617$MyPanel = ::bug6989617$MyPanel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _bug6989617$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6989617$1::*)()>(&bug6989617$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6989617$1_EnclosingMethodInfo_ = {
	"bug6989617",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6989617$1_InnerClassesInfo_[] = {
	{"bug6989617$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6989617$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6989617$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6989617$1_MethodInfo_,
	nullptr,
	&_bug6989617$1_EnclosingMethodInfo_,
	_bug6989617$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6989617"
};

$Object* allocate$bug6989617$1($Class* clazz) {
	return $of($alloc(bug6989617$1));
}

void bug6989617$1::init$() {
}

void bug6989617$1::run() {
	$init($bug6989617);
	$assignStatic($bug6989617::frame, $new($JFrame));
	$nc($bug6989617::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6989617::panel, $new($bug6989617$MyPanel));
	$assignStatic($bug6989617::button, $new($JButton, "Hello"_s));
	$nc($bug6989617::panel)->add(static_cast<$Component*>($bug6989617::button));
	$nc($bug6989617::frame)->add(static_cast<$Component*>($bug6989617::panel));
	$nc($bug6989617::frame)->setSize(200, 300);
	$nc($bug6989617::frame)->setVisible(true);
}

bug6989617$1::bug6989617$1() {
}

$Class* bug6989617$1::load$($String* name, bool initialize) {
	$loadClass(bug6989617$1, name, initialize, &_bug6989617$1_ClassInfo_, allocate$bug6989617$1);
	return class$;
}

$Class* bug6989617$1::class$ = nullptr;