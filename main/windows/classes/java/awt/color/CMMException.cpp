#include <java/awt/color/CMMException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _CMMException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CMMException, serialVersionUID)},
	{}
};

$MethodInfo _CMMException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CMMException::*)($String*)>(&CMMException::init$))},
	{}
};

$ClassInfo _CMMException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.color.CMMException",
	"java.lang.RuntimeException",
	nullptr,
	_CMMException_FieldInfo_,
	_CMMException_MethodInfo_
};

$Object* allocate$CMMException($Class* clazz) {
	return $of($alloc(CMMException));
}

void CMMException::init$($String* s) {
	$RuntimeException::init$(s);
}

CMMException::CMMException() {
}

CMMException::CMMException(const CMMException& e) {
}

CMMException CMMException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CMMException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CMMException::load$($String* name, bool initialize) {
	$loadClass(CMMException, name, initialize, &_CMMException_ClassInfo_, allocate$CMMException);
	return class$;
}

$Class* CMMException::class$ = nullptr;

		} // color
	} // awt
} // java