#include <bug7049024$1.h>

#include <bug7049024.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug7049024 = ::bug7049024;
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
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug7049024$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7049024$1::*)()>(&bug7049024$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7049024$1_EnclosingMethodInfo_ = {
	"bug7049024",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7049024$1_InnerClassesInfo_[] = {
	{"bug7049024$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7049024$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7049024$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7049024$1_MethodInfo_,
	nullptr,
	&_bug7049024$1_EnclosingMethodInfo_,
	_bug7049024$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7049024"
};

$Object* allocate$bug7049024$1($Class* clazz) {
	return $of($alloc(bug7049024$1));
}

void bug7049024$1::init$() {
}

void bug7049024$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug7049024);
	$assignStatic($bug7049024::frame, $new($JFrame, "Test"_s));
	$assignStatic($bug7049024::textField, $new($JTextField, "test selection for textfield"_s));
	$assignStatic($bug7049024::button, $new($JButton, "To compete the focus"_s));
	$nc($bug7049024::frame)->setLayout($$new($FlowLayout));
	$nc($($nc($bug7049024::frame)->getContentPane()))->add(static_cast<$Component*>($bug7049024::textField));
	$nc($($nc($bug7049024::frame)->getContentPane()))->add(static_cast<$Component*>($bug7049024::button));
	$nc($bug7049024::frame)->pack();
	$nc($bug7049024::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug7049024::frame)->setVisible(true);
}

bug7049024$1::bug7049024$1() {
}

$Class* bug7049024$1::load$($String* name, bool initialize) {
	$loadClass(bug7049024$1, name, initialize, &_bug7049024$1_ClassInfo_, allocate$bug7049024$1);
	return class$;
}

$Class* bug7049024$1::class$ = nullptr;