#include <javax/swing/text/rtf/RTFAttributes$AssertiveAttribute.h>

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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $RTFAttributes$GenericAttribute = ::javax::swing::text::rtf::RTFAttributes$GenericAttribute;
using $RTFGenerator = ::javax::swing::text::rtf::RTFGenerator;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFAttributes$AssertiveAttribute_FieldInfo_[] = {
	{"swingValue", "Ljava/lang/Object;", nullptr, 0, $field(RTFAttributes$AssertiveAttribute, swingValue)},
	{}
};

$MethodInfo _RTFAttributes$AssertiveAttribute_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*domain", "()I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$AssertiveAttribute::*)(int32_t,Object$*,$String*)>(&RTFAttributes$AssertiveAttribute::init$))},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$AssertiveAttribute::*)(int32_t,Object$*,$String*,Object$*)>(&RTFAttributes$AssertiveAttribute::init$))},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(RTFAttributes$AssertiveAttribute::*)(int32_t,Object$*,$String*,int32_t)>(&RTFAttributes$AssertiveAttribute::init$))},
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

$InnerClassInfo _RTFAttributes$AssertiveAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFAttributes$AssertiveAttribute", "javax.swing.text.rtf.RTFAttributes", "AssertiveAttribute", $STATIC},
	{"javax.swing.text.rtf.RTFAttributes$GenericAttribute", "javax.swing.text.rtf.RTFAttributes", "GenericAttribute", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RTFAttributes$AssertiveAttribute_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFAttributes$AssertiveAttribute",
	"javax.swing.text.rtf.RTFAttributes$GenericAttribute",
	"javax.swing.text.rtf.RTFAttribute",
	_RTFAttributes$AssertiveAttribute_FieldInfo_,
	_RTFAttributes$AssertiveAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_RTFAttributes$AssertiveAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFAttributes"
};

$Object* allocate$RTFAttributes$AssertiveAttribute($Class* clazz) {
	return $of($alloc(RTFAttributes$AssertiveAttribute));
}

int32_t RTFAttributes$AssertiveAttribute::domain() {
	 return this->$RTFAttributes$GenericAttribute::domain();
}

$Object* RTFAttributes$AssertiveAttribute::swingName() {
	 return this->$RTFAttributes$GenericAttribute::swingName();
}

$String* RTFAttributes$AssertiveAttribute::rtfName() {
	 return this->$RTFAttributes$GenericAttribute::rtfName();
}

bool RTFAttributes$AssertiveAttribute::write($AttributeSet* source, $RTFGenerator* target, bool force) {
	 return this->$RTFAttributes$GenericAttribute::write(source, target, force);
}

int32_t RTFAttributes$AssertiveAttribute::hashCode() {
	 return this->$RTFAttributes$GenericAttribute::hashCode();
}

bool RTFAttributes$AssertiveAttribute::equals(Object$* arg0) {
	 return this->$RTFAttributes$GenericAttribute::equals(arg0);
}

$Object* RTFAttributes$AssertiveAttribute::clone() {
	 return this->$RTFAttributes$GenericAttribute::clone();
}

$String* RTFAttributes$AssertiveAttribute::toString() {
	 return this->$RTFAttributes$GenericAttribute::toString();
}

void RTFAttributes$AssertiveAttribute::finalize() {
	this->$RTFAttributes$GenericAttribute::finalize();
}

void RTFAttributes$AssertiveAttribute::init$(int32_t d, Object$* s, $String* r) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	$set(this, swingValue, $Boolean::valueOf(true));
}

void RTFAttributes$AssertiveAttribute::init$(int32_t d, Object$* s, $String* r, Object$* v) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	$set(this, swingValue, v);
}

void RTFAttributes$AssertiveAttribute::init$(int32_t d, Object$* s, $String* r, int32_t v) {
	$RTFAttributes$GenericAttribute::init$(d, s, r);
	$set(this, swingValue, $Integer::valueOf(v));
}

bool RTFAttributes$AssertiveAttribute::set($MutableAttributeSet* target) {
	if (this->swingValue == nullptr) {
		$nc(target)->removeAttribute(this->$RTFAttributes$GenericAttribute::swingName$);
	} else {
		$nc(target)->addAttribute(this->$RTFAttributes$GenericAttribute::swingName$, this->swingValue);
	}
	return true;
}

bool RTFAttributes$AssertiveAttribute::set($MutableAttributeSet* target, int32_t parameter) {
	return false;
}

bool RTFAttributes$AssertiveAttribute::setDefault($MutableAttributeSet* target) {
	$nc(target)->removeAttribute(this->$RTFAttributes$GenericAttribute::swingName$);
	return true;
}

bool RTFAttributes$AssertiveAttribute::writeValue(Object$* value, $RTFGenerator* target, bool force) {
	if (value == nullptr) {
		return !force;
	}
	if ($nc($of(value))->equals(this->swingValue)) {
		$nc(target)->writeControlWord(this->$RTFAttributes$GenericAttribute::rtfName$);
		return true;
	}
	return !force;
}

RTFAttributes$AssertiveAttribute::RTFAttributes$AssertiveAttribute() {
}

$Class* RTFAttributes$AssertiveAttribute::load$($String* name, bool initialize) {
	$loadClass(RTFAttributes$AssertiveAttribute, name, initialize, &_RTFAttributes$AssertiveAttribute_ClassInfo_, allocate$RTFAttributes$AssertiveAttribute);
	return class$;
}

$Class* RTFAttributes$AssertiveAttribute::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax