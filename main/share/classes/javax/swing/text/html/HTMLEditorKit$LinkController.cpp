#include <javax/swing/text/html/HTMLEditorKit$LinkController.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

#undef A
#undef ACTIVATED
#undef ENTERED
#undef EXITED
#undef HREF
#undef IMG
#undef TARGET
#undef USEMAP

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;
using $Map = ::javax::swing::text::html::Map;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit$LinkController_FieldInfo_[] = {
	{"curElem", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(HTMLEditorKit$LinkController, curElem)},
	{"curElemImage", "Z", nullptr, $PRIVATE, $field(HTMLEditorKit$LinkController, curElemImage)},
	{"href", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLEditorKit$LinkController, href)},
	{"bias", "[Ljavax/swing/text/Position$Bias;", nullptr, $PRIVATE | $TRANSIENT, $field(HTMLEditorKit$LinkController, bias)},
	{"curOffset", "I", nullptr, $PRIVATE, $field(HTMLEditorKit$LinkController, curOffset)},
	{}
};

$MethodInfo _HTMLEditorKit$LinkController_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$LinkController::*)()>(&HTMLEditorKit$LinkController::init$))},
	{"activateLink", "(ILjavax/swing/JEditorPane;)V", nullptr, $PROTECTED},
	{"activateLink", "(ILjavax/swing/JEditorPane;Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"createHyperlinkEvent", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;Ljava/lang/String;Ljavax/swing/text/AttributeSet;Ljavax/swing/text/Element;Ljava/awt/event/MouseEvent;)Ljavax/swing/event/HyperlinkEvent;", nullptr, 0},
	{"doesElementContainLocation", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/Element;III)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLEditorKit$LinkController::*)($JEditorPane*,$Element*,int32_t,int32_t,int32_t)>(&HTMLEditorKit$LinkController::doesElementContainLocation))},
	{"fireEvents", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;Ljava/lang/String;Ljavax/swing/text/Element;Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"getMapHREF", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;III)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(HTMLEditorKit$LinkController::*)($JEditorPane*,$HTMLDocument*,$Element*,$AttributeSet*,int32_t,int32_t,int32_t)>(&HTMLEditorKit$LinkController::getMapHREF))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$LinkController_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$LinkController", "javax.swing.text.html.HTMLEditorKit", "LinkController", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$LinkController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$LinkController",
	"java.awt.event.MouseAdapter",
	"java.io.Serializable",
	_HTMLEditorKit$LinkController_FieldInfo_,
	_HTMLEditorKit$LinkController_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$LinkController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$LinkController($Class* clazz) {
	return $of($alloc(HTMLEditorKit$LinkController));
}

int32_t HTMLEditorKit$LinkController::hashCode() {
	 return this->$MouseAdapter::hashCode();
}

bool HTMLEditorKit$LinkController::equals(Object$* arg0) {
	 return this->$MouseAdapter::equals(arg0);
}

$Object* HTMLEditorKit$LinkController::clone() {
	 return this->$MouseAdapter::clone();
}

$String* HTMLEditorKit$LinkController::toString() {
	 return this->$MouseAdapter::toString();
}

void HTMLEditorKit$LinkController::finalize() {
	this->$MouseAdapter::finalize();
}

void HTMLEditorKit$LinkController::init$() {
	$MouseAdapter::init$();
	$set(this, curElem, nullptr);
	this->curElemImage = false;
	$set(this, href, nullptr);
	$set(this, bias, $new($Position$BiasArray, 1));
}

void HTMLEditorKit$LinkController::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, $cast($JEditorPane, $nc(e)->getSource()));
	bool var$1 = !$nc(editor)->isEditable();
	bool var$0 = var$1 && editor->isEnabled();
	if (var$0 && $SwingUtilities::isLeftMouseButton(e)) {
		int32_t var$2 = e->getX();
		$var($Point, pt, $new($Point, var$2, e->getY()));
		int32_t pos = editor->viewToModel(pt);
		if (pos >= 0) {
			activateLink(pos, editor, e);
		}
	}
}

void HTMLEditorKit$LinkController::mouseDragged($MouseEvent* e) {
}

