#include <java/awt/im/InputMethodHighlight.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CONVERTED_TEXT
#undef RAW_TEXT
#undef SELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef SELECTED_RAW_TEXT_HIGHLIGHT
#undef UNSELECTED_CONVERTED_TEXT_HIGHLIGHT
#undef UNSELECTED_RAW_TEXT_HIGHLIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {
		namespace im {

$FieldInfo _InputMethodHighlight_FieldInfo_[] = {
	{"RAW_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputMethodHighlight, RAW_TEXT)},
	{"CONVERTED_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputMethodHighlight, CONVERTED_TEXT)},
	{"UNSELECTED_RAW_TEXT_HIGHLIGHT", "Ljava/awt/im/InputMethodHighlight;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputMethodHighlight, UNSELECTED_RAW_TEXT_HIGHLIGHT)},
	{"SELECTED_RAW_TEXT_HIGHLIGHT", "Ljava/awt/im/InputMethodHighlight;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputMethodHighlight, SELECTED_RAW_TEXT_HIGHLIGHT)},
	{"UNSELECTED_CONVERTED_TEXT_HIGHLIGHT", "Ljava/awt/im/InputMethodHighlight;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputMethodHighlight, UNSELECTED_CONVERTED_TEXT_HIGHLIGHT)},
	{"SELECTED_CONVERTED_TEXT_HIGHLIGHT", "Ljava/awt/im/InputMethodHighlight;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InputMethodHighlight, SELECTED_CONVERTED_TEXT_HIGHLIGHT)},
	{"selected", "Z", nullptr, $PRIVATE, $field(InputMethodHighlight, selected)},
	{"state", "I", nullptr, $PRIVATE, $field(InputMethodHighlight, state)},
	{"variation", "I", nullptr, $PRIVATE, $field(InputMethodHighlight, variation)},
	{"style", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PRIVATE, $field(InputMethodHighlight, style)},
	{}
};

$MethodInfo _InputMethodHighlight_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodHighlight::*)(bool,int32_t)>(&InputMethodHighlight::init$))},
	{"<init>", "(ZII)V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodHighlight::*)(bool,int32_t,int32_t)>(&InputMethodHighlight::init$))},
	{"<init>", "(ZIILjava/util/Map;)V", "(ZIILjava/util/Map<Ljava/awt/font/TextAttribute;*>;)V", $PUBLIC, $method(static_cast<void(InputMethodHighlight::*)(bool,int32_t,int32_t,$Map*)>(&InputMethodHighlight::init$))},
	{"getState", "()I", nullptr, $PUBLIC},
	{"getStyle", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC},
	{"getVariation", "()I", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputMethodHighlight_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.im.InputMethodHighlight",
	"java.lang.Object",
	nullptr,
	_InputMethodHighlight_FieldInfo_,
	_InputMethodHighlight_MethodInfo_
};

$Object* allocate$InputMethodHighlight($Class* clazz) {
	return $of($alloc(InputMethodHighlight));
}


InputMethodHighlight* InputMethodHighlight::UNSELECTED_RAW_TEXT_HIGHLIGHT = nullptr;

InputMethodHighlight* InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT = nullptr;

InputMethodHighlight* InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT = nullptr;

InputMethodHighlight* InputMethodHighlight::SELECTED_CONVERTED_TEXT_HIGHLIGHT = nullptr;

void InputMethodHighlight::init$(bool selected, int32_t state) {
	InputMethodHighlight::init$(selected, state, 0, nullptr);
}

void InputMethodHighlight::init$(bool selected, int32_t state, int32_t variation) {
	InputMethodHighlight::init$(selected, state, variation, nullptr);
}

void InputMethodHighlight::init$(bool selected, int32_t state, int32_t variation, $Map* style) {
	this->selected = selected;
	if (!(state == InputMethodHighlight::RAW_TEXT || state == InputMethodHighlight::CONVERTED_TEXT)) {
		$throwNew($IllegalArgumentException, "unknown input method highlight state"_s);
	}
	this->state = state;
	this->variation = variation;
	$set(this, style, style);
}

bool InputMethodHighlight::isSelected() {
	return this->selected;
}

int32_t InputMethodHighlight::getState() {
	return this->state;
}

int32_t InputMethodHighlight::getVariation() {
	return this->variation;
}

$Map* InputMethodHighlight::getStyle() {
	return this->style;
}

void clinit$InputMethodHighlight($Class* class$) {
	$assignStatic(InputMethodHighlight::UNSELECTED_RAW_TEXT_HIGHLIGHT, $new(InputMethodHighlight, false, InputMethodHighlight::RAW_TEXT));
	$assignStatic(InputMethodHighlight::SELECTED_RAW_TEXT_HIGHLIGHT, $new(InputMethodHighlight, true, InputMethodHighlight::RAW_TEXT));
	$assignStatic(InputMethodHighlight::UNSELECTED_CONVERTED_TEXT_HIGHLIGHT, $new(InputMethodHighlight, false, InputMethodHighlight::CONVERTED_TEXT));
	$assignStatic(InputMethodHighlight::SELECTED_CONVERTED_TEXT_HIGHLIGHT, $new(InputMethodHighlight, true, InputMethodHighlight::CONVERTED_TEXT));
}

InputMethodHighlight::InputMethodHighlight() {
}

$Class* InputMethodHighlight::load$($String* name, bool initialize) {
	$loadClass(InputMethodHighlight, name, initialize, &_InputMethodHighlight_ClassInfo_, clinit$InputMethodHighlight, allocate$InputMethodHighlight);
	return class$;
}

$Class* InputMethodHighlight::class$ = nullptr;

		} // im
	} // awt
} // java