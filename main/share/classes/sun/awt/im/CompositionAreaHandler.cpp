#include <sun/awt/im/CompositionAreaHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/ref/WeakReference.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/util/EventObject.h>
#include <sun/awt/im/CompositionArea.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodContext.h>
#include <jcpp.h>

#undef EMPTY_TEXT
#undef FONT
#undef IM_ATTRIBUTES
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_TEXT_CHANGED

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $CompositionArea = ::sun::awt::im::CompositionArea;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _CompositionAreaHandler_FieldInfo_[] = {
	{"compositionArea", "Lsun/awt/im/CompositionArea;", nullptr, $PRIVATE | $STATIC, $staticField(CompositionAreaHandler, compositionArea)},
	{"compositionAreaLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(CompositionAreaHandler, compositionAreaLock)},
	{"compositionAreaOwner", "Lsun/awt/im/CompositionAreaHandler;", nullptr, $PRIVATE | $STATIC, $staticField(CompositionAreaHandler, compositionAreaOwner)},
	{"composedText", "Ljava/text/AttributedCharacterIterator;", nullptr, $PRIVATE, $field(CompositionAreaHandler, composedText)},
	{"caret", "Ljava/awt/font/TextHitInfo;", nullptr, $PRIVATE, $field(CompositionAreaHandler, caret)},
	{"clientComponent", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE, $field(CompositionAreaHandler, clientComponent)},
	{"inputMethodContext", "Lsun/awt/im/InputMethodContext;", nullptr, $PRIVATE, $field(CompositionAreaHandler, inputMethodContext)},
	{"IM_ATTRIBUTES", "[Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CompositionAreaHandler, IM_ATTRIBUTES)},
	{"EMPTY_TEXT", "Ljava/text/AttributedCharacterIterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CompositionAreaHandler, EMPTY_TEXT)},
	{}
};

$MethodInfo _CompositionAreaHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/im/InputMethodContext;)V", nullptr, 0, $method(static_cast<void(CompositionAreaHandler::*)($InputMethodContext*)>(&CompositionAreaHandler::init$))},
	{"cancelLatestCommittedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"closeCompositionArea", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&CompositionAreaHandler::closeCompositionArea))},
	{"createCompositionArea", "()V", nullptr, $PRIVATE, $method(static_cast<void(CompositionAreaHandler::*)()>(&CompositionAreaHandler::createCompositionArea))},
	{"getClientInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, 0},
	{"getCommittedText", "(II[Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getCommittedTextLength", "()I", nullptr, $PUBLIC},
	{"getInsertPositionOffset", "()I", nullptr, $PUBLIC},
	{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC},
	{"getSelectedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"grabCompositionArea", "(Z)V", nullptr, 0},
	{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"isCompositionAreaVisible", "()Z", nullptr, 0},
	{"processInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, 0},
	{"releaseCompositionArea", "()V", nullptr, 0},
	{"setClientComponent", "(Ljava/awt/Component;)V", nullptr, 0},
	{"setCompositionAreaUndecorated", "(Z)V", nullptr, 0},
	{"setCompositionAreaVisible", "(Z)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositionAreaHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.CompositionAreaHandler",
	"java.lang.Object",
	"java.awt.event.InputMethodListener,java.awt.im.InputMethodRequests",
	_CompositionAreaHandler_FieldInfo_,
	_CompositionAreaHandler_MethodInfo_
};

$Object* allocate$CompositionAreaHandler($Class* clazz) {
	return $of($alloc(CompositionAreaHandler));
}

int32_t CompositionAreaHandler::hashCode() {
	 return this->$InputMethodListener::hashCode();
}

bool CompositionAreaHandler::equals(Object$* arg0) {
	 return this->$InputMethodListener::equals(arg0);
}

$Object* CompositionAreaHandler::clone() {
	 return this->$InputMethodListener::clone();
}

$String* CompositionAreaHandler::toString() {
	 return this->$InputMethodListener::toString();
}

void CompositionAreaHandler::finalize() {
	this->$InputMethodListener::finalize();
}

$CompositionArea* CompositionAreaHandler::compositionArea = nullptr;
$Object* CompositionAreaHandler::compositionAreaLock = nullptr;
CompositionAreaHandler* CompositionAreaHandler::compositionAreaOwner = nullptr;
$AttributedCharacterIterator$AttributeArray* CompositionAreaHandler::IM_ATTRIBUTES = nullptr;
$AttributedCharacterIterator* CompositionAreaHandler::EMPTY_TEXT = nullptr;

void CompositionAreaHandler::init$($InputMethodContext* context) {
	$set(this, caret, nullptr);
	$set(this, clientComponent, $new($WeakReference, nullptr));
	$set(this, inputMethodContext, context);
}

void CompositionAreaHandler::createCompositionArea() {
	$useLocalCurrentObjectStackCache();
	$synchronized(CompositionAreaHandler::compositionAreaLock) {
		$assignStatic(CompositionAreaHandler::compositionArea, $new($CompositionArea));
		if (CompositionAreaHandler::compositionAreaOwner != nullptr) {
			$nc(CompositionAreaHandler::compositionArea)->setHandlerInfo(CompositionAreaHandler::compositionAreaOwner, this->inputMethodContext);
		}
		$var($Component, client, $cast($Component, $nc(this->clientComponent)->get()));
		if (client != nullptr) {
			$var($InputMethodRequests, req, client->getInputMethodRequests());
			if (req != nullptr && $nc(this->inputMethodContext)->useBelowTheSpotInput()) {
				setCompositionAreaUndecorated(true);
			}
		}
	}
}

void CompositionAreaHandler::setClientComponent($Component* clientComponent) {
	$set(this, clientComponent, $new($WeakReference, clientComponent));
}

void CompositionAreaHandler::grabCompositionArea(bool doUpdate) {
	$synchronized(CompositionAreaHandler::compositionAreaLock) {
		if (CompositionAreaHandler::compositionAreaOwner != this) {
			$assignStatic(CompositionAreaHandler::compositionAreaOwner, this);
			if (CompositionAreaHandler::compositionArea != nullptr) {
				$nc(CompositionAreaHandler::compositionArea)->setHandlerInfo(this, this->inputMethodContext);
			}
			if (doUpdate) {
				if ((this->composedText != nullptr) && (CompositionAreaHandler::compositionArea == nullptr)) {
					createCompositionArea();
				}
				if (CompositionAreaHandler::compositionArea != nullptr) {
					$nc(CompositionAreaHandler::compositionArea)->setText(this->composedText, this->caret);
				}
			}
		}
	}
}

void CompositionAreaHandler::releaseCompositionArea() {
	$synchronized(CompositionAreaHandler::compositionAreaLock) {
		if (CompositionAreaHandler::compositionAreaOwner == this) {
			$assignStatic(CompositionAreaHandler::compositionAreaOwner, nullptr);
			if (CompositionAreaHandler::compositionArea != nullptr) {
				$nc(CompositionAreaHandler::compositionArea)->setHandlerInfo(nullptr, nullptr);
				$nc(CompositionAreaHandler::compositionArea)->setText(nullptr, nullptr);
			}
		}
	}
}

void CompositionAreaHandler::closeCompositionArea() {
	$init(CompositionAreaHandler);
	if (CompositionAreaHandler::compositionArea != nullptr) {
		$synchronized(CompositionAreaHandler::compositionAreaLock) {
			$assignStatic(CompositionAreaHandler::compositionAreaOwner, nullptr);
			$nc(CompositionAreaHandler::compositionArea)->setHandlerInfo(nullptr, nullptr);
			$nc(CompositionAreaHandler::compositionArea)->setText(nullptr, nullptr);
		}
	}
}

bool CompositionAreaHandler::isCompositionAreaVisible() {
	if (CompositionAreaHandler::compositionArea != nullptr) {
		return $nc(CompositionAreaHandler::compositionArea)->isCompositionAreaVisible();
	}
	return false;
}

void CompositionAreaHandler::setCompositionAreaVisible(bool visible) {
	if (CompositionAreaHandler::compositionArea != nullptr) {
		$nc(CompositionAreaHandler::compositionArea)->setCompositionAreaVisible(visible);
	}
}

void CompositionAreaHandler::processInputMethodEvent($InputMethodEvent* event) {
	if ($nc(event)->getID() == $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED) {
		inputMethodTextChanged(event);
	} else {
		caretPositionChanged(event);
	}
}

void CompositionAreaHandler::setCompositionAreaUndecorated(bool undecorated) {
	if (CompositionAreaHandler::compositionArea != nullptr) {
		$nc(CompositionAreaHandler::compositionArea)->setCompositionAreaUndecorated(undecorated);
	}
}

void CompositionAreaHandler::inputMethodTextChanged($InputMethodEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($AttributedCharacterIterator, text, $nc(event)->getText());
	int32_t committedCharacterCount = event->getCommittedCharacterCount();
	$set(this, composedText, nullptr);
	$set(this, caret, nullptr);
	bool var$0 = text != nullptr;
	if (var$0) {
		int32_t var$1 = committedCharacterCount;
		int32_t var$3 = text->getEndIndex();
		int32_t var$2 = var$3 - text->getBeginIndex();
		var$0 = var$1 < var$2;
	}
	if (var$0) {
		if (CompositionAreaHandler::compositionArea == nullptr) {
			createCompositionArea();
		}
		$var($AttributedString, composedTextString, nullptr);
		$var($AttributedCharacterIterator, var$4, text);
		int32_t var$5 = text->getBeginIndex() + committedCharacterCount;
		$assign(composedTextString, $new($AttributedString, var$4, var$5, text->getEndIndex(), CompositionAreaHandler::IM_ATTRIBUTES));
		$init($TextAttribute);
		composedTextString->addAttribute($TextAttribute::FONT, $($nc(CompositionAreaHandler::compositionArea)->getFont()));
		$set(this, composedText, composedTextString->getIterator());
		$set(this, caret, event->getCaret());
	}
	if (CompositionAreaHandler::compositionArea != nullptr) {
		$nc(CompositionAreaHandler::compositionArea)->setText(this->composedText, this->caret);
	}
	if (committedCharacterCount > 0) {
		$nc(this->inputMethodContext)->dispatchCommittedText(($cast($Component, $(event->getSource()))), text, committedCharacterCount);
		if (isCompositionAreaVisible()) {
			$nc(CompositionAreaHandler::compositionArea)->updateWindowLocation();
		}
	}
	event->consume();
}

void CompositionAreaHandler::caretPositionChanged($InputMethodEvent* event) {
	if (CompositionAreaHandler::compositionArea != nullptr) {
		$nc(CompositionAreaHandler::compositionArea)->setCaret($($nc(event)->getCaret()));
	}
	$nc(event)->consume();
}

$InputMethodRequests* CompositionAreaHandler::getClientInputMethodRequests() {
	$var($Component, client, $cast($Component, $nc(this->clientComponent)->get()));
	if (client != nullptr) {
		return client->getInputMethodRequests();
	}
	return nullptr;
}

$Rectangle* CompositionAreaHandler::getTextLocation($TextHitInfo* offset) {
	$synchronized(CompositionAreaHandler::compositionAreaLock) {
		if (CompositionAreaHandler::compositionAreaOwner == this && isCompositionAreaVisible()) {
			return $nc(CompositionAreaHandler::compositionArea)->getTextLocation(offset);
		} else if (this->composedText != nullptr) {
			return $new($Rectangle, 0, 0, 0, 10);
		} else {
			$var($InputMethodRequests, requests, getClientInputMethodRequests());
			if (requests != nullptr) {
				return requests->getTextLocation(offset);
			} else {
				return $new($Rectangle, 0, 0, 0, 10);
			}
		}
	}
}

$TextHitInfo* CompositionAreaHandler::getLocationOffset(int32_t x, int32_t y) {
	$synchronized(CompositionAreaHandler::compositionAreaLock) {
		if (CompositionAreaHandler::compositionAreaOwner == this && isCompositionAreaVisible()) {
			return $nc(CompositionAreaHandler::compositionArea)->getLocationOffset(x, y);
		} else {
			return nullptr;
		}
	}
}

int32_t CompositionAreaHandler::getInsertPositionOffset() {
	$var($InputMethodRequests, req, getClientInputMethodRequests());
	if (req != nullptr) {
		return req->getInsertPositionOffset();
	}
	return 0;
}

$AttributedCharacterIterator* CompositionAreaHandler::getCommittedText(int32_t beginIndex, int32_t endIndex, $AttributedCharacterIterator$AttributeArray* attributes) {
	$var($InputMethodRequests, req, getClientInputMethodRequests());
	if (req != nullptr) {
		return req->getCommittedText(beginIndex, endIndex, attributes);
	}
	return CompositionAreaHandler::EMPTY_TEXT;
}

int32_t CompositionAreaHandler::getCommittedTextLength() {
	$var($InputMethodRequests, req, getClientInputMethodRequests());
	if (req != nullptr) {
		return req->getCommittedTextLength();
	}
	return 0;
}

$AttributedCharacterIterator* CompositionAreaHandler::cancelLatestCommittedText($AttributedCharacterIterator$AttributeArray* attributes) {
	$var($InputMethodRequests, req, getClientInputMethodRequests());
	if (req != nullptr) {
		return req->cancelLatestCommittedText(attributes);
	}
	return nullptr;
}

$AttributedCharacterIterator* CompositionAreaHandler::getSelectedText($AttributedCharacterIterator$AttributeArray* attributes) {
	$var($InputMethodRequests, req, getClientInputMethodRequests());
	if (req != nullptr) {
		return req->getSelectedText(attributes);
	}
	return CompositionAreaHandler::EMPTY_TEXT;
}

void clinit$CompositionAreaHandler($Class* class$) {
	$assignStatic(CompositionAreaHandler::compositionAreaLock, $new($Object));
	$init($TextAttribute);
	$assignStatic(CompositionAreaHandler::IM_ATTRIBUTES, $new($AttributedCharacterIterator$AttributeArray, {static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::INPUT_METHOD_HIGHLIGHT)}));
	$assignStatic(CompositionAreaHandler::EMPTY_TEXT, ($$new($AttributedString, ""_s))->getIterator());
}

CompositionAreaHandler::CompositionAreaHandler() {
}

$Class* CompositionAreaHandler::load$($String* name, bool initialize) {
	$loadClass(CompositionAreaHandler, name, initialize, &_CompositionAreaHandler_ClassInfo_, clinit$CompositionAreaHandler, allocate$CompositionAreaHandler);
	return class$;
}

$Class* CompositionAreaHandler::class$ = nullptr;

		} // im
	} // awt
} // sun