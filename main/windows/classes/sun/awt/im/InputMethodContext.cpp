#include <sun/awt/im/InputMethodContext.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/CharacterIterator.h>
#include <javax/swing/JFrame.h>
#include <sun/awt/InputMethodSupport.h>
#include <sun/awt/im/CompositionAreaHandler.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodJFrame.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DONE
#undef INPUT_METHOD_TEXT_CHANGED
#undef KEY_TYPED
#undef VK_UNDEFINED

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $CharacterIterator = ::java::text::CharacterIterator;
using $EventObject = ::java::util::EventObject;
using $JFrame = ::javax::swing::JFrame;
using $InputMethodSupport = ::sun::awt::InputMethodSupport;
using $CompositionAreaHandler = ::sun::awt::im::CompositionAreaHandler;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodJFrame = ::sun::awt::im::InputMethodJFrame;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputMethodContext_FieldInfo_[] = {
	{"dispatchingCommittedText", "Z", nullptr, $PRIVATE, $field(InputMethodContext, dispatchingCommittedText)},
	{"compositionAreaHandler", "Lsun/awt/im/CompositionAreaHandler;", nullptr, $PRIVATE, $field(InputMethodContext, compositionAreaHandler)},
	{"compositionAreaHandlerLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(InputMethodContext, compositionAreaHandlerLock)},
	{"belowTheSpotInputRequested", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InputMethodContext, belowTheSpotInputRequested)},
	{"inputMethodSupportsBelowTheSpot", "Z", nullptr, $PRIVATE, $field(InputMethodContext, inputMethodSupportsBelowTheSpot)},
	{}
};

$MethodInfo _InputMethodContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodContext::*)()>(&InputMethodContext::init$))},
	{"cancelLatestCommittedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"createInputMethodJFrame", "(Ljava/lang/String;Z)Ljavax/swing/JFrame;", nullptr, $PUBLIC},
	{"createInputMethodWindow", "(Ljava/lang/String;Z)Ljava/awt/Window;", nullptr, $PUBLIC},
	{"createInputMethodWindow", "(Ljava/lang/String;Lsun/awt/im/InputContext;Z)Ljava/awt/Window;", nullptr, $STATIC, $method(static_cast<$Window*(*)($String*,$InputContext*,bool)>(&InputMethodContext::createInputMethodWindow))},
	{"dispatchCommittedText", "(Ljava/awt/Component;Ljava/text/AttributedCharacterIterator;I)V", nullptr, $SYNCHRONIZED},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"dispatchInputMethodEvent", "(ILjava/text/AttributedCharacterIterator;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)V", nullptr, $PUBLIC},
	{"enableClientWindowNotification", "(Ljava/awt/im/spi/InputMethod;Z)V", nullptr, $PUBLIC},
	{"getCommittedText", "(II[Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getCommittedTextLength", "()I", nullptr, $PUBLIC},
	{"getCompositionAreaHandler", "(Z)Lsun/awt/im/CompositionAreaHandler;", nullptr, $PRIVATE, $method(static_cast<$CompositionAreaHandler*(InputMethodContext::*)(bool)>(&InputMethodContext::getCompositionAreaHandler))},
	{"getInsertPositionOffset", "()I", nullptr, $PUBLIC},
	{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC},
	{"getReq", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PRIVATE, $method(static_cast<$InputMethodRequests*(InputMethodContext::*)()>(&InputMethodContext::getReq))},
	{"getSelectedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"grabCompositionArea", "(Z)V", nullptr, 0},
	{"haveActiveClient", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(InputMethodContext::*)()>(&InputMethodContext::haveActiveClient))},
	{"isCompositionAreaVisible", "()Z", nullptr, 0},
	{"releaseCompositionArea", "()V", nullptr, 0},
	{"setCompositionAreaUndecorated", "(Z)V", nullptr, 0},
	{"setCompositionAreaVisible", "(Z)V", nullptr, 0},
	{"setInputMethodSupportsBelowTheSpot", "(Z)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useBelowTheSpotInput", "()Z", nullptr, 0},
	{}
};

$ClassInfo _InputMethodContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.im.InputMethodContext",
	"sun.awt.im.InputContext",
	"java.awt.im.spi.InputMethodContext",
	_InputMethodContext_FieldInfo_,
	_InputMethodContext_MethodInfo_
};

$Object* allocate$InputMethodContext($Class* clazz) {
	return $of($alloc(InputMethodContext));
}

int32_t InputMethodContext::hashCode() {
	 return this->$InputContext::hashCode();
}

bool InputMethodContext::equals(Object$* arg0) {
	 return this->$InputContext::equals(arg0);
}

$Object* InputMethodContext::clone() {
	 return this->$InputContext::clone();
}

$String* InputMethodContext::toString() {
	 return this->$InputContext::toString();
}

void InputMethodContext::finalize() {
	this->$InputContext::finalize();
}

bool InputMethodContext::belowTheSpotInputRequested = false;

void InputMethodContext::init$() {
	$InputContext::init$();
	$set(this, compositionAreaHandlerLock, $new($Object));
}

void InputMethodContext::setInputMethodSupportsBelowTheSpot(bool supported) {
	this->inputMethodSupportsBelowTheSpot = supported;
}

bool InputMethodContext::useBelowTheSpotInput() {
	return InputMethodContext::belowTheSpotInputRequested && this->inputMethodSupportsBelowTheSpot;
}

bool InputMethodContext::haveActiveClient() {
	$var($Component, client, getClientComponent());
	return client != nullptr && client->getInputMethodRequests() != nullptr;
}

void InputMethodContext::dispatchInputMethodEvent(int32_t id, $AttributedCharacterIterator* text, int32_t committedCharacterCount, $TextHitInfo* caret, $TextHitInfo* visiblePosition) {
	$useLocalCurrentObjectStackCache();
	$var($Component, source, nullptr);
	$assign(source, getClientComponent());
	if (source != nullptr) {
		$var($InputMethodEvent, event, $new($InputMethodEvent, source, id, text, committedCharacterCount, caret, visiblePosition));
		bool var$0 = haveActiveClient();
		if (var$0 && !useBelowTheSpotInput()) {
			source->dispatchEvent(event);
		} else {
			$nc($(getCompositionAreaHandler(true)))->processInputMethodEvent(event);
		}
	}
}

void InputMethodContext::dispatchCommittedText($Component* client, $AttributedCharacterIterator* text, int32_t committedCharacterCount) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		bool var$0 = committedCharacterCount == 0;
		if (!var$0) {
			int32_t var$1 = $nc(text)->getEndIndex();
			var$0 = var$1 <= text->getBeginIndex();
		}
		if (var$0) {
			return;
		}
		int64_t time = $System::currentTimeMillis();
		this->dispatchingCommittedText = true;
		{
			$var($Throwable, var$2, nullptr);
			try {
				$var($InputMethodRequests, req, $nc(client)->getInputMethodRequests());
				if (req != nullptr) {
					int32_t beginIndex = $nc(text)->getBeginIndex();
					$var($AttributedCharacterIterator, toBeCommitted, ($$new($AttributedString, text, beginIndex, beginIndex + committedCharacterCount))->getIterator());
					$var($InputMethodEvent, inputEvent, $new($InputMethodEvent, client, $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, toBeCommitted, committedCharacterCount, nullptr, nullptr));
					client->dispatchEvent(inputEvent);
				} else {
					char16_t keyChar = $nc(text)->first();
					while (committedCharacterCount-- > 0 && keyChar != $CharacterIterator::DONE) {
						$var($KeyEvent, keyEvent, $new($KeyEvent, client, $KeyEvent::KEY_TYPED, time, 0, $KeyEvent::VK_UNDEFINED, keyChar));
						client->dispatchEvent(keyEvent);
						keyChar = text->next();
					}
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				this->dispatchingCommittedText = false;
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void InputMethodContext::dispatchEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($InputMethodEvent, event)) {
		bool var$0 = $nc(($cast($Component, $($nc(event)->getSource()))))->getInputMethodRequests() == nullptr;
		if (var$0 || (useBelowTheSpotInput() && !this->dispatchingCommittedText)) {
			$nc($(getCompositionAreaHandler(true)))->processInputMethodEvent($cast($InputMethodEvent, event));
		}
	} else if (!this->dispatchingCommittedText) {
		$InputContext::dispatchEvent(event);
	}
}

$CompositionAreaHandler* InputMethodContext::getCompositionAreaHandler(bool grab) {
	$synchronized(this->compositionAreaHandlerLock) {
		if (this->compositionAreaHandler == nullptr) {
			$set(this, compositionAreaHandler, $new($CompositionAreaHandler, this));
		}
		$nc(this->compositionAreaHandler)->setClientComponent($(getClientComponent()));
		if (grab) {
			$nc(this->compositionAreaHandler)->grabCompositionArea(false);
		}
		return this->compositionAreaHandler;
	}
}

void InputMethodContext::grabCompositionArea(bool doUpdate) {
	$synchronized(this->compositionAreaHandlerLock) {
		if (this->compositionAreaHandler != nullptr) {
			$nc(this->compositionAreaHandler)->grabCompositionArea(doUpdate);
		} else {
			$CompositionAreaHandler::closeCompositionArea();
		}
	}
}

void InputMethodContext::releaseCompositionArea() {
	$synchronized(this->compositionAreaHandlerLock) {
		if (this->compositionAreaHandler != nullptr) {
			$nc(this->compositionAreaHandler)->releaseCompositionArea();
		}
	}
}

bool InputMethodContext::isCompositionAreaVisible() {
	if (this->compositionAreaHandler != nullptr) {
		return $nc(this->compositionAreaHandler)->isCompositionAreaVisible();
	}
	return false;
}

void InputMethodContext::setCompositionAreaVisible(bool visible) {
	if (this->compositionAreaHandler != nullptr) {
		$nc(this->compositionAreaHandler)->setCompositionAreaVisible(visible);
	}
}

$Rectangle* InputMethodContext::getTextLocation($TextHitInfo* offset) {
	return $nc($(getReq()))->getTextLocation(offset);
}

$TextHitInfo* InputMethodContext::getLocationOffset(int32_t x, int32_t y) {
	return $nc($(getReq()))->getLocationOffset(x, y);
}

int32_t InputMethodContext::getInsertPositionOffset() {
	return $nc($(getReq()))->getInsertPositionOffset();
}

$AttributedCharacterIterator* InputMethodContext::getCommittedText(int32_t beginIndex, int32_t endIndex, $AttributedCharacterIterator$AttributeArray* attributes) {
	return $nc($(getReq()))->getCommittedText(beginIndex, endIndex, attributes);
}

int32_t InputMethodContext::getCommittedTextLength() {
	return $nc($(getReq()))->getCommittedTextLength();
}

$AttributedCharacterIterator* InputMethodContext::cancelLatestCommittedText($AttributedCharacterIterator$AttributeArray* attributes) {
	return $nc($(getReq()))->cancelLatestCommittedText(attributes);
}

$AttributedCharacterIterator* InputMethodContext::getSelectedText($AttributedCharacterIterator$AttributeArray* attributes) {
	return $nc($(getReq()))->getSelectedText(attributes);
}

$InputMethodRequests* InputMethodContext::getReq() {
	bool var$0 = haveActiveClient();
	if (var$0 && !useBelowTheSpotInput()) {
		return $nc($(getClientComponent()))->getInputMethodRequests();
	} else {
		return getCompositionAreaHandler(false);
	}
}

$Window* InputMethodContext::createInputMethodWindow($String* title, bool attachToInputContext) {
	$var($InputContext, context, attachToInputContext ? static_cast<$InputContext*>(this) : ($InputContext*)nullptr);
	return createInputMethodWindow(title, context, false);
}

$JFrame* InputMethodContext::createInputMethodJFrame($String* title, bool attachToInputContext) {
	$var($InputContext, context, attachToInputContext ? static_cast<$InputContext*>(this) : ($InputContext*)nullptr);
	return $cast($JFrame, createInputMethodWindow(title, context, true));
}

$Window* InputMethodContext::createInputMethodWindow($String* title, $InputContext* context, bool isSwing) {
	$init(InputMethodContext);
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (isSwing) {
		return $new($InputMethodJFrame, title, context);
	} else {
		$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
		if ($instanceOf($InputMethodSupport, toolkit)) {
			return $nc(($cast($InputMethodSupport, toolkit)))->createInputMethodWindow(title, context);
		}
	}
	$throwNew($InternalError, "Input methods must be supported"_s);
}

void InputMethodContext::enableClientWindowNotification($InputMethod* inputMethod, bool enable) {
	$InputContext::enableClientWindowNotification(inputMethod, enable);
}

void InputMethodContext::setCompositionAreaUndecorated(bool undecorated) {
	if (this->compositionAreaHandler != nullptr) {
		$nc(this->compositionAreaHandler)->setCompositionAreaUndecorated(undecorated);
	}
}

void clinit$InputMethodContext($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($String, inputStyle, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.awt.im.style"_s, nullptr)))));
		if (inputStyle == nullptr) {
			$assign(inputStyle, $Toolkit::getProperty("java.awt.im.style"_s, nullptr));
		}
		InputMethodContext::belowTheSpotInputRequested = "below-the-spot"_s->equals(inputStyle);
	}
}

InputMethodContext::InputMethodContext() {
}

$Class* InputMethodContext::load$($String* name, bool initialize) {
	$loadClass(InputMethodContext, name, initialize, &_InputMethodContext_ClassInfo_, clinit$InputMethodContext, allocate$InputMethodContext);
	return class$;
}

$Class* InputMethodContext::class$ = nullptr;

		} // im
	} // awt
} // sun