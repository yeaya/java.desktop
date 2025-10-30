#include <JTextPaneDocumentWrapping$3.h>

#include <JTextPaneDocumentWrapping.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $JTextPaneDocumentWrapping = ::JTextPaneDocumentWrapping;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _JTextPaneDocumentWrapping$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextPaneDocumentWrapping$3::*)()>(&JTextPaneDocumentWrapping$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextPaneDocumentWrapping$3_EnclosingMethodInfo_ = {
	"JTextPaneDocumentWrapping",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTextPaneDocumentWrapping$3_InnerClassesInfo_[] = {
	{"JTextPaneDocumentWrapping$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentWrapping$3_ClassInfo_ = {
	$ACC_SUPER,
	"JTextPaneDocumentWrapping$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTextPaneDocumentWrapping$3_MethodInfo_,
	nullptr,
	&_JTextPaneDocumentWrapping$3_EnclosingMethodInfo_,
	_JTextPaneDocumentWrapping$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextPaneDocumentWrapping"
};

$Object* allocate$JTextPaneDocumentWrapping$3($Class* clazz) {
	return $of($alloc(JTextPaneDocumentWrapping$3));
}

void JTextPaneDocumentWrapping$3::init$() {
}

void JTextPaneDocumentWrapping$3::run() {
	try {
		$init($JTextPaneDocumentWrapping);
		$JTextPaneDocumentWrapping::position = $nc($($nc($JTextPaneDocumentWrapping::jTextPane)->modelToView(100)))->y;
	} catch ($BadLocationException& e) {
		e->printStackTrace();
	}
	$init($JTextPaneDocumentWrapping);
	$nc($JTextPaneDocumentWrapping::frame)->dispose();
}

JTextPaneDocumentWrapping$3::JTextPaneDocumentWrapping$3() {
}

$Class* JTextPaneDocumentWrapping$3::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentWrapping$3, name, initialize, &_JTextPaneDocumentWrapping$3_ClassInfo_, allocate$JTextPaneDocumentWrapping$3);
	return class$;
}

$Class* JTextPaneDocumentWrapping$3::class$ = nullptr;