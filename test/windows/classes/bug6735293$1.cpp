#include <bug6735293$1.h>

#include <bug6735293.h>
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
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <jcpp.h>

using $bug6735293 = ::bug6735293;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;

$MethodInfo _bug6735293$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6735293$1::*)()>(&bug6735293$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6735293$1_EnclosingMethodInfo_ = {
	"bug6735293",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6735293$1_InnerClassesInfo_[] = {
	{"bug6735293$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6735293$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6735293$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6735293$1_MethodInfo_,
	nullptr,
	&_bug6735293$1_EnclosingMethodInfo_,
	_bug6735293$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6735293"
};

$Object* allocate$bug6735293$1($Class* clazz) {
	return $of($alloc(bug6735293$1));
}

void bug6735293$1::init$() {
}

void bug6735293$1::run() {
	$init($bug6735293);
	$assignStatic($bug6735293::jtf, $new($JFormattedTextField));
	$assignStatic($bug6735293::nf, $new($NavigationFilter));
	$nc($bug6735293::jtf)->setText("A text message"_s);
	$assignStatic($bug6735293::jFrame, $new($JFrame));
	$nc($($nc($bug6735293::jFrame)->getContentPane()))->add(static_cast<$Component*>($bug6735293::jtf));
	$nc($bug6735293::jFrame)->pack();
	$nc($bug6735293::jFrame)->setVisible(true);
}

bug6735293$1::bug6735293$1() {
}

$Class* bug6735293$1::load$($String* name, bool initialize) {
	$loadClass(bug6735293$1, name, initialize, &_bug6735293$1_ClassInfo_, allocate$bug6735293$1);
	return class$;
}

$Class* bug6735293$1::class$ = nullptr;