#include <javax/swing/undo/CannotUndoException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace swing {
		namespace undo {

$MethodInfo _CannotUndoException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CannotUndoException::*)()>(&CannotUndoException::init$))},
	{}
};

$ClassInfo _CannotUndoException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.undo.CannotUndoException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_CannotUndoException_MethodInfo_
};

$Object* allocate$CannotUndoException($Class* clazz) {
	return $of($alloc(CannotUndoException));
}

void CannotUndoException::init$() {
	$RuntimeException::init$();
}

CannotUndoException::CannotUndoException() {
}

CannotUndoException::CannotUndoException(const CannotUndoException& e) : $RuntimeException(e) {
}

void CannotUndoException::throw$() {
	throw *this;
}

$Class* CannotUndoException::load$($String* name, bool initialize) {
	$loadClass(CannotUndoException, name, initialize, &_CannotUndoException_ClassInfo_, allocate$CannotUndoException);
	return class$;
}

$Class* CannotUndoException::class$ = nullptr;

		} // undo
	} // swing
} // javax