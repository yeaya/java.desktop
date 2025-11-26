#include <javax/swing/undo/CannotRedoException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace swing {
		namespace undo {

$MethodInfo _CannotRedoException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CannotRedoException::*)()>(&CannotRedoException::init$))},
	{}
};

$ClassInfo _CannotRedoException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.undo.CannotRedoException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_CannotRedoException_MethodInfo_
};

$Object* allocate$CannotRedoException($Class* clazz) {
	return $of($alloc(CannotRedoException));
}

void CannotRedoException::init$() {
	$RuntimeException::init$();
}

CannotRedoException::CannotRedoException() {
}

CannotRedoException::CannotRedoException(const CannotRedoException& e) : $RuntimeException(e) {
}

void CannotRedoException::throw$() {
	throw *this;
}

$Class* CannotRedoException::load$($String* name, bool initialize) {
	$loadClass(CannotRedoException, name, initialize, &_CannotRedoException_ClassInfo_, allocate$CannotRedoException);
	return class$;
}

$Class* CannotRedoException::class$ = nullptr;

		} // undo
	} // swing
} // javax