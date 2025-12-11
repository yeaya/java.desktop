#include <IconifyTest$1.h>

#include <IconifyTest$1$1.h>
#include <IconifyTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $IconifyTest = ::IconifyTest;
using $IconifyTest$1$1 = ::IconifyTest$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _IconifyTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IconifyTest$1::*)()>(&IconifyTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IconifyTest$1_EnclosingMethodInfo_ = {
	"IconifyTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _IconifyTest$1_InnerClassesInfo_[] = {
	{"IconifyTest$1", nullptr, nullptr, 0},
	{"IconifyTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IconifyTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"IconifyTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_IconifyTest$1_MethodInfo_,
	nullptr,
	&_IconifyTest$1_EnclosingMethodInfo_,
	_IconifyTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IconifyTest"
};

$Object* allocate$IconifyTest$1($Class* clazz) {
	return $of($alloc(IconifyTest$1));
}

void IconifyTest$1::init$() {
}

void IconifyTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($IconifyTest);
	$assignStatic($IconifyTest::frame, $new($JFrame));
	$assignStatic($IconifyTest::button, $new($JButton, "HI"_s));
	$nc($($nc($IconifyTest::frame)->getContentPane()))->add(static_cast<$Component*>($IconifyTest::button));
	$nc($IconifyTest::frame)->addWindowListener($$new($IconifyTest$1$1, this));
	$nc($IconifyTest::frame)->pack();
	$nc($IconifyTest::frame)->setVisible(true);
}

IconifyTest$1::IconifyTest$1() {
}

$Class* IconifyTest$1::load$($String* name, bool initialize) {
	$loadClass(IconifyTest$1, name, initialize, &_IconifyTest$1_ClassInfo_, allocate$IconifyTest$1);
	return class$;
}

$Class* IconifyTest$1::class$ = nullptr;