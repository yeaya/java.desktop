#include <java/awt/print/PrinterAbortException.h>

#include <java/awt/print/PrinterException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrinterException = ::java::awt::print::PrinterException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _PrinterAbortException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterAbortException, serialVersionUID)},
	{}
};

$MethodInfo _PrinterAbortException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrinterAbortException::*)()>(&PrinterAbortException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterAbortException::*)($String*)>(&PrinterAbortException::init$))},
	{}
};

$ClassInfo _PrinterAbortException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.print.PrinterAbortException",
	"java.awt.print.PrinterException",
	nullptr,
	_PrinterAbortException_FieldInfo_,
	_PrinterAbortException_MethodInfo_
};

$Object* allocate$PrinterAbortException($Class* clazz) {
	return $of($alloc(PrinterAbortException));
}

void PrinterAbortException::init$() {
	$PrinterException::init$();
}

void PrinterAbortException::init$($String* msg) {
	$PrinterException::init$(msg);
}

PrinterAbortException::PrinterAbortException() {
}

PrinterAbortException::PrinterAbortException(const PrinterAbortException& e) {
}

PrinterAbortException PrinterAbortException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PrinterAbortException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PrinterAbortException::load$($String* name, bool initialize) {
	$loadClass(PrinterAbortException, name, initialize, &_PrinterAbortException_ClassInfo_, allocate$PrinterAbortException);
	return class$;
}

$Class* PrinterAbortException::class$ = nullptr;

		} // print
	} // awt
} // java