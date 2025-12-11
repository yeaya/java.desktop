#include <apple/laf/JRSUIConstants$Key.h>

#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef ANIMATION_FRAME
#undef THUMB_PROPORTION
#undef THUMB_START
#undef VALUE
#undef WINDOW_TITLE_BAR_HEIGHT

using $JRSUIConstants = ::apple::laf::JRSUIConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Key_FieldInfo_[] = {
	{"_value", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JRSUIConstants$Key, _value)},
	{"VALUE", "Lapple/laf/JRSUIConstants$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Key, VALUE)},
	{"_thumbProportion", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JRSUIConstants$Key, _thumbProportion)},
	{"THUMB_PROPORTION", "Lapple/laf/JRSUIConstants$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Key, THUMB_PROPORTION)},
	{"_thumbStart", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JRSUIConstants$Key, _thumbStart)},
	{"THUMB_START", "Lapple/laf/JRSUIConstants$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Key, THUMB_START)},
	{"_windowTitleBarHeight", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JRSUIConstants$Key, _windowTitleBarHeight)},
	{"WINDOW_TITLE_BAR_HEIGHT", "Lapple/laf/JRSUIConstants$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Key, WINDOW_TITLE_BAR_HEIGHT)},
	{"_animationFrame", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JRSUIConstants$Key, _animationFrame)},
	{"ANIMATION_FRAME", "Lapple/laf/JRSUIConstants$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Key, ANIMATION_FRAME)},
	{"constant", "I", nullptr, $FINAL, $field(JRSUIConstants$Key, constant)},
	{"ptr", "J", nullptr, $PRIVATE, $field(JRSUIConstants$Key, ptr)},
	{}
};

$MethodInfo _JRSUIConstants$Key_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JRSUIConstants$Key::*)(int32_t)>(&JRSUIConstants$Key::init$))},
	{"getConstantName", "(Lapple/laf/JRSUIConstants$Key;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JRSUIConstants$Key::*)(JRSUIConstants$Key*)>(&JRSUIConstants$Key::getConstantName))},
	{"getConstantPtr", "()J", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Key_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Key", "apple.laf.JRSUIConstants", "Key", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Key_ClassInfo_ = {
	$ACC_SUPER,
	"apple.laf.JRSUIConstants$Key",
	"java.lang.Object",
	nullptr,
	_JRSUIConstants$Key_FieldInfo_,
	_JRSUIConstants$Key_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Key($Class* clazz) {
	return $of($alloc(JRSUIConstants$Key));
}

JRSUIConstants$Key* JRSUIConstants$Key::VALUE = nullptr;
JRSUIConstants$Key* JRSUIConstants$Key::THUMB_PROPORTION = nullptr;
JRSUIConstants$Key* JRSUIConstants$Key::THUMB_START = nullptr;
JRSUIConstants$Key* JRSUIConstants$Key::WINDOW_TITLE_BAR_HEIGHT = nullptr;
JRSUIConstants$Key* JRSUIConstants$Key::ANIMATION_FRAME = nullptr;

void JRSUIConstants$Key::init$(int32_t constant) {
	this->constant = constant;
}

int64_t JRSUIConstants$Key::getConstantPtr() {
	if (this->ptr != 0) {
		return this->ptr;
	}
	this->ptr = $JRSUIConstants::getPtrForConstant(this->constant);
	if (this->ptr != 0) {
		return this->ptr;
	}
	$throwNew($RuntimeException, $$str({"Constant not implemented in native: "_s, this}));
}

$String* JRSUIConstants$Key::getConstantName(JRSUIConstants$Key* hit) {
	if (hit == JRSUIConstants$Key::VALUE) {
		return "VALUE"_s;
	} else if (hit == JRSUIConstants$Key::THUMB_PROPORTION) {
		return "THUMB_PROPORTION"_s;
	} else if (hit == JRSUIConstants$Key::THUMB_START) {
		return "THUMB_START"_s;
	} else if (hit == JRSUIConstants$Key::WINDOW_TITLE_BAR_HEIGHT) {
		return "WINDOW_TITLE_BAR_HEIGHT"_s;
	} else if (hit == JRSUIConstants$Key::ANIMATION_FRAME) {
		return "ANIMATION_FRAME"_s;
	}
	return $of(this)->getClass()->getSimpleName();
}

$String* JRSUIConstants$Key::toString() {
	return $str({$(getConstantName(this)), (this->ptr == 0 ? "(unlinked)"_s : ""_s)});
}

void clinit$JRSUIConstants$Key($Class* class$) {
	$assignStatic(JRSUIConstants$Key::VALUE, $new(JRSUIConstants$Key, JRSUIConstants$Key::_value));
	$assignStatic(JRSUIConstants$Key::THUMB_PROPORTION, $new(JRSUIConstants$Key, JRSUIConstants$Key::_thumbProportion));
	$assignStatic(JRSUIConstants$Key::THUMB_START, $new(JRSUIConstants$Key, JRSUIConstants$Key::_thumbStart));
	$assignStatic(JRSUIConstants$Key::WINDOW_TITLE_BAR_HEIGHT, $new(JRSUIConstants$Key, JRSUIConstants$Key::_windowTitleBarHeight));
	$assignStatic(JRSUIConstants$Key::ANIMATION_FRAME, $new(JRSUIConstants$Key, JRSUIConstants$Key::_animationFrame));
}

JRSUIConstants$Key::JRSUIConstants$Key() {
}

$Class* JRSUIConstants$Key::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Key, name, initialize, &_JRSUIConstants$Key_ClassInfo_, clinit$JRSUIConstants$Key, allocate$JRSUIConstants$Key);
	return class$;
}

$Class* JRSUIConstants$Key::class$ = nullptr;

	} // laf
} // apple