#include <JTextPaneDocumentAlignment$2.h>

#include <JTextPaneDocumentAlignment.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef ALIGN_CENTER

using $JTextPaneDocumentAlignment = ::JTextPaneDocumentAlignment;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTextPane = ::javax::swing::JTextPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;

$MethodInfo _JTextPaneDocumentAlignment$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextPaneDocumentAlignment$2::*)()>(&JTextPaneDocumentAlignment$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextPaneDocumentAlignment$2_EnclosingMethodInfo_ = {
	"JTextPaneDocumentAlignment",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTextPaneDocumentAlignment$2_InnerClassesInfo_[] = {
	{"JTextPaneDocumentAlignment$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentAlignment$2_ClassInfo_ = {
	$ACC_SUPER,
	"JTextPaneDocumentAlignment$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTextPaneDocumentAlignment$2_MethodInfo_,
	nullptr,
	&_JTextPaneDocumentAlignment$2_EnclosingMethodInfo_,
	_JTextPaneDocumentAlignment$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextPaneDocumentAlignment"
};

$Object* allocate$JTextPaneDocumentAlignment$2($Class* clazz) {
	return $of($alloc(JTextPaneDocumentAlignment$2));
}

void JTextPaneDocumentAlignment$2::init$() {
}

void JTextPaneDocumentAlignment$2::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($JTextPaneDocumentAlignment);
		$JTextPaneDocumentAlignment::position = $nc($($nc($JTextPaneDocumentAlignment::jTextPane)->modelToView(1)))->x;
		$var($SimpleAttributeSet, center, $new($SimpleAttributeSet));
		$StyleConstants::setAlignment(center, $StyleConstants::ALIGN_CENTER);
		$nc($($nc($JTextPaneDocumentAlignment::jTextPane)->getStyledDocument()))->setParagraphAttributes(0, 10, center, true);
	} catch ($BadLocationException& e) {
		e->printStackTrace();
	}
}

JTextPaneDocumentAlignment$2::JTextPaneDocumentAlignment$2() {
}

$Class* JTextPaneDocumentAlignment$2::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentAlignment$2, name, initialize, &_JTextPaneDocumentAlignment$2_ClassInfo_, allocate$JTextPaneDocumentAlignment$2);
	return class$;
}

$Class* JTextPaneDocumentAlignment$2::class$ = nullptr;