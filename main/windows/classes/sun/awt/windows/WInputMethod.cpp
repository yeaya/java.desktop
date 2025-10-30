#include <sun/awt/windows/WInputMethod.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/im/InputSubset.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/lang/Character$Subset.h>
#include <java/lang/Character$UnicodeBlock.h>
#include <java/lang/Runnable.h>
#include <java/text/Annotation.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WInputMethod$1.h>
#include <sun/awt/windows/WInputMethodDescriptor.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

#undef ATTR_CONVERTED
#undef ATTR_INPUT
#undef ATTR_INPUT_ERROR
#undef ATTR_TARGET_CONVERTED
#undef ATTR_TARGET_NOTCONVERTED
#undef BACKGROUND
#undef BASIC_LATIN
#undef CHINESE
#undef CJK_UNIFIED_IDEOGRAPHS
#undef COMMIT_INPUT
#undef CONVERTED_TEXT
#undef DISCARD_INPUT
#undef FOREGROUND
#undef FULLWIDTH_LATIN
#undef HALFWIDTH_KATAKANA
#undef HANGUL_COMPATIBILITY_JAMO
#undef HANGUL_JAMO
#undef HANGUL_SYLLABLES
#undef HANJA
#undef HIRAGANA
#undef IME_CMODE_ALPHANUMERIC
#undef IME_CMODE_FULLSHAPE
#undef IME_CMODE_HANJACONVERT
#undef IME_CMODE_KATAKANA
#undef IME_CMODE_LANGUAGE
#undef IME_CMODE_NATIVE
#undef IME_CMODE_ROMAN
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_SEGMENT
#undef INPUT_METHOD_TEXT_CHANGED
#undef INPUT_METHOD_UNDERLINE
#undef JAPAN
#undef JAPANESE
#undef KANJI
#undef KATAKANA
#undef KOREA
#undef KOREAN
#undef LANGUAGE
#undef LATIN_DIGITS
#undef RAW_TEXT
#undef READING
#undef SELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef SELECTED_RAW_TEXT_HIGHLIGHT
#undef SIMPLIFIED_HANZI
#undef SWAP_COLORS
#undef SWAP_COLORS_ON
#undef TRADITIONAL_HANZI
#undef UNDERLINE_LOW_DOTTED
#undef UNDERLINE_LOW_GRAY
#undef UNDERLINE_LOW_ONE_PIXEL
#undef UNSELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef UNSELECTED_RAW_TEXT_HIGHLIGHT

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $LocaleArray = $Array<::java::util::Locale>;
using $MapArray = $Array<::java::util::Map>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $InputSubset = ::java::awt::im::InputSubset;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $Boolean = ::java::lang::Boolean;
using $Character$Subset = ::java::lang::Character$Subset;
using $Character$UnicodeBlock = ::java::lang::Character$UnicodeBlock;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Annotation = ::java::text::Annotation;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WInputMethod$1 = ::sun::awt::windows::WInputMethod$1;
using $WInputMethodDescriptor = ::sun::awt::windows::WInputMethodDescriptor;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WInputMethod_FieldInfo_[] = {
	{"inputContext", "Ljava/awt/im/spi/InputMethodContext;", nullptr, $PRIVATE, $field(WInputMethod, inputContext)},
	{"awtFocussedComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(WInputMethod, awtFocussedComponent)},
	{"awtFocussedComponentPeer", "Lsun/awt/windows/WComponentPeer;", nullptr, $PRIVATE, $field(WInputMethod, awtFocussedComponentPeer)},
	{"lastFocussedComponentPeer", "Lsun/awt/windows/WComponentPeer;", nullptr, $PRIVATE, $field(WInputMethod, lastFocussedComponentPeer)},
	{"isLastFocussedActiveClient", "Z", nullptr, $PRIVATE, $field(WInputMethod, isLastFocussedActiveClient)},
	{"isActive", "Z", nullptr, $PRIVATE, $field(WInputMethod, isActive)},
	{"context", "I", nullptr, $PRIVATE, $field(WInputMethod, context)},
	{"open", "Z", nullptr, $PRIVATE, $field(WInputMethod, open)},
	{"cmode", "I", nullptr, $PRIVATE, $field(WInputMethod, cmode)},
	{"currentLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(WInputMethod, currentLocale)},
	{"statusWindowHidden", "Z", nullptr, $PRIVATE, $field(WInputMethod, statusWindowHidden)},
	{"hasCompositionString", "Z", nullptr, $PRIVATE, $field(WInputMethod, hasCompositionString)},
	{"ATTR_INPUT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, ATTR_INPUT)},
	{"ATTR_TARGET_CONVERTED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, ATTR_TARGET_CONVERTED)},
	{"ATTR_CONVERTED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, ATTR_CONVERTED)},
	{"ATTR_TARGET_NOTCONVERTED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, ATTR_TARGET_NOTCONVERTED)},
	{"ATTR_INPUT_ERROR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, ATTR_INPUT_ERROR)},
	{"IME_CMODE_ALPHANUMERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_ALPHANUMERIC)},
	{"IME_CMODE_NATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_NATIVE)},
	{"IME_CMODE_KATAKANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_KATAKANA)},
	{"IME_CMODE_LANGUAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_LANGUAGE)},
	{"IME_CMODE_FULLSHAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_FULLSHAPE)},
	{"IME_CMODE_HANJACONVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_HANJACONVERT)},
	{"IME_CMODE_ROMAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WInputMethod, IME_CMODE_ROMAN)},
	{"COMMIT_INPUT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WInputMethod, COMMIT_INPUT)},
	{"DISCARD_INPUT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WInputMethod, DISCARD_INPUT)},
	{"highlightStyles", "[Ljava/util/Map;", "[Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(WInputMethod, highlightStyles)},
	{}
};

$MethodInfo _WInputMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WInputMethod::*)()>(&WInputMethod::init$))},
	{"access$000", "(Lsun/awt/windows/WInputMethod;)Ljava/awt/Component;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Component*(*)(WInputMethod*)>(&WInputMethod::access$000))},
	{"access$100", "(Lsun/awt/windows/WInputMethod;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(WInputMethod*)>(&WInputMethod::access$100))},
	{"activate", "()V", nullptr, $PUBLIC},
	{"createNativeContext", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WInputMethod::*)()>(&WInputMethod::createNativeContext))},
	{"deactivate", "(Z)V", nullptr, $PUBLIC},
	{"destroyNativeContext", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)(int32_t)>(&WInputMethod::destroyNativeContext))},
	{"disableInputMethod", "()V", nullptr, $PUBLIC},
	{"disableNativeIME", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)($WComponentPeer*)>(&WInputMethod::disableNativeIME))},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"enableNativeIME", "(Lsun/awt/windows/WComponentPeer;IZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)($WComponentPeer*,int32_t,bool)>(&WInputMethod::enableNativeIME))},
	{"endComposition", "()V", nullptr, $PUBLIC},
	{"endCompositionNative", "(IZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)(int32_t,bool)>(&WInputMethod::endCompositionNative))},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"getControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getConversionStatus", "(I)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WInputMethod::*)(int32_t)>(&WInputMethod::getConversionStatus))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getNativeIMMDescription", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(WInputMethod::*)()>(&WInputMethod::getNativeIMMDescription))},
	{"getNativeInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNativeLocale", "()Ljava/util/Locale;", nullptr, $STATIC | $NATIVE, $method(static_cast<$Locale*(*)()>(&WInputMethod::getNativeLocale))},
	{"getNearestNativePeer", "(Ljava/awt/Component;)Lsun/awt/windows/WComponentPeer;", nullptr, $PRIVATE, $method(static_cast<$WComponentPeer*(WInputMethod::*)($Component*)>(&WInputMethod::getNearestNativePeer))},
	{"getOpenStatus", "(I)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WInputMethod::*)(int32_t)>(&WInputMethod::getOpenStatus))},
	{"handleNativeIMEEvent", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/AWTEvent;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)($WComponentPeer*,$AWTEvent*)>(&WInputMethod::handleNativeIMEEvent))},
	{"hideWindows", "()V", nullptr, $PUBLIC},
	{"inquireCandidatePosition", "()V", nullptr, $PUBLIC, $method(static_cast<void(WInputMethod::*)()>(&WInputMethod::inquireCandidatePosition))},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC},
	{"isCompositionStringAvailable", "(I)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WInputMethod::*)(int32_t)>(&WInputMethod::isCompositionStringAvailable))},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $STATIC, $method(static_cast<$Map*(*)($InputMethodHighlight*)>(&WInputMethod::mapInputMethodHighlight))},
	{"openCandidateWindow", "(Lsun/awt/windows/WComponentPeer;II)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)($WComponentPeer*,int32_t,int32_t)>(&WInputMethod::openCandidateWindow))},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"sendInputMethodEvent", "(IJLjava/lang/String;[I[Ljava/lang/String;[I[BIII)V", nullptr, $PUBLIC, $method(static_cast<void(WInputMethod::*)(int32_t,int64_t,$String*,$ints*,$StringArray*,$ints*,$bytes*,int32_t,int32_t,int32_t)>(&WInputMethod::sendInputMethodEvent))},
	{"setAWTFocussedComponent", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setConversionStatus", "(II)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)(int32_t,int32_t)>(&WInputMethod::setConversionStatus))},
	{"setInputMethodContext", "(Ljava/awt/im/spi/InputMethodContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(WInputMethod::*)($Locale*,bool)>(&WInputMethod::setLocale))},
	{"setNativeLocale", "(Ljava/lang/String;Z)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,bool)>(&WInputMethod::setNativeLocale))},
	{"setOpenStatus", "(IZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)(int32_t,bool)>(&WInputMethod::setOpenStatus))},
	{"setStatusWindowVisible", "(Lsun/awt/windows/WComponentPeer;Z)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WInputMethod::*)($WComponentPeer*,bool)>(&WInputMethod::setStatusWindowVisible))},
	{"stopListening", "()V", nullptr, $PROTECTED},
	{"supportsBelowTheSpot", "()Z", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_createNativeContext 4
#define _METHOD_INDEX_destroyNativeContext 6
#define _METHOD_INDEX_disableNativeIME 8
#define _METHOD_INDEX_enableNativeIME 11
#define _METHOD_INDEX_endCompositionNative 13
#define _METHOD_INDEX_getConversionStatus 16
#define _METHOD_INDEX_getNativeIMMDescription 18
#define _METHOD_INDEX_getNativeLocale 20
#define _METHOD_INDEX_getOpenStatus 22
#define _METHOD_INDEX_handleNativeIMEEvent 23
#define _METHOD_INDEX_isCompositionStringAvailable 27
#define _METHOD_INDEX_openCandidateWindow 29
#define _METHOD_INDEX_setConversionStatus 35
#define _METHOD_INDEX_setNativeLocale 39
#define _METHOD_INDEX_setOpenStatus 40
#define _METHOD_INDEX_setStatusWindowVisible 41

$InnerClassInfo _WInputMethod_InnerClassesInfo_[] = {
	{"sun.awt.windows.WInputMethod$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WInputMethod_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WInputMethod",
	"sun.awt.im.InputMethodAdapter",
	nullptr,
	_WInputMethod_FieldInfo_,
	_WInputMethod_MethodInfo_,
	nullptr,
	nullptr,
	_WInputMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WInputMethod$1"
};

$Object* allocate$WInputMethod($Class* clazz) {
	return $of($alloc(WInputMethod));
}

$MapArray* WInputMethod::highlightStyles = nullptr;

bool WInputMethod::access$100(WInputMethod* x0) {
	$init(WInputMethod);
	return $nc(x0)->haveActiveClient();
}

$Component* WInputMethod::access$000(WInputMethod* x0) {
	$init(WInputMethod);
	return $nc(x0)->getClientComponent();
}

void WInputMethod::init$() {
	$InputMethodAdapter::init$();
	$set(this, awtFocussedComponentPeer, nullptr);
	$set(this, lastFocussedComponentPeer, nullptr);
	this->isLastFocussedActiveClient = false;
	this->statusWindowHidden = false;
	this->hasCompositionString = false;
	this->context = createNativeContext();
	this->cmode = getConversionStatus(this->context);
	this->open = getOpenStatus(this->context);
	$set(this, currentLocale, getNativeLocale());
	if (this->currentLocale == nullptr) {
		$set(this, currentLocale, $Locale::getDefault());
	}
}

void WInputMethod::finalize() {
	if (this->context != 0) {
		destroyNativeContext(this->context);
		this->context = 0;
	}
	$InputMethodAdapter::finalize();
}

void WInputMethod::setInputMethodContext($InputMethodContext* context) {
	$synchronized(this) {
		$set(this, inputContext, context);
	}
}

void WInputMethod::dispose() {
}

$Object* WInputMethod::getControlObject() {
	return $of(nullptr);
}

bool WInputMethod::setLocale($Locale* lang) {
	return setLocale(lang, false);
}

bool WInputMethod::setLocale($Locale* lang, bool onActivate) {
	$useLocalCurrentObjectStackCache();
	$var($LocaleArray, available, $WInputMethodDescriptor::getAvailableLocalesInternal());
	for (int32_t i = 0; i < $nc(available)->length; ++i) {
		$var($Locale, locale, available->get(i));
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
				setNativeLocale($(locale->toLanguageTag()), onActivate);
			}
			$set(this, currentLocale, locale);
			return true;
		}
	}
	return false;
}

$Locale* WInputMethod::getLocale() {
	if (this->isActive) {
		$set(this, currentLocale, getNativeLocale());
		if (this->currentLocale == nullptr) {
			$set(this, currentLocale, $Locale::getDefault());
		}
	}
	return this->currentLocale;
}

void WInputMethod::setCharacterSubsets($Character$SubsetArray* subsets) {
	$useLocalCurrentObjectStackCache();
	if (subsets == nullptr) {
		setConversionStatus(this->context, this->cmode);
		setOpenStatus(this->context, this->open);
		return;
	}
	$var($Character$Subset, subset1, $nc(subsets)->get(0));
	$var($Locale, locale, getNativeLocale());
	int32_t newmode = 0;
	if (locale == nullptr) {
		return;
	}
	$init($Locale);
	if ($nc($($nc(locale)->getLanguage()))->equals($($nc($Locale::JAPANESE)->getLanguage()))) {
		$init($Character$UnicodeBlock);
		$init($InputSubset);
		if ($equals(subset1, $Character$UnicodeBlock::BASIC_LATIN) || $equals(subset1, $InputSubset::LATIN_DIGITS)) {
			setOpenStatus(this->context, false);
		} else {
			if ($equals(subset1, $Character$UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS) || $equals(subset1, $InputSubset::KANJI) || $equals(subset1, $Character$UnicodeBlock::HIRAGANA)) {
				newmode = WInputMethod::IME_CMODE_NATIVE | WInputMethod::IME_CMODE_FULLSHAPE;
			} else {
				if ($equals(subset1, $Character$UnicodeBlock::KATAKANA)) {
					newmode = (WInputMethod::IME_CMODE_NATIVE | WInputMethod::IME_CMODE_KATAKANA) | WInputMethod::IME_CMODE_FULLSHAPE;
				} else {
					if ($equals(subset1, $InputSubset::HALFWIDTH_KATAKANA)) {
						newmode = WInputMethod::IME_CMODE_NATIVE | WInputMethod::IME_CMODE_KATAKANA;
					} else {
						if ($equals(subset1, $InputSubset::FULLWIDTH_LATIN)) {
							newmode = WInputMethod::IME_CMODE_FULLSHAPE;
						} else {
							return;
						}
					}
				}
			}
			setOpenStatus(this->context, true);
			newmode |= ((int32_t)(getConversionStatus(this->context) & (uint32_t)WInputMethod::IME_CMODE_ROMAN));
			setConversionStatus(this->context, newmode);
		}
	} else {
		if ($nc($(locale->getLanguage()))->equals($($nc($Locale::KOREAN)->getLanguage()))) {
			$init($Character$UnicodeBlock);
			$init($InputSubset);
			if ($equals(subset1, $Character$UnicodeBlock::BASIC_LATIN) || $equals(subset1, $InputSubset::LATIN_DIGITS)) {
				setOpenStatus(this->context, false);
				setConversionStatus(this->context, WInputMethod::IME_CMODE_ALPHANUMERIC);
			} else {
				if ($equals(subset1, $Character$UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS) || $equals(subset1, $InputSubset::HANJA) || $equals(subset1, $Character$UnicodeBlock::HANGUL_SYLLABLES) || $equals(subset1, $Character$UnicodeBlock::HANGUL_JAMO) || $equals(subset1, $Character$UnicodeBlock::HANGUL_COMPATIBILITY_JAMO)) {
					newmode = WInputMethod::IME_CMODE_NATIVE;
				} else {
					if ($equals(subset1, $InputSubset::FULLWIDTH_LATIN)) {
						newmode = WInputMethod::IME_CMODE_FULLSHAPE;
					} else {
						return;
					}
				}
				setOpenStatus(this->context, true);
				setConversionStatus(this->context, newmode);
			}
		} else {
			if ($nc($(locale->getLanguage()))->equals($($nc($Locale::CHINESE)->getLanguage()))) {
				$init($Character$UnicodeBlock);
				$init($InputSubset);
				if ($equals(subset1, $Character$UnicodeBlock::BASIC_LATIN) || $equals(subset1, $InputSubset::LATIN_DIGITS)) {
					setOpenStatus(this->context, false);
					newmode = getConversionStatus(this->context);
					newmode &= (uint32_t)~WInputMethod::IME_CMODE_FULLSHAPE;
					setConversionStatus(this->context, newmode);
				} else {
					if ($equals(subset1, $Character$UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS) || $equals(subset1, $InputSubset::TRADITIONAL_HANZI) || $equals(subset1, $InputSubset::SIMPLIFIED_HANZI)) {
						newmode = WInputMethod::IME_CMODE_NATIVE | WInputMethod::IME_CMODE_FULLSHAPE;
					} else {
						if ($equals(subset1, $InputSubset::FULLWIDTH_LATIN)) {
							newmode = WInputMethod::IME_CMODE_FULLSHAPE;
						} else {
							return;
						}
					}
					setOpenStatus(this->context, true);
					setConversionStatus(this->context, newmode);
				}
			}
		}
	}
}

void WInputMethod::dispatchEvent($AWTEvent* e) {
	if ($instanceOf($ComponentEvent, e)) {
		$var($Component, comp, $nc(($cast($ComponentEvent, e)))->getComponent());
		if (comp == this->awtFocussedComponent) {
			if (this->awtFocussedComponentPeer == nullptr || $nc(this->awtFocussedComponentPeer)->isDisposed()) {
				$set(this, awtFocussedComponentPeer, getNearestNativePeer(comp));
			}
			if (this->awtFocussedComponentPeer != nullptr) {
				handleNativeIMEEvent(this->awtFocussedComponentPeer, e);
			}
		}
	}
}

void WInputMethod::activate() {
	bool isAc = haveActiveClient();
	if (this->lastFocussedComponentPeer != this->awtFocussedComponentPeer || this->isLastFocussedActiveClient != isAc) {
		if (this->lastFocussedComponentPeer != nullptr) {
			disableNativeIME(this->lastFocussedComponentPeer);
		}
		if (this->awtFocussedComponentPeer != nullptr) {
			enableNativeIME(this->awtFocussedComponentPeer, this->context, !isAc);
		}
		$set(this, lastFocussedComponentPeer, this->awtFocussedComponentPeer);
		this->isLastFocussedActiveClient = isAc;
	}
	this->isActive = true;
	if (this->currentLocale != nullptr) {
		setLocale(this->currentLocale, true);
	}
	if (this->hasCompositionString && !isCompositionStringAvailable(this->context)) {
		endCompositionNative(this->context, WInputMethod::DISCARD_INPUT);
		sendInputMethodEvent($InputMethodEvent::INPUT_METHOD_TEXT_CHANGED, $EventQueue::getMostRecentEventTime(), nullptr, nullptr, nullptr, nullptr, nullptr, 0, 0, 0);
		this->hasCompositionString = false;
	}
	if (this->statusWindowHidden) {
		setStatusWindowVisible(this->awtFocussedComponentPeer, true);
		this->statusWindowHidden = false;
	}
}

void WInputMethod::deactivate(bool isTemporary) {
	getLocale();
	if (this->awtFocussedComponentPeer != nullptr) {
		$set(this, lastFocussedComponentPeer, this->awtFocussedComponentPeer);
		this->isLastFocussedActiveClient = haveActiveClient();
	}
	this->isActive = false;
	this->hasCompositionString = isCompositionStringAvailable(this->context);
	if (this->hasCompositionString) {
		endComposition();
	}
}

void WInputMethod::disableInputMethod() {
	if (this->lastFocussedComponentPeer != nullptr) {
		disableNativeIME(this->lastFocussedComponentPeer);
		$set(this, lastFocussedComponentPeer, nullptr);
		this->isLastFocussedActiveClient = false;
	}
}

$String* WInputMethod::getNativeInputMethodInfo() {
	return getNativeIMMDescription();
}

void WInputMethod::stopListening() {
	disableInputMethod();
}

void WInputMethod::setAWTFocussedComponent($Component* component) {
	if (component == nullptr) {
		return;
	}
	$var($WComponentPeer, peer, getNearestNativePeer(component));
	if (this->isActive) {
		if (this->awtFocussedComponentPeer != nullptr) {
			disableNativeIME(this->awtFocussedComponentPeer);
		}
		if (peer != nullptr) {
			enableNativeIME(peer, this->context, !haveActiveClient());
		}
	}
	$set(this, awtFocussedComponent, component);
	$set(this, awtFocussedComponentPeer, peer);
}

void WInputMethod::hideWindows() {
	if (this->awtFocussedComponentPeer != nullptr) {
		setStatusWindowVisible(this->awtFocussedComponentPeer, false);
		this->statusWindowHidden = true;
	}
}

void WInputMethod::removeNotify() {
	endCompositionNative(this->context, WInputMethod::DISCARD_INPUT);
	$set(this, awtFocussedComponent, nullptr);
	$set(this, awtFocussedComponentPeer, nullptr);
}

$Map* WInputMethod::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	$init(WInputMethod);
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
	return $nc(WInputMethod::highlightStyles)->get(index);
}

bool WInputMethod::supportsBelowTheSpot() {
	return true;
}

void WInputMethod::endComposition() {
	endCompositionNative(this->context, (haveActiveClient() ? WInputMethod::COMMIT_INPUT : WInputMethod::DISCARD_INPUT));
}

void WInputMethod::setCompositionEnabled(bool enable) {
	setOpenStatus(this->context, enable);
}

bool WInputMethod::isCompositionEnabled() {
	return getOpenStatus(this->context);
}

void WInputMethod::sendInputMethodEvent(int32_t id, int64_t when, $String* text, $ints* clauseBoundary, $StringArray* clauseReading, $ints* attributeBoundary, $bytes* attributeValue, int32_t commitedTextLength, int32_t caretPos, int32_t visiblePos) {
	$useLocalCurrentObjectStackCache();
	$var($AttributedCharacterIterator, iterator, nullptr);
	if (text != nullptr) {
		$var($AttributedString, attrStr, $new($AttributedString, text));
		$init($AttributedCharacterIterator$Attribute);
		$var($AttributedCharacterIterator$Attribute, var$0, $AttributedCharacterIterator$Attribute::LANGUAGE);
		$var($Object, var$1, $of($Locale::getDefault()));
		attrStr->addAttribute(var$0, var$1, 0, text->length());
		if (clauseBoundary != nullptr && clauseReading != nullptr && clauseReading->length != 0 && clauseBoundary->length == clauseReading->length + 1 && clauseBoundary->get(0) == 0 && clauseBoundary->get(clauseReading->length) <= text->length()) {
			for (int32_t i = 0; i < clauseBoundary->length - 1; ++i) {
				attrStr->addAttribute($AttributedCharacterIterator$Attribute::INPUT_METHOD_SEGMENT, $$new($Annotation, nullptr), clauseBoundary->get(i), clauseBoundary->get(i + 1));
				attrStr->addAttribute($AttributedCharacterIterator$Attribute::READING, $$new($Annotation, clauseReading->get(i)), clauseBoundary->get(i), clauseBoundary->get(i + 1));
			}
		} else {
			$var($AttributedCharacterIterator$Attribute, var$2, $AttributedCharacterIterator$Attribute::INPUT_METHOD_SEGMENT);
			$var($Object, var$3, $of($new($Annotation, nullptr)));
			attrStr->addAttribute(var$2, var$3, 0, text->length());
			$var($AttributedCharacterIterator$Attribute, var$4, $AttributedCharacterIterator$Attribute::READING);
			$var($Object, var$5, $of($new($Annotation, ""_s)));
			attrStr->addAttribute(var$4, var$5, 0, text->length());
		}
		if (attributeBoundary != nullptr && attributeValue != nullptr && attributeValue->length != 0 && attributeBoundary->length == attributeValue->length + 1 && attributeBoundary->get(0) == 0 && attributeBoundary->get(attributeValue->length) == text->length()) {
			for (int32_t i = 0; i < attributeBoundary->length - 1; ++i) {
				$var($InputMethodHighlight, highlight, nullptr);
				switch (attributeValue->get(i)) {
				case WInputMethod::ATTR_TARGET_CONVERTED:
					{
						$init($InputMethodHighlight);
						$assign(highlight, $InputMethodHighlight::SELECTED_CONVERTED_TEXT_HIGHLIGHT);
						break;
					}
				case WInputMethod::ATTR_CONVERTED:
					{
						$init($InputMethodHighlight);
						$assign(highlight, $InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT);
						break;
					}
				case WInputMethod::ATTR_TARGET_NOTCONVERTED:
					{
						$init($InputMethodHighlight);
						$assign(highlight, $InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT);
						break;
					}
				case WInputMethod::ATTR_INPUT:
					{}
				case WInputMethod::ATTR_INPUT_ERROR:
					{}
				default:
					{
						$init($InputMethodHighlight);
						$assign(highlight, $InputMethodHighlight::UNSELECTED_RAW_TEXT_HIGHLIGHT);
						break;
					}
				}
				$init($TextAttribute);
				attrStr->addAttribute($TextAttribute::INPUT_METHOD_HIGHLIGHT, highlight, attributeBoundary->get(i), attributeBoundary->get(i + 1));
			}
		} else {
			$init($TextAttribute);
			$init($InputMethodHighlight);
			attrStr->addAttribute($TextAttribute::INPUT_METHOD_HIGHLIGHT, $InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT, 0, text->length());
		}
		$assign(iterator, attrStr->getIterator());
	}
	$var($Component, source, getClientComponent());
	if (source == nullptr) {
		return;
	}
	$var($Component, var$6, source);
	int32_t var$7 = id;
	int64_t var$8 = when;
	$var($AttributedCharacterIterator, var$9, iterator);
	int32_t var$10 = commitedTextLength;
	$var($TextHitInfo, var$11, $TextHitInfo::leading(caretPos));
	$var($InputMethodEvent, event, $new($InputMethodEvent, var$6, var$7, var$8, var$9, var$10, var$11, $($TextHitInfo::leading(visiblePos))));
	$WToolkit::postEvent($($WToolkit::targetToAppContext(source)), event);
}

void WInputMethod::inquireCandidatePosition() {
	$useLocalCurrentObjectStackCache();
	$var($Component, source, getClientComponent());
	if (source == nullptr) {
		return;
	}
	$var($Runnable, r, $new($WInputMethod$1, this));
	$var($AppContext, var$0, $WToolkit::targetToAppContext(source));
	$WToolkit::postEvent(var$0, $$new($InvocationEvent, source, r));
}

$WComponentPeer* WInputMethod::getNearestNativePeer($Component* comp$renamed) {
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
	if ($instanceOf($WComponentPeer, peer)) {
		return $cast($WComponentPeer, peer);
	} else {
		return nullptr;
	}
}

int32_t WInputMethod::createNativeContext() {
	int32_t $ret = 0;
	$prepareNative(WInputMethod, createNativeContext, int32_t);
	$ret = $invokeNative(WInputMethod, createNativeContext);
	$finishNative();
	return $ret;
}

void WInputMethod::destroyNativeContext(int32_t context) {
	$prepareNative(WInputMethod, destroyNativeContext, void, int32_t context);
	$invokeNative(WInputMethod, destroyNativeContext, context);
	$finishNative();
}

void WInputMethod::enableNativeIME($WComponentPeer* peer, int32_t context, bool useNativeCompWindow) {
	$prepareNative(WInputMethod, enableNativeIME, void, $WComponentPeer* peer, int32_t context, bool useNativeCompWindow);
	$invokeNative(WInputMethod, enableNativeIME, peer, context, useNativeCompWindow);
	$finishNative();
}

void WInputMethod::disableNativeIME($WComponentPeer* peer) {
	$prepareNative(WInputMethod, disableNativeIME, void, $WComponentPeer* peer);
	$invokeNative(WInputMethod, disableNativeIME, peer);
	$finishNative();
}

void WInputMethod::handleNativeIMEEvent($WComponentPeer* peer, $AWTEvent* e) {
	$prepareNative(WInputMethod, handleNativeIMEEvent, void, $WComponentPeer* peer, $AWTEvent* e);
	$invokeNative(WInputMethod, handleNativeIMEEvent, peer, e);
	$finishNative();
}

void WInputMethod::endCompositionNative(int32_t context, bool flag) {
	$prepareNative(WInputMethod, endCompositionNative, void, int32_t context, bool flag);
	$invokeNative(WInputMethod, endCompositionNative, context, flag);
	$finishNative();
}

void WInputMethod::setConversionStatus(int32_t context, int32_t cmode) {
	$prepareNative(WInputMethod, setConversionStatus, void, int32_t context, int32_t cmode);
	$invokeNative(WInputMethod, setConversionStatus, context, cmode);
	$finishNative();
}

int32_t WInputMethod::getConversionStatus(int32_t context) {
	int32_t $ret = 0;
	$prepareNative(WInputMethod, getConversionStatus, int32_t, int32_t context);
	$ret = $invokeNative(WInputMethod, getConversionStatus, context);
	$finishNative();
	return $ret;
}

void WInputMethod::setOpenStatus(int32_t context, bool flag) {
	$prepareNative(WInputMethod, setOpenStatus, void, int32_t context, bool flag);
	$invokeNative(WInputMethod, setOpenStatus, context, flag);
	$finishNative();
}

bool WInputMethod::getOpenStatus(int32_t context) {
	bool $ret = false;
	$prepareNative(WInputMethod, getOpenStatus, bool, int32_t context);
	$ret = $invokeNative(WInputMethod, getOpenStatus, context);
	$finishNative();
	return $ret;
}

void WInputMethod::setStatusWindowVisible($WComponentPeer* peer, bool visible) {
	$prepareNative(WInputMethod, setStatusWindowVisible, void, $WComponentPeer* peer, bool visible);
	$invokeNative(WInputMethod, setStatusWindowVisible, peer, visible);
	$finishNative();
}

$String* WInputMethod::getNativeIMMDescription() {
	$var($String, $ret, nullptr);
	$prepareNative(WInputMethod, getNativeIMMDescription, $String*);
	$assign($ret, $invokeNative(WInputMethod, getNativeIMMDescription));
	$finishNative();
	return $ret;
}

$Locale* WInputMethod::getNativeLocale() {
	$init(WInputMethod);
	$var($Locale, $ret, nullptr);
	$prepareNativeStatic(WInputMethod, getNativeLocale, $Locale*);
	$assign($ret, $invokeNativeStatic(WInputMethod, getNativeLocale));
	$finishNativeStatic();
	return $ret;
}

bool WInputMethod::setNativeLocale($String* localeName, bool onActivate) {
	$init(WInputMethod);
	bool $ret = false;
	$prepareNativeStatic(WInputMethod, setNativeLocale, bool, $String* localeName, bool onActivate);
	$ret = $invokeNativeStatic(WInputMethod, setNativeLocale, localeName, onActivate);
	$finishNativeStatic();
	return $ret;
}

void WInputMethod::openCandidateWindow($WComponentPeer* peer, int32_t x, int32_t y) {
	$prepareNative(WInputMethod, openCandidateWindow, void, $WComponentPeer* peer, int32_t x, int32_t y);
	$invokeNative(WInputMethod, openCandidateWindow, peer, x, y);
	$finishNative();
}

bool WInputMethod::isCompositionStringAvailable(int32_t context) {
	bool $ret = false;
	$prepareNative(WInputMethod, isCompositionStringAvailable, bool, int32_t context);
	$ret = $invokeNative(WInputMethod, isCompositionStringAvailable, context);
	$finishNative();
	return $ret;
}

void clinit$WInputMethod($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($MapArray, styles, $new($MapArray, 4));
		$var($HashMap, map, nullptr);
		$assign(map, $new($HashMap, 1));
		$init($TextAttribute);
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_DOTTED);
		styles->set(0, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_GRAY);
		styles->set(1, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 1));
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_DOTTED);
		styles->set(2, $($Collections::unmodifiableMap(map)));
		$assign(map, $new($HashMap, 4));
		$var($Color, navyBlue, $new($Color, 0, 0, 128));
		map->put($TextAttribute::FOREGROUND, navyBlue);
		$init($Color);
		map->put($TextAttribute::BACKGROUND, $Color::white);
		map->put($TextAttribute::SWAP_COLORS, $TextAttribute::SWAP_COLORS_ON);
		map->put($TextAttribute::INPUT_METHOD_UNDERLINE, $TextAttribute::UNDERLINE_LOW_ONE_PIXEL);
		styles->set(3, $($Collections::unmodifiableMap(map)));
		$assignStatic(WInputMethod::highlightStyles, styles);
	}
}

WInputMethod::WInputMethod() {
}

$Class* WInputMethod::load$($String* name, bool initialize) {
	$loadClass(WInputMethod, name, initialize, &_WInputMethod_ClassInfo_, clinit$WInputMethod, allocate$WInputMethod);
	return class$;
}

$Class* WInputMethod::class$ = nullptr;

		} // windows
	} // awt
} // sun