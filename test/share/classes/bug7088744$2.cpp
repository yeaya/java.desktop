#include <bug7088744$2.h>

#include <bug7088744$2$1.h>
#include <bug7088744.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug7088744 = ::bug7088744;
using $bug7088744$2$1 = ::bug7088744$2$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _bug7088744$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7088744$2::*)()>(&bug7088744$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7088744$2_EnclosingMethodInfo_ = {
	"bug7088744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7088744$2_InnerClassesInfo_[] = {
	{"bug7088744$2", nullptr, nullptr, 0},
	{"bug7088744$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7088744$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7088744$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7088744$2_MethodInfo_,
	nullptr,
	&_bug7088744$2_EnclosingMethodInfo_,
	_bug7088744$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7088744"
};

$Object* allocate$bug7088744$2($Class* clazz) {
	return $of($alloc(bug7088744$2));
}

void bug7088744$2::init$() {
}

void bug7088744$2::run() {
	$init($bug7088744);
	$assignStatic($bug7088744::frame, $new($JFrame));
	$assignStatic($bug7088744::label, $new($JLabel, "A label"_s));
	$nc($bug7088744::label)->addMouseListener($$new($bug7088744$2$1, this));
	$nc($bug7088744::frame)->add(static_cast<$Component*>($bug7088744::label));
	$nc($bug7088744::frame)->setSize(200, 100);
	$nc($bug7088744::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug7088744::frame)->setLocationRelativeTo(nullptr);
	$nc($bug7088744::frame)->setVisible(true);
}

bug7088744$2::bug7088744$2() {
}

$Class* bug7088744$2::load$($String* name, bool initialize) {
	$loadClass(bug7088744$2, name, initialize, &_bug7088744$2_ClassInfo_, allocate$bug7088744$2);
	return class$;
}

$Class* bug7088744$2::class$ = nullptr;