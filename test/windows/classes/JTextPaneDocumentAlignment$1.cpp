#include <JTextPaneDocumentAlignment$1.h>

#include <JTextPaneDocumentAlignment.h>
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
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef ALIGN_RIGHT
#undef EXIT_ON_CLOSE

using $JTextPaneDocumentAlignment = ::JTextPaneDocumentAlignment;
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
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;

$MethodInfo _JTextPaneDocumentAlignment$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextPaneDocumentAlignment$1::*)()>(&JTextPaneDocumentAlignment$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextPaneDocumentAlignment$1_EnclosingMethodInfo_ = {
	"JTextPaneDocumentAlignment",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTextPaneDocumentAlignment$1_InnerClassesInfo_[] = {
	{"JTextPaneDocumentAlignment$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentAlignment$1_ClassInfo_ = {
	$ACC_SUPER,
	"JTextPaneDocumentAlignment$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTextPaneDocumentAlignment$1_MethodInfo_,
	nullptr,
	&_JTextPaneDocumentAlignment$1_EnclosingMethodInfo_,
	_JTextPaneDocumentAlignment$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextPaneDocumentAlignment"
};

$Object* allocate$JTextPaneDocumentAlignment$1($Class* clazz) {
	return $of($alloc(JTextPaneDocumentAlignment$1));
}

void JTextPaneDocumentAlignment$1::init$() {
}

void JTextPaneDocumentAlignment$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($JTextPaneDocumentAlignment);
	$assignStatic($JTextPaneDocumentAlignment::frame, $new($JFrame));
	$nc($JTextPaneDocumentAlignment::frame)->setUndecorated(true);
	$nc($JTextPaneDocumentAlignment::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc($JTextPaneDocumentAlignment::frame)->setSize(200, 200);
	$assignStatic($JTextPaneDocumentAlignment::jTextPane, $new($JTextPane));
	$nc($JTextPaneDocumentAlignment::jTextPane)->setContentType("text/html"_s);
	$nc($JTextPaneDocumentAlignment::jTextPane)->setText("<html><body><b id=\'test\'>Test</b></body></html>"_s);
	$var($SimpleAttributeSet, right, $new($SimpleAttributeSet));
	$StyleConstants::setAlignment(right, $StyleConstants::ALIGN_RIGHT);
	$nc($($nc($JTextPaneDocumentAlignment::jTextPane)->getStyledDocument()))->setParagraphAttributes(0, 10, right, true);
	$nc($($nc($JTextPaneDocumentAlignment::frame)->getContentPane()))->add(static_cast<$Component*>($JTextPaneDocumentAlignment::jTextPane));
	$nc($JTextPaneDocumentAlignment::frame)->setVisible(true);
}

JTextPaneDocumentAlignment$1::JTextPaneDocumentAlignment$1() {
}

$Class* JTextPaneDocumentAlignment$1::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentAlignment$1, name, initialize, &_JTextPaneDocumentAlignment$1_ClassInfo_, allocate$JTextPaneDocumentAlignment$1);
	return class$;
}

$Class* JTextPaneDocumentAlignment$1::class$ = nullptr;