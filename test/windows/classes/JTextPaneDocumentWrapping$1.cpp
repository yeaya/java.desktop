#include <JTextPaneDocumentWrapping$1.h>

#include <JTextPaneDocumentWrapping.h>
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
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JTextPaneDocumentWrapping = ::JTextPaneDocumentWrapping;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $WindowConstants = ::javax::swing::WindowConstants;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _JTextPaneDocumentWrapping$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextPaneDocumentWrapping$1::*)()>(&JTextPaneDocumentWrapping$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextPaneDocumentWrapping$1_EnclosingMethodInfo_ = {
	"JTextPaneDocumentWrapping",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTextPaneDocumentWrapping$1_InnerClassesInfo_[] = {
	{"JTextPaneDocumentWrapping$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentWrapping$1_ClassInfo_ = {
	$ACC_SUPER,
	"JTextPaneDocumentWrapping$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTextPaneDocumentWrapping$1_MethodInfo_,
	nullptr,
	&_JTextPaneDocumentWrapping$1_EnclosingMethodInfo_,
	_JTextPaneDocumentWrapping$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextPaneDocumentWrapping"
};

$Object* allocate$JTextPaneDocumentWrapping$1($Class* clazz) {
	return $of($alloc(JTextPaneDocumentWrapping$1));
}

void JTextPaneDocumentWrapping$1::init$() {
}

void JTextPaneDocumentWrapping$1::run() {
	$init($JTextPaneDocumentWrapping);
	$assignStatic($JTextPaneDocumentWrapping::frame, $new($JFrame));
	$nc($JTextPaneDocumentWrapping::frame)->setUndecorated(true);
	$nc($JTextPaneDocumentWrapping::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc($JTextPaneDocumentWrapping::frame)->setSize(200, 200);
	$assignStatic($JTextPaneDocumentWrapping::jTextPane, $new($JTextPane));
	$nc($JTextPaneDocumentWrapping::jTextPane)->setContentType("text/html"_s);
	$nc($JTextPaneDocumentWrapping::jTextPane)->setText("<html><body><b id=\'test\'>Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test</b></body></html>"_s);
	$nc($($nc($JTextPaneDocumentWrapping::frame)->getContentPane()))->add(static_cast<$Component*>($JTextPaneDocumentWrapping::jTextPane));
	$nc($JTextPaneDocumentWrapping::frame)->setVisible(true);
}

JTextPaneDocumentWrapping$1::JTextPaneDocumentWrapping$1() {
}

$Class* JTextPaneDocumentWrapping$1::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentWrapping$1, name, initialize, &_JTextPaneDocumentWrapping$1_ClassInfo_, allocate$JTextPaneDocumentWrapping$1);
	return class$;
}

$Class* JTextPaneDocumentWrapping$1::class$ = nullptr;