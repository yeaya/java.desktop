#include <sun/print/PrinterJobWrapper.h>

#include <java/awt/print/PrinterJob.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace sun {
	namespace print {

$FieldInfo _PrinterJobWrapper_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterJobWrapper, serialVersionUID)},
	{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE, $field(PrinterJobWrapper, job)},
	{}
};

$MethodInfo _PrinterJobWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/print/PrinterJob;)V", nullptr, $PUBLIC, $method(static_cast<void(PrinterJobWrapper::*)($PrinterJob*)>(&PrinterJobWrapper::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrinterJobWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PrinterJobWrapper",
	"java.lang.Object",
	"javax.print.attribute.PrintRequestAttribute",
	_PrinterJobWrapper_FieldInfo_,
	_PrinterJobWrapper_MethodInfo_
};

$Object* allocate$PrinterJobWrapper($Class* clazz) {
	return $of($alloc(PrinterJobWrapper));
}

void PrinterJobWrapper::init$($PrinterJob* job) {
	$set(this, job, job);
}

$PrinterJob* PrinterJobWrapper::getPrinterJob() {
	return this->job;
}

$Class* PrinterJobWrapper::getCategory() {
	return PrinterJobWrapper::class$;
}

$String* PrinterJobWrapper::getName() {
	return "printerjob-wrapper"_s;
}

$String* PrinterJobWrapper::toString() {
	return $str({"printerjob-wrapper: "_s, $($nc($of(this->job))->toString())});
}

int32_t PrinterJobWrapper::hashCode() {
	return $nc($of(this->job))->hashCode();
}

PrinterJobWrapper::PrinterJobWrapper() {
}

$Class* PrinterJobWrapper::load$($String* name, bool initialize) {
	$loadClass(PrinterJobWrapper, name, initialize, &_PrinterJobWrapper_ClassInfo_, allocate$PrinterJobWrapper);
	return class$;
}

$Class* PrinterJobWrapper::class$ = nullptr;

	} // print
} // sun