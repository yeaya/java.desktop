#include <apple/laf/JRSUIFocus.h>

#include <jcpp.h>

#undef NULL_CG_REF
#undef NULL_PTR
#undef RING_ABOVE
#undef RING_BELOW
#undef RING_ONLY
#undef SUCCESS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIFocus_FieldInfo_[] = {
	{"SUCCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIFocus, SUCCESS)},
	{"NULL_PTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIFocus, NULL_PTR)},
	{"NULL_CG_REF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIFocus, NULL_CG_REF)},
	{"RING_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIFocus, RING_ONLY)},
	{"RING_ABOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIFocus, RING_ABOVE)},
	{"RING_BELOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIFocus, RING_BELOW)},
	{"cgContext", "J", nullptr, $FINAL, $field(JRSUIFocus, cgContext)},
	{}
};

$MethodInfo _JRSUIFocus_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIFocus::*)(int64_t)>(&JRSUIFocus::init$))},
	{"beginFocus", "(I)V", nullptr, $PUBLIC},
	{"beginNativeFocus", "(JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&JRSUIFocus::beginNativeFocus))},
	{"endFocus", "()V", nullptr, $PUBLIC},
	{"endNativeFocus", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&JRSUIFocus::endNativeFocus))},
	{"testForFailure", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&JRSUIFocus::testForFailure))},
	{}
};

#define _METHOD_INDEX_beginNativeFocus 2
#define _METHOD_INDEX_endNativeFocus 4

$ClassInfo _JRSUIFocus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIFocus",
	"java.lang.Object",
	nullptr,
	_JRSUIFocus_FieldInfo_,
	_JRSUIFocus_MethodInfo_
};

$Object* allocate$JRSUIFocus($Class* clazz) {
	return $of($alloc(JRSUIFocus));
}

int32_t JRSUIFocus::beginNativeFocus(int64_t cgContext, int32_t ringStyle) {
	$init(JRSUIFocus);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIFocus, beginNativeFocus, int32_t, int64_t cgContext, int32_t ringStyle);
	$ret = $invokeNativeStatic(cgContext, ringStyle);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIFocus::endNativeFocus(int64_t cgContext) {
	$init(JRSUIFocus);
	int32_t $ret = 0;
	$prepareNativeStatic(JRSUIFocus, endNativeFocus, int32_t, int64_t cgContext);
	$ret = $invokeNativeStatic(cgContext);
	$finishNativeStatic();
	return $ret;
}

void JRSUIFocus::init$(int64_t cgContext) {
	this->cgContext = cgContext;
}

void JRSUIFocus::beginFocus(int32_t ringStyle) {
	testForFailure(beginNativeFocus(this->cgContext, ringStyle));
}

void JRSUIFocus::endFocus() {
	testForFailure(endNativeFocus(this->cgContext));
}

void JRSUIFocus::testForFailure(int32_t status) {
	$useLocalCurrentObjectStackCache();
	if (status == JRSUIFocus::SUCCESS) {
		return;
	}
	switch (status) {
	case JRSUIFocus::NULL_PTR:
		{
			$throwNew($RuntimeException, "Null pointer exception in native JRSUI"_s);
		}
	case JRSUIFocus::NULL_CG_REF:
		{
			$throwNew($RuntimeException, "Null CG reference in native JRSUI"_s);
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"JRSUI draw focus problem: "_s, $$str(status)}));
		}
	}
}

JRSUIFocus::JRSUIFocus() {
}

$Class* JRSUIFocus::load$($String* name, bool initialize) {
	$loadClass(JRSUIFocus, name, initialize, &_JRSUIFocus_ClassInfo_, allocate$JRSUIFocus);
	return class$;
}

$Class* JRSUIFocus::class$ = nullptr;

	} // laf
} // apple