#include <apple/laf/JRSUIConstants$PropertyEncoding.h>

#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$PropertyEncoding_FieldInfo_[] = {
	{"mask", "J", nullptr, $FINAL, $field(JRSUIConstants$PropertyEncoding, mask)},
	{"shift", "B", nullptr, $FINAL, $field(JRSUIConstants$PropertyEncoding, shift)},
	{}
};

$MethodInfo _JRSUIConstants$PropertyEncoding_MethodInfo_[] = {
	{"<init>", "(JB)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$PropertyEncoding::*)(int64_t,int8_t)>(&JRSUIConstants$PropertyEncoding::init$))},
	{}
};

$InnerClassInfo _JRSUIConstants$PropertyEncoding_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$PropertyEncoding", "apple.laf.JRSUIConstants", "PropertyEncoding", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$PropertyEncoding_ClassInfo_ = {
	$ACC_SUPER,
	"apple.laf.JRSUIConstants$PropertyEncoding",
	"java.lang.Object",
	nullptr,
	_JRSUIConstants$PropertyEncoding_FieldInfo_,
	_JRSUIConstants$PropertyEncoding_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$PropertyEncoding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$PropertyEncoding($Class* clazz) {
	return $of($alloc(JRSUIConstants$PropertyEncoding));
}

void JRSUIConstants$PropertyEncoding::init$(int64_t mask, int8_t shift) {
	this->mask = mask;
	this->shift = shift;
}

JRSUIConstants$PropertyEncoding::JRSUIConstants$PropertyEncoding() {
}

$Class* JRSUIConstants$PropertyEncoding::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$PropertyEncoding, name, initialize, &_JRSUIConstants$PropertyEncoding_ClassInfo_, allocate$JRSUIConstants$PropertyEncoding);
	return class$;
}

$Class* JRSUIConstants$PropertyEncoding::class$ = nullptr;

	} // laf
} // apple