#include <java/awt/color/CMMException.h>

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

CMMException::CMMException(const CMMException& e) : $RuntimeException(e) {
}

void CMMException::throw$() {
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