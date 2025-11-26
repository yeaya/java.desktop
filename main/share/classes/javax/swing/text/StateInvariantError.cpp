#include <javax/swing/text/StateInvariantError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StateInvariantError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StateInvariantError::*)($String*)>(&StateInvariantError::init$))},
	{}
};

$ClassInfo _StateInvariantError_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StateInvariantError",
	"java.lang.Error",
	nullptr,
	nullptr,
	_StateInvariantError_MethodInfo_
};

$Object* allocate$StateInvariantError($Class* clazz) {
	return $of($alloc(StateInvariantError));
}

void StateInvariantError::init$($String* s) {
	$Error::init$(s);
}

StateInvariantError::StateInvariantError() {
}

StateInvariantError::StateInvariantError(const StateInvariantError& e) : $Error(e) {
}

void StateInvariantError::throw$() {
	throw *this;
}

$Class* StateInvariantError::load$($String* name, bool initialize) {
	$loadClass(StateInvariantError, name, initialize, &_StateInvariantError_ClassInfo_, allocate$StateInvariantError);
	return class$;
}

$Class* StateInvariantError::class$ = nullptr;

		} // text
	} // swing
} // javax