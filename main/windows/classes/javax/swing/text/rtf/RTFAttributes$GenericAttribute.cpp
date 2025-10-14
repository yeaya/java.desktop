#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>

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
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $RTFAttributes = ::javax::swing::text::rtf::RTFAttributes;
using $RTFGenerator = ::javax::swing::text::rtf::RTFGenerator;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFAttributes$GenericAttribute_FieldInfo_[] = {
	{"domain", "I", nullptr, 0, $field(RTFAttributes$GenericAttribute, domain$)},
	{"swingName", "Ljava/lang/Object;", nullptr, 0, $field(RTFAttributes$GenericAttribute, swingName$)},
	{"rtfName", "Ljava/lang/String;", nullptr, 0, $field(RTFAttributes$GenericAttribute, rtfName$)},
	{}
};

$MethodInfo _RTFAttributes$GenericAttribute_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(RTFAttributes$GenericAttribute::*)(int32_t,Object$*,$String*)>(&RTFAttributes$GenericAttribute::init$))},
	{"domain", "()I", nullptr, $PUBLIC},
	{"rtfName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $ABSTRACT},
	{"set", "(Ljavax/swing/text/MutableAttributeSet;I)Z", nullptr, $ABSTRACT},
	{"setDefault", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $ABSTRACT},
	{"swingName", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"write", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeValue", "(Ljava/lang/Object;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RTFAttributes$GenericAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFAttributes$GenericAttribute", "javax.swing.text.rtf.RTFAttributes", "GenericAttribute", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RTFAttributes$GenericAttribute_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.rtf.RTFAttributes$GenericAttribute",
	"java.lang.Object",
	nullptr,
	_RTFAttributes$GenericAttribute_FieldInfo_,
	_RTFAttributes$GenericAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_RTFAttributes$GenericAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFAttributes"
};

$Object* allocate$RTFAttributes$GenericAttribute($Class* clazz) {
	return $of($alloc(RTFAttributes$GenericAttribute));
}

void RTFAttributes$GenericAttribute::init$(int32_t d, Object$* s, $String* r) {
	this->domain$ = d;
	$set(this, swingName$, s);
	$set(this, rtfName$, r);
}

int32_t RTFAttributes$GenericAttribute::domain() {
	return this->domain$;
}

$Object* RTFAttributes$GenericAttribute::swingName() {
	return $of(this->swingName$);
}

$String* RTFAttributes$GenericAttribute::rtfName() {
	return this->rtfName$;
}

bool RTFAttributes$GenericAttribute::write($AttributeSet* source, $RTFGenerator* target, bool force) {
	return writeValue($($nc(source)->getAttribute(this->swingName$)), target, force);
}

bool RTFAttributes$GenericAttribute::writeValue(Object$* value, $RTFGenerator* target, bool force) {
	return false;
}

RTFAttributes$GenericAttribute::RTFAttributes$GenericAttribute() {
}

$Class* RTFAttributes$GenericAttribute::load$($String* name, bool initialize) {
	$loadClass(RTFAttributes$GenericAttribute, name, initialize, &_RTFAttributes$GenericAttribute_ClassInfo_, allocate$RTFAttributes$GenericAttribute);
	return class$;
}

$Class* RTFAttributes$GenericAttribute::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax