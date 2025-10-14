#include <java/awt/print/PrinterException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _PrinterException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterException, serialVersionUID)},
	{}
};

$MethodInfo _PrinterException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrinterException::*)()>(&PrinterException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterException::*)($String*)>(&PrinterException::init$))},
	{}
};

$ClassInfo _PrinterException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.print.PrinterException",
	"java.lang.Exception",
	nullptr,
	_PrinterException_FieldInfo_,
	_PrinterException_MethodInfo_
};

$Object* allocate$PrinterException($Class* clazz) {
	return $of($alloc(PrinterException));
}

void PrinterException::init$() {
	$Exception::init$();
}

void PrinterException::init$($String* msg) {
	$Exception::init$(msg);
}

PrinterException::PrinterException() {
}

PrinterException::PrinterException(const PrinterException& e) {
}

PrinterException PrinterException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PrinterException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PrinterException::load$($String* name, bool initialize) {
	$loadClass(PrinterException, name, initialize, &_PrinterException_ClassInfo_, allocate$PrinterException);
	return class$;
}

$Class* PrinterException::class$ = nullptr;

		} // print
	} // awt
} // java