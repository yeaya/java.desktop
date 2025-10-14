#include <javax/swing/text/html/HTMLEditorKit$HTMLTextAction.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::swing::text::Element>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLEditorKit$HTMLTextAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$HTMLTextAction::*)($String*)>(&HTMLEditorKit$HTMLTextAction::init$))},
	{"elementCountToTag", "(Ljavax/swing/text/html/HTMLDocument;ILjavax/swing/text/html/HTML$Tag;)I", nullptr, $PROTECTED},
	{"findElementMatchingTag", "(Ljavax/swing/text/html/HTMLDocument;ILjavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/Element;", nullptr, $PROTECTED},
	{"getElementsAt", "(Ljavax/swing/text/html/HTMLDocument;I)[Ljavax/swing/text/Element;", nullptr, $PROTECTED},
	{"getElementsAt", "(Ljavax/swing/text/Element;II)[Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$ElementArray*(HTMLEditorKit$HTMLTextAction::*)($Element*,int32_t,int32_t)>(&HTMLEditorKit$HTMLTextAction::getElementsAt))},
	{"getHTMLDocument", "(Ljavax/swing/JEditorPane;)Ljavax/swing/text/html/HTMLDocument;", nullptr, $PROTECTED},
	{"getHTMLEditorKit", "(Ljavax/swing/JEditorPane;)Ljavax/swing/text/html/HTMLEditorKit;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _HTMLEditorKit$HTMLTextAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$HTMLTextAction", "javax.swing.text.html.HTMLEditorKit", "HTMLTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HTMLEditorKit$HTMLTextAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.html.HTMLEditorKit$HTMLTextAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	nullptr,
	_HTMLEditorKit$HTMLTextAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$HTMLTextAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$HTMLTextAction($Class* clazz) {
	return $of($alloc(HTMLEditorKit$HTMLTextAction));
}

void HTMLEditorKit$HTMLTextAction::init$($String* name) {
	$StyledEditorKit$StyledTextAction::init$(name);
}

$HTMLDocument* HTMLEditorKit$HTMLTextAction::getHTMLDocument($JEditorPane* e) {
	$var($Document, d, $nc(e)->getDocument());
	if ($instanceOf($HTMLDocument, d)) {
		return $cast($HTMLDocument, d);
	}
	$throwNew($IllegalArgumentException, "document must be HTMLDocument"_s);
}

$HTMLEditorKit* HTMLEditorKit$HTMLTextAction::getHTMLEditorKit($JEditorPane* e) {
	$var($EditorKit, k, $nc(e)->getEditorKit());
	if ($instanceOf($HTMLEditorKit, k)) {
		return $cast($HTMLEditorKit, k);
	}
	$throwNew($IllegalArgumentException, "EditorKit must be HTMLEditorKit"_s);
}

$ElementArray* HTMLEditorKit$HTMLTextAction::getElementsAt($HTMLDocument* doc, int32_t offset) {
	return getElementsAt($($nc(doc)->getDefaultRootElement()), offset, 0);
}

$ElementArray* HTMLEditorKit$HTMLTextAction::getElementsAt($Element* parent, int32_t offset, int32_t depth) {
	if ($nc(parent)->isLeaf()) {
		$var($ElementArray, retValue, $new($ElementArray, depth + 1));
		retValue->set(depth, parent);
		return retValue;
	}
	$var($ElementArray, retValue, getElementsAt($($nc(parent)->getElement(parent->getElementIndex(offset))), offset, depth + 1));
	$nc(retValue)->set(depth, parent);
	return retValue;
}

int32_t HTMLEditorKit$HTMLTextAction::elementCountToTag($HTMLDocument* doc, int32_t offset, $HTML$Tag* tag) {
	int32_t depth = -1;
	$var($Element, e, $nc(doc)->getCharacterElement(offset));
	$init($StyleConstants);
	while (e != nullptr && !$equals($nc($(e->getAttributes()))->getAttribute($StyleConstants::NameAttribute), tag)) {
		$assign(e, e->getParentElement());
		++depth;
	}
	if (e == nullptr) {
		return -1;
	}
	return depth;
}

$Element* HTMLEditorKit$HTMLTextAction::findElementMatchingTag($HTMLDocument* doc, int32_t offset, $HTML$Tag* tag) {
	$var($Element, e, $nc(doc)->getDefaultRootElement());
	$var($Element, lastMatch, nullptr);
	while (e != nullptr) {
		$init($StyleConstants);
		if ($equals($nc($(e->getAttributes()))->getAttribute($StyleConstants::NameAttribute), tag)) {
			$assign(lastMatch, e);
		}
		$assign(e, e->getElement(e->getElementIndex(offset)));
	}
	return lastMatch;
}

HTMLEditorKit$HTMLTextAction::HTMLEditorKit$HTMLTextAction() {
}

$Class* HTMLEditorKit$HTMLTextAction::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$HTMLTextAction, name, initialize, &_HTMLEditorKit$HTMLTextAction_ClassInfo_, allocate$HTMLEditorKit$HTMLTextAction);
	return class$;
}

$Class* HTMLEditorKit$HTMLTextAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax