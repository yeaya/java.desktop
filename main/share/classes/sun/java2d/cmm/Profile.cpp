#include <sun/java2d/cmm/Profile.h>

#include <java/awt/color/CMMException.h>
#include <jcpp.h>

using $CMMException = ::java::awt::color::CMMException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

$FieldInfo _Profile_FieldInfo_[] = {
	{"nativePtr", "J", nullptr, $PRIVATE | $FINAL, $field(Profile, nativePtr)},
	{}
};

$MethodInfo _Profile_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PROTECTED, $method(static_cast<void(Profile::*)(int64_t)>(&Profile::init$))},
	{"getNativePtr", "()J", nullptr, $PROTECTED | $FINAL, $method(static_cast<int64_t(Profile::*)()>(&Profile::getNativePtr))},
	{}
};

$ClassInfo _Profile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.cmm.Profile",
	"java.lang.Object",
	nullptr,
	_Profile_FieldInfo_,
	_Profile_MethodInfo_
};

$Object* allocate$Profile($Class* clazz) {
	return $of($alloc(Profile));
}

void Profile::init$(int64_t ptr) {
	this->nativePtr = ptr;
}

int64_t Profile::getNativePtr() {
	if (this->nativePtr == (int64_t)0) {
		$throwNew($CMMException, "Invalid profile: ptr is null"_s);
	}
	return this->nativePtr;
}

Profile::Profile() {
}

$Class* Profile::load$($String* name, bool initialize) {
	$loadClass(Profile, name, initialize, &_Profile_ClassInfo_, allocate$Profile);
	return class$;
}

$Class* Profile::class$ = nullptr;

		} // cmm
	} // java2d
} // sun