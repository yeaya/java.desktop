#include <javax/print/attribute/UnmodifiableSetException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _UnmodifiableSetException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmodifiableSetException, serialVersionUID)},
	{}
};

$MethodInfo _UnmodifiableSetException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnmodifiableSetException::*)()>(&UnmodifiableSetException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnmodifiableSetException::*)($String*)>(&UnmodifiableSetException::init$))},
	{}
};

$ClassInfo _UnmodifiableSetException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.UnmodifiableSetException",
	"java.lang.RuntimeException",
	nullptr,
	_UnmodifiableSetException_FieldInfo_,
	_UnmodifiableSetException_MethodInfo_
};

$Object* allocate$UnmodifiableSetException($Class* clazz) {
	return $of($alloc(UnmodifiableSetException));
}

void UnmodifiableSetException::init$() {
	$RuntimeException::init$();
}

void UnmodifiableSetException::init$($String* message) {
	$RuntimeException::init$(message);
}

UnmodifiableSetException::UnmodifiableSetException() {
}

UnmodifiableSetException::UnmodifiableSetException(const UnmodifiableSetException& e) : $RuntimeException(e) {
}

void UnmodifiableSetException::throw$() {
	throw *this;
}

$Class* UnmodifiableSetException::load$($String* name, bool initialize) {
	$loadClass(UnmodifiableSetException, name, initialize, &_UnmodifiableSetException_ClassInfo_, allocate$UnmodifiableSetException);
	return class$;
}

$Class* UnmodifiableSetException::class$ = nullptr;

		} // attribute
	} // print
} // javax