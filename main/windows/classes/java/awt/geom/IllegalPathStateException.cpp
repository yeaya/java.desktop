#include <java/awt/geom/IllegalPathStateException.h>

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
		namespace geom {

$FieldInfo _IllegalPathStateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalPathStateException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalPathStateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalPathStateException::*)()>(&IllegalPathStateException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalPathStateException::*)($String*)>(&IllegalPathStateException::init$))},
	{}
};

$ClassInfo _IllegalPathStateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.IllegalPathStateException",
	"java.lang.RuntimeException",
	nullptr,
	_IllegalPathStateException_FieldInfo_,
	_IllegalPathStateException_MethodInfo_
};

$Object* allocate$IllegalPathStateException($Class* clazz) {
	return $of($alloc(IllegalPathStateException));
}

void IllegalPathStateException::init$() {
	$RuntimeException::init$();
}

void IllegalPathStateException::init$($String* s) {
	$RuntimeException::init$(s);
}

IllegalPathStateException::IllegalPathStateException() {
}

IllegalPathStateException::IllegalPathStateException(const IllegalPathStateException& e) {
}

IllegalPathStateException IllegalPathStateException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalPathStateException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalPathStateException::load$($String* name, bool initialize) {
	$loadClass(IllegalPathStateException, name, initialize, &_IllegalPathStateException_ClassInfo_, allocate$IllegalPathStateException);
	return class$;
}

$Class* IllegalPathStateException::class$ = nullptr;

		} // geom
	} // awt
} // java