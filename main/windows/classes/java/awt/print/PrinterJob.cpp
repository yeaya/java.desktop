#include <java/awt/print/PrinterJob.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <sun/print/PlatformPrinterJobProxy.h>
#include <jcpp.h>

#undef INCH
#undef LANDSCAPE
#undef PAGEABLE
#undef PORTRAIT
#undef REVERSE_LANDSCAPE

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $StreamPrintServiceFactoryArray = $Array<::javax::print::StreamPrintServiceFactory>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PlatformPrinterJobProxy = ::sun::print::PlatformPrinterJobProxy;

namespace java {
	namespace awt {
		namespace print {

$MethodInfo _PrinterJob_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrinterJob::*)()>(&PrinterJob::init$))},
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"defaultPage", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC | $ABSTRACT},
	{"defaultPage", "()Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"getCopies", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getJobName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPageFormat", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PrinterJob*(*)()>(&PrinterJob::getPrinterJob))},
	{"getUserName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCancelled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lookupPrintServices", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintServiceArray*(*)()>(&PrinterJob::lookupPrintServices))},
	{"lookupStreamPrintServices", "(Ljava/lang/String;)[Ljavax/print/StreamPrintServiceFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StreamPrintServiceFactoryArray*(*)($String*)>(&PrinterJob::lookupStreamPrintServices))},
	{"pageDialog", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"pageDialog", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"print", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"print", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"printDialog", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"printDialog", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"setCopies", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setJobName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPageable", "(Ljava/awt/print/Pageable;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.NullPointerException"},
	{"setPrintService", "(Ljavax/print/PrintService;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"setPrintable", "(Ljava/awt/print/Printable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPrintable", "(Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"validatePage", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrinterJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.print.PrinterJob",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PrinterJob_MethodInfo_
};

$Object* allocate$PrinterJob($Class* clazz) {
	return $of($alloc(PrinterJob));
}

PrinterJob* PrinterJob::getPrinterJob() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $PlatformPrinterJobProxy::getPrinterJob();
}

$PrintServiceArray* PrinterJob::lookupPrintServices() {
	$init($DocFlavor$SERVICE_FORMATTED);
	return $PrintServiceLookup::lookupPrintServices($DocFlavor$SERVICE_FORMATTED::PAGEABLE, nullptr);
}

$StreamPrintServiceFactoryArray* PrinterJob::lookupStreamPrintServices($String* mimeType) {
	$init($DocFlavor$SERVICE_FORMATTED);
	return $StreamPrintServiceFactory::lookupStreamPrintServiceFactories($DocFlavor$SERVICE_FORMATTED::PAGEABLE, mimeType);
}

void PrinterJob::init$() {
}

$PrintService* PrinterJob::getPrintService() {
	return nullptr;
}

void PrinterJob::setPrintService($PrintService* service) {
	$throwNew($PrinterException, "Setting a service is not supported on this class"_s);
}

bool PrinterJob::printDialog($PrintRequestAttributeSet* attributes) {
	if (attributes == nullptr) {
		$throwNew($NullPointerException, "attributes"_s);
	}
	return printDialog();
}

$PageFormat* PrinterJob::pageDialog($PrintRequestAttributeSet* attributes) {
	if (attributes == nullptr) {
		$throwNew($NullPointerException, "attributes"_s);
	}
	return pageDialog($(defaultPage()));
}

$PageFormat* PrinterJob::defaultPage() {
	return defaultPage($$new($PageFormat));
}

$PageFormat* PrinterJob::getPageFormat($PrintRequestAttributeSet* attributes) {
	$var($PrintService, service, getPrintService());
	$var($PageFormat, pf, defaultPage());
	if (service == nullptr || attributes == nullptr) {
		return pf;
	}
	$load($Media);
	$var($Media, media, $cast($Media, $nc(attributes)->get($Media::class$)));
	$load($MediaPrintableArea);
	$var($MediaPrintableArea, mpa, $cast($MediaPrintableArea, attributes->get($MediaPrintableArea::class$)));
	$load($OrientationRequested);
	$var($OrientationRequested, orientReq, $cast($OrientationRequested, attributes->get($OrientationRequested::class$)));
	if (media == nullptr && mpa == nullptr && orientReq == nullptr) {
		return pf;
	}
	$var($Paper, paper, $nc(pf)->getPaper());
	if (mpa == nullptr && media != nullptr && $nc(service)->isAttributeCategorySupported($MediaPrintableArea::class$)) {
		$var($Object, mpaVals, service->getSupportedAttributeValues($MediaPrintableArea::class$, nullptr, attributes));
		if ($instanceOf($MediaPrintableAreaArray, mpaVals) && $nc(($cast($MediaPrintableAreaArray, mpaVals)))->length > 0) {
			$assign(mpa, $nc(($cast($MediaPrintableAreaArray, mpaVals)))->get(0));
		}
	}
	if (media != nullptr && $nc(service)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)), nullptr, attributes)) {
		if ($instanceOf($MediaSizeName, media)) {
			$var($MediaSizeName, msn, $cast($MediaSizeName, media));
			$var($MediaSize, msz, $MediaSize::getMediaSizeForName(msn));
			if (msz != nullptr) {
				double inch = 72.0;
				double paperWid = msz->getX($MediaSize::INCH) * inch;
				double paperHgt = msz->getY($MediaSize::INCH) * inch;
				$nc(paper)->setSize(paperWid, paperHgt);
				if (mpa == nullptr) {
					paper->setImageableArea(inch, inch, paperWid - 2 * inch, paperHgt - 2 * inch);
				}
			}
		}
	}
	if (mpa != nullptr && $nc(service)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(mpa)), nullptr, attributes)) {
		$var($floats, printableArea, mpa->getPrintableArea($MediaPrintableArea::INCH));
		for (int32_t i = 0; i < $nc(printableArea)->length; ++i) {
			printableArea->set(i, printableArea->get(i) * 72.0f);
		}
		$nc(paper)->setImageableArea($nc(printableArea)->get(0), printableArea->get(1), printableArea->get(2), printableArea->get(3));
	}
	if (orientReq != nullptr && $nc(service)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(orientReq)), nullptr, attributes)) {
		int32_t orient = 0;
		$init($OrientationRequested);
		if ($of(orientReq)->equals($OrientationRequested::REVERSE_LANDSCAPE)) {
			orient = $PageFormat::REVERSE_LANDSCAPE;
		} else {
			if ($of(orientReq)->equals($OrientationRequested::LANDSCAPE)) {
				orient = $PageFormat::LANDSCAPE;
			} else {
				orient = $PageFormat::PORTRAIT;
			}
		}
		pf->setOrientation(orient);
	}
	pf->setPaper(paper);
	$assign(pf, validatePage(pf));
	return pf;
}

void PrinterJob::print($PrintRequestAttributeSet* attributes) {
	print();
}

PrinterJob::PrinterJob() {
}

$Class* PrinterJob::load$($String* name, bool initialize) {
	$loadClass(PrinterJob, name, initialize, &_PrinterJob_ClassInfo_, allocate$PrinterJob);
	return class$;
}

$Class* PrinterJob::class$ = nullptr;

		} // print
	} // awt
} // java