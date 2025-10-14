#include <bug8016833$1.h>

#include <bug8016833.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef BLUE

using $bug8016833 = ::bug8016833;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JTextPane = ::javax::swing::JTextPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;

$FieldInfo _bug8016833$1_FieldInfo_[] = {
	{"this$0", "Lbug8016833;", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$1, this$0)},
	{"val$g", "Ljava/awt/Graphics;", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$1, val$g)},
	{"val$background", "Z", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$1, val$background)},
	{"val$strikethrough", "Z", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$1, val$strikethrough)},
	{"val$underline", "Z", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$1, val$underline)},
	{}
};

$MethodInfo _bug8016833$1_MethodInfo_[] = {
	{"<init>", "(Lbug8016833;ZZZLjava/awt/Graphics;)V", "()V", 0, $method(static_cast<void(bug8016833$1::*)($bug8016833*,bool,bool,bool,$Graphics*)>(&bug8016833$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8016833$1_EnclosingMethodInfo_ = {
	"bug8016833",
	"drawText",
	"(Ljava/awt/Graphics;Ljava/lang/String;ZZZ)V"
};

$InnerClassInfo _bug8016833$1_InnerClassesInfo_[] = {
	{"bug8016833$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8016833$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8016833$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8016833$1_FieldInfo_,
	_bug8016833$1_MethodInfo_,
	nullptr,
	&_bug8016833$1_EnclosingMethodInfo_,
	_bug8016833$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8016833"
};

$Object* allocate$bug8016833$1($Class* clazz) {
	return $of($alloc(bug8016833$1));
}

void bug8016833$1::init$($bug8016833* this$0, bool val$underline, bool val$strikethrough, bool val$background, $Graphics* val$g) {
	$set(this, this$0, this$0);
	this->val$underline = val$underline;
	this->val$strikethrough = val$strikethrough;
	this->val$background = val$background;
	$set(this, val$g, val$g);
}

void bug8016833$1::run() {
	$var($JTextPane, comp, $new($JTextPane));
	$var($StyledDocument, doc, comp->getStyledDocument());
	$var($Style, style, comp->addStyle("superscript"_s, nullptr));
	this->this$0->setNormalStyle(style);
	if (this->val$underline) {
		$StyleConstants::setUnderline(style, true);
	}
	if (this->val$strikethrough) {
		$StyleConstants::setStrikeThrough(style, true);
	}
	if (this->val$background) {
		$init($Color);
		$StyleConstants::setBackground(style, $Color::BLUE);
	}
	try {
		$nc(doc)->insertString(doc->getLength(), "mama"_s, style);
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	comp->setSize(200, 100);
	comp->paint(this->val$g);
}

bug8016833$1::bug8016833$1() {
}

$Class* bug8016833$1::load$($String* name, bool initialize) {
	$loadClass(bug8016833$1, name, initialize, &_bug8016833$1_ClassInfo_, allocate$bug8016833$1);
	return class$;
}

$Class* bug8016833$1::class$ = nullptr;