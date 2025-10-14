#include <javax/swing/text/rtf/RTFAttributes$BooleanAttribute.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _RTFAttributes$BooleanAttribute_FieldInfo_[] = {
	{"rtfDefault", "Z", nullptr, 0, $field(RTFAttributes$BooleanAttribute, rtfDefault)},
	{"swingDefault", "Z", nullptr, 0, $field(RTFAttributes$BooleanAttribute, swingDefault)},
	{"True", "Ljava/lang/Boolean;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(RTFAttributes$BooleanAttribute, True)},
	{"False", "Ljava/lang/Boolean;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(RTFAttributes$BooleanAttribute, False)},
	{}
};

$MethodInfo _RTFAttributes$BooleanAttribute_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*domain", "()I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$BooleanAttribute::*)(int32_t,Object$*,$String*,bool,bool)>(&RTFAttributes$BooleanAttribute::init$))},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$BooleanAttribute::*)(int32_t,Object$*,$String*)>(&RTFAttributes$BooleanAttribute::init$))},
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

$InnerClassInfo _RTFAttributes$BooleanAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFAttributes$BooleanAttribute", "javax.swing.text.rtf.RTFAttributes", "BooleanAttribute", $STATIC},
	{"javax.swing.text.rtf.RTFAttributes$GenericAttribute", "javax.swing.text.rtf.RTFAttributes", "GenericAttribute", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RTFAttributes$BooleanAttribute_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFAttributes$BooleanAttribute",
	"javax.swing.text.rtf.RTFAttributes$GenericAttribute",
	"javax.swing.text.rtf.RTFAttribute",
	_RTFAttributes$BooleanAttribute_FieldInfo_,
	_RTFAttributes$BooleanAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_RTFAttributes$BooleanAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFAttributes"
};

$Object* allocate$RTFAttributes$BooleanAttribute($Class* clazz) {
	return $of($alloc(RTFAttributes$BooleanAttribute));
}

int32_t RTFAttributes$BooleanAttribute::domain() {
	 return this->$RTFAttributes$GenericAttribute::domain();
}

$Object* RTFAttributes$BooleanAttribute::swingName() {
	 return this->$RTFAttributes$GenericAttribute::swingName();
}

$String* RTFAttributes$BooleanAttribute::rtfName() {
	 return this->$RTFAttributes$GenericAttribute::rtfName();
}

bool RTFAttributes$BooleanAttribute::write($AttributeSet* source, $RTFGenerator* target, bool force) {
	 return this->$RTFAttributes$GenericAttribute::write(source, target, force);
}

int32_t RTFAttributes$BooleanAttribute::hashCode() {
	 return this->$RTFAttributes$GenericAttribute::hashCode();
}

bool RTFAttributes$BooleanAttribute::equals(Object$* arg0) {
	 return this->$RTFAttributes$GenericAttribute::equals(arg0);
}

$Object* RTFAttributes$BooleanAttribute::clone() {
	 return this->$RTFAttributes$GenericAttribute::clone();
}

$String* RTFAttributes$BooleanAttribute::toString() {
	 return this->$RTFAttributes$GenericAttribute::toString();
}

void RTFAttributes$BooleanAttribute::finalize() {
	this->$RTFAttributes$GenericAttribute::finalize();
}

$Boolean* RTFAttributes$BooleanAttribute::True = nullptr;
$Boolean* RTFAttributes$BooleanAttribute::False = nullptr;

void RTFAttributes$BooleanAttribute::init$(int32_t d, Object$* s, $String* r, bool ds, bool dr) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	this->swingDefault = ds;
	this->rtfDefault = dr;
}

void RTFAttributes$BooleanAttribute::init$(int32_t d, Object$* s, $String* r) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	this->swingDefault = false;
	this->rtfDefault = false;
}

bool RTFAttributes$BooleanAttribute::set($MutableAttributeSet* target) {
	$nc(target)->addAttribute(this->swingName$, RTFAttributes$BooleanAttribute::True);
	return true;
}

bool RTFAttributes$BooleanAttribute::set($MutableAttributeSet* target, int32_t parameter) {
	$var($Boolean, value, parameter != 0 ? RTFAttributes$BooleanAttribute::True : RTFAttributes$BooleanAttribute::False);
	$nc(target)->addAttribute(this->swingName$, value);
	return true;
}

bool RTFAttributes$BooleanAttribute::setDefault($MutableAttributeSet* target) {
	if (this->swingDefault != this->rtfDefault || ($nc(target)->getAttribute(this->swingName$) != nullptr)) {
		target->addAttribute(this->swingName$, $($Boolean::valueOf(this->rtfDefault)));
	}
	return true;
}

bool RTFAttributes$BooleanAttribute::writeValue(Object$* o_value, $RTFGenerator* target, bool force) {
	$var($Boolean, val, nullptr);
	if (o_value == nullptr) {
		$assign(val, $Boolean::valueOf(this->swingDefault));
	} else {
		$assign(val, $cast($Boolean, o_value));
	}
	if (force || ($nc(val)->booleanValue() != this->rtfDefault)) {
		if (val->booleanValue()) {
			$nc(target)->writeControlWord(this->rtfName$);
		} else {
			$nc(target)->writeControlWord(this->rtfName$, 0);
		}
	}
	return true;
}

void clinit$RTFAttributes$BooleanAttribute($Class* class$) {
	$assignStatic(RTFAttributes$BooleanAttribute::True, $Boolean::valueOf(true));
	$assignStatic(RTFAttributes$BooleanAttribute::False, $Boolean::valueOf(false));
}

RTFAttributes$BooleanAttribute::RTFAttributes$BooleanAttribute() {
}

$Class* RTFAttributes$BooleanAttribute::load$($String* name, bool initialize) {
	$loadClass(RTFAttributes$BooleanAttribute, name, initialize, &_RTFAttributes$BooleanAttribute_ClassInfo_, clinit$RTFAttributes$BooleanAttribute, allocate$RTFAttributes$BooleanAttribute);
	return class$;
}

$Class* RTFAttributes$BooleanAttribute::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax