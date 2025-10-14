#include <javax/swing/text/rtf/RTFAttributes$NumericAttribute.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $RTFAttribute = ::javax::swing::text::rtf::RTFAttribute;
using $RTFAttributes = ::javax::swing::text::rtf::RTFAttributes;
using $RTFAttributes$GenericAttribute = ::javax::swing::text::rtf::RTFAttributes$GenericAttribute;
using $RTFGenerator = ::javax::swing::text::rtf::RTFGenerator;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFAttributes$NumericAttribute_FieldInfo_[] = {
	{"rtfDefault", "I", nullptr, 0, $field(RTFAttributes$NumericAttribute, rtfDefault)},
	{"swingDefault", "Ljava/lang/Number;", nullptr, 0, $field(RTFAttributes$NumericAttribute, swingDefault)},
	{"scale", "F", nullptr, 0, $field(RTFAttributes$NumericAttribute, scale)},
	{}
};

$MethodInfo _RTFAttributes$NumericAttribute_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*domain", "()I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(RTFAttributes$NumericAttribute::*)(int32_t,Object$*,$String*)>(&RTFAttributes$NumericAttribute::init$))},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$NumericAttribute::*)(int32_t,Object$*,$String*,int32_t,int32_t)>(&RTFAttributes$NumericAttribute::init$))},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;Ljava/lang/Number;IF)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$NumericAttribute::*)(int32_t,Object$*,$String*,$Number*,int32_t,float)>(&RTFAttributes$NumericAttribute::init$))},
	{"NewTwips", "(ILjava/lang/Object;Ljava/lang/String;FI)Ljavax/swing/text/rtf/RTFAttributes$NumericAttribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RTFAttributes$NumericAttribute*(*)(int32_t,Object$*,$String*,float,int32_t)>(&RTFAttributes$NumericAttribute::NewTwips))},
	{"NewTwips", "(ILjava/lang/Object;Ljava/lang/String;I)Ljavax/swing/text/rtf/RTFAttributes$NumericAttribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RTFAttributes$NumericAttribute*(*)(int32_t,Object$*,$String*,int32_t)>(&RTFAttributes$NumericAttribute::NewTwips))},
	{"*rtfName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $PUBLIC},
	{"set", "(Ljavax/swing/text/MutableAttributeSet;I)Z", nullptr, $PUBLIC},
	{"setDefault", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $PUBLIC},
	{"*swingName", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*write", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC},
	{"writeValue", "(Ljava/lang/Object;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RTFAttributes$NumericAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFAttributes$NumericAttribute", "javax.swing.text.rtf.RTFAttributes", "NumericAttribute", $STATIC},
	{"javax.swing.text.rtf.RTFAttributes$GenericAttribute", "javax.swing.text.rtf.RTFAttributes", "GenericAttribute", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RTFAttributes$NumericAttribute_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFAttributes$NumericAttribute",
	"javax.swing.text.rtf.RTFAttributes$GenericAttribute",
	"javax.swing.text.rtf.RTFAttribute",
	_RTFAttributes$NumericAttribute_FieldInfo_,
	_RTFAttributes$NumericAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_RTFAttributes$NumericAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFAttributes"
};

$Object* allocate$RTFAttributes$NumericAttribute($Class* clazz) {
	return $of($alloc(RTFAttributes$NumericAttribute));
}

int32_t RTFAttributes$NumericAttribute::domain() {
	 return this->$RTFAttributes$GenericAttribute::domain();
}

$Object* RTFAttributes$NumericAttribute::swingName() {
	 return this->$RTFAttributes$GenericAttribute::swingName();
}

$String* RTFAttributes$NumericAttribute::rtfName() {
	 return this->$RTFAttributes$GenericAttribute::rtfName();
}

bool RTFAttributes$NumericAttribute::write($AttributeSet* source, $RTFGenerator* target, bool force) {
	 return this->$RTFAttributes$GenericAttribute::write(source, target, force);
}

int32_t RTFAttributes$NumericAttribute::hashCode() {
	 return this->$RTFAttributes$GenericAttribute::hashCode();
}

bool RTFAttributes$NumericAttribute::equals(Object$* arg0) {
	 return this->$RTFAttributes$GenericAttribute::equals(arg0);
}

$Object* RTFAttributes$NumericAttribute::clone() {
	 return this->$RTFAttributes$GenericAttribute::clone();
}

$String* RTFAttributes$NumericAttribute::toString() {
	 return this->$RTFAttributes$GenericAttribute::toString();
}

void RTFAttributes$NumericAttribute::finalize() {
	this->$RTFAttributes$GenericAttribute::finalize();
}

void RTFAttributes$NumericAttribute::init$(int32_t d, Object$* s, $String* r) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	this->rtfDefault = 0;
	$set(this, swingDefault, nullptr);
	this->scale = 1.0f;
}

void RTFAttributes$NumericAttribute::init$(int32_t d, Object$* s, $String* r, int32_t ds, int32_t dr) {
	RTFAttributes$NumericAttribute::init$(d, s, r, $($Integer::valueOf(ds)), dr, 1.0f);
}

void RTFAttributes$NumericAttribute::init$(int32_t d, Object$* s, $String* r, $Number* ds, int32_t dr, float sc) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	$set(this, swingDefault, ds);
	this->rtfDefault = dr;
	this->scale = sc;
}

RTFAttributes$NumericAttribute* RTFAttributes$NumericAttribute::NewTwips(int32_t d, Object$* s, $String* r, float ds, int32_t dr) {
	$init(RTFAttributes$NumericAttribute);
	return $new(RTFAttributes$NumericAttribute, d, s, r, $($Float::valueOf(ds)), dr, 20.0f);
}

RTFAttributes$NumericAttribute* RTFAttributes$NumericAttribute::NewTwips(int32_t d, Object$* s, $String* r, int32_t dr) {
	$init(RTFAttributes$NumericAttribute);
	return $new(RTFAttributes$NumericAttribute, d, s, r, nullptr, dr, 20.0f);
}

bool RTFAttributes$NumericAttribute::set($MutableAttributeSet* target) {
	return false;
}

bool RTFAttributes$NumericAttribute::set($MutableAttributeSet* target, int32_t parameter) {
	$var($Number, swingValue, nullptr);
	if (this->scale == 1.0f) {
		$assign(swingValue, $Integer::valueOf(parameter));
	} else {
		$assign(swingValue, $Float::valueOf(parameter / this->scale));
	}
	$nc(target)->addAttribute(this->$RTFAttributes$GenericAttribute::swingName$, swingValue);
	return true;
}

bool RTFAttributes$NumericAttribute::setDefault($MutableAttributeSet* target) {
	$var($Number, old, $cast($Number, $nc(target)->getAttribute(this->$RTFAttributes$GenericAttribute::swingName$)));
	if (old == nullptr) {
		$assign(old, this->swingDefault);
	}
	bool var$0 = old != nullptr;
	if (var$0) {
		bool var$1 = (this->scale == 1.0f && old->intValue() == this->rtfDefault);
		var$0 = (var$1 || ($Math::round(old->floatValue() * this->scale) == this->rtfDefault));
	}
	if (var$0) {
		return true;
	}
	set(target, this->rtfDefault);
	return true;
}

bool RTFAttributes$NumericAttribute::writeValue(Object$* o_value, $RTFGenerator* target, bool force) {
	$var($Number, value, $cast($Number, o_value));
	if (value == nullptr) {
		$assign(value, this->swingDefault);
	}
	if (value == nullptr) {
		return true;
	}
	int32_t int_value = $Math::round($nc(value)->floatValue() * this->scale);
	if (force || (int_value != this->rtfDefault)) {
		$nc(target)->writeControlWord(this->$RTFAttributes$GenericAttribute::rtfName$, int_value);
	}
	return true;
}

RTFAttributes$NumericAttribute::RTFAttributes$NumericAttribute() {
}

$Class* RTFAttributes$NumericAttribute::load$($String* name, bool initialize) {
	$loadClass(RTFAttributes$NumericAttribute, name, initialize, &_RTFAttributes$NumericAttribute_ClassInfo_, allocate$RTFAttributes$NumericAttribute);
	return class$;
}

$Class* RTFAttributes$NumericAttribute::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax