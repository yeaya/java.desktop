#include <javax/swing/text/html/HTMLEditorKit$ActivateLinkAction.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/ObjectView.h>
#include <jcpp.h>

#undef ACTIVATED
#undef CLASSID
#undef HREF
#undef OBJECT

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JEditorPane = ::javax::swing::JEditorPane;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $TextAction = ::javax::swing::text::TextAction;
using $View = ::javax::swing::text::View;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $ObjectView = ::javax::swing::text::html::ObjectView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLEditorKit$ActivateLinkAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$ActivateLinkAction::*)($String*)>(&HTMLEditorKit$ActivateLinkAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"activateLink", "(Ljava/lang/String;Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/JEditorPane;I)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLEditorKit$ActivateLinkAction::*)($String*,$HTMLDocument*,$JEditorPane*,int32_t)>(&HTMLEditorKit$ActivateLinkAction::activateLink))},
	{"doObjectAction", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLEditorKit$ActivateLinkAction::*)($JEditorPane*,$Element*)>(&HTMLEditorKit$ActivateLinkAction::doObjectAction))},
	{"getRootView", "(Ljavax/swing/JEditorPane;)Ljavax/swing/text/View;", nullptr, $PRIVATE, $method(static_cast<$View*(HTMLEditorKit$ActivateLinkAction::*)($JEditorPane*)>(&HTMLEditorKit$ActivateLinkAction::getRootView))},
	{"getView", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PRIVATE, $method(static_cast<$View*(HTMLEditorKit$ActivateLinkAction::*)($JEditorPane*,$Element*)>(&HTMLEditorKit$ActivateLinkAction::getView))},
	{"getView", "(Ljavax/swing/text/View;Ljavax/swing/text/Element;I)Ljavax/swing/text/View;", nullptr, $PRIVATE, $method(static_cast<$View*(HTMLEditorKit$ActivateLinkAction::*)($View*,$Element*,int32_t)>(&HTMLEditorKit$ActivateLinkAction::getView))},
	{"lock", "(Ljavax/swing/JEditorPane;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(HTMLEditorKit$ActivateLinkAction::*)($JEditorPane*)>(&HTMLEditorKit$ActivateLinkAction::lock))},
	{"unlock", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLEditorKit$ActivateLinkAction::*)(Object$*)>(&HTMLEditorKit$ActivateLinkAction::unlock))},
	{}
};

$InnerClassInfo _HTMLEditorKit$ActivateLinkAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$ActivateLinkAction", "javax.swing.text.html.HTMLEditorKit", "ActivateLinkAction", $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$ActivateLinkAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$ActivateLinkAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_HTMLEditorKit$ActivateLinkAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$ActivateLinkAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$ActivateLinkAction($Class* clazz) {
	return $of($alloc(HTMLEditorKit$ActivateLinkAction));
}

void HTMLEditorKit$ActivateLinkAction::init$($String* actionName) {
	$TextAction::init$(actionName);
}

void HTMLEditorKit$ActivateLinkAction::activateLink($String* href, $HTMLDocument* doc, $JEditorPane* editor, int32_t offset) {
	try {
		$init($Document);
		$var($URL, page, $cast($URL, $nc(doc)->getProperty($Document::StreamDescriptionProperty)));
		$var($URL, url, $new($URL, page, href));
		$var($Object, var$0, $of(editor));
		$init($HyperlinkEvent$EventType);
		$var($HyperlinkEvent$EventType, var$1, $HyperlinkEvent$EventType::ACTIVATED);
		$var($URL, var$2, url);
		$var($String, var$3, url->toExternalForm());
		$var($HyperlinkEvent, linkEvent, $new($HyperlinkEvent, var$0, var$1, var$2, var$3, $(doc->getCharacterElement(offset))));
		$nc(editor)->fireHyperlinkUpdate(linkEvent);
	} catch ($MalformedURLException&) {
		$catch();
	}
}

void HTMLEditorKit$ActivateLinkAction::doObjectAction($JEditorPane* editor, $Element* elem) {
	$var($View, view, getView(editor, elem));
	if (view != nullptr && $instanceOf($ObjectView, view)) {
		$var($Component, comp, $nc(($cast($ObjectView, view)))->getComponent());
		if (comp != nullptr && $instanceOf($Accessible, comp)) {
			$var($AccessibleContext, ac, comp->getAccessibleContext());
			if (ac != nullptr) {
				$var($AccessibleAction, aa, ac->getAccessibleAction());
				if (aa != nullptr) {
					aa->doAccessibleAction(0);
				}
			}
		}
	}
}

$View* HTMLEditorKit$ActivateLinkAction::getRootView($JEditorPane* editor) {
	return $nc($($cast($TextUI, $nc(editor)->getUI())))->getRootView(editor);
}

$View* HTMLEditorKit$ActivateLinkAction::getView($JEditorPane* editor, $Element* elem) {
	$var($Object, lock, this->lock(editor));
	{
		$var($Throwable, var$0, nullptr);
		$var($View, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($View, rootView, getRootView(editor));
			int32_t start = $nc(elem)->getStartOffset();
			if (rootView != nullptr) {
				$assign(var$2, getView(rootView, elem, start));
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			unlock(lock);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$View* HTMLEditorKit$ActivateLinkAction::getView($View* parent, $Element* elem, int32_t start) {
	if ($nc(parent)->getElement() == elem) {
		return parent;
	}
	$init($Position$Bias);
	int32_t index = $nc(parent)->getViewIndex(start, $Position$Bias::Forward);
	if (index != -1 && index < parent->getViewCount()) {
		return getView($(parent->getView(index)), elem, start);
	}
	return nullptr;
}

$Object* HTMLEditorKit$ActivateLinkAction::lock($JEditorPane* editor) {
	$var($Document, document, $nc(editor)->getDocument());
	if ($instanceOf($AbstractDocument, document)) {
		$nc(($cast($AbstractDocument, document)))->readLock();
		return $of(document);
	}
	return $of(nullptr);
}

void HTMLEditorKit$ActivateLinkAction::unlock(Object$* key) {
	if (key != nullptr) {
		$nc(($cast($AbstractDocument, key)))->readUnlock();
	}
}

void HTMLEditorKit$ActivateLinkAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, c, getTextComponent(e));
	if ($nc(c)->isEditable() || !($instanceOf($JEditorPane, c))) {
		return;
	}
	$var($JEditorPane, editor, $cast($JEditorPane, c));
	$var($Document, d, $nc(editor)->getDocument());
	if (d == nullptr || !($instanceOf($HTMLDocument, d))) {
		return;
	}
	$var($HTMLDocument, doc, $cast($HTMLDocument, d));
	$var($ElementIterator, ei, $new($ElementIterator, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc)))));
	int32_t currentOffset = editor->getCaretPosition();
	$var($String, urlString, nullptr);
	$var($String, objString, nullptr);
	$var($Element, currentElement, nullptr);
	while (($assign(currentElement, ei->next())) != nullptr) {
		$var($String, name, $nc(currentElement)->getName());
		$var($AttributeSet, attr, currentElement->getAttributes());
		$init($HTML$Attribute);
		$var($Object, href, $HTMLEditorKit::getAttrValue(attr, $HTML$Attribute::HREF));
		if (href != nullptr) {
			bool var$0 = currentOffset >= currentElement->getStartOffset();
			if (var$0 && currentOffset <= currentElement->getEndOffset()) {
				activateLink($cast($String, href), doc, editor, currentOffset);
				return;
			}
		} else {
			$init($HTML$Tag);
			if (name->equals($($nc($HTML$Tag::OBJECT)->toString()))) {
				$var($Object, obj, $HTMLEditorKit::getAttrValue(attr, $HTML$Attribute::CLASSID));
				if (obj != nullptr) {
					bool var$1 = currentOffset >= currentElement->getStartOffset();
					if (var$1 && currentOffset <= currentElement->getEndOffset()) {
						doObjectAction(editor, currentElement);
						return;
					}
				}
			}
		}
	}
}

HTMLEditorKit$ActivateLinkAction::HTMLEditorKit$ActivateLinkAction() {
}

$Class* HTMLEditorKit$ActivateLinkAction::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$ActivateLinkAction, name, initialize, &_HTMLEditorKit$ActivateLinkAction_ClassInfo_, allocate$HTMLEditorKit$ActivateLinkAction);
	return class$;
}

$Class* HTMLEditorKit$ActivateLinkAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax