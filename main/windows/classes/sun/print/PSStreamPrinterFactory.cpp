#include <sun/print/PSStreamPrinterFactory.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <sun/print/PSStreamPrintService.h>
#include <jcpp.h>

#undef GIF
#undef JPEG
#undef PAGEABLE
#undef PNG
#undef PRINTABLE

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;
using $PSStreamPrintService = ::sun::print::PSStreamPrintService;

namespace sun {
	namespace print {

$FieldInfo _PSStreamPrinterFactory_FieldInfo_[] = {
	{"psMimeType", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PSStreamPrinterFactory, psMimeType)},
	{"supportedDocFlavors", "[Ljavax/print/DocFlavor;", nullptr, $STATIC | $FINAL, $staticField(PSStreamPrinterFactory, supportedDocFlavors)},
	{}
};

$MethodInfo _PSStreamPrinterFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PSStreamPrinterFactory::*)()>(&PSStreamPrinterFactory::init$))},
	{"getFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $STATIC, $method(static_cast<$DocFlavorArray*(*)()>(&PSStreamPrinterFactory::getFlavors))},
	{"getOutputFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrintService", "(Ljava/io/OutputStream;)Ljavax/print/StreamPrintService;", nullptr, $PUBLIC},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PSStreamPrinterFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PSStreamPrinterFactory",
	"javax.print.StreamPrintServiceFactory",
	nullptr,
	_PSStreamPrinterFactory_FieldInfo_,
	_PSStreamPrinterFactory_MethodInfo_
};

$Object* allocate$PSStreamPrinterFactory($Class* clazz) {
	return $of($alloc(PSStreamPrinterFactory));
}

$String* PSStreamPrinterFactory::psMimeType = nullptr;
$DocFlavorArray* PSStreamPrinterFactory::supportedDocFlavors = nullptr;

void PSStreamPrinterFactory::init$() {
	$StreamPrintServiceFactory::init$();
}

$String* PSStreamPrinterFactory::getOutputFormat() {
	return PSStreamPrinterFactory::psMimeType;
}

$DocFlavorArray* PSStreamPrinterFactory::getSupportedDocFlavors() {
	return getFlavors();
}

$DocFlavorArray* PSStreamPrinterFactory::getFlavors() {
	$init(PSStreamPrinterFactory);
	$var($DocFlavorArray, flavors, $new($DocFlavorArray, $nc(PSStreamPrinterFactory::supportedDocFlavors)->length));
	$System::arraycopy(PSStreamPrinterFactory::supportedDocFlavors, 0, flavors, 0, flavors->length);
	return flavors;
}

$StreamPrintService* PSStreamPrinterFactory::getPrintService($OutputStream* out) {
	return $new($PSStreamPrintService, out);
}

void clinit$PSStreamPrinterFactory($Class* class$) {
	$assignStatic(PSStreamPrinterFactory::psMimeType, "application/postscript"_s);
		$init($DocFlavor$SERVICE_FORMATTED);
		$init($DocFlavor$BYTE_ARRAY);
		$init($DocFlavor$INPUT_STREAM);
		$init($DocFlavor$URL);
	$assignStatic(PSStreamPrinterFactory::supportedDocFlavors, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$SERVICE_FORMATTED::PAGEABLE),
		static_cast<$DocFlavor*>($DocFlavor$SERVICE_FORMATTED::PRINTABLE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::GIF),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::GIF),
		static_cast<$DocFlavor*>($DocFlavor$URL::GIF),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$URL::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::PNG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::PNG),
		static_cast<$DocFlavor*>($DocFlavor$URL::PNG)
	}));
}

PSStreamPrinterFactory::PSStreamPrinterFactory() {
}

$Class* PSStreamPrinterFactory::load$($String* name, bool initialize) {
	$loadClass(PSStreamPrinterFactory, name, initialize, &_PSStreamPrinterFactory_ClassInfo_, clinit$PSStreamPrinterFactory, allocate$PSStreamPrinterFactory);
	return class$;
}

$Class* PSStreamPrinterFactory::class$ = nullptr;

	} // print
} // sun