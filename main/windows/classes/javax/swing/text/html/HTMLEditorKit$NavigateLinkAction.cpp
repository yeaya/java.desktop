#include <javax/swing/text/html/HTMLEditorKit$NavigateLinkAction.h>

#include <java/awt/Color.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef ACCESSIBLE_HYPERTEXT_OFFSET
#undef HREF
#undef OBJECT

using $Color = ::java::awt::Color;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JEditorPane = ::javax::swing::JEditorPane;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $CaretListener = ::javax::swing::event::CaretListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;
using $TextAction = ::javax::swing::text::TextAction;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter = ::javax::swing::text::html::HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit$NavigateLinkAction_FieldInfo_[] = {
	{"focusPainter", "Ljavax/swing/text/html/HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLEditorKit$NavigateLinkAction, focusPainter)},
	{"focusBack", "Z", nullptr, $PRIVATE | $FINAL, $field(HTMLEditorKit$NavigateLinkAction, focusBack)},
	{}
};

$MethodInfo _HTMLEditorKit$NavigateLinkAction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$NavigateLinkAction::*)($String*)>(&HTMLEditorKit$NavigateLinkAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC},
	{"getHTMLEditorKit", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/html/HTMLEditorKit;", nullptr, $PRIVATE, $method(static_cast<$HTMLEditorKit*(HTMLEditorKit$NavigateLinkAction::*)($JTextComponent*)>(&HTMLEditorKit$NavigateLinkAction::getHTMLEditorKit))},
	{"moveCaretPosition", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/html/HTMLEditorKit;II)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLEditorKit$NavigateLinkAction::*)($JTextComponent*,$HTMLEditorKit*,int32_t,int32_t)>(&HTMLEditorKit$NavigateLinkAction::moveCaretPosition))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$NavigateLinkAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction", "javax.swing.text.html.HTMLEditorKit", "NavigateLinkAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter", "javax.swing.text.html.HTMLEditorKit$NavigateLinkAction", "FocusHighlightPainter", $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$NavigateLinkAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$NavigateLinkAction",
	"javax.swing.text.TextAction",
	"javax.swing.event.CaretListener",
	_HTMLEditorKit$NavigateLinkAction_FieldInfo_,
	_HTMLEditorKit$NavigateLinkAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$NavigateLinkAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$NavigateLinkAction($Class* clazz) {
	return $of($alloc(HTMLEditorKit$NavigateLinkAction));
}

$Object* HTMLEditorKit$NavigateLinkAction::clone() {
	 return this->$TextAction::clone();
}

int32_t HTMLEditorKit$NavigateLinkAction::hashCode() {
	 return this->$TextAction::hashCode();
}

bool HTMLEditorKit$NavigateLinkAction::equals(Object$* arg0) {
	 return this->$TextAction::equals(arg0);
}

$String* HTMLEditorKit$NavigateLinkAction::toString() {
	 return this->$TextAction::toString();
}

void HTMLEditorKit$NavigateLinkAction::finalize() {
	this->$TextAction::finalize();
}

$HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter* HTMLEditorKit$NavigateLinkAction::focusPainter = nullptr;

void HTMLEditorKit$NavigateLinkAction::init$($String* actionName) {
	$TextAction::init$(actionName);
	this->focusBack = "previous-link-action"_s->equals(actionName);
}

void HTMLEditorKit$NavigateLinkAction::caretUpdate($CaretEvent* e) {
	$var($Object, src, $nc(e)->getSource());
	if ($instanceOf($JTextComponent, src)) {
		$var($JTextComponent, comp, $cast($JTextComponent, src));
		$var($HTMLEditorKit, kit, getHTMLEditorKit(comp));
		if (kit != nullptr && kit->foundLink) {
			kit->foundLink = false;
			$init($AccessibleContext);
			$var($String, var$0, $AccessibleContext::ACCESSIBLE_HYPERTEXT_OFFSET);
			$var($Object, var$1, $of($Integer::valueOf(kit->prevHypertextOffset)));
			$nc($($nc(comp)->getAccessibleContext()))->firePropertyChange(var$0, var$1, $($Integer::valueOf(e->getDot())));
		}
	}
}

void HTMLEditorKit$NavigateLinkAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, comp, getTextComponent(e));
	if (comp == nullptr || $nc(comp)->isEditable()) {
		return;
	}
	$var($Document, doc, $nc(comp)->getDocument());
	$var($HTMLEditorKit, kit, getHTMLEditorKit(comp));
	if (doc == nullptr || kit == nullptr) {
		return;
	}
	$var($ElementIterator, ei, $new($ElementIterator, doc));
	int32_t currentOffset = comp->getCaretPosition();
	int32_t prevStartOffset = -1;
	int32_t prevEndOffset = -1;
	$var($Element, nextElement, nullptr);
	while (($assign(nextElement, ei->next())) != nullptr) {
		$var($String, name, $nc(nextElement)->getName());
		$var($AttributeSet, attr, nextElement->getAttributes());
		$init($HTML$Attribute);
		$var($Object, href, $HTMLEditorKit::getAttrValue(attr, $HTML$Attribute::HREF));
		$init($HTML$Tag);
		if (!($nc(name)->equals($($nc($HTML$Tag::OBJECT)->toString()))) && href == nullptr) {
			continue;
		}
		int32_t elementOffset = nextElement->getStartOffset();
		if (this->focusBack) {
			if (elementOffset >= currentOffset && prevStartOffset >= 0) {
				$nc(kit)->foundLink = true;
				comp->setCaretPosition(prevStartOffset);
				moveCaretPosition(comp, kit, prevStartOffset, prevEndOffset);
				kit->prevHypertextOffset = prevStartOffset;
				return;
			}
		} else if (elementOffset > currentOffset) {
			$nc(kit)->foundLink = true;
			comp->setCaretPosition(elementOffset);
			moveCaretPosition(comp, kit, elementOffset, nextElement->getEndOffset());
			kit->prevHypertextOffset = elementOffset;
			return;
		}
		prevStartOffset = nextElement->getStartOffset();
		prevEndOffset = nextElement->getEndOffset();
	}
	if (this->focusBack && prevStartOffset >= 0) {
		$nc(kit)->foundLink = true;
		comp->setCaretPosition(prevStartOffset);
		moveCaretPosition(comp, kit, prevStartOffset, prevEndOffset);
		kit->prevHypertextOffset = prevStartOffset;
	}
}

void HTMLEditorKit$NavigateLinkAction::moveCaretPosition($JTextComponent* comp, $HTMLEditorKit* kit, int32_t mark, int32_t dot) {
	$var($Highlighter, h, $nc(comp)->getHighlighter());
	if (h != nullptr) {
		int32_t p0 = $Math::min(dot, mark);
		int32_t p1 = $Math::max(dot, mark);
		try {
			if ($nc(kit)->linkNavigationTag != nullptr) {
				h->changeHighlight(kit->linkNavigationTag, p0, p1);
			} else {
				$set(kit, linkNavigationTag, h->addHighlight(p0, p1, HTMLEditorKit$NavigateLinkAction::focusPainter));
			}
		} catch ($BadLocationException&) {
			$catch();
		}
	}
}

$HTMLEditorKit* HTMLEditorKit$NavigateLinkAction::getHTMLEditorKit($JTextComponent* comp) {
	if ($instanceOf($JEditorPane, comp)) {
		$var($EditorKit, kit, $nc(($cast($JEditorPane, comp)))->getEditorKit());
		if ($instanceOf($HTMLEditorKit, kit)) {
			return $cast($HTMLEditorKit, kit);
		}
	}
	return nullptr;
}

void clinit$HTMLEditorKit$NavigateLinkAction($Class* class$) {
	$assignStatic(HTMLEditorKit$NavigateLinkAction::focusPainter, $new($HTMLEditorKit$NavigateLinkAction$FocusHighlightPainter, nullptr));
}

HTMLEditorKit$NavigateLinkAction::HTMLEditorKit$NavigateLinkAction() {
}

$Class* HTMLEditorKit$NavigateLinkAction::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$NavigateLinkAction, name, initialize, &_HTMLEditorKit$NavigateLinkAction_ClassInfo_, clinit$HTMLEditorKit$NavigateLinkAction, allocate$HTMLEditorKit$NavigateLinkAction);
	return class$;
}

$Class* HTMLEditorKit$NavigateLinkAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax