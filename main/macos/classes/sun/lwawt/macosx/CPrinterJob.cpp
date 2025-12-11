#include <sun/lwawt/macosx/CPrinterJob.h>

#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/SecondaryLoop.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/URI.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <sun/lwawt/macosx/CPrinterJob$1.h>
#include <sun/lwawt/macosx/CPrinterJob$2.h>
#include <sun/lwawt/macosx/CPrinterJob$3.h>
#include <sun/lwawt/macosx/CPrinterJob$4.h>
#include <sun/lwawt/macosx/CPrinterJob$5.h>
#include <sun/lwawt/macosx/CPrinterJob$6.h>
#include <sun/lwawt/macosx/CPrinterJobDialog.h>
#include <sun/lwawt/macosx/CPrinterPageDialog.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/print/CustomMediaTray.h>
#include <sun/print/PeekGraphics.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/print/SunPageSelection.h>
#include <jcpp.h>

#undef ALL
#undef INCH
#undef PAGEABLE
#undef RANGE
#undef TYPE_INT_ARGB_PRE
#undef UNKNOWN_NUMBER_OF_PAGES

using $Rectangle2DArray = $Array<::java::awt::geom::Rectangle2D>;
using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $intArray2 = $Array<int32_t, 2>;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $Toolkit = ::java::awt::Toolkit;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $URI = ::java::net::URI;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $CPrinterDialog = ::sun::lwawt::macosx::CPrinterDialog;
using $CPrinterJob$1 = ::sun::lwawt::macosx::CPrinterJob$1;
using $CPrinterJob$2 = ::sun::lwawt::macosx::CPrinterJob$2;
using $CPrinterJob$3 = ::sun::lwawt::macosx::CPrinterJob$3;
using $CPrinterJob$4 = ::sun::lwawt::macosx::CPrinterJob$4;
using $CPrinterJob$5 = ::sun::lwawt::macosx::CPrinterJob$5;
using $CPrinterJob$6 = ::sun::lwawt::macosx::CPrinterJob$6;
using $CPrinterJobDialog = ::sun::lwawt::macosx::CPrinterJobDialog;
using $CPrinterPageDialog = ::sun::lwawt::macosx::CPrinterPageDialog;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $CustomMediaTray = ::sun::print::CustomMediaTray;
using $PeekGraphics = ::sun::print::PeekGraphics;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $SunPageSelection = ::sun::print::SunPageSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterJob$$Lambda$lambda$detachPrintLoop$0 : public $Runnable {
	$class(CPrinterJob$$Lambda$lambda$detachPrintLoop$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int64_t target, int64_t arg) {
		this->target = target;
		this->arg = arg;
	}
	virtual void run() override {
		CPrinterJob::lambda$detachPrintLoop$0(target, arg);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPrinterJob$$Lambda$lambda$detachPrintLoop$0>());
	}
	int64_t target = 0;
	int64_t arg = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPrinterJob$$Lambda$lambda$detachPrintLoop$0::fieldInfos[3] = {
	{"target", "J", nullptr, $PUBLIC, $field(CPrinterJob$$Lambda$lambda$detachPrintLoop$0, target)},
	{"arg", "J", nullptr, $PUBLIC, $field(CPrinterJob$$Lambda$lambda$detachPrintLoop$0, arg)},
	{}
};
$MethodInfo CPrinterJob$$Lambda$lambda$detachPrintLoop$0::methodInfos[3] = {
	{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterJob$$Lambda$lambda$detachPrintLoop$0::*)(int64_t,int64_t)>(&CPrinterJob$$Lambda$lambda$detachPrintLoop$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPrinterJob$$Lambda$lambda$detachPrintLoop$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPrinterJob$$Lambda$lambda$detachPrintLoop$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CPrinterJob$$Lambda$lambda$detachPrintLoop$0::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$$Lambda$lambda$detachPrintLoop$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPrinterJob$$Lambda$lambda$detachPrintLoop$0::class$ = nullptr;

$FieldInfo _CPrinterJob_FieldInfo_[] = {
	{"sShouldNotReachHere", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CPrinterJob, sShouldNotReachHere)},
	{"printingLoop", "Ljava/awt/SecondaryLoop;", nullptr, $PRIVATE | $VOLATILE, $field(CPrinterJob, printingLoop)},
	{"noDefaultPrinter", "Z", nullptr, $PRIVATE, $field(CPrinterJob, noDefaultPrinter)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $staticField(CPrinterJob, defaultFont)},
	{"tray", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CPrinterJob, tray)},
	{"fNSPrintInfo", "J", nullptr, $PRIVATE, $field(CPrinterJob, fNSPrintInfo)},
	{"fNSPrintInfoLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(CPrinterJob, fNSPrintInfoLock)},
	{"onEventThread", "Z", nullptr, $VOLATILE, $field(CPrinterJob, onEventThread)},
	{"isPrintToFile", "Z", nullptr, 0, $field(CPrinterJob, isPrintToFile)},
	{}
};

$MethodInfo _CPrinterJob_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterJob::*)()>(&CPrinterJob::init$))},
	{"_safePrintLoop", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&CPrinterJob::_safePrintLoop))},
	{"abortDoc", "()V", nullptr, $PROTECTED | $NATIVE},
	{"access$002", "(Lsun/lwawt/macosx/CPrinterJob;Z)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(CPrinterJob*,bool)>(&CPrinterJob::access$002))},
	{"access$100", "(Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/Graphics2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(CPrinterJob*,$Graphics2D*,$Rectangle2D*)>(&CPrinterJob::access$100))},
	{"access$200", "(Lsun/lwawt/macosx/CPrinterJob;)Ljava/awt/print/Pageable;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Pageable*(*)(CPrinterJob*)>(&CPrinterJob::access$200))},
	{"access$300", "(Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;)Lsun/print/PeekGraphics;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$PeekGraphics*(*)(CPrinterJob*,$Graphics2D*,$PrinterJob*)>(&CPrinterJob::access$300))},
	{"access$400", "(Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/Graphics2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(CPrinterJob*,$Graphics2D*,$Rectangle2D*)>(&CPrinterJob::access$400))},
	{"cancelCheck", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPrinterJob::*)()>(&CPrinterJob::cancelCheck))},
	{"cancelDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterAbortException"},
	{"completePrintLoop", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)()>(&CPrinterJob::completePrintLoop))},
	{"createFirstPassGraphics", "(Ljava/awt/print/PrinterJob;Ljava/awt/print/PageFormat;)Lsun/print/PeekGraphics;", nullptr, $PRIVATE, $method(static_cast<$PeekGraphics*(CPrinterJob::*)($PrinterJob*,$PageFormat*)>(&CPrinterJob::createFirstPassGraphics))},
	{"createNSPrintInfo", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CPrinterJob::*)()>(&CPrinterJob::createNSPrintInfo))},
	{"defaultPage", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"detachPrintLoop", "(JJ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPrinterJob::detachPrintLoop))},
	{"dispose", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CPrinterJob::*)(int64_t)>(&CPrinterJob::dispose))},
	{"endDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"endPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;I)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"getDefaultMediaSize", "(Ljava/awt/print/PageFormat;)Ljavax/print/attribute/standard/MediaSize;", nullptr, $PRIVATE, $method(static_cast<$MediaSize*(CPrinterJob::*)($PageFormat*)>(&CPrinterJob::getDefaultMediaSize))},
	{"getDefaultPage", "(Ljava/awt/print/PageFormat;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CPrinterJob::*)($PageFormat*)>(&CPrinterJob::getDefaultPage))},
	{"getDefaultPrintableArea", "(Ljava/awt/print/PageFormat;DD)Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PROTECTED},
	{"getDestinationFile", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CPrinterJob::*)()>(&CPrinterJob::getDestinationFile))},
	{"getMediaSize", "(Ljavax/print/attribute/standard/Media;Ljavax/print/PrintService;Ljava/awt/print/PageFormat;)Ljavax/print/attribute/standard/MediaSize;", nullptr, $PROTECTED},
	{"getNSPrintInfo", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(CPrinterJob::*)()>(&CPrinterJob::getNSPrintInfo))},
	{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $method(static_cast<$PageFormat*(CPrinterJob::*)(int32_t)>(&CPrinterJob::getPageFormat))},
	{"getPageFormatArea", "(Ljava/awt/print/PageFormat;)Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(CPrinterJob::*)($PageFormat*)>(&CPrinterJob::getPageFormatArea))},
	{"getPageformatPrintablePeekgraphics", "(I)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$ObjectArray*(CPrinterJob::*)(int32_t)>(&CPrinterJob::getPageformatPrintablePeekgraphics))},
	{"getPhysicalPageHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPageWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableX", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableY", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PRIVATE, $method(static_cast<$Printable*(CPrinterJob::*)(int32_t)>(&CPrinterJob::getPrintable))},
	{"getPrinterName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CPrinterJob::*)()>(&CPrinterJob::getPrinterName))},
	{"getPrinterTray", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CPrinterJob::*)()>(&CPrinterJob::getPrinterTray))},
	{"getXRes", "()D", nullptr, $PROTECTED},
	{"getYRes", "()D", nullptr, $PROTECTED},
	{"jobSetup", "(Ljava/awt/print/Pageable;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(CPrinterJob::*)($Pageable*,bool)>(&CPrinterJob::jobSetup))},
	{"lambda$detachPrintLoop$0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPrinterJob::lambda$detachPrintLoop$0))},
	{"pageDialog", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"pageSetup", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)Z", nullptr, $PUBLIC, $method(static_cast<bool(CPrinterJob::*)($PageFormat*,$Printable*)>(&CPrinterJob::pageSetup))},
	{"print", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"printAndGetPageFormatArea", "(Ljava/awt/print/Printable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(CPrinterJob::*)($Printable*,$Graphics*,$PageFormat*,int32_t)>(&CPrinterJob::printAndGetPageFormatArea))},
	{"printBand", "([BIIII)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"printDialog", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"printLoop", "(ZII)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(CPrinterJob::*)(bool,int32_t,int32_t)>(&CPrinterJob::printLoop)), "java.awt.print.PrinterException"},
	{"printToPathGraphics", "(Lsun/print/PeekGraphics;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;IJ)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)($PeekGraphics*,$PrinterJob*,$Printable*,$PageFormat*,int32_t,int64_t)>(&CPrinterJob::printToPathGraphics)), "java.awt.print.PrinterException"},
	{"setAttributes", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"setCopiesAttribute", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)(int32_t)>(&CPrinterJob::setCopiesAttribute))},
	{"setDestinationFile", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)($String*)>(&CPrinterJob::setDestinationFile))},
	{"setPageRangeAttribute", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)(int32_t,int32_t,bool)>(&CPrinterJob::setPageRangeAttribute))},
	{"setPrintToFile", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)(bool)>(&CPrinterJob::setPrintToFile))},
	{"setPrinterServiceFromNative", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterJob::*)($String*)>(&CPrinterJob::setPrinterServiceFromNative))},
	{"startDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"startPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;I)V", nullptr, $PROTECTED, $method(static_cast<void(CPrinterJob::*)($PageFormat*,$Printable*,int32_t)>(&CPrinterJob::startPage)), "java.awt.print.PrinterException"},
	{"startPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;IZ)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"validatePaper", "(Ljava/awt/print/Paper;Ljava/awt/print/Paper;)V", nullptr, $PROTECTED | $NATIVE},
	{}
};

#define _METHOD_INDEX__safePrintLoop 1
#define _METHOD_INDEX_abortDoc 2
#define _METHOD_INDEX_createNSPrintInfo 12
#define _METHOD_INDEX_dispose 15
#define _METHOD_INDEX_getDefaultPage 20
#define _METHOD_INDEX_printLoop 47
#define _METHOD_INDEX_validatePaper 58

$InnerClassInfo _CPrinterJob_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$6", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPrinterJob$5", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPrinterJob$4", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPrinterJob$3", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPrinterJob$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPrinterJob$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob",
	"sun.print.RasterPrinterJob",
	nullptr,
	_CPrinterJob_FieldInfo_,
	_CPrinterJob_MethodInfo_,
	nullptr,
	nullptr,
	_CPrinterJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob$6,sun.lwawt.macosx.CPrinterJob$5,sun.lwawt.macosx.CPrinterJob$4,sun.lwawt.macosx.CPrinterJob$3,sun.lwawt.macosx.CPrinterJob$2,sun.lwawt.macosx.CPrinterJob$1"
};

$Object* allocate$CPrinterJob($Class* clazz) {
	return $of($alloc(CPrinterJob));
}

$String* CPrinterJob::sShouldNotReachHere = nullptr;
$Font* CPrinterJob::defaultFont = nullptr;

void CPrinterJob::access$400(CPrinterJob* x0, $Graphics2D* x1, $Rectangle2D* x2) {
	$init(CPrinterJob);
	$nc(x0)->initPrinterGraphics(x1, x2);
}

$PeekGraphics* CPrinterJob::access$300(CPrinterJob* x0, $Graphics2D* x1, $PrinterJob* x2) {
	$init(CPrinterJob);
	return $nc(x0)->createPeekGraphics(x1, x2);
}

$Pageable* CPrinterJob::access$200(CPrinterJob* x0) {
	$init(CPrinterJob);
	return $nc(x0)->getPageable();
}

void CPrinterJob::access$100(CPrinterJob* x0, $Graphics2D* x1, $Rectangle2D* x2) {
	$init(CPrinterJob);
	$nc(x0)->initPrinterGraphics(x1, x2);
}

bool CPrinterJob::access$002(CPrinterJob* x0, bool x1) {
	$init(CPrinterJob);
	return $nc(x0)->performingPrinting = x1;
}

void CPrinterJob::init$() {
	$RasterPrinterJob::init$();
	this->noDefaultPrinter = false;
	$set(this, tray, nullptr);
	this->fNSPrintInfo = -1;
	$set(this, fNSPrintInfoLock, $new($Object));
	this->isPrintToFile = false;
}

bool CPrinterJob::printDialog() {
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (this->noDefaultPrinter) {
		return false;
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashPrintRequestAttributeSet));
	}
	if ($instanceOf($StreamPrintService, $(getPrintService()))) {
		return $RasterPrinterJob::printDialog(this->attributes);
	}
	$var($Pageable, var$0, getPageable());
	return jobSetup(var$0, checkAllowedToPrintToFile());
}

$PageFormat* CPrinterJob::pageDialog($PageFormat* page) {
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (this->noDefaultPrinter) {
		return page;
	}
	if ($instanceOf($StreamPrintService, $(getPrintService()))) {
		return $RasterPrinterJob::pageDialog(page);
	}
	$var($PageFormat, pageClone, $cast($PageFormat, $nc(page)->clone()));
	bool doIt = pageSetup(pageClone, nullptr);
	return doIt ? pageClone : page;
}

$PageFormat* CPrinterJob::defaultPage($PageFormat* page) {
	$var($PageFormat, newPage, $cast($PageFormat, $nc(page)->clone()));
	getDefaultPage(newPage);
	return newPage;
}

void CPrinterJob::setAttributes($PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$RasterPrinterJob::setAttributes(attributes);
	if (attributes == nullptr) {
		return;
	}
	$load($Media);
	$var($Attribute, attr, $nc(attributes)->get($Media::class$));
	if ($instanceOf($CustomMediaTray, attr)) {
		$var($CustomMediaTray, customTray, $cast($CustomMediaTray, attr));
		$set(this, tray, $nc(customTray)->getChoiceName());
	}
	$load($PageRanges);
	$var($PageRanges, pageRangesAttr, $cast($PageRanges, attributes->get($PageRanges::class$)));
	if (isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(pageRangesAttr)), attributes)) {
		$load($SunPageSelection);
		$var($SunPageSelection, rangeSelect, $cast($SunPageSelection, attributes->get($SunPageSelection::class$)));
		$init($SunPageSelection);
		if (rangeSelect == nullptr || rangeSelect == $SunPageSelection::RANGE) {
			$var($intArray2, range, $nc(pageRangesAttr)->getMembers());
			setPageRange($nc($nc(range)->get(0))->get(0) - 1, $nc(range->get(0))->get(1) - 1);
		} else {
			setPageRange(-1, -1);
		}
	}
}

void CPrinterJob::setPageRangeAttribute(int32_t from, int32_t to, bool isRangeSet) {
	if (this->attributes != nullptr) {
		if (isRangeSet) {
			$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($$new($PageRanges, from + 1, to + 1))));
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::RANGE);
			setPageRange(from, to);
		} else {
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::ALL);
		}
	}
}

void CPrinterJob::setCopiesAttribute(int32_t copies) {
	if (this->attributes != nullptr) {
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, copies))));
		$RasterPrinterJob::setCopies(copies);
	}
}

void CPrinterJob::cancelDoc() {
	$RasterPrinterJob::cancelDoc();
	if (this->printingLoop != nullptr) {
		$nc(this->printingLoop)->exit();
	}
}

void CPrinterJob::completePrintLoop() {
	$var($Runnable, r, $new($CPrinterJob$1, this));
	if (this->onEventThread) {
		try {
			$EventQueue::invokeAndWait(r);
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	} else {
		r->run();
	}
}

void CPrinterJob::setPrintToFile(bool printToFile) {
	this->isPrintToFile = printToFile;
}

void CPrinterJob::setDestinationFile($String* dest) {
	$useLocalCurrentObjectStackCache();
	if (this->attributes != nullptr && dest != nullptr) {
		try {
			$var($URI, destURI, $new($URI, dest));
			$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>($$new($Destination, destURI))));
			$set(this, destinationAttr, $str({""_s, $(destURI->getSchemeSpecificPart())}));
		} catch ($Exception& e) {
		}
	}
}

$String* CPrinterJob::getDestinationFile() {
	return this->destinationAttr;
}

void CPrinterJob::print($PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrintService, psvc, getPrintService());
	if (psvc == nullptr && !this->isPrintToFile) {
		$throwNew($PrinterException, "No print service found."_s);
	}
	if ($instanceOf($StreamPrintService, psvc)) {
		spoolToService(psvc, attributes);
		return;
	}
	setAttributes(attributes);
	if (this->destinationAttr != nullptr) {
		validateDestination(this->destinationAttr);
	}
	int32_t firstPage = getFirstPage();
	int32_t lastPage = getLastPage();
	if (lastPage == $Pageable::UNKNOWN_NUMBER_OF_PAGES) {
		int32_t totalPages = $nc(this->mDocument)->getNumberOfPages();
		if (totalPages != $Pageable::UNKNOWN_NUMBER_OF_PAGES) {
			lastPage = $nc(this->mDocument)->getNumberOfPages() - 1;
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$synchronized(this) {
				this->performingPrinting = true;
				this->userCancelled = false;
			}
			$load($PageRanges);
			$var($PageRanges, pr, (attributes == nullptr) ? ($PageRanges*)nullptr : $cast($PageRanges, $nc(attributes)->get($PageRanges::class$)));
			$var($intArray2, prMembers, (pr == nullptr) ? $new($intArray2, 0, 0) : $nc(pr)->getMembers());
			int32_t loopi = 0;
			do {
				if ($EventQueue::isDispatchThread()) {
					this->onEventThread = true;
					$set(this, printingLoop, $cast($SecondaryLoop, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CPrinterJob$2, this)))));
					try {
						if (printLoop(false, firstPage, lastPage)) {
							$nc(this->printingLoop)->enter();
						}
					} catch ($Exception& e) {
						e->printStackTrace();
					}
				} else {
					this->onEventThread = false;
					try {
						printLoop(true, firstPage, lastPage);
					} catch ($Exception& e) {
						e->printStackTrace();
					}
				}
				if (++loopi < $nc(prMembers)->length) {
					firstPage = $nc(prMembers->get(loopi))->get(0) - 1;
					lastPage = $nc(prMembers->get(loopi))->get(1) - 1;
				}
			} while (loopi < $nc(prMembers)->length);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$synchronized(this) {
				this->performingPrinting = false;
				$of(this)->notify();
			}
			if (this->printingLoop != nullptr) {
				$nc(this->printingLoop)->exit();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

double CPrinterJob::getXRes() {
	return (double)0;
}

double CPrinterJob::getYRes() {
	return (double)0;
}

double CPrinterJob::getPhysicalPrintableX($Paper* p) {
	return (double)0;
}

double CPrinterJob::getPhysicalPrintableY($Paper* p) {
	return (double)0;
}

double CPrinterJob::getPhysicalPrintableWidth($Paper* p) {
	return (double)0;
}

double CPrinterJob::getPhysicalPrintableHeight($Paper* p) {
	return (double)0;
}

double CPrinterJob::getPhysicalPageWidth($Paper* p) {
	return (double)0;
}

double CPrinterJob::getPhysicalPageHeight($Paper* p) {
	return (double)0;
}

void CPrinterJob::startPage($PageFormat* format, $Printable* painter, int32_t index) {
	$throwNew($PrinterException, CPrinterJob::sShouldNotReachHere);
}

void CPrinterJob::endPage($PageFormat* format, $Printable* painter, int32_t index) {
	$throwNew($PrinterException, CPrinterJob::sShouldNotReachHere);
}

void CPrinterJob::printBand($bytes* data, int32_t x, int32_t y, int32_t width, int32_t height) {
	$throwNew($PrinterException, CPrinterJob::sShouldNotReachHere);
}

void CPrinterJob::startDoc() {
	$throwNew($PrinterException, CPrinterJob::sShouldNotReachHere);
}

void CPrinterJob::endDoc() {
	$throwNew($PrinterException, CPrinterJob::sShouldNotReachHere);
}

void CPrinterJob::abortDoc() {
	$prepareNative(CPrinterJob, abortDoc, void);
	$invokeNative();
	$finishNative();
}

bool CPrinterJob::pageSetup($PageFormat* page, $Printable* painter) {
	$var($CPrinterDialog, printerDialog, $new($CPrinterPageDialog, nullptr, this, page, painter));
	printerDialog->setVisible(true);
	bool result = printerDialog->getRetVal();
	printerDialog->dispose();
	return result;
}

bool CPrinterJob::jobSetup($Pageable* doc, bool allowPrintToFile) {
	$var($CPrinterDialog, printerDialog, $new($CPrinterJobDialog, nullptr, this, doc, allowPrintToFile));
	printerDialog->setVisible(true);
	bool result = printerDialog->getRetVal();
	printerDialog->dispose();
	return result;
}

void CPrinterJob::getDefaultPage($PageFormat* page) {
	$prepareNative(CPrinterJob, getDefaultPage, void, $PageFormat* page);
	$invokeNative(page);
	$finishNative();
}

void CPrinterJob::validatePaper($Paper* origPaper, $Paper* newPaper) {
	$prepareNative(CPrinterJob, validatePaper, void, $Paper* origPaper, $Paper* newPaper);
	$invokeNative(origPaper, newPaper);
	$finishNative();
}

void CPrinterJob::finalize() {
	$synchronized(this->fNSPrintInfoLock) {
		if (this->fNSPrintInfo != -1) {
			dispose(this->fNSPrintInfo);
		}
		this->fNSPrintInfo = -1;
	}
}

int64_t CPrinterJob::createNSPrintInfo() {
	int64_t $ret = 0;
	$prepareNative(CPrinterJob, createNSPrintInfo, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void CPrinterJob::dispose(int64_t printInfo) {
	$prepareNative(CPrinterJob, dispose, void, int64_t printInfo);
	$invokeNative(printInfo);
	$finishNative();
}

int64_t CPrinterJob::getNSPrintInfo() {
	$synchronized(this->fNSPrintInfoLock) {
		if (this->fNSPrintInfo == -1) {
			this->fNSPrintInfo = createNSPrintInfo();
		}
		return this->fNSPrintInfo;
	}
}

bool CPrinterJob::printLoop(bool waitUntilDone, int32_t firstPage, int32_t lastPage) {
	bool $ret = false;
	$prepareNative(CPrinterJob, printLoop, bool, bool waitUntilDone, int32_t firstPage, int32_t lastPage);
	$ret = $invokeNative(waitUntilDone, firstPage, lastPage);
	$finishNative();
	return $ret;
}

$PageFormat* CPrinterJob::getPageFormat(int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($PageFormat, page, nullptr);
	try {
		$assign(page, $nc($(getPageable()))->getPageFormat(pageIndex));
	} catch ($Exception& e) {
		return nullptr;
	}
	return page;
}

$Printable* CPrinterJob::getPrintable(int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Printable, painter, nullptr);
	try {
		$assign(painter, $nc($(getPageable()))->getPrintable(pageIndex));
	} catch ($Exception& e) {
		return nullptr;
	}
	return painter;
}

$String* CPrinterJob::getPrinterName() {
	$var($PrintService, service, getPrintService());
	if (service == nullptr) {
		return nullptr;
	}
	return $nc(service)->getName();
}

$String* CPrinterJob::getPrinterTray() {
	return this->tray;
}

void CPrinterJob::setPrinterServiceFromNative($String* printerName) {
	$useLocalCurrentObjectStackCache();
	$init($DocFlavor$SERVICE_FORMATTED);
	$var($PrintServiceArray, services, $PrintServiceLookup::lookupPrintServices($DocFlavor$SERVICE_FORMATTED::PAGEABLE, nullptr));
	for (int32_t i = 0; i < $nc(services)->length; ++i) {
		$var($PrintService, service, services->get(i));
		if ($nc(printerName)->equals($($nc(service)->getName()))) {
			try {
				setPrintService(service);
			} catch ($PrinterException& e) {
			}
			return;
		}
	}
}

$Rectangle2D* CPrinterJob::getPageFormatArea($PageFormat* page) {
	double var$0 = $nc(page)->getImageableX();
	double var$1 = page->getImageableY();
	double var$2 = page->getImageableWidth();
	$var($Rectangle2D$Double, pageFormatArea, $new($Rectangle2D$Double, var$0, var$1, var$2, page->getImageableHeight()));
	return pageFormatArea;
}

bool CPrinterJob::cancelCheck() {
	bool cancelled = (this->performingPrinting && this->userCancelled);
	if (cancelled) {
		try {
			$LWCToolkit::invokeLater($$new($CPrinterJob$3, this), nullptr);
		} catch ($InvocationTargetException& ite) {
		}
	}
	return cancelled;
}

$PeekGraphics* CPrinterJob::createFirstPassGraphics($PrinterJob* printerJob, $PageFormat* page) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = (int32_t)$Math::round($nc(page)->getWidth());
	$var($BufferedImage, bimg, $new($BufferedImage, var$0, (int32_t)$Math::round($nc(page)->getHeight()), $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($PeekGraphics, peekGraphics, createPeekGraphics($(bimg->createGraphics()), printerJob));
	$var($Rectangle2D, pageFormatArea, getPageFormatArea(page));
	initPrinterGraphics(peekGraphics, pageFormatArea);
	return peekGraphics;
}

void CPrinterJob::printToPathGraphics($PeekGraphics* graphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* page, int32_t pageIndex, int64_t context) {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, r, $new($CPrinterJob$4, this, page, context, printerJob, painter, pageIndex));
	if (this->onEventThread) {
		try {
			$EventQueue::invokeAndWait(r);
		} catch ($InvocationTargetException& ite) {
			$var($Throwable, te, ite->getTargetException());
			if ($instanceOf($PrinterException, te)) {
				$throw($cast($PrinterException, te));
			} else {
				$nc(te)->printStackTrace();
			}
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	} else {
		r->run();
	}
}

$ObjectArray* CPrinterJob::getPageformatPrintablePeekgraphics(int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, ret, $new($ObjectArray, 3));
	$var($PrinterJob, printerJob, this);
	$var($Runnable, r, $new($CPrinterJob$5, this, ret, pageIndex, printerJob));
	if (this->onEventThread) {
		try {
			$EventQueue::invokeAndWait(r);
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	} else {
		r->run();
	}
	$synchronized(ret) {
		if (ret->get(2) != nullptr) {
			return ret;
		}
		return nullptr;
	}
}

$Rectangle2D* CPrinterJob::printAndGetPageFormatArea($Printable* printable, $Graphics* graphics, $PageFormat* pageFormat, int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2DArray, ret, $new($Rectangle2DArray, 1));
	$var($Runnable, r, $new($CPrinterJob$6, this, ret, printable, graphics, pageFormat, pageIndex));
	if (this->onEventThread) {
		try {
			$EventQueue::invokeAndWait(r);
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	} else {
		r->run();
	}
	$synchronized(ret) {
		return ret->get(0);
	}
}

void CPrinterJob::detachPrintLoop(int64_t target, int64_t arg) {
	$init(CPrinterJob);
	$useLocalCurrentObjectStackCache();
	$$new($Thread, nullptr, static_cast<$Runnable*>($$new(CPrinterJob$$Lambda$lambda$detachPrintLoop$0, target, arg)), "PrintLoop"_s, 0, false)->start();
}

void CPrinterJob::_safePrintLoop(int64_t target, int64_t arg) {
	$init(CPrinterJob);
	$prepareNativeStatic(CPrinterJob, _safePrintLoop, void, int64_t target, int64_t arg);
	$invokeNativeStatic(target, arg);
	$finishNativeStatic();
}

void CPrinterJob::startPage($PageFormat* arg0, $Printable* arg1, int32_t arg2, bool arg3) {
}

$MediaSize* CPrinterJob::getMediaSize($Media* media, $PrintService* service, $PageFormat* page) {
	if (media == nullptr || !($instanceOf($MediaSizeName, media))) {
		return getDefaultMediaSize(page);
	}
	$var($MediaSize, size, $MediaSize::getMediaSizeForName($cast($MediaSizeName, media)));
	return size != nullptr ? size : getDefaultMediaSize(page);
}

$MediaSize* CPrinterJob::getDefaultMediaSize($PageFormat* page) {
	int32_t inch = 72;
	$var($Paper, paper, $nc(page)->getPaper());
	float width = (float)($div($nc(paper)->getWidth(), inch));
	float height = (float)($div(paper->getHeight(), inch));
	return $new($MediaSize, width, height, $MediaSize::INCH);
}

$MediaPrintableArea* CPrinterJob::getDefaultPrintableArea($PageFormat* page, double w, double h) {
	float dpi = 72.0f;
	$var($Paper, paper, $nc(page)->getPaper());
	float var$0 = (float)($div($nc(paper)->getImageableX(), dpi));
	float var$1 = (float)($div(paper->getImageableY(), dpi));
	float var$2 = (float)($div(paper->getImageableWidth(), dpi));
	return $new($MediaPrintableArea, var$0, var$1, var$2, (float)($div(paper->getImageableHeight(), dpi)), $MediaPrintableArea::INCH);
}

void CPrinterJob::lambda$detachPrintLoop$0(int64_t target, int64_t arg) {
	$init(CPrinterJob);
	_safePrintLoop(target, arg);
}

void clinit$CPrinterJob($Class* class$) {
	$assignStatic(CPrinterJob::sShouldNotReachHere, "Should not reach here."_s);
	{
		$Toolkit::getDefaultToolkit();
	}
}

CPrinterJob::CPrinterJob() {
}

$Class* CPrinterJob::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPrinterJob$$Lambda$lambda$detachPrintLoop$0::classInfo$.name)) {
			return CPrinterJob$$Lambda$lambda$detachPrintLoop$0::load$(name, initialize);
		}
	}
	$loadClass(CPrinterJob, name, initialize, &_CPrinterJob_ClassInfo_, clinit$CPrinterJob, allocate$CPrinterJob);
	return class$;
}

$Class* CPrinterJob::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun