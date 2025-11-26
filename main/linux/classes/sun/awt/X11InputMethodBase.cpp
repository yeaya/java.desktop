#include <sun/awt/X11InputMethodBase.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Character$Subset.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11InputMethodBase$IntBuffer.h>
#include <sun/awt/X11InputMethodDescriptor.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CONVERTED_TEXT
#undef INITIAL_SIZE
#undef INPUT_METHOD_TEXT_CHANGED
#undef INPUT_METHOD_UNDERLINE
#undef JAPAN
#undef JAPANESE
#undef KOREA
#undef KOREAN
#undef RAW_TEXT
#undef SELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef SELECTED_RAW_TEXT_HIGHLIGHT
#undef SWAP_COLORS
#undef SWAP_COLORS_ON
#undef UNDERLINE_LOW_ONE_PIXEL
#undef UNSELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef WEIGHT
#undef WEIGHT_BOLD

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $MapArray = $Array<::java::util::Map>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Window = ::java::awt::Window;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $X11InputMethodBase$IntBuffer = ::sun::awt::X11InputMethodBase$IntBuffer;
using $X11InputMethodDescriptor = ::sun::awt::X11InputMethodDescriptor;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {

$FieldInfo _X11InputMethodBase_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(X11InputMethodBase, log)},
	{"XIMReverse", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMReverse)},
	{"XIMUnderline", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMUnderline)},
	{"XIMHighlight", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMHighlight)},
	{"XIMPrimary", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMPrimary)},
	{"XIMSecondary", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMSecondary)},
	{"XIMTertiary", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMTertiary)},
	{"XIMVisibleToForward", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMVisibleToForward)},
	{"XIMVisibleToBackward", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMVisibleToBackward)},
	{"XIMVisibleCenter", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMVisibleCenter)},
	{"XIMVisibleMask", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(X11InputMethodBase, XIMVisibleMask)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(X11InputMethodBase, locale)},
	{"isXIMOpened", "Z", nullptr, $PRIVATE | $STATIC, $staticField(X11InputMethodBase, isXIMOpened)},
	{"clientComponentWindow", "Ljava/awt/Container;", nullptr, $PROTECTED, $field(X11InputMethodBase, clientComponentWindow)},
	{"awtFocussedComponent", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(X11InputMethodBase, awtFocussedComponent)},
	{"lastXICFocussedComponent", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(X11InputMethodBase, lastXICFocussedComponent)},
	{"isLastXICActive", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, isLastXICActive)},
	{"isLastTemporary", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, isLastTemporary)},
	{"isActive", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, isActive)},
	{"highlightStyles", "[Ljava/util/Map;", "[Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PRIVATE | $STATIC, $staticField(X11InputMethodBase, highlightStyles)},
	{"disposed", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, disposed)},
	{"needResetXIC", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, needResetXIC)},
	{"needResetXICClient", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;", $PRIVATE, $field(X11InputMethodBase, needResetXICClient)},
	{"compositionEnableSupported", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, compositionEnableSupported)},
	{"savedCompositionState", "Z", nullptr, $PROTECTED, $field(X11InputMethodBase, savedCompositionState)},
	{"committedText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(X11InputMethodBase, committedText)},
	{"composedText", "Ljava/lang/StringBuffer;", nullptr, $PROTECTED, $field(X11InputMethodBase, composedText)},
	{"rawFeedbacks", "Lsun/awt/X11InputMethodBase$IntBuffer;", nullptr, $PROTECTED, $field(X11InputMethodBase, rawFeedbacks)},
	{"pData", "J", nullptr, $PROTECTED | $TRANSIENT, $field(X11InputMethodBase, pData)},
	{"INITIAL_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(X11InputMethodBase, INITIAL_SIZE)},
	{}
};

$MethodInfo _X11InputMethodBase_MethodInfo_[] = {
	{"activate", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"deactivate", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"hideWindows", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11InputMethodBase::*)()>(&X11InputMethodBase::init$)), "java.awt.AWTException"},
	{"awtLock", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"awtUnlock", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"convertVisualFeedbackToHighlight", "(I)Ljava/awt/im/InputMethodHighlight;", nullptr, $PROTECTED},
	{"createXIC", "()Z", nullptr, $PROTECTED | $ABSTRACT},
	{"disableInputMethod", "()V", nullptr, $PUBLIC},
	{"dispatchCommittedText", "(Ljava/lang/String;J)V", nullptr, 0},
	{"dispatchCommittedText", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(X11InputMethodBase::*)($String*)>(&X11InputMethodBase::dispatchCommittedText))},
	{"dispatchComposedText", "(Ljava/lang/String;[IIIIJ)V", nullptr, $ABSTRACT},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"disposeImpl", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"disposeXIC", "()V", nullptr, $PROTECTED | $NATIVE},
	{"endComposition", "()V", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"flushText", "()V", nullptr, 0},
	{"getClientComponentWindow", "()Ljava/awt/Window;", nullptr, $PROTECTED},
	{"getCompositionState", "()Z", nullptr, $PROTECTED},
	{"getControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getNativeInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParent", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PROTECTED | $ABSTRACT},
	{"getPeer", "(Ljava/awt/Component;)Ljava/awt/peer/ComponentPeer;", nullptr, $PROTECTED | $ABSTRACT},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&X11InputMethodBase::initIDs))},
	{"initXIM", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(X11InputMethodBase::*)()>(&X11InputMethodBase::initXIM))},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC},
	{"isCompositionEnabledNative", "()Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(X11InputMethodBase::*)()>(&X11InputMethodBase::isCompositionEnabledNative))},
	{"isDisposed", "()Z", nullptr, $PROTECTED},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($InputMethodHighlight*)>(&X11InputMethodBase::mapInputMethodHighlight))},
	{"openXIM", "()Z", nullptr, $PROTECTED | $ABSTRACT},
	{"postInputMethodEvent", "(ILjava/text/AttributedCharacterIterator;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;J)V", nullptr, $PROTECTED},
	{"postInputMethodEvent", "(ILjava/text/AttributedCharacterIterator;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(X11InputMethodBase::*)(int32_t,$AttributedCharacterIterator*,int32_t,$TextHitInfo*,$TextHitInfo*)>(&X11InputMethodBase::postInputMethodEvent))},
	{"removeNotify", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"resetCompositionState", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"resetXIC", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(X11InputMethodBase::*)()>(&X11InputMethodBase::resetXIC))},
	{"resetXICifneeded", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(X11InputMethodBase::*)()>(&X11InputMethodBase::resetXICifneeded))},
	{"setAWTFocussedComponent", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCompositionEnabledNative", "(Z)Z", nullptr, $PROTECTED | $NATIVE},
	{"setInputMethodContext", "(Ljava/awt/im/spi/InputMethodContext;)V", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"setXICFocus", "(Ljava/awt/peer/ComponentPeer;ZZ)V", nullptr, $PROTECTED | $ABSTRACT},
	{"stopListening", "()V", nullptr, $PROTECTED},
	{"turnoffStatusWindow", "()V", nullptr, $PROTECTED | $NATIVE},
	{}
};

#define _METHOD_INDEX_disposeXIC 15
#define _METHOD_INDEX_initIDs 26
#define _METHOD_INDEX_isCompositionEnabledNative 29
#define _METHOD_INDEX_resetXIC 37
#define _METHOD_INDEX_setCompositionEnabledNative 42
#define _METHOD_INDEX_turnoffStatusWindow 47

$InnerClassInfo _X11InputMethodBase_InnerClassesInfo_[] = {
	{"sun.awt.X11InputMethodBase$IntBuffer", "sun.awt.X11InputMethodBase", "IntBuffer", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _X11InputMethodBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11InputMethodBase",
	"sun.awt.im.InputMethodAdapter",
	nullptr,
	_X11InputMethodBase_FieldInfo_,
	_X11InputMethodBase_MethodInfo_,
	nullptr,
	nullptr,
	_X11InputMethodBase_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11InputMethodBase$IntBuffer"
};

$Object* allocate$X11InputMethodBase($Class* clazz) {
	return $of($alloc(X11InputMethodBase));
}

$PlatformLogger* X11InputMethodBase::log = nullptr;
bool X11InputMethodBase::isXIMOpened = false;
$MapArray* X11InputMethodBase::highlightStyles = nullptr;

void X11InputMethodBase::init$() {
	$InputMethodAdapter::init$();
	$set(this, clientComponentWindow, nullptr);
	$set(this, awtFocussedComponent, nullptr);
	$set(this, lastXICFocussedComponent, nullptr);
	this->isLastXICActive = false;
	this->isLastTemporary = false;
	this->isActive = false;
	this->disposed = false;
	this->needResetXIC = false;
	$set(this, needResetXICClient, $new($WeakReference, nullptr));
	this->compositionEnableSupported = true;
	this->savedCompositionState = false;
	$set(this, committedText, nullptr);
	$set(this, composedText, nullptr);
	this->pData = 0;
	$set(this, locale, $X11InputMethodDescriptor::getSupportedLocale());
	if (initXIM() == false) {
		$throwNew($AWTException, "Cannot open X Input Method"_s);
	}
}

void X11InputMethodBase::finalize() {
	dispose();
	$InputMethodAdapter::finalize();
}

bool X11InputMethodBase::initXIM() {
	$synchronized(this) {
		if (X11InputMethodBase::isXIMOpened == false) {
			X11InputMethodBase::isXIMOpened = openXIM();
		}
		return X11InputMethodBase::isXIMOpened;
	}
}

bool X11InputMethodBase::isDisposed() {
	return this->disposed;
}

void X11InputMethodBase::setInputMethodContext($InputMethodContext* context) {
}

bool X11InputMethodBase::setLocale($Locale* lang) {
	if ($nc(lang)->equals(this->locale)) {
		return true;
	}
	bool var$1 = $nc(this->locale)->equals($Locale::JAPAN);
	bool var$0 = var$1 && $nc(lang)->equals($Locale::JAPANESE);
	if (!var$0) {
		bool var$2 = $nc(this->locale)->equals($Locale::KOREA);
		var$0 = var$2 && $nc(lang)->equals($Locale::KOREAN);
	}
	if (var$0) {
		return true;
	}
	return false;
}

$Locale* X11InputMethodBase::getLocale() {
	return this->locale;
}

void X11InputMethodBase::setCharacterSubsets($Character$SubsetArray* subsets) {
}

void X11InputMethodBase::dispatchEvent($AWTEvent* e) {
}

void X11InputMethodBase::resetXICifneeded() {
	bool var$0 = this->needResetXIC && haveActiveClient();
	if (var$0) {
		var$0 = !$equals(getClientComponent(), $nc(this->needResetXICClient)->get());
	}
	if (var$0) {
		resetXIC();
		$set(this, lastXICFocussedComponent, nullptr);
		this->isLastXICActive = false;
		$nc(this->needResetXICClient)->clear();
		this->needResetXIC = false;
	}
}

bool X11InputMethodBase::getCompositionState() {
	bool compositionState = false;
	if (this->compositionEnableSupported) {
		try {
			compositionState = isCompositionEnabled();
		} catch ($UnsupportedOperationException& e) {
			this->compositionEnableSupported = false;
		}
	}
	return compositionState;
}

void X11InputMethodBase::disableInputMethod() {
	if (this->lastXICFocussedComponent != nullptr) {
		setXICFocus($(getPeer(this->lastXICFocussedComponent)), false, this->isLastXICActive);
		$set(this, lastXICFocussedComponent, nullptr);
		this->isLastXICActive = false;
		resetXIC();
		$nc(this->needResetXICClient)->clear();
		this->needResetXIC = false;
	}
}

$Map* X11InputMethodBase::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	$init(X11InputMethodBase);
	int32_t index = 0;
	int32_t state = $nc(highlight)->getState();
	if (state == $InputMethodHighlight::RAW_TEXT) {
		index = 0;
	} else if (state == $InputMethodHighlight::CONVERTED_TEXT) {
		index = 2;
	} else {
		return nullptr;
	}
	if (highlight->isSelected()) {
		index += 1;
	}
	return $nc(X11InputMethodBase::highlightStyles)->get(index);
}

void X11InputMethodBase::setAWTFocussedComponent($Component* component) {
	$useLocalCurrentObjectStackCache();
	if (component == nullptr) {
		return;
	}
	if (this->isActive) {
		bool ac = haveActiveClient();
		setXICFocus($(getPeer(this->awtFocussedComponent)), false, ac);
		setXICFocus($(getPeer(component)), true, ac);
	}
	$set(this, awtFocussedComponent, component);
}

void X11InputMethodBase::stopListening() {
	endComposition();
	disableInputMethod();
	if (this->needResetXIC) {
		resetXIC();
		$nc(this->needResetXICClient)->clear();
		this->needResetXIC = false;
	}
}

$Window* X11InputMethodBase::getClientComponentWindow() {
	$useLocalCurrentObjectStackCache();
	$var($Component, client, getClientComponent());
	$var($Container, container, nullptr);
	if ($instanceOf($Container, client)) {
		$assign(container, $cast($Container, client));
	} else {
		$assign(container, getParent(client));
	}
	while (container != nullptr && !($instanceOf($Window, container))) {
		$assign(container, getParent(container));
	}
	return $cast($Window, container);
}

void X11InputMethodBase::postInputMethodEvent(int32_t id, $AttributedCharacterIterator* text, int32_t committedCharacterCount, $TextHitInfo* caret, $TextHitInfo* visiblePosition, int64_t when) {
	$useLocalCurrentObjectStackCache();
	$var($Component, source, getClientComponent());
	if (source != nullptr) {
		$var($InputMethodEvent, event, $new($InputMethodEvent, source, id, when, text, committedCharacterCount, caret, visiblePosition));
		$SunToolkit::postEvent($($SunToolkit::targetToAppContext(source)), static_cast<$AWTEvent*>(event));
	}
}

void X11InputMethodBase::postInputMethodEvent(int32_t id, $AttributedCharacterIterator* text, int32_t committedCharacterCount, $TextHitInfo* caret, $TextHitInfo* visiblePosition) {
	postInputMethodEvent(id, text, committedCharacterCount, caret, visiblePosition, $EventQueue::getMostRecentEventTime());
}

void X11InputMethodBase::dispatchCommittedText($String* str, int64_t when) {
	$useLocalCurrentObjectStackCache();
	if (str == nullptr) {
		return;
	}
	if (this->composedText == nullptr) {
		$var($AttributedString, attrstr, $new($AttributedString, str));
		$var($AttributedCharacterIterator, var$0, attrstr->getIterator());
		postInputMethodEvent($InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, var$0, $nc(str)->length(), nullptr, nullptr, when);
	} else {
		$set(this, committedText, str);
	}
}

void X11InputMethodBase::dispatchCommittedText($String* str) {
	dispatchCommittedText(str, $EventQueue::getMostRecentEventTime());
}

void X11InputMethodBase::flushText() {
	$useLocalCurrentObjectStackCache();
	$var($String, flush, this->committedText != nullptr ? this->committedText : ""_s);
	if (this->composedText != nullptr) {
		$plusAssign(flush, $($nc(this->composedText)->toString()));
	}
	if (!$nc(flush)->isEmpty()) {
		$var($AttributedString, attrstr, $new($AttributedString, flush));
		$var($AttributedCharacterIterator, var$0, attrstr->getIterator());
		int32_t var$1 = flush->length();
		postInputMethodEvent($InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, var$0, var$1, nullptr, nullptr, $EventQueue::getMostRecentEventTime());
		$set(this, composedText, nullptr);
		$set(this, committedText, nullptr);
	}
}

void X11InputMethodBase::dispose() {
	bool call_disposeImpl = false;
	if (!this->disposed) {
		$synchronized(this) {
			if (!this->disposed) {
				this->disposed = (call_disposeImpl = true);
			}
		}
	}
	if (call_disposeImpl) {
		disposeImpl();
	}
}

$Object* X11InputMethodBase::getControlObject() {
	return $of(nullptr);
}

void X11InputMethodBase::removeNotify() {
	$synchronized(this) {
		dispose();
	}
}

bool X11InputMethodBase::isCompositionEnabled() {
	return isCompositionEnabledNative();
}

void X11InputMethodBase::endComposition() {
	$useLocalCurrentObjectStackCache();
	if (this->disposed) {
		return;
	}
	this->savedCompositionState = getCompositionState();
	bool active = haveActiveClient();
	if (active && this->composedText == nullptr && this->committedText == nullptr) {
		this->needResetXIC = true;
		$set(this, needResetXICClient, $new($WeakReference, $(getClientComponent())));
		return;
	}
	$var($String, text, resetXIC());
	if (active) {
		this->needResetXIC = false;
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, composedText, nullptr);
			postInputMethodEvent($InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, nullptr, 0, nullptr, nullptr);
			if (text != nullptr && text->length() > 0) {
				dispatchCommittedText(text);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (this->savedCompositionState) {
		resetCompositionState();
	}
}

$String* X11InputMethodBase::getNativeInputMethodInfo() {
	$useLocalCurrentObjectStackCache();
	$var($String, xmodifiers, $System::getenv("XMODIFIERS"_s));
	$var($String, imInfo, nullptr);
	if (xmodifiers != nullptr) {
		int32_t imIndex = xmodifiers->indexOf("@im="_s);
		if (imIndex != -1) {
			$assign(imInfo, xmodifiers->substring(imIndex + 4));
		}
	}
	return imInfo;
}

$InputMethodHighlight* X11InputMethodBase::convertVisualFeedbackToHighlight(int32_t feedback) {
	$var($InputMethodHighlight, highlight, nullptr);
	switch (feedback) {
	case X11InputMethodBase::XIMUnderline:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT);
			break;
		}
	case X11InputMethodBase::XIMReverse:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::SELECTED_CONVERTED_TEXT_HIGHLIGHT);
			break;
		}
	case X11InputMethodBase::XIMHighlight:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT);
			break;
		}
	case 0:
		{}
	case X11InputMethodBase::XIMPrimary:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT);
			break;
		}
	case X11InputMethodBase::XIMSecondary:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::SELECTED_CONVERTED_TEXT_HIGHLIGHT);
			break;
		}
	case X11InputMethodBase::XIMTertiary:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT);
			break;
		}
	default:
		{
			$init($InputMethodHighlight);
			$assign(highlight, $InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT);
			break;
		}
	}
	return highlight;
}

void X11InputMethodBase::initIDs() {
	$init(X11InputMethodBase);
	$prepareNativeStatic(X11InputMethodBase, initIDs, void);
	$invokeNativeStatic(X11InputMethodBase, initIDs);
	$finishNativeStatic();
}

void X11InputMethodBase::turnoffStatusWindow() {
	$prepareNative(X11InputMethodBase, turnoffStatusWindow, void);
	$invokeNative(X11InputMethodBase, turnoffStatusWindow);
	$finishNative();
}

void X11InputMethodBase::disposeXIC() {
	$prepareNative(X11InputMethodBase, disposeXIC, void);
	$invokeNative(X11InputMethodBase, disposeXIC);
	$finishNative();
}

$String* X11InputMethodBase::resetXIC() {
	$var($String, $ret, nullptr);
	$prepareNative(X11InputMethodBase, resetXIC, $String*);
	$assign($ret, $invokeNative(X11InputMethodBase, resetXIC));
	$finishNative();
	return $ret;
}

bool X11InputMethodBase::setCompositionEnabledNative(bool enable) {
	bool $ret = false;
	$prepareNative(X11InputMethodBase, setCompositionEnabledNative, bool, bool enable);
	$ret = $invokeNative(X11InputMethodBase, setCompositionEnabledNative, enable);
	$finishNative();
	return $ret;
}

bool X11InputMethodBase::isCompositionEnabledNative() {
	bool $ret = false;
	$prepareNative(X11InputMethodBase, isCompositionEnabledNative, bool);
	$ret = $invokeNative(X11InputMethodBase, isCompositionEnabledNative);
	$finishNative();
	return $ret;
}

void clinit$X11InputMethodBase($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(X11InputMethodBase::log, $PlatformLogger::getLogger("sun.awt.X11InputMethod"_s));
	X11InputMethodBase::isXIMOpened = false;
	{
		$var($MapArray, styles, $new($MapArray, 4));
		$var($HashMap, map, nullptr);
		$assign(map, $new($HashMap, 1));
		$init($TextAttribute);
		map->put($TextAttribute::WEIGHT, $TextAttribute::WEIGHT_BOLD);
		styles->set(0, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::SWAP_COLORS, $TextAttribute::SWAP_COLORS_ON);
		styles->set(1, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_ONE_PIXEL);
		styles->set(2, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::SWAP_COLORS, $TextAttribute::SWAP_COLORS_ON);
		styles->set(3, $($Collections::unmodifiableMap(map)));
		$assignStatic(X11InputMethodBase::highlightStyles, styles);
	}
	{
		X11InputMethodBase::initIDs();
	}
}

X11InputMethodBase::X11InputMethodBase() {
}

$Class* X11InputMethodBase::load$($String* name, bool initialize) {
	$loadClass(X11InputMethodBase, name, initialize, &_X11InputMethodBase_ClassInfo_, clinit$X11InputMethodBase, allocate$X11InputMethodBase);
	return class$;
}

$Class* X11InputMethodBase::class$ = nullptr;

	} // awt
} // sun