void HTMLEditorKit$LinkController::mouseMoved($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, $cast($JEditorPane, $nc(e)->getSource()));
	if (!$nc(editor)->isEnabled()) {
		return;
	}
	$var($HTMLEditorKit, kit, $cast($HTMLEditorKit, $nc(editor)->getEditorKit()));
	bool adjustCursor = true;
	$var($Cursor, newCursor, $nc(kit)->getDefaultCursor());
	if (!editor->isEditable()) {
		int32_t var$0 = e->getX();
		$var($Point, pt, $new($Point, var$0, e->getY()));
		int32_t pos = $nc($($cast($TextUI, editor->getUI())))->viewToModel(editor, pt, this->bias);
		$init($Position$Bias);
		if ($nc(this->bias)->get(0) == $Position$Bias::Backward && pos > 0) {
			--pos;
		}
		if (pos >= 0 && ($instanceOf($HTMLDocument, $(editor->getDocument())))) {
			$var($HTMLDocument, hdoc, $cast($HTMLDocument, editor->getDocument()));
			$var($Element, elem, $nc(hdoc)->getCharacterElement(pos));
			$var($JEditorPane, var$1, editor);
			$var($Element, var$2, elem);
			int32_t var$3 = pos;
			int32_t var$4 = e->getX();
			if (!doesElementContainLocation(var$1, var$2, var$3, var$4, e->getY())) {
				$assign(elem, nullptr);
			}
			if (this->curElem != elem || this->curElemImage) {
				$var($Element, lastElem, this->curElem);
				$set(this, curElem, elem);
				$var($String, href, nullptr);
				this->curElemImage = false;
				if (elem != nullptr) {
					$var($AttributeSet, a, elem->getAttributes());
					$init($HTML$Tag);
					$var($AttributeSet, anchor, $cast($AttributeSet, $nc(a)->getAttribute($HTML$Tag::A)));
					if (anchor == nullptr) {
						$init($StyleConstants);
						this->curElemImage = ($equals(a->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::IMG));
						if (this->curElemImage) {
							$var($JEditorPane, var$5, editor);
							$var($HTMLDocument, var$6, hdoc);
							$var($Element, var$7, elem);
							$var($AttributeSet, var$8, a);
							int32_t var$9 = pos;
							int32_t var$10 = e->getX();
							$assign(href, getMapHREF(var$5, var$6, var$7, var$8, var$9, var$10, e->getY()));
						}
					} else {
						$init($HTML$Attribute);
						$assign(href, $cast($String, $nc(anchor)->getAttribute($HTML$Attribute::HREF)));
					}
				}
				if (href != this->href) {
					fireEvents(editor, hdoc, href, lastElem, e);
					$set(this, href, href);
					if (href != nullptr) {
						$assign(newCursor, kit->getLinkCursor());
					}
				} else {
					adjustCursor = false;
				}
			} else {
				adjustCursor = false;
			}
			this->curOffset = pos;
		}
	}
	if (adjustCursor && editor->getCursor() != newCursor) {
		editor->setCursor(newCursor);
	}
}

$String* HTMLEditorKit$LinkController::getMapHREF($JEditorPane* html, $HTMLDocument* hdoc, $Element* elem, $AttributeSet* attr, int32_t offset, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Attribute);
	$var($Object, useMap, $nc(attr)->getAttribute($HTML$Attribute::USEMAP));
	if (useMap != nullptr && ($instanceOf($String, useMap))) {
		$var($Map, m, $nc(hdoc)->getMap($cast($String, useMap)));
		if (m != nullptr && offset < hdoc->getLength()) {
			$var($Rectangle, bounds, nullptr);
			$var($TextUI, ui, $cast($TextUI, $nc(html)->getUI()));
			try {
				$init($Position$Bias);
				$var($Shape, lBounds, $nc(ui)->modelToView(html, offset, $Position$Bias::Forward));
				$var($Shape, rBounds, ui->modelToView(html, offset + 1, $Position$Bias::Backward));
				$assign(bounds, $nc(lBounds)->getBounds());
				$nc(bounds)->add(($instanceOf($Rectangle, rBounds)) ? $cast($Rectangle, rBounds) : $($nc(rBounds)->getBounds()));
			} catch ($BadLocationException& ble) {
				$assign(bounds, nullptr);
			}
			if (bounds != nullptr) {
				$var($AttributeSet, area, m->getArea(x - bounds->x, y - bounds->y, bounds->width, bounds->height));
				if (area != nullptr) {
					return $cast($String, area->getAttribute($HTML$Attribute::HREF));
				}
			}
		}
	}
	return nullptr;
}

bool HTMLEditorKit$LinkController::doesElementContainLocation($JEditorPane* editor, $Element* e, int32_t offset, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (e != nullptr && offset > 0 && e->getStartOffset() == offset) {
		try {
			$var($TextUI, ui, $cast($TextUI, $nc(editor)->getUI()));
			$init($Position$Bias);
			$var($Shape, s1, $nc(ui)->modelToView(editor, offset, $Position$Bias::Forward));
			if (s1 == nullptr) {
				return false;
			}
			$var($Rectangle, r1, ($instanceOf($Rectangle, s1)) ? $cast($Rectangle, s1) : $nc(s1)->getBounds());
			$var($Shape, s2, ui->modelToView(editor, e->getEndOffset(), $Position$Bias::Backward));
			if (s2 != nullptr) {
				$var($Rectangle, r2, ($instanceOf($Rectangle, s2)) ? $cast($Rectangle, s2) : s2->getBounds());
				$nc(r1)->add(r2);
			}
			return $nc(r1)->contains(x, y);
		} catch ($BadLocationException& ble) {
		}
	}
	return true;
}

void HTMLEditorKit$LinkController::activateLink(int32_t pos, $JEditorPane* editor) {
	activateLink(pos, editor, nullptr);
}

