#include <bug6406264$1.h>

#include <bug6406264.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6406264 = ::bug6406264;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6406264$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6406264$1::*)()>(&bug6406264$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6406264$1_EnclosingMethodInfo_ = {
	"bug6406264",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6406264$1_InnerClassesInfo_[] = {
	{"bug6406264$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6406264$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6406264$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6406264$1_MethodInfo_,
	nullptr,
	&_bug6406264$1_EnclosingMethodInfo_,
	_bug6406264$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6406264"
};

$Object* allocate$bug6406264$1($Class* clazz) {
	return $of($alloc(bug6406264$1));
}

void bug6406264$1::init$() {
}

void bug6406264$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6406264);
	$assignStatic($bug6406264::frame, $new($JFrame, "JComboBox6406264 test"_s));
	$nc($bug6406264::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6406264::comboBox, $new($bug6406264, $$new($ObjectArray, {
		$of("One"_s),
		$of("Two"_s),
		$of("Three"_s)
	})));
	$nc($($nc($bug6406264::frame)->getContentPane()))->add(static_cast<$Component*>($bug6406264::comboBox));
	$nc($bug6406264::frame)->setLocationRelativeTo(nullptr);
	$nc($bug6406264::frame)->pack();
	$nc($bug6406264::frame)->setVisible(true);
}

bug6406264$1::bug6406264$1() {
}

$Class* bug6406264$1::load$($String* name, bool initialize) {
	$loadClass(bug6406264$1, name, initialize, &_bug6406264$1_ClassInfo_, allocate$bug6406264$1);
	return class$;
}

$Class* bug6406264$1::class$ = nullptr;