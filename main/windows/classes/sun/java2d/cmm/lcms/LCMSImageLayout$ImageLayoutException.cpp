#include <sun/java2d/cmm/lcms/LCMSImageLayout$ImageLayoutException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LCMSImageLayout = ::sun::java2d::cmm::lcms::LCMSImageLayout;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$MethodInfo _LCMSImageLayout$ImageLayoutException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSImageLayout$ImageLayoutException::*)($String*)>(&LCMSImageLayout$ImageLayoutException::init$))},
	{}
};

$InnerClassInfo _LCMSImageLayout$ImageLayoutException_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException", "sun.java2d.cmm.lcms.LCMSImageLayout", "ImageLayoutException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LCMSImageLayout$ImageLayoutException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_LCMSImageLayout$ImageLayoutException_MethodInfo_,
	nullptr,
	nullptr,
	_LCMSImageLayout$ImageLayoutException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.cmm.lcms.LCMSImageLayout"
};

$Object* allocate$LCMSImageLayout$ImageLayoutException($Class* clazz) {
	return $of($alloc(LCMSImageLayout$ImageLayoutException));
}

void LCMSImageLayout$ImageLayoutException::init$($String* message) {
	$Exception::init$(message);
}

LCMSImageLayout$ImageLayoutException::LCMSImageLayout$ImageLayoutException() {
}

LCMSImageLayout$ImageLayoutException::LCMSImageLayout$ImageLayoutException(const LCMSImageLayout$ImageLayoutException& e) {
}

LCMSImageLayout$ImageLayoutException LCMSImageLayout$ImageLayoutException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LCMSImageLayout$ImageLayoutException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LCMSImageLayout$ImageLayoutException::load$($String* name, bool initialize) {
	$loadClass(LCMSImageLayout$ImageLayoutException, name, initialize, &_LCMSImageLayout$ImageLayoutException_ClassInfo_, allocate$LCMSImageLayout$ImageLayoutException);
	return class$;
}

$Class* LCMSImageLayout$ImageLayoutException::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun