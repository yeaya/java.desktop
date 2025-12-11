#include <sun/lwawt/macosx/CInputMethod.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/lang/Character$Subset.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CInputMethod$1.h>
#include <sun/lwawt/macosx/CInputMethod$2.h>
#include <sun/lwawt/macosx/CInputMethod$3.h>
#include <sun/lwawt/macosx/CInputMethod$4.h>
#include <sun/lwawt/macosx/CInputMethod$5.h>
#include <sun/lwawt/macosx/CInputMethod$6.h>
#include <sun/lwawt/macosx/CInputMethod$7.h>
#include <sun/lwawt/macosx/CInputMethodDescriptor.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

#undef CONVERTED_TEXT
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_TEXT_CHANGED
#undef INPUT_METHOD_UNDERLINE
#undef JAPAN
#undef JAPANESE
#undef KOREA
#undef KOREAN
#undef LANGUAGE
#undef RAW_TEXT
#undef SELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef SELECTED_RAW_TEXT_HIGHLIGHT
#undef UNDERLINE_LOW_GRAY
#undef UNDERLINE_LOW_ONE_PIXEL
#undef UNDERLINE_LOW_TWO_PIXEL
#undef UNSELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef UNSELECTED_RAW_TEXT_HIGHLIGHT

using $TextHitInfoArray = $Array<::java::awt::font::TextHitInfo>;
using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $MapArray = $Array<::java::util::Map>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $CInputMethod$1 = ::sun::lwawt::macosx::CInputMethod$1;
using $CInputMethod$2 = ::sun::lwawt::macosx::CInputMethod$2;
using $CInputMethod$3 = ::sun::lwawt::macosx::CInputMethod$3;
using $CInputMethod$4 = ::sun::lwawt::macosx::CInputMethod$4;
using $CInputMethod$5 = ::sun::lwawt::macosx::CInputMethod$5;
using $CInputMethod$6 = ::sun::lwawt::macosx::CInputMethod$6;
using $CInputMethod$7 = ::sun::lwawt::macosx::CInputMethod$7;
using $CInputMethodDescriptor = ::sun::lwawt::macosx::CInputMethodDescriptor;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CInputMethod_FieldInfo_[] = {
	{"fIMContext", "Ljava/awt/im/spi/InputMethodContext;", nullptr, $PRIVATE, $field(CInputMethod, fIMContext)},
	{"fAwtFocussedComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(CInputMethod, fAwtFocussedComponent)},
	{"fAwtFocussedComponentPeer", "Lsun/lwawt/LWComponentPeer;", "Lsun/lwawt/LWComponentPeer<**>;", $PRIVATE, $field(CInputMethod, fAwtFocussedComponentPeer)},
	{"isActive", "Z", nullptr, $PRIVATE, $field(CInputMethod, isActive)},
	{"sHighlightStyles", "[Ljava/util/Map;", "[Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(CInputMethod, sHighlightStyles)},
	{"fCurrentText", "Ljava/text/AttributedString;", nullptr, $PRIVATE, $field(CInputMethod, fCurrentText)},
	{"fCurrentTextAsString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CInputMethod, fCurrentTextAsString)},
	{"fCurrentTextLength", "I", nullptr, $PRIVATE, $field(CInputMethod, fCurrentTextLength)},
	{"kCaretPosition", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CInputMethod, kCaretPosition)},
	{"kRawText", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CInputMethod, kRawText)},
	{"kSelectedRawText", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CInputMethod, kSelectedRawText)},
	{"kConvertedText", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CInputMethod, kConvertedText)},
	{"kSelectedConvertedText", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CInputMethod, kSelectedConvertedText)},
	{}
};

$MethodInfo _CInputMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CInputMethod::*)()>(&CInputMethod::init$))},
	{"activate", "()V", nullptr, $PUBLIC},
	{"addAttribute", "(ZZII)V", nullptr, $PRIVATE, $method(static_cast<void(CInputMethod::*)(bool,bool,int32_t,int32_t)>(&CInputMethod::addAttribute))},
	{"attributedSubstringFromRange", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$String*(CInputMethod::*)(int32_t,int32_t)>(&CInputMethod::attributedSubstringFromRange))},
	{"characterIndexForPoint", "(II)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(CInputMethod::*)(int32_t,int32_t)>(&CInputMethod::characterIndexForPoint))},
	{"deactivate", "(Z)V", nullptr, $PUBLIC},
	{"disableInputMethod", "()V", nullptr, $PUBLIC},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"dispatchText", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(CInputMethod::*)(int32_t,int32_t,bool)>(&CInputMethod::dispatchText))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"endComposition", "()V", nullptr, $PUBLIC},
	{"firstRectForCharacterRange", "(I)[I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$ints*(CInputMethod::*)(int32_t)>(&CInputMethod::firstRectForCharacterRange))},
	{"getControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getNativeInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNativeLocale", "()Ljava/util/Locale;", nullptr, $STATIC | $NATIVE, $method(static_cast<$Locale*(*)()>(&CInputMethod::getNativeLocale))},
	{"getNativeViewPtr", "(Lsun/lwawt/LWComponentPeer;)J", "(Lsun/lwawt/LWComponentPeer<**>;)J", 0},
	{"getNearestNativePeer", "(Ljava/awt/Component;)Lsun/lwawt/LWComponentPeer;", "(Ljava/awt/Component;)Lsun/lwawt/LWComponentPeer<**>;", $PRIVATE, $method(static_cast<$LWComponentPeer*(CInputMethod::*)($Component*)>(&CInputMethod::getNearestNativePeer))},
	{"hasMarkedText", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(CInputMethod::*)()>(&CInputMethod::hasMarkedText))},
	{"hideWindows", "()V", nullptr, $PUBLIC},
	{"insertText", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(CInputMethod::*)($String*)>(&CInputMethod::insertText))},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($InputMethodHighlight*)>(&CInputMethod::mapInputMethodHighlight))},
	{"markedRange", "()[I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$ints*(CInputMethod::*)()>(&CInputMethod::markedRange))},
	{"nativeEndComposition", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CInputMethod::*)(int64_t)>(&CInputMethod::nativeEndComposition))},
	{"nativeGetCurrentInputMethodInfo", "()Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&CInputMethod::nativeGetCurrentInputMethodInfo))},
	{"nativeHandleEvent", "(Lsun/lwawt/LWComponentPeer;Ljava/awt/AWTEvent;)V", "(Lsun/lwawt/LWComponentPeer<**>;Ljava/awt/AWTEvent;)V", $PRIVATE | $NATIVE, $method(static_cast<void(CInputMethod::*)($LWComponentPeer*,$AWTEvent*)>(&CInputMethod::nativeHandleEvent))},
	{"nativeInit", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&CInputMethod::nativeInit))},
	{"nativeNotifyPeer", "(JLsun/lwawt/macosx/CInputMethod;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CInputMethod::*)(int64_t,CInputMethod*)>(&CInputMethod::nativeNotifyPeer))},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"selectNextGlyph", "()V", nullptr, $PRIVATE, $method(static_cast<void(CInputMethod::*)()>(&CInputMethod::selectNextGlyph))},
	{"selectPreviousGlyph", "()V", nullptr, $PRIVATE, $method(static_cast<void(CInputMethod::*)()>(&CInputMethod::selectPreviousGlyph))},
	{"selectedRange", "()[I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$ints*(CInputMethod::*)()>(&CInputMethod::selectedRange))},
	{"setAWTFocussedComponent", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setInputMethodContext", "(Ljava/awt/im/spi/InputMethodContext;)V", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(CInputMethod::*)($Locale*,bool)>(&CInputMethod::setLocale))},
	{"setNativeLocale", "(Ljava/lang/String;Z)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,bool)>(&CInputMethod::setNativeLocale))},
	{"startIMUpdate", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CInputMethod::*)($String*)>(&CInputMethod::startIMUpdate))},
	{"unmarkText", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(CInputMethod::*)()>(&CInputMethod::unmarkText))},
	{}
};

#define _METHOD_INDEX_getNativeLocale 15
#define _METHOD_INDEX_nativeEndComposition 24
#define _METHOD_INDEX_nativeGetCurrentInputMethodInfo 25
#define _METHOD_INDEX_nativeHandleEvent 26
#define _METHOD_INDEX_nativeInit 27
#define _METHOD_INDEX_nativeNotifyPeer 28
#define _METHOD_INDEX_setNativeLocale 39

$InnerClassInfo _CInputMethod_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$7", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CInputMethod$6", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CInputMethod$5", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CInputMethod$4", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CInputMethod$3", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CInputMethod$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CInputMethod$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod",
	"sun.awt.im.InputMethodAdapter",
	nullptr,
	_CInputMethod_FieldInfo_,
	_CInputMethod_MethodInfo_,
	nullptr,
	nullptr,
	_CInputMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod$7,sun.lwawt.macosx.CInputMethod$6,sun.lwawt.macosx.CInputMethod$5,sun.lwawt.macosx.CInputMethod$4,sun.lwawt.macosx.CInputMethod$3,sun.lwawt.macosx.CInputMethod$2,sun.lwawt.macosx.CInputMethod$1"
};

$Object* allocate$CInputMethod($Class* clazz) {
	return $of($alloc(CInputMethod));
}

$MapArray* CInputMethod::sHighlightStyles = nullptr;

void CInputMethod::init$() {
	$InputMethodAdapter::init$();
	$set(this, fCurrentText, nullptr);
	$set(this, fCurrentTextAsString, nullptr);
	this->fCurrentTextLength = 0;
}

void CInputMethod::setInputMethodContext($InputMethodContext* context) {
	$set(this, fIMContext, context);
}

bool CInputMethod::setLocale($Locale* lang) {
	return setLocale(lang, false);
}

bool CInputMethod::setLocale($Locale* lang, bool onActivate) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, available, $CInputMethodDescriptor::getAvailableLocalesInternal());
	for (int32_t i = 0; i < $nc(available)->length; ++i) {
		$var($Locale, locale, $cast($Locale, available->get(i)));
		bool var$1 = $nc(lang)->equals(locale);
		if (!var$1) {
			$init($Locale);
			bool var$2 = $nc(locale)->equals($Locale::JAPAN);
			var$1 = var$2 && $nc(lang)->equals($Locale::JAPANESE);
		}
		bool var$0 = var$1;
		if (!var$0) {
			bool var$3 = $nc(locale)->equals($Locale::KOREA);
			var$0 = var$3 && $nc(lang)->equals($Locale::KOREAN);
		}
		if (var$0) {
			if (this->isActive) {
				setNativeLocale($(locale->toString()), onActivate);
			}
			return true;
		}
	}
	return false;
}

$Locale* CInputMethod::getLocale() {
	$var($Locale, returnValue, getNativeLocale());
	if (returnValue == nullptr) {
		$assign(returnValue, $Locale::getDefault());
	}
	return returnValue;
}

void CInputMethod::setCharacterSubsets($Character$SubsetArray* subsets) {
}

void CInputMethod::setCompositionEnabled(bool enable) {
	$throwNew($UnsupportedOperationException, "Can\'t adjust composition mode on Mac OS X."_s);
}

bool CInputMethod::isCompositionEnabled() {
	$throwNew($UnsupportedOperationException, "Can\'t adjust composition mode on Mac OS X."_s);
	$shouldNotReachHere();
}

void CInputMethod::dispatchEvent($AWTEvent* event) {
}

void CInputMethod::activate() {
	this->isActive = true;
}

void CInputMethod::deactivate(bool isTemporary) {
	this->isActive = false;
}

void CInputMethod::hideWindows() {
}

int64_t CInputMethod::getNativeViewPtr($LWComponentPeer* peer) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($CPlatformWindow, $($nc(peer)->getPlatformWindow()))) {
		$var($CPlatformWindow, platformWindow, $cast($CPlatformWindow, peer->getPlatformWindow()));
		$var($CPlatformView, platformView, $nc(platformWindow)->getContentView());
		return $nc(platformView)->getAWTView();
	} else {
		return 0;
	}
}

void CInputMethod::removeNotify() {
	if (this->fAwtFocussedComponentPeer != nullptr) {
		nativeEndComposition(getNativeViewPtr(this->fAwtFocussedComponentPeer));
	}
	$set(this, fAwtFocussedComponentPeer, nullptr);
}

void CInputMethod::setAWTFocussedComponent($Component* component) {
	$useLocalCurrentObjectStackCache();
	$var($LWComponentPeer, peer, nullptr);
	int64_t modelPtr = 0;
	$var(CInputMethod, imInstance, this);
	if (component == nullptr) {
		$assign(peer, this->fAwtFocussedComponentPeer);
		$assign(imInstance, nullptr);
	} else {
		$assign(peer, getNearestNativePeer(component));
		if ($nc(component)->getInputMethodRequests() == nullptr) {
			$assign(imInstance, nullptr);
		}
	}
	if (peer != nullptr) {
		modelPtr = getNativeViewPtr(peer);
		nativeNotifyPeer(modelPtr, imInstance);
	}
	$set(this, fAwtFocussedComponent, component);
	$set(this, fAwtFocussedComponentPeer, getNearestNativePeer(component));
}

$Map* CInputMethod::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	$init(CInputMethod);
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
	return $nc(CInputMethod::sHighlightStyles)->get(index);
}

void CInputMethod::endComposition() {
	if (this->fAwtFocussedComponentPeer != nullptr) {
		nativeEndComposition(getNativeViewPtr(this->fAwtFocussedComponentPeer));
	}
}

void CInputMethod::dispose() {
	$set(this, fIMContext, nullptr);
	$set(this, fAwtFocussedComponent, nullptr);
	$set(this, fAwtFocussedComponentPeer, nullptr);
}

$Object* CInputMethod::getControlObject() {
	return $of(nullptr);
}

$LWComponentPeer* CInputMethod::getNearestNativePeer($Component* comp$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, comp$renamed);
	if (comp == nullptr) {
		return nullptr;
	}
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($ComponentPeer, peer, $nc(acc)->getPeer(comp));
	if (peer == nullptr) {
		return nullptr;
	}
	while ($instanceOf($LightweightPeer, peer)) {
		$assign(comp, $nc(comp)->getParent());
		if (comp == nullptr) {
			return nullptr;
		}
		$assign(peer, acc->getPeer(comp));
		if (peer == nullptr) {
			return nullptr;
		}
	}
	if ($instanceOf($LWComponentPeer, peer)) {
		return $cast($LWComponentPeer, peer);
	}
	return nullptr;
}

void CInputMethod::insertText($String* aString) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($AttributedString, attribString, $new($AttributedString, aString));
		$init($AttributedCharacterIterator$Attribute);
		$var($AttributedCharacterIterator$Attribute, var$0, $AttributedCharacterIterator$Attribute::LANGUAGE);
		$var($Object, var$1, $of(getLocale()));
		attribString->addAttribute(var$0, var$1, 0, $nc(aString)->length());
		$var($TextHitInfo, theCaret, $TextHitInfo::afterOffset($nc(aString)->length() - 1));
		$var($Component, var$2, this->fAwtFocussedComponent);
		$var($AttributedCharacterIterator, var$3, attribString->getIterator());
		$var($InputMethodEvent, event, $new($InputMethodEvent, var$2, $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, var$3, $nc(aString)->length(), theCaret, theCaret));
		$SunToolkit::postEvent($($LWCToolkit::targetToAppContext(this->fAwtFocussedComponent)), event);
		$set(this, fCurrentText, nullptr);
		$set(this, fCurrentTextAsString, nullptr);
		this->fCurrentTextLength = 0;
	}
}

void CInputMethod::startIMUpdate($String* rawText) {
	$set(this, fCurrentTextAsString, $new($String, rawText));
	$set(this, fCurrentText, $new($AttributedString, this->fCurrentTextAsString));
	this->fCurrentTextLength = $nc(rawText)->length();
}

void CInputMethod::addAttribute(bool isThickUnderline, bool isGray, int32_t start, int32_t length) {
	int32_t begin = start;
	int32_t end = start + length;
	int32_t markupType = CInputMethod::kRawText;
	if (isThickUnderline && isGray) {
		markupType = CInputMethod::kRawText;
	} else if (!isThickUnderline && isGray) {
		markupType = CInputMethod::kRawText;
	} else if (isThickUnderline && !isGray) {
		markupType = CInputMethod::kSelectedConvertedText;
	} else if (!isThickUnderline && !isGray) {
		markupType = CInputMethod::kConvertedText;
	}
	$var($InputMethodHighlight, theHighlight, nullptr);
	switch (markupType) {
	case CInputMethod::kSelectedRawText:
		{
			$init($InputMethodHighlight);
			$assign(theHighlight, $InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT);
			break;
		}
	case CInputMethod::kConvertedText:
		{
			$init($InputMethodHighlight);
			$assign(theHighlight, $InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT);
			break;
		}
	case CInputMethod::kSelectedConvertedText:
		{
			$init($InputMethodHighlight);
			$assign(theHighlight, $InputMethodHighlight::SELECTED_CONVERTED_TEXT_HIGHLIGHT);
			break;
		}
	case CInputMethod::kRawText:
		{}
	default:
		{
			$init($InputMethodHighlight);
			$assign(theHighlight, $InputMethodHighlight::UNSELECTED_RAW_TEXT_HIGHLIGHT);
			break;
		}
	}
	$init($TextAttribute);
	$nc(this->fCurrentText)->addAttribute($TextAttribute::INPUT_METHOD_HIGHLIGHT, theHighlight, begin, end);
}

void CInputMethod::selectPreviousGlyph() {
	if (this->fIMContext == nullptr) {
		return;
	}
	try {
		$LWCToolkit::invokeLater($$new($CInputMethod$1, this), this->fAwtFocussedComponent);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void CInputMethod::selectNextGlyph() {
	if (this->fIMContext == nullptr || !($instanceOf($JTextComponent, this->fAwtFocussedComponent))) {
		return;
	}
	try {
		$LWCToolkit::invokeLater($$new($CInputMethod$2, this), this->fAwtFocussedComponent);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void CInputMethod::dispatchText(int32_t selectStart, int32_t selectLength, bool pressAndHold) {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentText == nullptr) {
		return;
	}
	$var($TextHitInfo, theCaret, selectLength == 0 ? $TextHitInfo::beforeOffset(selectStart) : ($TextHitInfo*)nullptr);
	$var($TextHitInfo, visiblePosition, $TextHitInfo::beforeOffset(0));
	$var($InputMethodEvent, event, $new($InputMethodEvent, this->fAwtFocussedComponent, $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, $($nc(this->fCurrentText)->getIterator()), 0, theCaret, visiblePosition));
	$SunToolkit::postEvent($($LWCToolkit::targetToAppContext(this->fAwtFocussedComponent)), event);
	if (pressAndHold) {
		selectNextGlyph();
	}
}

void CInputMethod::unmarkText() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fCurrentText == nullptr) {
			return;
		}
		$var($TextHitInfo, theCaret, $TextHitInfo::afterOffset(this->fCurrentTextLength));
		$var($TextHitInfo, visiblePosition, theCaret);
		$var($InputMethodEvent, event, $new($InputMethodEvent, this->fAwtFocussedComponent, $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, $($nc(this->fCurrentText)->getIterator()), this->fCurrentTextLength, theCaret, visiblePosition));
		$SunToolkit::postEvent($($LWCToolkit::targetToAppContext(this->fAwtFocussedComponent)), event);
		$set(this, fCurrentText, nullptr);
		$set(this, fCurrentTextAsString, nullptr);
		this->fCurrentTextLength = 0;
	}
}

bool CInputMethod::hasMarkedText() {
	$synchronized(this) {
		return this->fCurrentText != nullptr;
	}
}

$String* CInputMethod::attributedSubstringFromRange(int32_t locationIn, int32_t lengthIn) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringArray, retString, $new($StringArray, 1));
		try {
			$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($CInputMethod$3, this, retString, locationIn, lengthIn)), this->fAwtFocussedComponent);
		} catch ($InvocationTargetException& ite) {
			ite->printStackTrace();
		}
		$synchronized(retString) {
			return retString->get(0);
		}
	}
}

$ints* CInputMethod::selectedRange() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ints, returnValue, $new($ints, 2));
		try {
			$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($CInputMethod$4, this, returnValue)), this->fAwtFocussedComponent);
		} catch ($InvocationTargetException& ite) {
			ite->printStackTrace();
		}
		$synchronized(returnValue) {
			return returnValue;
		}
	}
}

$ints* CInputMethod::markedRange() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fCurrentText == nullptr) {
			return nullptr;
		}
		$var($ints, returnValue, $new($ints, 2));
		try {
			$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($CInputMethod$5, this, returnValue)), this->fAwtFocussedComponent);
		} catch ($InvocationTargetException& ite) {
			ite->printStackTrace();
		}
		returnValue->set(1, this->fCurrentTextLength);
		$synchronized(returnValue) {
			return returnValue;
		}
	}
}

