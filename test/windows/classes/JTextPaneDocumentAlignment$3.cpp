#include <JTextPaneDocumentAlignment$3.h>

#include <JTextPaneDocumentAlignment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $JTextPaneDocumentAlignment = ::JTextPaneDocumentAlignment;
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

$MethodInfo _JTextPaneDocumentAlignment$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextPaneDocumentAlignment$3::*)()>(&JTextPaneDocumentAlignment$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextPaneDocumentAlignment$3_EnclosingMethodInfo_ = {
	"JTextPaneDocumentAlignment",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTextPaneDocumentAlignment$3_InnerClassesInfo_[] = {
	{"JTextPaneDocumentAlignment$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentAlignment$3_ClassInfo_ = {
	$ACC_SUPER,
	"JTextPaneDocumentAlignment$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTextPaneDocumentAlignment$3_MethodInfo_,
	nullptr,
	&_JTextPaneDocumentAlignment$3_EnclosingMethodInfo_,
	_JTextPaneDocumentAlignment$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextPaneDocumentAlignment"
};

$Object* allocate$JTextPaneDocumentAlignment$3($Class* clazz) {
	return $of($alloc(JTextPaneDocumentAlignment$3));
}

void JTextPaneDocumentAlignment$3::init$() {
}

void JTextPaneDocumentAlignment$3::run() {
	try {
		$init($JTextPaneDocumentAlignment);
		$JTextPaneDocumentAlignment::position = $nc($($nc($JTextPaneDocumentAlignment::jTextPane)->modelToView(1)))->x;
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		e->printStackTrace();
	}
	$init($JTextPaneDocumentAlignment);
	$nc($JTextPaneDocumentAlignment::frame)->dispose();
}

JTextPaneDocumentAlignment$3::JTextPaneDocumentAlignment$3() {
}

$Class* JTextPaneDocumentAlignment$3::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentAlignment$3, name, initialize, &_JTextPaneDocumentAlignment$3_ClassInfo_, allocate$JTextPaneDocumentAlignment$3);
	return class$;
}

$Class* JTextPaneDocumentAlignment$3::class$ = nullptr;