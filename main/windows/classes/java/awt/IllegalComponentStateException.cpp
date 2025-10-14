#include <java/awt/IllegalComponentStateException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _IllegalComponentStateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalComponentStateException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalComponentStateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalComponentStateException::*)()>(&IllegalComponentStateException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalComponentStateException::*)($String*)>(&IllegalComponentStateException::init$))},
	{}
};

$ClassInfo _IllegalComponentStateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.IllegalComponentStateException",
	"java.lang.IllegalStateException",
	nullptr,
	_IllegalComponentStateException_FieldInfo_,
	_IllegalComponentStateException_MethodInfo_
};

$Object* allocate$IllegalComponentStateException($Class* clazz) {
	return $of($alloc(IllegalComponentStateException));
}

void IllegalComponentStateException::init$() {
	$IllegalStateException::init$();
}

void IllegalComponentStateException::init$($String* s) {
	$IllegalStateException::init$(s);
}

IllegalComponentStateException::IllegalComponentStateException() {
}

IllegalComponentStateException::IllegalComponentStateException(const IllegalComponentStateException& e) {
}

IllegalComponentStateException IllegalComponentStateException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalComponentStateException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalComponentStateException::load$($String* name, bool initialize) {
	$loadClass(IllegalComponentStateException, name, initialize, &_IllegalComponentStateException_ClassInfo_, allocate$IllegalComponentStateException);
	return class$;
}

$Class* IllegalComponentStateException::class$ = nullptr;

	} // awt
} // java