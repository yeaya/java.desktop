#include <javax/swing/colorchooser/ColorModel.h>

#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Locale = ::java::util::Locale;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _ColorModel_FieldInfo_[] = {
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ColorModel, prefix)},
	{"labels", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ColorModel, labels)},
	{}
};

$MethodInfo _ColorModel_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(ColorModel::*)($String*,$StringArray*)>(&ColorModel::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorModel::*)()>(&ColorModel::init$))},
	{"getColor", "([F)I", nullptr, 0},
	{"getCount", "()I", nullptr, 0},
	{"getDefault", "(I)F", nullptr, 0},
	{"getInteger", "(Ljava/awt/Component;Ljava/lang/String;)I", nullptr, $FINAL, $method(static_cast<int32_t(ColorModel::*)($Component*,$String*)>(&ColorModel::getInteger))},
	{"getLabel", "(Ljava/awt/Component;I)Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(ColorModel::*)($Component*,int32_t)>(&ColorModel::getLabel))},
	{"getMaximum", "(I)I", nullptr, 0},
	{"getMinimum", "(I)I", nullptr, 0},
	{"getText", "(Ljava/awt/Component;Ljava/lang/String;)Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(ColorModel::*)($Component*,$String*)>(&ColorModel::getText))},
	{"normalize", "(I)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(int32_t)>(&ColorModel::normalize))},
	{"setColor", "(I[F)V", nullptr, 0},
	{"to8bit", "(F)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(float)>(&ColorModel::to8bit))},
	{}
};

$ClassInfo _ColorModel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.ColorModel",
	"java.lang.Object",
	nullptr,
	_ColorModel_FieldInfo_,
	_ColorModel_MethodInfo_
};

$Object* allocate$ColorModel($Class* clazz) {
	return $of($alloc(ColorModel));
}

void ColorModel::init$($String* name, $StringArray* labels) {
	$set(this, prefix, $str({"ColorChooser."_s, name}));
	$set(this, labels, labels);
}

void ColorModel::init$() {
	ColorModel::init$("rgb"_s, $$new($StringArray, {
		"Red"_s,
		"Green"_s,
		"Blue"_s,
		"Alpha"_s
	}));
}

void ColorModel::setColor(int32_t color, $floats* model) {
	$nc(model)->set(0, normalize(color >> 16));
	model->set(1, normalize(color >> 8));
	model->set(2, normalize(color));
	model->set(3, normalize(color >> 24));
}

int32_t ColorModel::getColor($floats* model) {
	int32_t var$2 = to8bit($nc(model)->get(2));
	int32_t var$1 = var$2 | (to8bit($nc(model)->get(1)) << 8);
	int32_t var$0 = var$1 | (to8bit($nc(model)->get(0)) << 16);
	return var$0 | (to8bit($nc(model)->get(3)) << 24);
}

int32_t ColorModel::getCount() {
	return $nc(this->labels)->length;
}

int32_t ColorModel::getMinimum(int32_t index) {
	return 0;
}

int32_t ColorModel::getMaximum(int32_t index) {
	return 255;
}

float ColorModel::getDefault(int32_t index) {
	return 0.0f;
}

$String* ColorModel::getLabel($Component* component, int32_t index) {
	return getText(component, $nc(this->labels)->get(index));
}

float ColorModel::normalize(int32_t value) {
	return (float)((int32_t)(value & (uint32_t)255)) / 255.0f;
}

int32_t ColorModel::to8bit(float value) {
	return $cast(int32_t, (255.0f * value));
}

$String* ColorModel::getText($Component* component, $String* suffix) {
	return $UIManager::getString($of($$str({this->prefix, suffix, "Text"_s})), $($nc(component)->getLocale()));
}

int32_t ColorModel::getInteger($Component* component, $String* suffix) {
	$var($Object, value, $UIManager::get($$str({this->prefix, suffix}), $($nc(component)->getLocale())));
	if ($instanceOf($Integer, value)) {
		return $nc(($cast($Integer, value)))->intValue();
	}
	if ($instanceOf($String, value)) {
		try {
			return $Integer::parseInt($cast($String, value));
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return -1;
}

ColorModel::ColorModel() {
}

$Class* ColorModel::load$($String* name, bool initialize) {
	$loadClass(ColorModel, name, initialize, &_ColorModel_ClassInfo_, allocate$ColorModel);
	return class$;
}

$Class* ColorModel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax