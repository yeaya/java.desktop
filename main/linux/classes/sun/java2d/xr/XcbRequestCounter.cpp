#include <sun/java2d/xr/XcbRequestCounter.h>

#include <jcpp.h>

#undef MAX_UINT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XcbRequestCounter_FieldInfo_[] = {
	{"MAX_UINT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XcbRequestCounter, MAX_UINT)},
	{"value", "J", nullptr, 0, $field(XcbRequestCounter, value)},
	{}
};

$MethodInfo _XcbRequestCounter_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XcbRequestCounter::*)(int64_t)>(&XcbRequestCounter::init$))},
	{"add", "(J)V", nullptr, $PUBLIC},
	{"getValue", "()J", nullptr, $PUBLIC},
	{"setValue", "(J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XcbRequestCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XcbRequestCounter",
	"java.lang.Object",
	nullptr,
	_XcbRequestCounter_FieldInfo_,
	_XcbRequestCounter_MethodInfo_
};

$Object* allocate$XcbRequestCounter($Class* clazz) {
	return $of($alloc(XcbRequestCounter));
}

void XcbRequestCounter::init$(int64_t value) {
	this->value = value;
}

void XcbRequestCounter::setValue(int64_t value) {
	this->value = value;
}

int64_t XcbRequestCounter::getValue() {
	return this->value;
}

void XcbRequestCounter::add(int64_t v) {
	this->value += v;
	if (this->value > XcbRequestCounter::MAX_UINT) {
		this->value = 0;
	}
}

XcbRequestCounter::XcbRequestCounter() {
}

$Class* XcbRequestCounter::load$($String* name, bool initialize) {
	$loadClass(XcbRequestCounter, name, initialize, &_XcbRequestCounter_ClassInfo_, allocate$XcbRequestCounter);
	return class$;
}

$Class* XcbRequestCounter::class$ = nullptr;

		} // xr
	} // java2d
} // sun