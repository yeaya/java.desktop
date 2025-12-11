#include <apple/laf/JRSUIConstants$DoubleValue.h>

#include <apple/laf/JRSUIConstants.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

#undef TYPE_CODE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$DoubleValue_FieldInfo_[] = {
	{"TYPE_CODE", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JRSUIConstants$DoubleValue, TYPE_CODE)},
	{"doubleValue", "D", nullptr, $FINAL, $field(JRSUIConstants$DoubleValue, doubleValue)},
	{}
};

$MethodInfo _JRSUIConstants$DoubleValue_MethodInfo_[] = {
	{"<init>", "(D)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$DoubleValue::*)(double)>(&JRSUIConstants$DoubleValue::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getTypeCode", "()B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"putValueInBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIConstants$DoubleValue_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$DoubleValue", "apple.laf.JRSUIConstants", "DoubleValue", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$DoubleValue_ClassInfo_ = {
	$ACC_SUPER,
	"apple.laf.JRSUIConstants$DoubleValue",
	"java.lang.Object",
	nullptr,
	_JRSUIConstants$DoubleValue_FieldInfo_,
	_JRSUIConstants$DoubleValue_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$DoubleValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$DoubleValue($Class* clazz) {
	return $of($alloc(JRSUIConstants$DoubleValue));
}

void JRSUIConstants$DoubleValue::init$(double doubleValue) {
	this->doubleValue = doubleValue;
}

int8_t JRSUIConstants$DoubleValue::getTypeCode() {
	return JRSUIConstants$DoubleValue::TYPE_CODE;
}

void JRSUIConstants$DoubleValue::putValueInBuffer($ByteBuffer* buffer) {
	$nc(buffer)->putDouble(this->doubleValue);
}

bool JRSUIConstants$DoubleValue::equals(Object$* obj) {
	return ($instanceOf(JRSUIConstants$DoubleValue, obj)) && ($nc(($cast(JRSUIConstants$DoubleValue, obj)))->doubleValue == this->doubleValue);
}

int32_t JRSUIConstants$DoubleValue::hashCode() {
	int64_t bits = $Double::doubleToLongBits(this->doubleValue);
	return (int32_t)(bits ^ ((int64_t)((uint64_t)bits >> 32)));
}

$String* JRSUIConstants$DoubleValue::toString() {
	return $Double::toString(this->doubleValue);
}

JRSUIConstants$DoubleValue::JRSUIConstants$DoubleValue() {
}

$Class* JRSUIConstants$DoubleValue::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$DoubleValue, name, initialize, &_JRSUIConstants$DoubleValue_ClassInfo_, allocate$JRSUIConstants$DoubleValue);
	return class$;
}

$Class* JRSUIConstants$DoubleValue::class$ = nullptr;

	} // laf
} // apple