#include <sun/print/PSPrinterJob$EPSPrinter.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Date.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef STREAM

using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$EPSPrinter_FieldInfo_[] = {
	{"pf", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, pf)},
	{"job", "Lsun/print/PSPrinterJob;", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, job)},
	{"llx", "I", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, llx)},
	{"lly", "I", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, lly)},
	{"urx", "I", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, urx)},
	{"ury", "I", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, ury)},
	{"printable", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, printable)},
	{"stream", "Ljava/io/PrintStream;", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, stream)},
	{"epsTitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSPrinterJob$EPSPrinter, epsTitle)},
	{}
};

$MethodInfo _PSPrinterJob$EPSPrinter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/print/Printable;Ljava/lang/String;Ljava/io/PrintStream;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(PSPrinterJob$EPSPrinter::*)($Printable*,$String*,$PrintStream*,int32_t,int32_t,int32_t,int32_t)>(&PSPrinterJob$EPSPrinter::init$))},
	{"getNumberOfPages", "()I", nullptr, $PUBLIC},
	{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PUBLIC},
	{"print", "()V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{}
};

$InnerClassInfo _PSPrinterJob$EPSPrinter_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$EPSPrinter", "sun.print.PSPrinterJob", "EPSPrinter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PSPrinterJob$EPSPrinter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PSPrinterJob$EPSPrinter",
	"java.lang.Object",
	"java.awt.print.Pageable",
	_PSPrinterJob$EPSPrinter_FieldInfo_,
	_PSPrinterJob$EPSPrinter_MethodInfo_,
	nullptr,
	nullptr,
	_PSPrinterJob$EPSPrinter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$EPSPrinter($Class* clazz) {
	return $of($alloc(PSPrinterJob$EPSPrinter));
}

void PSPrinterJob$EPSPrinter::init$($Printable* printable, $String* title, $PrintStream* stream, int32_t x, int32_t y, int32_t wid, int32_t hgt) {
	$set(this, printable, printable);
	$set(this, epsTitle, title);
	$set(this, stream, stream);
	this->llx = x;
	this->lly = y;
	this->urx = this->llx + wid;
	this->ury = this->lly + hgt;
	$var($Paper, p, $new($Paper));
	p->setSize((double)wid, (double)hgt);
	p->setImageableArea(0.0, 0.0, (double)wid, (double)hgt);
	$set(this, pf, $new($PageFormat));
	$nc(this->pf)->setPaper(p);
}

void PSPrinterJob$EPSPrinter::print() {
	$useLocalCurrentObjectStackCache();
	$nc(this->stream)->println("%!PS-Adobe-3.0 EPSF-3.0"_s);
	$nc(this->stream)->println($$str({"%%BoundingBox: "_s, $$str(this->llx), " "_s, $$str(this->lly), " "_s, $$str(this->urx), " "_s, $$str(this->ury)}));
	$nc(this->stream)->println($$str({"%%Title: "_s, this->epsTitle}));
	$nc(this->stream)->println("%%Creator: Java Printing"_s);
	$nc(this->stream)->println($$str({"%%CreationDate: "_s, $$new($Date)}));
	$nc(this->stream)->println("%%EndComments"_s);
	$nc(this->stream)->println("/pluginSave save def"_s);
	$nc(this->stream)->println("mark"_s);
	$set(this, job, $new($PSPrinterJob));
	$set($nc(this->job), epsPrinter, this);
	$set($nc(this->job), mPSStream, this->stream);
	$nc(this->job)->mDestType = $RasterPrinterJob::STREAM;
	$nc(this->job)->startDoc();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->job)->printPage(this, 0);
			} catch ($Throwable& t) {
				if ($instanceOf($PrinterException, t)) {
					$throw($cast($PrinterException, t));
				} else {
					$throwNew($PrinterException, $(t->toString()));
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->stream)->println("cleartomark"_s);
			$nc(this->stream)->println("pluginSave restore"_s);
			$nc(this->job)->endDoc();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc(this->stream)->flush();
}

int32_t PSPrinterJob$EPSPrinter::getNumberOfPages() {
	return 1;
}

$PageFormat* PSPrinterJob$EPSPrinter::getPageFormat(int32_t pgIndex) {
	if (pgIndex > 0) {
		$throwNew($IndexOutOfBoundsException, "pgIndex"_s);
	} else {
		return this->pf;
	}
}

$Printable* PSPrinterJob$EPSPrinter::getPrintable(int32_t pgIndex) {
	if (pgIndex > 0) {
		$throwNew($IndexOutOfBoundsException, "pgIndex"_s);
	} else {
		return this->printable;
	}
}

PSPrinterJob$EPSPrinter::PSPrinterJob$EPSPrinter() {
}

$Class* PSPrinterJob$EPSPrinter::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$EPSPrinter, name, initialize, &_PSPrinterJob$EPSPrinter_ClassInfo_, allocate$PSPrinterJob$EPSPrinter);
	return class$;
}

$Class* PSPrinterJob$EPSPrinter::class$ = nullptr;

	} // print
} // sun