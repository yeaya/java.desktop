#include <javax/swing/text/html/CommentView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CommentView$CommentBorder.h>
#include <javax/swing/text/html/EditableView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HiddenTagView.h>
#include <jcpp.h>

#undef COMMENT

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $LineBorder = ::javax::swing::border::LineBorder;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $CommentView$CommentBorder = ::javax::swing::text::html::CommentView$CommentBorder;
using $EditableView = ::javax::swing::text::html::EditableView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CommentView_FieldInfo_[] = {
	{"CBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(CommentView, CBorder)},
	{"commentPadding", "I", nullptr, $STATIC | $FINAL, $constField(CommentView, commentPadding)},
	{"commentPaddingD", "I", nullptr, $STATIC | $FINAL, $constField(CommentView, commentPaddingD)},
	{}
};

$MethodInfo _CommentView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(CommentView::*)($Element*)>(&CommentView::init$))},
	{"_updateModelFromText", "()V", nullptr, 0},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getRepresentedText", "()Ljava/lang/String;", nullptr, 0},
	{"getTextComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, 0},
	{"resetBorder", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _CommentView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CommentView$CommentBorder", "javax.swing.text.html.CommentView", "CommentBorder", $STATIC},
	{}
};

$ClassInfo _CommentView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CommentView",
	"javax.swing.text.html.HiddenTagView",
	nullptr,
	_CommentView_FieldInfo_,
	_CommentView_MethodInfo_,
	nullptr,
	nullptr,
	_CommentView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.CommentView$CommentBorder"
};

$Object* allocate$CommentView($Class* clazz) {
	return $of($alloc(CommentView));
}

$Border* CommentView::CBorder = nullptr;

void CommentView::init$($Element* e) {
	$HiddenTagView::init$(e);
}

$Component* CommentView::createComponent() {
	$useLocalCurrentObjectStackCache();
	$var($Container, host, getContainer());
	if (host != nullptr && !$nc(($cast($JTextComponent, host)))->isEditable()) {
		return nullptr;
	}
	$var($JTextArea, ta, $new($JTextArea, $(getRepresentedText())));
	$var($Document, doc, getDocument());
	$var($Font, font, nullptr);
	if ($instanceOf($StyledDocument, doc)) {
		$assign(font, $nc(($cast($StyledDocument, doc)))->getFont($(getAttributes())));
		ta->setFont(font);
	} else {
		$assign(font, ta->getFont());
	}
	updateYAlign(font);
	ta->setBorder(CommentView::CBorder);
	$nc($(ta->getDocument()))->addDocumentListener(this);
	ta->setFocusable(isVisible());
	return ta;
}

void CommentView::resetBorder() {
}

void CommentView::_updateModelFromText() {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, textC, getTextComponent());
	$var($Document, doc, getDocument());
	if (textC != nullptr && doc != nullptr) {
		$var($String, text, textC->getText());
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		this->isSettingAttributes = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$init($HTML$Attribute);
				sas->addAttribute($HTML$Attribute::COMMENT, text);
				int32_t var$1 = getStartOffset();
				int32_t var$2 = getEndOffset();
				$nc(($cast($StyledDocument, doc)))->setCharacterAttributes(var$1, var$2 - getStartOffset(), sas, false);
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				this->isSettingAttributes = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$JTextComponent* CommentView::getTextComponent() {
	return $cast($JTextComponent, getComponent());
}

$String* CommentView::getRepresentedText() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, as, $nc($(getElement()))->getAttributes());
	if (as != nullptr) {
		$init($HTML$Attribute);
		$var($Object, comment, as->getAttribute($HTML$Attribute::COMMENT));
		if ($instanceOf($String, comment)) {
			return $cast($String, comment);
		}
	}
	return ""_s;
}

void clinit$CommentView($Class* class$) {
	$assignStatic(CommentView::CBorder, $new($CommentView$CommentBorder));
}

CommentView::CommentView() {
}

$Class* CommentView::load$($String* name, bool initialize) {
	$loadClass(CommentView, name, initialize, &_CommentView_ClassInfo_, clinit$CommentView, allocate$CommentView);
	return class$;
}

$Class* CommentView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax