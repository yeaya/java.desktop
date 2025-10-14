#include <sun/print/PrintJobFlavorException.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintException.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $FlavorException = ::javax::print::FlavorException;
using $PrintException = ::javax::print::PrintException;

namespace sun {
	namespace print {

$FieldInfo _PrintJobFlavorException_FieldInfo_[] = {
	{"flavor", "Ljavax/print/DocFlavor;", nullptr, $PRIVATE, $field(PrintJobFlavorException, flavor)},
	{}
};

$MethodInfo _PrintJobFlavorException_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljavax/print/DocFlavor;)V", nullptr, 0, $method(static_cast<void(PrintJobFlavorException::*)($String*,$DocFlavor*)>(&PrintJobFlavorException::init$))},
	{"getUnsupportedFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintJobFlavorException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PrintJobFlavorException",
	"javax.print.PrintException",
	"javax.print.FlavorException",
	_PrintJobFlavorException_FieldInfo_,
	_PrintJobFlavorException_MethodInfo_
};

$Object* allocate$PrintJobFlavorException($Class* clazz) {
	return $of($alloc(PrintJobFlavorException));
}

$String* PrintJobFlavorException::toString() {
	 return this->$PrintException::toString();
}

int32_t PrintJobFlavorException::hashCode() {
	 return this->$PrintException::hashCode();
}

bool PrintJobFlavorException::equals(Object$* arg0) {
	 return this->$PrintException::equals(arg0);
}

$Object* PrintJobFlavorException::clone() {
	 return this->$PrintException::clone();
}

void PrintJobFlavorException::finalize() {
	this->$PrintException::finalize();
}

void PrintJobFlavorException::init$($String* s, $DocFlavor* f) {
	$PrintException::init$(s);
	$set(this, flavor, f);
}

$DocFlavorArray* PrintJobFlavorException::getUnsupportedFlavors() {
	$var($DocFlavorArray, flavors, $new($DocFlavorArray, {this->flavor}));
	return flavors;
}

PrintJobFlavorException::PrintJobFlavorException() {
}

PrintJobFlavorException::PrintJobFlavorException(const PrintJobFlavorException& e) {
}

PrintJobFlavorException PrintJobFlavorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PrintJobFlavorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PrintJobFlavorException::load$($String* name, bool initialize) {
	$loadClass(PrintJobFlavorException, name, initialize, &_PrintJobFlavorException_ClassInfo_, allocate$PrintJobFlavorException);
	return class$;
}

$Class* PrintJobFlavorException::class$ = nullptr;

	} // print
} // sun