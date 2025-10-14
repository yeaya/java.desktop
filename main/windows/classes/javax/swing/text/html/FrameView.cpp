#include <javax/swing/text/html/FrameView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Shape.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/event/HyperlinkListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/FormSubmitEvent.h>
#include <javax/swing/text/html/FormView.h>
#include <javax/swing/text/html/FrameSetView.h>
#include <javax/swing/text/html/FrameView$FrameEditorPane.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <jcpp.h>

#undef ACTIVATED
#undef FRAMEBORDER
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef MARGINHEIGHT
#undef MARGINWIDTH
#undef MAX_VALUE
#undef NAME
#undef SCROLLING
#undef SRC
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_NEVER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Shape = ::java::awt::Shape;
using $InputEvent = ::java::awt::event::InputEvent;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $Border = ::javax::swing::border::Border;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $HyperlinkListener = ::javax::swing::event::HyperlinkListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $FormSubmitEvent = ::javax::swing::text::html::FormSubmitEvent;
using $FormView = ::javax::swing::text::html::FormView;
using $FrameSetView = ::javax::swing::text::html::FrameSetView;
using $FrameView$FrameEditorPane = ::javax::swing::text::html::FrameView$FrameEditorPane;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _FrameView_FieldInfo_[] = {
	{"htmlPane", "Ljavax/swing/JEditorPane;", nullptr, 0, $field(FrameView, htmlPane)},
	{"scroller", "Ljavax/swing/JScrollPane;", nullptr, 0, $field(FrameView, scroller)},
	{"editable", "Z", nullptr, 0, $field(FrameView, editable)},
	{"width", "F", nullptr, 0, $field(FrameView, width)},
	{"height", "F", nullptr, 0, $field(FrameView, height)},
	{"src", "Ljava/net/URL;", nullptr, 0, $field(FrameView, src)},
	{"createdComponent", "Z", nullptr, $PRIVATE, $field(FrameView, createdComponent)},
	{}
};

$MethodInfo _FrameView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FrameView::*)($Element*)>(&FrameView::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createScrollPane", "()V", nullptr, $PRIVATE, $method(static_cast<void(FrameView::*)()>(&FrameView::createScrollPane))},
	{"getHostPane", "()Ljavax/swing/JEditorPane;", nullptr, 0},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getOutermostJEditorPane", "()Ljavax/swing/JEditorPane;", nullptr, 0},
	{"hyperlinkUpdate", "(Ljavax/swing/event/HyperlinkEvent;)V", nullptr, $PUBLIC},
	{"inNestedFrameSet", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(FrameView::*)()>(&FrameView::inNestedFrameSet))},
	{"movePostData", "(Ljavax/swing/JEditorPane;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(FrameView::*)($JEditorPane*,$String*)>(&FrameView::movePostData))},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setBorder", "()V", nullptr, $PRIVATE, $method(static_cast<void(FrameView::*)()>(&FrameView::setBorder))},
	{"setMargin", "()V", nullptr, $PRIVATE, $method(static_cast<void(FrameView::*)()>(&FrameView::setMargin))},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FrameView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.FrameView$FrameEditorPane", "javax.swing.text.html.FrameView", "FrameEditorPane", 0},
	{}
};

$ClassInfo _FrameView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.FrameView",
	"javax.swing.text.ComponentView",
	"javax.swing.event.HyperlinkListener",
	_FrameView_FieldInfo_,
	_FrameView_MethodInfo_,
	nullptr,
	nullptr,
	_FrameView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.FrameView$FrameEditorPane"
};

$Object* allocate$FrameView($Class* clazz) {
	return $of($alloc(FrameView));
}

int32_t FrameView::hashCode() {
	 return this->$ComponentView::hashCode();
}

bool FrameView::equals(Object$* arg0) {
	 return this->$ComponentView::equals(arg0);
}

$Object* FrameView::clone() {
	 return this->$ComponentView::clone();
}

$String* FrameView::toString() {
	 return this->$ComponentView::toString();
}

void FrameView::finalize() {
	this->$ComponentView::finalize();
}

void FrameView::init$($Element* elem) {
	$ComponentView::init$(elem);
}

$Component* FrameView::createComponent() {
	$var($Element, elem, getElement());
	$var($AttributeSet, attributes, $nc(elem)->getAttributes());
	$init($HTML$Attribute);
	$var($String, srcAtt, $cast($String, $nc(attributes)->getAttribute($HTML$Attribute::SRC)));
	if (srcAtt != nullptr && !srcAtt->isEmpty()) {
		try {
			$var($URL, base, $nc(($cast($HTMLDocument, $(elem->getDocument()))))->getBase());
			$set(this, src, $new($URL, base, srcAtt));
			$set(this, htmlPane, $new($FrameView$FrameEditorPane, this));
			$nc(this->htmlPane)->addHyperlinkListener(this);
			$var($JEditorPane, host, getHostPane());
			bool isAutoFormSubmission = true;
			if (host != nullptr) {
				$nc(this->htmlPane)->setEditable(host->isEditable());
				$var($String, charset, $cast($String, host->getClientProperty("charset"_s)));
				if (charset != nullptr) {
					$nc(this->htmlPane)->putClientProperty("charset"_s, charset);
				}
				$var($HTMLEditorKit, hostKit, $cast($HTMLEditorKit, host->getEditorKit()));
				if (hostKit != nullptr) {
					isAutoFormSubmission = hostKit->isAutoFormSubmission();
				}
			}
			$nc(this->htmlPane)->setPage(this->src);
			$var($HTMLEditorKit, kit, $cast($HTMLEditorKit, $nc(this->htmlPane)->getEditorKit()));
			if (kit != nullptr) {
				kit->setAutoFormSubmission(isAutoFormSubmission);
			}
			$var($Document, doc, $nc(this->htmlPane)->getDocument());
			if ($instanceOf($HTMLDocument, doc)) {
				$nc(($cast($HTMLDocument, doc)))->setFrameDocumentState(true);
			}
			setMargin();
			createScrollPane();
			setBorder();
		} catch ($MalformedURLException&) {
			$var($MalformedURLException, e, $catch());
			e->printStackTrace();
		} catch ($IOException&) {
			$var($IOException, e1, $catch());
			e1->printStackTrace();
		}
	}
	this->createdComponent = true;
	return this->scroller;
}

$JEditorPane* FrameView::getHostPane() {
	$var($Container, c, getContainer());
	while ((c != nullptr) && !($instanceOf($JEditorPane, c))) {
		$assign(c, c->getParent());
	}
	return $cast($JEditorPane, c);
}

void FrameView::setParent($View* parent) {
	if (parent != nullptr) {
		$var($JTextComponent, t, $cast($JTextComponent, parent->getContainer()));
		this->editable = $nc(t)->isEditable();
	}
	$ComponentView::setParent(parent);
}

void FrameView::paint($Graphics* g, $Shape* allocation) {
	$var($Container, host, getContainer());
	bool var$0 = host != nullptr && this->htmlPane != nullptr;
	if (var$0) {
		bool var$1 = $nc(this->htmlPane)->isEditable();
		var$0 = var$1 != $nc(($cast($JTextComponent, host)))->isEditable();
	}
	if (var$0) {
		this->editable = $nc(($cast($JTextComponent, host)))->isEditable();
		$nc(this->htmlPane)->setEditable(this->editable);
	}
	$ComponentView::paint(g, allocation);
}

void FrameView::setMargin() {
	int32_t margin = 0;
	$var($Insets, in, $nc(this->htmlPane)->getMargin());
	$var($Insets, newInsets, nullptr);
	bool modified = false;
	$var($AttributeSet, attributes, $nc($(getElement()))->getAttributes());
	$init($HTML$Attribute);
	$var($String, marginStr, $cast($String, $nc(attributes)->getAttribute($HTML$Attribute::MARGINWIDTH)));
	if (in != nullptr) {
		$assign(newInsets, $new($Insets, in->top, in->left, in->right, in->bottom));
	} else {
		$assign(newInsets, $new($Insets, 0, 0, 0, 0));
	}
	if (marginStr != nullptr) {
		margin = $Integer::parseInt(marginStr);
		if (margin > 0) {
			$nc(newInsets)->left = margin;
			newInsets->right = margin;
			modified = true;
		}
	}
	$assign(marginStr, $cast($String, attributes->getAttribute($HTML$Attribute::MARGINHEIGHT)));
	if (marginStr != nullptr) {
		margin = $Integer::parseInt(marginStr);
		if (margin > 0) {
			$nc(newInsets)->top = margin;
			newInsets->bottom = margin;
			modified = true;
		}
	}
	if (modified) {
		$nc(this->htmlPane)->setMargin(newInsets);
	}
}

void FrameView::setBorder() {
	$var($AttributeSet, attributes, $nc($(getElement()))->getAttributes());
	$init($HTML$Attribute);
	$var($String, frameBorder, $cast($String, $nc(attributes)->getAttribute($HTML$Attribute::FRAMEBORDER)));
	bool var$0 = (frameBorder != nullptr);
	if (var$0) {
		bool var$1 = frameBorder->equals("no"_s);
		var$0 = (var$1 || frameBorder->equals("0"_s));
	}
	if (var$0) {
		$nc(this->scroller)->setBorder(nullptr);
	}
}

void FrameView::createScrollPane() {
	$var($AttributeSet, attributes, $nc($(getElement()))->getAttributes());
	$init($HTML$Attribute);
	$var($String, scrolling, $cast($String, $nc(attributes)->getAttribute($HTML$Attribute::SCROLLING)));
	if (scrolling == nullptr) {
		$assign(scrolling, "auto"_s);
	}
	if (!$nc(scrolling)->equals("no"_s)) {
		if (scrolling->equals("yes"_s)) {
			$set(this, scroller, $new($JScrollPane, $JScrollPane::VERTICAL_SCROLLBAR_ALWAYS, $JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS));
		} else {
			$set(this, scroller, $new($JScrollPane));
		}
	} else {
		$set(this, scroller, $new($JScrollPane, $JScrollPane::VERTICAL_SCROLLBAR_NEVER, $JScrollPane::HORIZONTAL_SCROLLBAR_NEVER));
	}
	$var($JViewport, vp, $nc(this->scroller)->getViewport());
	$nc(vp)->add(static_cast<$Component*>(this->htmlPane));
	vp->setBackingStoreEnabled(true);
	$nc(this->scroller)->setMinimumSize($$new($Dimension, 5, 5));
	$nc(this->scroller)->setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE));
}

$JEditorPane* FrameView::getOutermostJEditorPane() {
	$var($View, parent, getParent());
	$var($FrameSetView, frameSetView, nullptr);
	while (parent != nullptr) {
		if ($instanceOf($FrameSetView, parent)) {
			$assign(frameSetView, $cast($FrameSetView, parent));
		}
		$assign(parent, parent->getParent());
	}
	if (frameSetView != nullptr) {
		return $cast($JEditorPane, frameSetView->getContainer());
	}
	return nullptr;
}

bool FrameView::inNestedFrameSet() {
	$var($FrameSetView, parent, $cast($FrameSetView, getParent()));
	return ($instanceOf($FrameSetView, $($nc(parent)->getParent())));
}

void FrameView::hyperlinkUpdate($HyperlinkEvent* evt) {
	$var($JEditorPane, c, getOutermostJEditorPane());
	if (c == nullptr) {
		return;
	}
	if (!($instanceOf($HTMLFrameHyperlinkEvent, evt))) {
		$nc(c)->fireHyperlinkUpdate(evt);
		return;
	}
	$var($HTMLFrameHyperlinkEvent, e, $cast($HTMLFrameHyperlinkEvent, evt));
	$init($HyperlinkEvent$EventType);
	if ($nc(e)->getEventType() == $HyperlinkEvent$EventType::ACTIVATED) {
		$var($String, target, e->getTarget());
		$var($String, postTarget, target);
		bool var$0 = $nc(target)->equals("_parent"_s);
		if (var$0 && !inNestedFrameSet()) {
			$assign(target, "_top"_s);
		}
		if ($instanceOf($FormSubmitEvent, evt)) {
			$var($HTMLEditorKit, kit, $cast($HTMLEditorKit, $nc(c)->getEditorKit()));
			if (kit != nullptr && kit->isAutoFormSubmission()) {
				if ($nc(target)->equals("_top"_s)) {
					try {
						movePostData(c, postTarget);
						c->setPage($(e->getURL()));
					} catch ($IOException&) {
						$catch();
					}
				} else {
					$var($HTMLDocument, doc, $cast($HTMLDocument, c->getDocument()));
					$nc(doc)->processHTMLFrameHyperlinkEvent(e);
				}
			} else {
				c->fireHyperlinkUpdate(evt);
			}
			return;
		}
		if ($nc(target)->equals("_top"_s)) {
			try {
				$nc(c)->setPage($(e->getURL()));
			} catch ($IOException&) {
				$catch();
			}
		}
		if (!$nc(c)->isEditable()) {
			$var($Object, var$1, $of(c));
			$var($HyperlinkEvent$EventType, var$2, e->getEventType());
			$var($URL, var$3, e->getURL());
			$var($String, var$4, e->getDescription());
			$var($Element, var$5, getElement());
			c->fireHyperlinkUpdate($$new($HTMLFrameHyperlinkEvent, var$1, var$2, var$3, var$4, var$5, $(e->getInputEvent()), target));
		}
	}
}

void FrameView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$var($Element, elem, getElement());
	$var($AttributeSet, attributes, $nc(elem)->getAttributes());
	$var($URL, oldPage, this->src);
	$init($HTML$Attribute);
	$var($String, srcAtt, $cast($String, $nc(attributes)->getAttribute($HTML$Attribute::SRC)));
	$var($URL, base, $nc(($cast($HTMLDocument, $(elem->getDocument()))))->getBase());
	try {
		if (!this->createdComponent) {
			return;
		}
		$var($Object, postData, movePostData(this->htmlPane, nullptr));
		$set(this, src, $new($URL, base, srcAtt));
		bool var$0 = $nc(oldPage)->equals(this->src);
		if (var$0 && ($nc(this->src)->getRef() == nullptr) && (postData == nullptr)) {
			return;
		}
		$nc(this->htmlPane)->setPage(this->src);
		$var($Document, newDoc, $nc(this->htmlPane)->getDocument());
		if ($instanceOf($HTMLDocument, newDoc)) {
			$nc(($cast($HTMLDocument, newDoc)))->setFrameDocumentState(true);
		}
	} catch ($MalformedURLException&) {
		$catch();
	} catch ($IOException&) {
		$catch();
	}
}

$Object* FrameView::movePostData($JEditorPane* targetPane, $String* frameName$renamed) {
	$var($String, frameName, frameName$renamed);
	$var($Object, postData, nullptr);
	$var($JEditorPane, p, getOutermostJEditorPane());
	if (p != nullptr) {
		if (frameName == nullptr) {
			$init($HTML$Attribute);
			$assign(frameName, $cast($String, $nc($($nc($(getElement()))->getAttributes()))->getAttribute($HTML$Attribute::NAME)));
		}
		if (frameName != nullptr) {
			$init($FormView);
			$var($String, propName, $str({$FormView::PostDataProperty, "."_s, frameName}));
			$var($Document, d, p->getDocument());
			$assign(postData, $nc(d)->getProperty(propName));
			if (postData != nullptr) {
				$nc($($nc(targetPane)->getDocument()))->putProperty($FormView::PostDataProperty, postData);
				d->putProperty(propName, nullptr);
			}
		}
	}
	return $of(postData);
}

float FrameView::getMinimumSpan(int32_t axis) {
	return (float)5;
}

float FrameView::getMaximumSpan(int32_t axis) {
	return (float)$Integer::MAX_VALUE;
}

FrameView::FrameView() {
}

$Class* FrameView::load$($String* name, bool initialize) {
	$loadClass(FrameView, name, initialize, &_FrameView_ClassInfo_, allocate$FrameView);
	return class$;
}

$Class* FrameView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax