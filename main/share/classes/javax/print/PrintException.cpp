#include <javax/print/PrintException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$FieldInfo _PrintException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintException, serialVersionUID)},
	{}
};

$MethodInfo _PrintException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintException::*)()>(&PrintException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintException::*)($String*)>(&PrintException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintException::*)($Exception*)>(&PrintException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintException::*)($String*,$Exception*)>(&PrintException::init$))},
	{}
};

$ClassInfo _PrintException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.PrintException",
	"java.lang.Exception",
	nullptr,
	_PrintException_FieldInfo_,
	_PrintException_MethodInfo_
};

$Object* allocate$PrintException($Class* clazz) {
	return $of($alloc(PrintException));
}

void PrintException::init$() {
	$Exception::init$();
}

void PrintException::init$($String* s) {
	$Exception::init$(s);
}

void PrintException::init$($Exception* e) {
	$Exception::init$(static_cast<$Throwable*>(e));
}

void PrintException::init$($String* s, $Exception* e) {
	$Exception::init$(s, e);
}

PrintException::PrintException() {
}

PrintException::PrintException(const PrintException& e) : $Exception(e) {
}

void PrintException::throw$() {
	throw *this;
}

$Class* PrintException::load$($String* name, bool initialize) {
	$loadClass(PrintException, name, initialize, &_PrintException_ClassInfo_, allocate$PrintException);
	return class$;
}

$Class* PrintException::class$ = nullptr;

	} // print
} // javax