void HTMLEditorKit$LinkController::activateLink(int32_t pos, $JEditorPane* html, $MouseEvent* mouseEvent) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(html)->getDocument());
	if ($instanceOf($HTMLDocument, doc)) {
		$var($HTMLDocument, hdoc, $cast($HTMLDocument, doc));
		$var($Element, e, $nc(hdoc)->getCharacterElement(pos));
		$var($AttributeSet, a, $nc(e)->getAttributes());
		$init($HTML$Tag);
		$var($AttributeSet, anchor, $cast($AttributeSet, $nc(a)->getAttribute($HTML$Tag::A)));
		$var($HyperlinkEvent, linkEvent, nullptr);
		$var($String, description, nullptr);
		int32_t x = -1;
		int32_t y = -1;
		if (mouseEvent != nullptr) {
			x = mouseEvent->getX();
			y = mouseEvent->getY();
		}
		if (anchor == nullptr) {
			$set(this, href, getMapHREF(html, hdoc, e, a, pos, x, y));
		} else {
			$init($HTML$Attribute);
			$set(this, href, $cast($String, $nc(anchor)->getAttribute($HTML$Attribute::HREF)));
		}
		if (this->href != nullptr) {
			$assign(linkEvent, createHyperlinkEvent(html, hdoc, this->href, anchor, e, mouseEvent));
		}
		if (linkEvent != nullptr) {
			html->fireHyperlinkUpdate(linkEvent);
		}
	}
}

$HyperlinkEvent* HTMLEditorKit$LinkController::createHyperlinkEvent($JEditorPane* html, $HTMLDocument* hdoc, $String* href, $AttributeSet* anchor, $Element* element, $MouseEvent* mouseEvent) {
	$useLocalCurrentObjectStackCache();
	$var($URL, u, nullptr);
	try {
		$var($URL, base, $nc(hdoc)->getBase());
		$assign(u, $new($URL, base, href));
		bool var$0 = href != nullptr && "file"_s->equals($(u->getProtocol()));
		if (var$0 && href->startsWith("#"_s)) {
			$var($String, baseFile, $nc(base)->getFile());
			$var($String, newFile, u->getFile());
			if (baseFile != nullptr && newFile != nullptr && !newFile->startsWith(baseFile)) {
				$assign(u, $new($URL, base, $$str({baseFile, href})));
			}
		}
	} catch ($MalformedURLException& m) {
		$assign(u, nullptr);
	}
	$var($HyperlinkEvent, linkEvent, nullptr);
	if (!$nc(hdoc)->isFrameDocument()) {
		$init($HyperlinkEvent$EventType);
		$assign(linkEvent, $new($HyperlinkEvent, html, $HyperlinkEvent$EventType::ACTIVATED, u, href, element, mouseEvent));
	} else {
		$init($HTML$Attribute);
		$var($String, target, (anchor != nullptr) ? $cast($String, $nc(anchor)->getAttribute($HTML$Attribute::TARGET)) : ($String*)nullptr);
		if (target == nullptr || $nc(target)->isEmpty()) {
			$assign(target, hdoc->getBaseTarget());
		}
		if (target == nullptr || $nc(target)->isEmpty()) {
			$assign(target, "_self"_s);
		}
		$init($HyperlinkEvent$EventType);
		$assign(linkEvent, $new($HTMLFrameHyperlinkEvent, html, $HyperlinkEvent$EventType::ACTIVATED, u, href, element, mouseEvent, target));
	}
	return linkEvent;
}

void HTMLEditorKit$LinkController::fireEvents($JEditorPane* editor, $HTMLDocument* doc, $String* href, $Element* lastElem, $MouseEvent* mouseEvent) {
	$useLocalCurrentObjectStackCache();
	if (this->href != nullptr) {
		$var($URL, u, nullptr);
		try {
			$assign(u, $new($URL, $($nc(doc)->getBase()), this->href));
		} catch ($MalformedURLException& m) {
			$assign(u, nullptr);
		}
		$init($HyperlinkEvent$EventType);
		$var($HyperlinkEvent, exit, $new($HyperlinkEvent, editor, $HyperlinkEvent$EventType::EXITED, u, this->href, lastElem, mouseEvent));
		$nc(editor)->fireHyperlinkUpdate(exit);
	}
	if (href != nullptr) {
		$var($URL, u, nullptr);
		try {
			$assign(u, $new($URL, $($nc(doc)->getBase()), href));
		} catch ($MalformedURLException& m) {
			$assign(u, nullptr);
		}
		$init($HyperlinkEvent$EventType);
		$var($HyperlinkEvent, entered, $new($HyperlinkEvent, editor, $HyperlinkEvent$EventType::ENTERED, u, href, this->curElem, mouseEvent));
		$nc(editor)->fireHyperlinkUpdate(entered);
	}
}

HTMLEditorKit$LinkController::HTMLEditorKit$LinkController() {
}

$Class* HTMLEditorKit$LinkController::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$LinkController, name, initialize, &_HTMLEditorKit$LinkController_ClassInfo_, allocate$HTMLEditorKit$LinkController);
	return class$;
}

$Class* HTMLEditorKit$LinkController::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax