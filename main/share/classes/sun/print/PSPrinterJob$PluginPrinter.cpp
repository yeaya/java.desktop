#include <sun/print/PSPrinterJob$PluginPrinter.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <sun/print/PSPrinterJob$EPSPrinter.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE
#undef PAGE_EXISTS

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PSPrinterJob$EPSPrinter = ::sun::print::PSPrinterJob$EPSPrinter;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$PluginPrinter_FieldInfo_[] = {
	{"epsPrinter", "Lsun/print/PSPrinterJob$EPSPrinter;", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, epsPrinter)},
	{"applet", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, applet)},
	{"stream", "Ljava/io/PrintStream;", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, stream)},
	{"epsTitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, epsTitle)},
	{"bx", "I", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, bx)},
	{"by", "I", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, by)},
	{"bw", "I", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, bw)},
	{"bh", "I", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, bh)},
	{"width", "I", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, width)},
	{"height", "I", nullptr, $PRIVATE, $field(PSPrinterJob$PluginPrinter, height)},
	{}
};

$MethodInfo _PSPrinterJob$PluginPrinter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/io/PrintStream;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(PSPrinterJob$PluginPrinter::*)($Component*,$PrintStream*,int32_t,int32_t,int32_t,int32_t)>(&PSPrinterJob$PluginPrinter::init$))},
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC},
	{"printAll", "()V", nullptr, $PUBLIC},
	{"printPluginApplet", "()V", nullptr, $PUBLIC},
	{"printPluginPSHeader", "()V", nullptr, $PUBLIC},
	{"printPluginPSTrailer", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PSPrinterJob$PluginPrinter_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$PluginPrinter", "sun.print.PSPrinterJob", "PluginPrinter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PSPrinterJob$PluginPrinter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PSPrinterJob$PluginPrinter",
	"java.lang.Object",
	"java.awt.print.Printable",
	_PSPrinterJob$PluginPrinter_FieldInfo_,
	_PSPrinterJob$PluginPrinter_MethodInfo_,
	nullptr,
	nullptr,
	_PSPrinterJob$PluginPrinter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$PluginPrinter($Class* clazz) {
	return $of($alloc(PSPrinterJob$PluginPrinter));
}

void PSPrinterJob$PluginPrinter::init$($Component* applet, $PrintStream* stream, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$set(this, applet, applet);
	$set(this, epsTitle, "Java Plugin Applet"_s);
	$set(this, stream, stream);
	this->bx = x;
	this->by = y;
	this->bw = w;
	this->bh = h;
	this->width = $nc($($nc(applet)->size()))->width;
	this->height = $nc($(applet->size()))->height;
	$set(this, epsPrinter, $new($PSPrinterJob$EPSPrinter, this, this->epsTitle, stream, 0, 0, this->width, this->height));
}

void PSPrinterJob$PluginPrinter::printPluginPSHeader() {
	$nc(this->stream)->println("%%BeginDocument: JavaPluginApplet"_s);
}

void PSPrinterJob$PluginPrinter::printPluginApplet() {
	try {
		$nc(this->epsPrinter)->print();
	} catch ($PrinterException& e) {
	}
}

void PSPrinterJob$PluginPrinter::printPluginPSTrailer() {
	$nc(this->stream)->println("%%EndDocument: JavaPluginApplet"_s);
	$nc(this->stream)->flush();
}

void PSPrinterJob$PluginPrinter::printAll() {
	printPluginPSHeader();
	printPluginApplet();
	printPluginPSTrailer();
}

int32_t PSPrinterJob$PluginPrinter::print($Graphics* g, $PageFormat* pf, int32_t pgIndex) {
	if (pgIndex > 0) {
		return $Printable::NO_SUCH_PAGE;
	} else {
		$nc(this->applet)->printAll(g);
		return $Printable::PAGE_EXISTS;
	}
}

PSPrinterJob$PluginPrinter::PSPrinterJob$PluginPrinter() {
}

$Class* PSPrinterJob$PluginPrinter::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$PluginPrinter, name, initialize, &_PSPrinterJob$PluginPrinter_ClassInfo_, allocate$PSPrinterJob$PluginPrinter);
	return class$;
}

$Class* PSPrinterJob$PluginPrinter::class$ = nullptr;

	} // print
} // sun