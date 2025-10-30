#include <bug7146377$1.h>

#include <bug7146377$1$1.h>
#include <bug7146377.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/MouseListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug7146377 = ::bug7146377;
using $bug7146377$1$1 = ::bug7146377$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _bug7146377$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7146377$1::*)()>(&bug7146377$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7146377$1_EnclosingMethodInfo_ = {
	"bug7146377",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7146377$1_InnerClassesInfo_[] = {
	{"bug7146377$1", nullptr, nullptr, 0},
	{"bug7146377$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7146377$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7146377$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7146377$1_MethodInfo_,
	nullptr,
	&_bug7146377$1_EnclosingMethodInfo_,
	_bug7146377$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7146377"
};

$Object* allocate$bug7146377$1($Class* clazz) {
	return $of($alloc(bug7146377$1));
}

void bug7146377$1::init$() {
}

void bug7146377$1::run() {
	$init($bug7146377);
	$assignStatic($bug7146377::frame, $new($JFrame));
	$assignStatic($bug7146377::label, $new($JLabel, "A label"_s));
	$nc($bug7146377::label)->addMouseListener($$new($bug7146377$1$1, this));
	$nc($bug7146377::frame)->add(static_cast<$Component*>($bug7146377::label));
	$nc($bug7146377::frame)->setSize(200, 100);
	$nc($bug7146377::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug7146377::frame)->setVisible(true);
}

bug7146377$1::bug7146377$1() {
}

$Class* bug7146377$1::load$($String* name, bool initialize) {
	$loadClass(bug7146377$1, name, initialize, &_bug7146377$1_ClassInfo_, allocate$bug7146377$1);
	return class$;
}

$Class* bug7146377$1::class$ = nullptr;