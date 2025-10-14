#include <java/awt/print/PrinterIOException.h>

#include <java/awt/print/PrinterException.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrinterException = ::java::awt::print::PrinterException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _PrinterIOException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterIOException, serialVersionUID)},
	{"mException", "Ljava/io/IOException;", nullptr, $PRIVATE, $field(PrinterIOException, mException)},
	{}
};

$MethodInfo _PrinterIOException_MethodInfo_[] = {
	{"<init>", "(Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterIOException::*)($IOException*)>(&PrinterIOException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getIOException", "()Ljava/io/IOException;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterIOException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.print.PrinterIOException",
	"java.awt.print.PrinterException",
	nullptr,
	_PrinterIOException_FieldInfo_,
	_PrinterIOException_MethodInfo_
};

$Object* allocate$PrinterIOException($Class* clazz) {
	return $of($alloc(PrinterIOException));
}

void PrinterIOException::init$($IOException* exception) {
	$PrinterException::init$();
	initCause(nullptr);
	$set(this, mException, exception);
}

$IOException* PrinterIOException::getIOException() {
	return this->mException;
}

$Throwable* PrinterIOException::getCause() {
	return this->mException;
}

PrinterIOException::PrinterIOException() {
}

PrinterIOException::PrinterIOException(const PrinterIOException& e) {
}

PrinterIOException PrinterIOException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PrinterIOException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PrinterIOException::load$($String* name, bool initialize) {
	$loadClass(PrinterIOException, name, initialize, &_PrinterIOException_ClassInfo_, allocate$PrinterIOException);
	return class$;
}

$Class* PrinterIOException::class$ = nullptr;

		} // print
	} // awt
} // java