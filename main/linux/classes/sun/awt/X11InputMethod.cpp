#include <sun/awt/X11InputMethod.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <sun/awt/X11InputMethodBase$IntBuffer.h>
#include <sun/awt/X11InputMethodBase.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef INITIAL_SIZE
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_TEXT_CHANGED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $X11InputMethodBase = ::sun::awt::X11InputMethodBase;
using $X11InputMethodBase$IntBuffer = ::sun::awt::X11InputMethodBase$IntBuffer;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$MethodInfo _X11InputMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11InputMethod::*)()>(&X11InputMethod::init$)), "java.awt.AWTException"},
	{"activate", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"deactivate", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dispatchComposedText", "(Ljava/lang/String;[IIIIJ)V", nullptr, 0},
	{"disposeImpl", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"hideWindows", "()V", nullptr, $PUBLIC},
	{"resetCompositionState", "()V", nullptr, $PROTECTED},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _X11InputMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11InputMethod",
	"sun.awt.X11InputMethodBase",
	nullptr,
	nullptr,
	_X11InputMethod_MethodInfo_
};

$Object* allocate$X11InputMethod($Class* clazz) {
	return $of($alloc(X11InputMethod));
}

void X11InputMethod::init$() {
	$X11InputMethodBase::init$();
}

void X11InputMethod::resetCompositionState() {
	if (this->compositionEnableSupported && haveActiveClient()) {
		try {
			setCompositionEnabled(this->savedCompositionState);
		} catch ($UnsupportedOperationException& e) {
			this->compositionEnableSupported = false;
		}
	}
}

void X11InputMethod::activate() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$set(this, clientComponentWindow, getClientComponentWindow());
		if (this->clientComponentWindow == nullptr) {
			return;
		}
		if (this->lastXICFocussedComponent != nullptr) {
			$init($X11InputMethodBase);
			$init($PlatformLogger$Level);
			if ($nc($X11InputMethodBase::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc($X11InputMethodBase::log)->fine("XICFocused {0}, AWTFocused {1}"_s, $$new($ObjectArray, {
					$of(this->lastXICFocussedComponent),
					$of(this->awtFocussedComponent)
				}));
			}
		}
		if (this->pData == 0) {
			if (!createXIC()) {
				return;
			}
			this->disposed = false;
		}
		resetXICifneeded();
		$var($ComponentPeer, lastXICFocussedComponentPeer, nullptr);
		$var($ComponentPeer, awtFocussedComponentPeer, getPeer(this->awtFocussedComponent));
		if (this->lastXICFocussedComponent != nullptr) {
			$assign(lastXICFocussedComponentPeer, getPeer(this->lastXICFocussedComponent));
		}
		if (this->isLastTemporary || lastXICFocussedComponentPeer != awtFocussedComponentPeer || this->isLastXICActive != haveActiveClient()) {
			if (lastXICFocussedComponentPeer != nullptr) {
				setXICFocus(lastXICFocussedComponentPeer, false, this->isLastXICActive);
			}
			if (awtFocussedComponentPeer != nullptr) {
				setXICFocus(awtFocussedComponentPeer, true, haveActiveClient());
			}
			$set(this, lastXICFocussedComponent, this->awtFocussedComponent);
			this->isLastXICActive = haveActiveClient();
		}
		resetCompositionState();
		this->isActive = true;
	}
}

void X11InputMethod::deactivate(bool isTemporary) {
	$synchronized(this) {
		bool isAc = haveActiveClient();
		this->savedCompositionState = getCompositionState();
		if (isTemporary) {
			turnoffStatusWindow();
		}
		$set(this, lastXICFocussedComponent, this->awtFocussedComponent);
		this->isLastXICActive = isAc;
		this->isLastTemporary = isTemporary;
		this->isActive = false;
	}
}

void X11InputMethod::hideWindows() {
}

void X11InputMethod::dispatchComposedText($String* chgText, $ints* chgStyles, int32_t chgOffset, int32_t chgLength, int32_t caretPosition, int64_t when) {
	$useLocalCurrentObjectStackCache();
	if (this->disposed) {
		return;
	}
	if (chgText == nullptr && chgStyles == nullptr && chgOffset == 0 && chgLength == 0 && caretPosition == 0 && this->composedText == nullptr && this->committedText == nullptr) {
		return;
	}
	if (this->composedText == nullptr) {
		$set(this, composedText, $new($StringBuffer, $X11InputMethodBase::INITIAL_SIZE));
		$set(this, rawFeedbacks, $new($X11InputMethodBase$IntBuffer, this, $X11InputMethodBase::INITIAL_SIZE));
	}
	if (chgLength > 0) {
		if (chgText == nullptr && chgStyles != nullptr) {
			$nc(this->rawFeedbacks)->replace(chgOffset, chgStyles);
		} else if (chgLength == $nc(this->composedText)->length()) {
			$set(this, composedText, $new($StringBuffer, $X11InputMethodBase::INITIAL_SIZE));
			$set(this, rawFeedbacks, $new($X11InputMethodBase$IntBuffer, this, $X11InputMethodBase::INITIAL_SIZE));
		} else if ($nc(this->composedText)->length() > 0) {
			if (chgOffset + chgLength < $nc(this->composedText)->length()) {
				$var($String, text, nullptr);
				$assign(text, $nc($($nc(this->composedText)->toString()))->substring(chgOffset + chgLength, $nc(this->composedText)->length()));
				$nc(this->composedText)->setLength(chgOffset);
				$nc(this->composedText)->append(text);
			} else {
				$nc(this->composedText)->setLength(chgOffset);
			}
			$nc(this->rawFeedbacks)->remove(chgOffset, chgLength);
		}
	}
	if (chgText != nullptr) {
		$nc(this->composedText)->insert(chgOffset, chgText);
		if (chgStyles != nullptr) {
			$nc(this->rawFeedbacks)->insert(chgOffset, chgStyles);
		}
	}
	if ($nc(this->composedText)->length() == 0) {
		$set(this, composedText, nullptr);
		$set(this, rawFeedbacks, nullptr);
		if (this->committedText != nullptr) {
			dispatchCommittedText(this->committedText, when);
			$set(this, committedText, nullptr);
			return;
		}
		postInputMethodEvent($InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, nullptr, 0, nullptr, nullptr, when);
		return;
	}
	int32_t composedOffset = 0;
	$var($AttributedString, inputText, nullptr);
	if (this->committedText != nullptr) {
		composedOffset = $nc(this->committedText)->length();
		$assign(inputText, $new($AttributedString, $$str({this->committedText, this->composedText})));
		$set(this, committedText, nullptr);
	} else {
		composedOffset = 0;
		$assign(inputText, $new($AttributedString, $($nc(this->composedText)->toString())));
	}
	int32_t currentFeedback = 0;
	int32_t nextFeedback = 0;
	int32_t startOffset = 0;
	int32_t currentOffset = 0;
	int32_t visiblePosition = 0;
	$var($TextHitInfo, visiblePositionInfo, nullptr);
	$nc(this->rawFeedbacks)->rewind();
	currentFeedback = $nc(this->rawFeedbacks)->getNext();
	$nc(this->rawFeedbacks)->unget();
	while ((nextFeedback = $nc(this->rawFeedbacks)->getNext()) != -1) {
		if (visiblePosition == 0) {
			visiblePosition = (int32_t)(nextFeedback & (uint32_t)$X11InputMethodBase::XIMVisibleMask);
			if (visiblePosition != 0) {
				int32_t index = $nc(this->rawFeedbacks)->getOffset() - 1;
				if (visiblePosition == $X11InputMethodBase::XIMVisibleToBackward) {
					$assign(visiblePositionInfo, $TextHitInfo::leading(index));
				} else {
					$assign(visiblePositionInfo, $TextHitInfo::trailing(index));
				}
			}
		}
		nextFeedback &= (uint32_t)~$X11InputMethodBase::XIMVisibleMask;
		if (currentFeedback != nextFeedback) {
			$nc(this->rawFeedbacks)->unget();
			currentOffset = $nc(this->rawFeedbacks)->getOffset();
			$init($TextAttribute);
			$nc(inputText)->addAttribute($TextAttribute::INPUT_METHOD_HIGHLIGHT, $(convertVisualFeedbackToHighlight(currentFeedback)), composedOffset + startOffset, composedOffset + currentOffset);
			startOffset = currentOffset;
			currentFeedback = nextFeedback;
		}
	}
	currentOffset = $nc(this->rawFeedbacks)->getOffset();
	if (currentOffset >= 0) {
		$init($TextAttribute);
		$nc(inputText)->addAttribute($TextAttribute::INPUT_METHOD_HIGHLIGHT, $(convertVisualFeedbackToHighlight(currentFeedback)), composedOffset + startOffset, composedOffset + currentOffset);
	}
	$var($AttributedCharacterIterator, var$0, $nc(inputText)->getIterator());
	int32_t var$1 = composedOffset;
	postInputMethodEvent($InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, var$0, var$1, $($TextHitInfo::leading(caretPosition)), visiblePositionInfo, when);
}

void X11InputMethod::disposeImpl() {
	$synchronized(this) {
		disposeXIC();
		awtLock();
		$set(this, composedText, nullptr);
		$set(this, committedText, nullptr);
		$set(this, rawFeedbacks, nullptr);
		awtUnlock();
		$set(this, awtFocussedComponent, nullptr);
		$set(this, lastXICFocussedComponent, nullptr);
	}
}

void X11InputMethod::setCompositionEnabled(bool enable) {
	if (setCompositionEnabledNative(enable)) {
		this->savedCompositionState = enable;
	}
}

X11InputMethod::X11InputMethod() {
}

$Class* X11InputMethod::load$($String* name, bool initialize) {
	$loadClass(X11InputMethod, name, initialize, &_X11InputMethod_ClassInfo_, allocate$X11InputMethod);
	return class$;
}

$Class* X11InputMethod::class$ = nullptr;

	} // awt
} // sun