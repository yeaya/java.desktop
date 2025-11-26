#include <sun/print/UnixPrintJob$PrinterOpener.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/print/PrintException.h>
#include <javax/print/event/PrintJobEvent.h>
#include <sun/print/UnixPrintJob.h>
#include <jcpp.h>

#undef DESTFILE
#undef JOB_FAILED

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrintException = ::javax::print::PrintException;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;
using $UnixPrintJob = ::sun::print::UnixPrintJob;

namespace sun {
	namespace print {

$FieldInfo _UnixPrintJob$PrinterOpener_FieldInfo_[] = {
	{"this$0", "Lsun/print/UnixPrintJob;", nullptr, $FINAL | $SYNTHETIC, $field(UnixPrintJob$PrinterOpener, this$0)},
	{"pex", "Ljavax/print/PrintException;", nullptr, 0, $field(UnixPrintJob$PrinterOpener, pex)},
	{"result", "Ljava/io/OutputStream;", nullptr, 0, $field(UnixPrintJob$PrinterOpener, result)},
	{}
};

$MethodInfo _UnixPrintJob$PrinterOpener_MethodInfo_[] = {
	{"<init>", "(Lsun/print/UnixPrintJob;)V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintJob$PrinterOpener::*)($UnixPrintJob*)>(&UnixPrintJob$PrinterOpener::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnixPrintJob$PrinterOpener_InnerClassesInfo_[] = {
	{"sun.print.UnixPrintJob$PrinterOpener", "sun.print.UnixPrintJob", "PrinterOpener", $PRIVATE},
	{}
};

$ClassInfo _UnixPrintJob$PrinterOpener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.UnixPrintJob$PrinterOpener",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_UnixPrintJob$PrinterOpener_FieldInfo_,
	_UnixPrintJob$PrinterOpener_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
	nullptr,
	_UnixPrintJob$PrinterOpener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.UnixPrintJob"
};

$Object* allocate$UnixPrintJob$PrinterOpener($Class* clazz) {
	return $of($alloc(UnixPrintJob$PrinterOpener));
}

void UnixPrintJob$PrinterOpener::init$($UnixPrintJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* UnixPrintJob$PrinterOpener::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($UnixPrintJob);
		if (this->this$0->mDestType == $UnixPrintJob::DESTFILE) {
			$set(this->this$0, spoolFile, $new($File, this->this$0->mDestination));
		} else {
			$set(this->this$0, spoolFile, $nc($($Files::createTempFile("javaprint"_s, ""_s, $$new($FileAttributeArray, 0))))->toFile());
			$nc(this->this$0->spoolFile)->deleteOnExit();
		}
		$set(this, result, $new($FileOutputStream, this->this$0->spoolFile));
		return $of(this->result);
	} catch ($IOException& ex) {
		this->this$0->notifyEvent($PrintJobEvent::JOB_FAILED);
		$set(this, pex, $new($PrintException, static_cast<$Exception*>(ex)));
	}
	return $of(nullptr);
}

UnixPrintJob$PrinterOpener::UnixPrintJob$PrinterOpener() {
}

$Class* UnixPrintJob$PrinterOpener::load$($String* name, bool initialize) {
	$loadClass(UnixPrintJob$PrinterOpener, name, initialize, &_UnixPrintJob$PrinterOpener_ClassInfo_, allocate$UnixPrintJob$PrinterOpener);
	return class$;
}

$Class* UnixPrintJob$PrinterOpener::class$ = nullptr;

	} // print
} // sun