#include <sun/print/ProxyPrintGraphics.h>

#include <java/awt/Graphics.h>
#include <java/awt/PrintJob.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/print/ProxyGraphics.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PrintGraphics = ::java::awt::PrintGraphics;
using $PrintJob = ::java::awt::PrintJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxyGraphics = ::sun::print::ProxyGraphics;

namespace sun {
	namespace print {

$FieldInfo _ProxyPrintGraphics_FieldInfo_[] = {
	{"printJob", "Ljava/awt/PrintJob;", nullptr, $PRIVATE, $field(ProxyPrintGraphics, printJob)},
	{}
};

$MethodInfo _ProxyPrintGraphics_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Graphics;Ljava/awt/PrintJob;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyPrintGraphics::*)($Graphics*,$PrintJob*)>(&ProxyPrintGraphics::init$))},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"create", "(IIII)Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getPrintJob", "()Ljava/awt/PrintJob;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProxyPrintGraphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.ProxyPrintGraphics",
	"sun.print.ProxyGraphics",
	"java.awt.PrintGraphics",
	_ProxyPrintGraphics_FieldInfo_,
	_ProxyPrintGraphics_MethodInfo_
};

$Object* allocate$ProxyPrintGraphics($Class* clazz) {
	return $of($alloc(ProxyPrintGraphics));
}

void ProxyPrintGraphics::finalize() {
	this->$ProxyGraphics::finalize();
}

$String* ProxyPrintGraphics::toString() {
	 return this->$ProxyGraphics::toString();
}

int32_t ProxyPrintGraphics::hashCode() {
	 return this->$ProxyGraphics::hashCode();
}

bool ProxyPrintGraphics::equals(Object$* arg0) {
	 return this->$ProxyGraphics::equals(arg0);
}

$Object* ProxyPrintGraphics::clone() {
	 return this->$ProxyGraphics::clone();
}

void ProxyPrintGraphics::init$($Graphics* graphics, $PrintJob* thePrintJob) {
	$ProxyGraphics::init$(graphics);
	$set(this, printJob, thePrintJob);
}

$PrintJob* ProxyPrintGraphics::getPrintJob() {
	return this->printJob;
}

$Graphics* ProxyPrintGraphics::create() {
	return $new(ProxyPrintGraphics, $($nc($(getGraphics()))->create()), this->printJob);
}

$Graphics* ProxyPrintGraphics::create(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Graphics, g, $nc($(getGraphics()))->create(x, y, width, height));
	return $new(ProxyPrintGraphics, g, this->printJob);
}

$Graphics* ProxyPrintGraphics::getGraphics() {
	return $ProxyGraphics::getGraphics();
}

void ProxyPrintGraphics::dispose() {
	$ProxyGraphics::dispose();
}

ProxyPrintGraphics::ProxyPrintGraphics() {
}

$Class* ProxyPrintGraphics::load$($String* name, bool initialize) {
	$loadClass(ProxyPrintGraphics, name, initialize, &_ProxyPrintGraphics_ClassInfo_, allocate$ProxyPrintGraphics);
	return class$;
}

$Class* ProxyPrintGraphics::class$ = nullptr;

	} // print
} // sun