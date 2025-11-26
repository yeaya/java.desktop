#include <bug7045593$1.h>

#include <bug7045593.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7045593 = ::bug7045593;
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
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug7045593$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7045593$1::*)()>(&bug7045593$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7045593$1_EnclosingMethodInfo_ = {
	"bug7045593",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7045593$1_InnerClassesInfo_[] = {
	{"bug7045593$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7045593$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7045593$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7045593$1_MethodInfo_,
	nullptr,
	&_bug7045593$1_EnclosingMethodInfo_,
	_bug7045593$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7045593"
};

$Object* allocate$bug7045593$1($Class* clazz) {
	return $of($alloc(bug7045593$1));
}

void bug7045593$1::init$() {
}

void bug7045593$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug7045593);
	$assignStatic($bug7045593::jtf, $new($JTextField, "WW"_s));
	$var($JFrame, frame, $new($JFrame));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>($bug7045593::jtf));
	frame->pack();
	frame->setVisible(true);
}

bug7045593$1::bug7045593$1() {
}

$Class* bug7045593$1::load$($String* name, bool initialize) {
	$loadClass(bug7045593$1, name, initialize, &_bug7045593$1_ClassInfo_, allocate$bug7045593$1);
	return class$;
}

$Class* bug7045593$1::class$ = nullptr;