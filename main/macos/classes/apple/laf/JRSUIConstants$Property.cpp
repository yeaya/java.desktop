#include <apple/laf/JRSUIConstants$Property.h>

#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Property_FieldInfo_[] = {
	{"encoding", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $FINAL, $field(JRSUIConstants$Property, encoding)},
	{"value", "J", nullptr, $FINAL, $field(JRSUIConstants$Property, value)},
	{"ordinal", "B", nullptr, $FINAL, $field(JRSUIConstants$Property, ordinal)},
	{}
};

$MethodInfo _JRSUIConstants$Property_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIConstants$PropertyEncoding;B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Property::*)($JRSUIConstants$PropertyEncoding*,int8_t)>(&JRSUIConstants$Property::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Property_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Property_ClassInfo_ = {
	$ACC_SUPER,
	"apple.laf.JRSUIConstants$Property",
	"java.lang.Object",
	nullptr,
	_JRSUIConstants$Property_FieldInfo_,
	_JRSUIConstants$Property_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Property_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Property($Class* clazz) {
	return $of($alloc(JRSUIConstants$Property));
}

void JRSUIConstants$Property::init$($JRSUIConstants$PropertyEncoding* encoding, int8_t ordinal) {
	$set(this, encoding, encoding);
	this->value = $sl((int64_t)ordinal, $nc(encoding)->shift);
	this->ordinal = ordinal;
}

int64_t JRSUIConstants$Property::apply(int64_t encodedState) {
	return ((int64_t)(encodedState & (uint64_t)~$nc(this->encoding)->mask)) | this->value;
}

$String* JRSUIConstants$Property::toString() {
	return $of(this)->getClass()->getSimpleName();
}

JRSUIConstants$Property::JRSUIConstants$Property() {
}

$Class* JRSUIConstants$Property::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Property, name, initialize, &_JRSUIConstants$Property_ClassInfo_, allocate$JRSUIConstants$Property);
	return class$;
}

$Class* JRSUIConstants$Property::class$ = nullptr;

	} // laf
} // apple