$ints* CInputMethod::firstRectForCharacterRange(int32_t absoluteTextOffset) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ints, rect, $new($ints, 4));
		try {
			$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($CInputMethod$6, this, rect, absoluteTextOffset)), this->fAwtFocussedComponent);
		} catch ($InvocationTargetException& ite) {
			ite->printStackTrace();
		}
		$synchronized(rect) {
			return rect;
		}
	}
}

int32_t CInputMethod::characterIndexForPoint(int32_t screenX, int32_t screenY) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TextHitInfoArray, offsetInfo, $new($TextHitInfoArray, 1));
		$var($ints, insertPositionOffset, $new($ints, 1));
		try {
			$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($CInputMethod$7, this, offsetInfo, screenX, screenY, insertPositionOffset)), this->fAwtFocussedComponent);
		} catch ($InvocationTargetException& ite) {
			ite->printStackTrace();
		}
		if (offsetInfo->get(0) == nullptr) {
			return insertPositionOffset->get(0);
		}
		int32_t returnValue = $nc(offsetInfo->get(0))->getCharIndex() + insertPositionOffset->get(0);
		if ($nc(offsetInfo->get(0))->getCharIndex() == this->fCurrentTextLength) {
			--returnValue;
		}
		return returnValue;
	}
}

void CInputMethod::disableInputMethod() {
}

$String* CInputMethod::getNativeInputMethodInfo() {
	return nativeGetCurrentInputMethodInfo();
}

void CInputMethod::nativeNotifyPeer(int64_t nativePeer, CInputMethod* imInstance) {
	$prepareNative(CInputMethod, nativeNotifyPeer, void, int64_t nativePeer, CInputMethod* imInstance);
	$invokeNative(nativePeer, imInstance);
	$finishNative();
}

void CInputMethod::nativeEndComposition(int64_t nativePeer) {
	$prepareNative(CInputMethod, nativeEndComposition, void, int64_t nativePeer);
	$invokeNative(nativePeer);
	$finishNative();
}

void CInputMethod::nativeHandleEvent($LWComponentPeer* peer, $AWTEvent* event) {
	$prepareNative(CInputMethod, nativeHandleEvent, void, $LWComponentPeer* peer, $AWTEvent* event);
	$invokeNative(peer, event);
	$finishNative();
}

$Locale* CInputMethod::getNativeLocale() {
	$init(CInputMethod);
	$var($Locale, $ret, nullptr);
	$prepareNativeStatic(CInputMethod, getNativeLocale, $Locale*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

bool CInputMethod::setNativeLocale($String* localeName, bool onActivate) {
	$init(CInputMethod);
	bool $ret = false;
	$prepareNativeStatic(CInputMethod, setNativeLocale, bool, $String* localeName, bool onActivate);
	$ret = $invokeNativeStatic(localeName, onActivate);
	$finishNativeStatic();
	return $ret;
}

$String* CInputMethod::nativeGetCurrentInputMethodInfo() {
	$init(CInputMethod);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(CInputMethod, nativeGetCurrentInputMethodInfo, $String*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void CInputMethod::nativeInit() {
	$init(CInputMethod);
	$prepareNativeStatic(CInputMethod, nativeInit, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$CInputMethod($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($MapArray, styles, $new($MapArray, 4));
		$var($HashMap, map, nullptr);
		$assign(map, $new($HashMap, 1));
		$init($TextAttribute);
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_GRAY);
		styles->set(0, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_GRAY);
		styles->set(1, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_ONE_PIXEL);
		styles->set(2, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_TWO_PIXEL);
		styles->set(3, $($Collections::unmodifiableMap(map)));
		$assignStatic(CInputMethod::sHighlightStyles, styles);
		CInputMethod::nativeInit();
	}
}

CInputMethod::CInputMethod() {
}

$Class* CInputMethod::load$($String* name, bool initialize) {
	$loadClass(CInputMethod, name, initialize, &_CInputMethod_ClassInfo_, clinit$CInputMethod, allocate$CInputMethod);
	return class$;
}

$Class* CInputMethod::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun