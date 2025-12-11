#include <javax/swing/text/html/CSS$LengthUnit.h>

#include <java/lang/NumberFormatException.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef UNINITIALIZED_LENGTH

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Hashtable = ::java::util::Hashtable;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$LengthUnit_FieldInfo_[] = {
	{"lengthMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Float;>;", $STATIC, $staticField(CSS$LengthUnit, lengthMapping)},
	{"w3cLengthMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Float;>;", $STATIC, $staticField(CSS$LengthUnit, w3cLengthMapping)},
	{"type", "S", nullptr, 0, $field(CSS$LengthUnit, type)},
	{"value", "F", nullptr, 0, $field(CSS$LengthUnit, value)},
	{"units", "Ljava/lang/String;", nullptr, 0, $field(CSS$LengthUnit, units)},
	{"UNINITIALIZED_LENGTH", "S", nullptr, $STATIC | $FINAL, $constField(CSS$LengthUnit, UNINITIALIZED_LENGTH)},
	{}
};

$MethodInfo _CSS$LengthUnit_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;SF)V", nullptr, 0, $method(static_cast<void(CSS$LengthUnit::*)($String*,int16_t,float)>(&CSS$LengthUnit::init$))},
	{"getValue", "(Z)F", nullptr, 0},
	{"getValue", "(FLjava/lang/String;Ljava/lang/Boolean;)F", nullptr, $STATIC, $method(static_cast<float(*)(float,$String*,$Boolean*)>(&CSS$LengthUnit::getValue))},
	{"parse", "(Ljava/lang/String;SF)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSS$LengthUnit_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$LengthUnit", "javax.swing.text.html.CSS", "LengthUnit", $STATIC},
	{}
};

$ClassInfo _CSS$LengthUnit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$LengthUnit",
	"java.lang.Object",
	"java.io.Serializable",
	_CSS$LengthUnit_FieldInfo_,
	_CSS$LengthUnit_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$LengthUnit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$LengthUnit($Class* clazz) {
	return $of($alloc(CSS$LengthUnit));
}

$Hashtable* CSS$LengthUnit::lengthMapping = nullptr;
$Hashtable* CSS$LengthUnit::w3cLengthMapping = nullptr;

void CSS$LengthUnit::init$($String* value, int16_t defaultType, float defaultValue) {
	$set(this, units, nullptr);
	parse(value, defaultType, defaultValue);
}

void CSS$LengthUnit::parse($String* value, int16_t defaultType, float defaultValue) {
	$useLocalCurrentObjectStackCache();
	this->type = defaultType;
	this->value = defaultValue;
	int32_t length = $nc(value)->length();
	if (length < 1) {
		return;
	}
	if (value->charAt(length - 1) == u'%') {
		try {
			this->value = $Float::parseFloat($(value->substring(0, length - 1))) / 100.0f;
			this->type = (int16_t)1;
		} catch ($NumberFormatException& nfe) {
		}
	} else if (length >= 2) {
		$set(this, units, value->substring(length - 2, length));
		$var($Float, scale, $cast($Float, $nc(CSS$LengthUnit::lengthMapping)->get(this->units)));
		if (scale != nullptr) {
			try {
				this->value = $Float::parseFloat($(value->substring(0, length - 2)));
				this->type = (int16_t)0;
			} catch ($NumberFormatException& nfe) {
			}
		} else {
			bool var$1 = $nc(this->units)->equals("em"_s);
			if (var$1 || $nc(this->units)->equals("ex"_s)) {
				try {
					this->value = $Float::parseFloat($(value->substring(0, length - 2)));
					this->type = (int16_t)3;
				} catch ($NumberFormatException& nfe) {
				}
			} else if (value->equals("larger"_s)) {
				this->value = 2.0f;
				this->type = (int16_t)2;
			} else if (value->equals("smaller"_s)) {
				this->value = -2.0f;
				this->type = (int16_t)2;
			} else {
				try {
					this->value = $Float::parseFloat(value);
					this->type = (int16_t)0;
				} catch ($NumberFormatException& nfe) {
				}
			}
		}
	} else {
		try {
			this->value = $Float::parseFloat(value);
			this->type = (int16_t)0;
		} catch ($NumberFormatException& nfe) {
		}
	}
}

float CSS$LengthUnit::getValue(bool w3cLengthUnits) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, mapping, (w3cLengthUnits) ? CSS$LengthUnit::w3cLengthMapping : CSS$LengthUnit::lengthMapping);
	float scale = (float)1;
	if (this->units != nullptr) {
		$var($Float, scaleFloat, $cast($Float, $nc(mapping)->get(this->units)));
		if (scaleFloat != nullptr) {
			scale = scaleFloat->floatValue();
		}
	}
	return this->value * scale;
}

float CSS$LengthUnit::getValue(float value, $String* units, $Boolean* w3cLengthUnits) {
	$init(CSS$LengthUnit);
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, mapping, $nc((w3cLengthUnits))->booleanValue() ? CSS$LengthUnit::w3cLengthMapping : CSS$LengthUnit::lengthMapping);
	float scale = (float)1;
	if (units != nullptr) {
		$var($Float, scaleFloat, $cast($Float, $nc(mapping)->get(units)));
		if (scaleFloat != nullptr) {
			scale = scaleFloat->floatValue();
		}
	}
	return value * scale;
}

$String* CSS$LengthUnit::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$$str(this->type), " "_s, $$str(this->value)});
}

void clinit$CSS$LengthUnit($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CSS$LengthUnit::lengthMapping, $new($Hashtable, 6));
	$assignStatic(CSS$LengthUnit::w3cLengthMapping, $new($Hashtable, 6));
	{
		$nc(CSS$LengthUnit::lengthMapping)->put("pt"_s, $($Float::valueOf(1.0f)));
		$nc(CSS$LengthUnit::lengthMapping)->put("px"_s, $($Float::valueOf(1.3f)));
		$nc(CSS$LengthUnit::lengthMapping)->put("mm"_s, $($Float::valueOf(2.83464f)));
		$nc(CSS$LengthUnit::lengthMapping)->put("cm"_s, $($Float::valueOf(28.3464f)));
		$nc(CSS$LengthUnit::lengthMapping)->put("pc"_s, $($Float::valueOf(12.0f)));
		$nc(CSS$LengthUnit::lengthMapping)->put("in"_s, $($Float::valueOf(72.0f)));
		$nc(CSS$LengthUnit::w3cLengthMapping)->put("pt"_s, $($Float::valueOf(96.0f / 72.0f)));
		$nc(CSS$LengthUnit::w3cLengthMapping)->put("px"_s, $($Float::valueOf(1.0f)));
		$nc(CSS$LengthUnit::w3cLengthMapping)->put("mm"_s, $($Float::valueOf(96.0f / 2.54f / 10.0f)));
		$nc(CSS$LengthUnit::w3cLengthMapping)->put("cm"_s, $($Float::valueOf(96.0f / 2.54f)));
		$nc(CSS$LengthUnit::w3cLengthMapping)->put("pc"_s, $($Float::valueOf(96.0f / 6.0f)));
		$nc(CSS$LengthUnit::w3cLengthMapping)->put("in"_s, $($Float::valueOf(96.0f)));
	}
}

CSS$LengthUnit::CSS$LengthUnit() {
}

$Class* CSS$LengthUnit::load$($String* name, bool initialize) {
	$loadClass(CSS$LengthUnit, name, initialize, &_CSS$LengthUnit_ClassInfo_, clinit$CSS$LengthUnit, allocate$CSS$LengthUnit);
	return class$;
}

$Class* CSS$LengthUnit::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax