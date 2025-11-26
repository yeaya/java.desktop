#include <java/awt/geom/NoninvertibleTransformException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _NoninvertibleTransformException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoninvertibleTransformException, serialVersionUID)},
	{}
};

$MethodInfo _NoninvertibleTransformException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoninvertibleTransformException::*)($String*)>(&NoninvertibleTransformException::init$))},
	{}
};

$ClassInfo _NoninvertibleTransformException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.NoninvertibleTransformException",
	"java.lang.Exception",
	nullptr,
	_NoninvertibleTransformException_FieldInfo_,
	_NoninvertibleTransformException_MethodInfo_
};

$Object* allocate$NoninvertibleTransformException($Class* clazz) {
	return $of($alloc(NoninvertibleTransformException));
}

void NoninvertibleTransformException::init$($String* s) {
	$Exception::init$(s);
}

NoninvertibleTransformException::NoninvertibleTransformException() {
}

NoninvertibleTransformException::NoninvertibleTransformException(const NoninvertibleTransformException& e) : $Exception(e) {
}

void NoninvertibleTransformException::throw$() {
	throw *this;
}

$Class* NoninvertibleTransformException::load$($String* name, bool initialize) {
	$loadClass(NoninvertibleTransformException, name, initialize, &_NoninvertibleTransformException_ClassInfo_, allocate$NoninvertibleTransformException);
	return class$;
}

$Class* NoninvertibleTransformException::class$ = nullptr;

		} // geom
	} // awt
} // java