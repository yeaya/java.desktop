#include <javax/swing/UnsupportedLookAndFeelException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _UnsupportedLookAndFeelException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedLookAndFeelException::*)($String*)>(&UnsupportedLookAndFeelException::init$))},
	{}
};

$ClassInfo _UnsupportedLookAndFeelException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.UnsupportedLookAndFeelException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_UnsupportedLookAndFeelException_MethodInfo_
};

$Object* allocate$UnsupportedLookAndFeelException($Class* clazz) {
	return $of($alloc(UnsupportedLookAndFeelException));
}

void UnsupportedLookAndFeelException::init$($String* s) {
	$Exception::init$(s);
}

UnsupportedLookAndFeelException::UnsupportedLookAndFeelException() {
}

UnsupportedLookAndFeelException::UnsupportedLookAndFeelException(const UnsupportedLookAndFeelException& e) : $Exception(e) {
}

void UnsupportedLookAndFeelException::throw$() {
	throw *this;
}

$Class* UnsupportedLookAndFeelException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedLookAndFeelException, name, initialize, &_UnsupportedLookAndFeelException_ClassInfo_, allocate$UnsupportedLookAndFeelException);
	return class$;
}

$Class* UnsupportedLookAndFeelException::class$ = nullptr;

	} // swing
} // javax