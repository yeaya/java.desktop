#include <javax/swing/plaf/synth/ColorType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BACKGROUND
#undef FOCUS
#undef FOREGROUND
#undef MAX_COUNT
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ColorType_FieldInfo_[] = {
	{"FOREGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, FOREGROUND)},
	{"BACKGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, BACKGROUND)},
	{"TEXT_FOREGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, TEXT_FOREGROUND)},
	{"TEXT_BACKGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, TEXT_BACKGROUND)},
	{"FOCUS", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, FOCUS)},
	{"MAX_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, MAX_COUNT)},
	{"nextID", "I", nullptr, $PRIVATE | $STATIC, $staticField(ColorType, nextID)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ColorType, description)},
	{"index", "I", nullptr, $PRIVATE, $field(ColorType, index)},
	{}
};

$MethodInfo _ColorType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ColorType::*)($String*)>(&ColorType::init$))},
	{"getID", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ColorType::*)()>(&ColorType::getID))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.ColorType",
	"java.lang.Object",
	nullptr,
	_ColorType_FieldInfo_,
	_ColorType_MethodInfo_
};

$Object* allocate$ColorType($Class* clazz) {
	return $of($alloc(ColorType));
}


ColorType* ColorType::FOREGROUND = nullptr;

ColorType* ColorType::BACKGROUND = nullptr;

ColorType* ColorType::TEXT_FOREGROUND = nullptr;

ColorType* ColorType::TEXT_BACKGROUND = nullptr;

ColorType* ColorType::FOCUS = nullptr;

int32_t ColorType::MAX_COUNT = 0;
int32_t ColorType::nextID = 0;

void ColorType::init$($String* description) {
	if (description == nullptr) {
		$throwNew($NullPointerException, "ColorType must have a valid description"_s);
	}
	$set(this, description, description);
	$synchronized(ColorType::class$) {
		this->index = ColorType::nextID++;
	}
}

int32_t ColorType::getID() {
	return this->index;
}

$String* ColorType::toString() {
	return this->description;
}

void clinit$ColorType($Class* class$) {
	$assignStatic(ColorType::FOREGROUND, $new(ColorType, "Foreground"_s));
	$assignStatic(ColorType::BACKGROUND, $new(ColorType, "Background"_s));
	$assignStatic(ColorType::TEXT_FOREGROUND, $new(ColorType, "TextForeground"_s));
	$assignStatic(ColorType::TEXT_BACKGROUND, $new(ColorType, "TextBackground"_s));
	$assignStatic(ColorType::FOCUS, $new(ColorType, "Focus"_s));
	{
		int32_t var$0 = $nc(ColorType::FOREGROUND)->getID();
		int32_t var$1 = $nc(ColorType::BACKGROUND)->getID();
		ColorType::MAX_COUNT = $Math::max(var$0, $Math::max(var$1, $nc(ColorType::FOCUS)->getID())) + 1;
	}
}

ColorType::ColorType() {
}

$Class* ColorType::load$($String* name, bool initialize) {
	$loadClass(ColorType, name, initialize, &_ColorType_ClassInfo_, clinit$ColorType, allocate$ColorType);
	return class$;
}

$Class* ColorType::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax