#include <sun/print/PSPrinterJob$PrinterOpener.h>

#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterIOException.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterIOException = ::java::awt::print::PrinterIOException;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$PrinterOpener_FieldInfo_[] = {
	{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$PrinterOpener, this$0)},
	{"pex", "Ljava/awt/print/PrinterException;", nullptr, 0, $field(PSPrinterJob$PrinterOpener, pex)},
	{"result", "Ljava/io/OutputStream;", nullptr, 0, $field(PSPrinterJob$PrinterOpener, result)},
	{}
};

$MethodInfo _PSPrinterJob$PrinterOpener_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PSPrinterJob;)V", nullptr, $PRIVATE, $method(static_cast<void(PSPrinterJob$PrinterOpener::*)($PSPrinterJob*)>(&PSPrinterJob$PrinterOpener::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PSPrinterJob$PrinterOpener_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$PrinterOpener", "sun.print.PSPrinterJob", "PrinterOpener", $PRIVATE},
	{}
};

$ClassInfo _PSPrinterJob$PrinterOpener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPrinterJob$PrinterOpener",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PSPrinterJob$PrinterOpener_FieldInfo_,
	_PSPrinterJob$PrinterOpener_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
	nullptr,
	_PSPrinterJob$PrinterOpener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$PrinterOpener($Class* clazz) {
	return $of($alloc(PSPrinterJob$PrinterOpener));
}

void PSPrinterJob$PrinterOpener::init$($PSPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* PSPrinterJob$PrinterOpener::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$set(this->this$0, spoolFile, $nc($($Files::createTempFile("javaprint"_s, ".ps"_s, $$new($FileAttributeArray, 0))))->toFile());
		$nc(this->this$0->spoolFile)->deleteOnExit();
		$set(this, result, $new($FileOutputStream, this->this$0->spoolFile));
		return $of(this->result);
	} catch ($IOException& ex) {
		$set(this, pex, $new($PrinterIOException, ex));
	}
	return $of(nullptr);
}

PSPrinterJob$PrinterOpener::PSPrinterJob$PrinterOpener() {
}

$Class* PSPrinterJob$PrinterOpener::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$PrinterOpener, name, initialize, &_PSPrinterJob$PrinterOpener_ClassInfo_, allocate$PSPrinterJob$PrinterOpener);
	return class$;
}

$Class* PSPrinterJob$PrinterOpener::class$ = nullptr;

	} // print
} // sun