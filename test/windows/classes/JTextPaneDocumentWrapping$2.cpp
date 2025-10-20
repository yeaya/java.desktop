#include <JTextPaneDocumentWrapping$2.h>

#include <JTextPaneDocumentWrapping.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <jcpp.h>

#undef WHITE_SPACE

using $JTextPaneDocumentWrapping = ::JTextPaneDocumentWrapping;
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
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;

$MethodInfo _JTextPaneDocumentWrapping$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextPaneDocumentWrapping$2::*)()>(&JTextPaneDocumentWrapping$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextPaneDocumentWrapping$2_EnclosingMethodInfo_ = {
	"JTextPaneDocumentWrapping",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTextPaneDocumentWrapping$2_InnerClassesInfo_[] = {
	{"JTextPaneDocumentWrapping$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentWrapping$2_ClassInfo_ = {
	$ACC_SUPER,
	"JTextPaneDocumentWrapping$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTextPaneDocumentWrapping$2_MethodInfo_,
	nullptr,
	&_JTextPaneDocumentWrapping$2_EnclosingMethodInfo_,
	_JTextPaneDocumentWrapping$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextPaneDocumentWrapping"
};

$Object* allocate$JTextPaneDocumentWrapping$2($Class* clazz) {
	return $of($alloc(JTextPaneDocumentWrapping$2));
}

void JTextPaneDocumentWrapping$2::init$() {
}

void JTextPaneDocumentWrapping$2::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($JTextPaneDocumentWrapping);
		$JTextPaneDocumentWrapping::position = $nc($($nc($JTextPaneDocumentWrapping::jTextPane)->modelToView(100)))->y;
		$var($SimpleAttributeSet, wrap, $new($SimpleAttributeSet));
		$init($CSS$Attribute);
		wrap->addAttribute($CSS$Attribute::WHITE_SPACE, "nowrap"_s);
		$nc($($nc($JTextPaneDocumentWrapping::jTextPane)->getStyledDocument()))->setParagraphAttributes(0, 10, wrap, true);
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		e->printStackTrace();
	}
}

JTextPaneDocumentWrapping$2::JTextPaneDocumentWrapping$2() {
}

$Class* JTextPaneDocumentWrapping$2::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentWrapping$2, name, initialize, &_JTextPaneDocumentWrapping$2_ClassInfo_, allocate$JTextPaneDocumentWrapping$2);
	return class$;
}

$Class* JTextPaneDocumentWrapping$2::class$ = nullptr;