#include <sun/print/UnixPrintService.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Locale.h>
#include <javax/print/CancelablePrintJob.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$CHAR_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$READER.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor$STRING.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/PrintService.h>
#include <javax/print/ServiceUIFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/CopiesSupported.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/DialogTypeSelection.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobSheets.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize$ISO.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <javax/print/attribute/standard/PrinterState.h>
#include <javax/print/attribute/standard/PrinterStateReason.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/QueuedJobCount.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/attribute/standard/Severity.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <sun/print/ServiceNotifier.h>
#include <sun/print/UnixPrintJob.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ACCEPTING_JOBS
#undef AUTOSENSE
#undef BSD_LPD_NG
#undef CANADA
#undef COLLATED
#undef COLOR
#undef COMMON
#undef ENGLISH
#undef ERROR
#undef EXECUTIVE
#undef FIDELITY_FALSE
#undef FIDELITY_TRUE
#undef GIF
#undef INCH
#undef ISO_A3
#undef ISO_A4
#undef ISO_A5
#undef ISO_B4
#undef ISO_B5
#undef JPEG
#undef LANDSCAPE
#undef LEDGER
#undef LETTER
#undef MAXCOPIES
#undef MAX_VALUE
#undef NA_LEGAL
#undef NA_LETTER
#undef NONE
#undef NOT_ACCEPTING_JOBS
#undef ONE_SIDED
#undef PAGEABLE
#undef PNG
#undef PORTRAIT
#undef POSTSCRIPT
#undef PRINTABLE
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT
#undef SHUTDOWN
#undef STANDARD
#undef STOPPED
#undef TABLOID
#undef TEXT_PLAIN
#undef TEXT_PLAIN_HOST
#undef TEXT_PLAIN_US_ASCII
#undef TEXT_PLAIN_UTF_16
#undef TEXT_PLAIN_UTF_16BE
#undef TEXT_PLAIN_UTF_16LE
#undef TEXT_PLAIN_UTF_8
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef UNCOLLATED
#undef UNINITIALIZED
#undef US

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $FidelityArray = $Array<::javax::print::attribute::standard::Fidelity>;
using $JobSheetsArray = $Array<::javax::print::attribute::standard::JobSheets>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $OrientationRequestedArray = $Array<::javax::print::attribute::standard::OrientationRequested>;
using $PageRangesArray = $Array<::javax::print::attribute::standard::PageRanges>;
using $SheetCollateArray = $Array<::javax::print::attribute::standard::SheetCollate>;
using $SidesArray = $Array<::javax::print::attribute::standard::Sides>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $File = ::java::io::File;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Locale = ::java::util::Locale;
using $CancelablePrintJob = ::javax::print::CancelablePrintJob;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$CHAR_ARRAY = ::javax::print::DocFlavor$CHAR_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$READER = ::javax::print::DocFlavor$READER;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocFlavor$STRING = ::javax::print::DocFlavor$STRING;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintService = ::javax::print::PrintService;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $Copies = ::javax::print::attribute::standard::Copies;
using $CopiesSupported = ::javax::print::attribute::standard::CopiesSupported;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogTypeSelection = ::javax::print::attribute::standard::DialogTypeSelection;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobSheets = ::javax::print::attribute::standard::JobSheets;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSize$ISO = ::javax::print::attribute::standard::MediaSize$ISO;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $PrinterState = ::javax::print::attribute::standard::PrinterState;
using $PrinterStateReason = ::javax::print::attribute::standard::PrinterStateReason;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $QueuedJobCount = ::javax::print::attribute::standard::QueuedJobCount;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $Severity = ::javax::print::attribute::standard::Severity;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;
using $ServiceNotifier = ::sun::print::ServiceNotifier;
using $UnixPrintJob = ::sun::print::UnixPrintJob;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace print {

$FieldInfo _UnixPrintService_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixPrintService, $assertionsDisabled)},
	{"encoding", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintService, encoding)},
	{"textByteFlavor", "Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintService, textByteFlavor)},
	{"supportedDocFlavors", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintService, supportedDocFlavors)},
	{"supportedDocFlavorsInit", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixPrintService, supportedDocFlavorsInit)},
	{"supportedHostDocFlavors", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixPrintService, supportedHostDocFlavors)},
	{"lpcStatusCom", "[Ljava/lang/String;", nullptr, 0, $field(UnixPrintService, lpcStatusCom)},
	{"lpcQueueCom", "[Ljava/lang/String;", nullptr, 0, $field(UnixPrintService, lpcQueueCom)},
	{"serviceAttrCats", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(UnixPrintService, serviceAttrCats)},
	{"otherAttrCats", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(UnixPrintService, otherAttrCats)},
	{"MAXCOPIES", "I", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintService, MAXCOPIES)},
	{"mediaSizes", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixPrintService, mediaSizes)},
	{"printer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnixPrintService, printer)},
	{"name", "Ljavax/print/attribute/standard/PrinterName;", nullptr, $PRIVATE, $field(UnixPrintService, name)},
	{"isInvalid", "Z", nullptr, $PRIVATE, $field(UnixPrintService, isInvalid)},
	{"lastSet", "Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(UnixPrintService, lastSet)},
	{"notifier", "Lsun/print/ServiceNotifier;", nullptr, $PRIVATE | $TRANSIENT, $field(UnixPrintService, notifier)},
	{"mpas", "[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintService, mpas)},
	{}
};

$MethodInfo _UnixPrintService_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(UnixPrintService::*)($String*)>(&UnixPrintService::init$))},
	{"addPrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"createPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"filterPrinterNamesAIX", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$StringArray*(*)($StringArray*)>(&UnixPrintService::filterPrinterNamesAIX))},
	{"getAIXServiceAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE, $method(static_cast<$PrintServiceAttributeSet*(UnixPrintService::*)()>(&UnixPrintService::getAIXServiceAttributes))},
	{"getAllPrintableAreas", "()[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE, $method(static_cast<$MediaPrintableAreaArray*(UnixPrintService::*)()>(&UnixPrintService::getAllPrintableAreas))},
	{"getAttribute", "(Ljava/lang/Class;)Ljavax/print/attribute/PrintServiceAttribute;", "<T::Ljavax/print/attribute/PrintServiceAttribute;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC},
	{"getBSDServiceAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE, $method(static_cast<$PrintServiceAttributeSet*(UnixPrintService::*)()>(&UnixPrintService::getBSDServiceAttributes))},
	{"getDefaultAttributeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Ljava/lang/Object;", $PUBLIC},
	{"getDynamicAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE, $method(static_cast<$PrintServiceAttributeSet*(UnixPrintService::*)()>(&UnixPrintService::getDynamicAttributes))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrinterIsAcceptingJobs", "()Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PRIVATE, $method(static_cast<$PrinterIsAcceptingJobs*(UnixPrintService::*)()>(&UnixPrintService::getPrinterIsAcceptingJobs))},
	{"getPrinterIsAcceptingJobsAIX", "()Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PRIVATE, $method(static_cast<$PrinterIsAcceptingJobs*(UnixPrintService::*)()>(&UnixPrintService::getPrinterIsAcceptingJobsAIX))},
	{"getPrinterIsAcceptingJobsBSD", "()Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PRIVATE, $method(static_cast<$PrinterIsAcceptingJobs*(UnixPrintService::*)()>(&UnixPrintService::getPrinterIsAcceptingJobsBSD))},
	{"getPrinterName", "()Ljavax/print/attribute/standard/PrinterName;", nullptr, $PRIVATE, $method(static_cast<$PrinterName*(UnixPrintService::*)()>(&UnixPrintService::getPrinterName))},
	{"getPrinterState", "()Ljavax/print/attribute/standard/PrinterState;", nullptr, $PRIVATE, $method(static_cast<$PrinterState*(UnixPrintService::*)()>(&UnixPrintService::getPrinterState))},
	{"getPrinterStateReasons", "()Ljavax/print/attribute/standard/PrinterStateReasons;", nullptr, $PRIVATE, $method(static_cast<$PrinterStateReasons*(UnixPrintService::*)()>(&UnixPrintService::getPrinterStateReasons))},
	{"getQueuedJobCount", "()Ljavax/print/attribute/standard/QueuedJobCount;", nullptr, $PRIVATE, $method(static_cast<$QueuedJobCount*(UnixPrintService::*)()>(&UnixPrintService::getQueuedJobCount))},
	{"getQueuedJobCountAIX", "()Ljavax/print/attribute/standard/QueuedJobCount;", nullptr, $PRIVATE, $method(static_cast<$QueuedJobCount*(UnixPrintService::*)()>(&UnixPrintService::getQueuedJobCountAIX))},
	{"getQueuedJobCountBSD", "()Ljavax/print/attribute/standard/QueuedJobCount;", nullptr, $PRIVATE, $method(static_cast<$QueuedJobCount*(UnixPrintService::*)()>(&UnixPrintService::getQueuedJobCountBSD))},
	{"getServiceUIFactory", "()Ljavax/print/ServiceUIFactory;", nullptr, $PUBLIC},
	{"getSupportedAttributeCategories", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"getSupportedAttributeValues", "(Ljava/lang/Class;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", $PUBLIC},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{"getUnsupportedAttributes", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC},
	{"getUpdatedAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initSupportedDocFlavors", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintService::*)()>(&UnixPrintService::initSupportedDocFlavors))},
	{"invalidateService", "()V", nullptr, $PUBLIC},
	{"isAttributeCategorySupported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Z", $PUBLIC},
	{"isAttributeValueSupported", "(Ljavax/print/attribute/Attribute;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"isAutoSense", "(Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE, $method(static_cast<bool(UnixPrintService::*)($DocFlavor*)>(&UnixPrintService::isAutoSense))},
	{"isDocFlavorSupported", "(Ljavax/print/DocFlavor;)Z", nullptr, $PUBLIC},
	{"isServiceFormattedFlavor", "(Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE, $method(static_cast<bool(UnixPrintService::*)($DocFlavor*)>(&UnixPrintService::isServiceFormattedFlavor))},
	{"isSupportedCopies", "(Ljavax/print/attribute/standard/Copies;)Z", nullptr, $PRIVATE, $method(static_cast<bool(UnixPrintService::*)($Copies*)>(&UnixPrintService::isSupportedCopies))},
	{"isSupportedMedia", "(Ljavax/print/attribute/standard/MediaSizeName;)Z", nullptr, $PRIVATE, $method(static_cast<bool(UnixPrintService::*)($MediaSizeName*)>(&UnixPrintService::isSupportedMedia))},
	{"removePrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usesClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{"wakeNotifier", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnixPrintService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.UnixPrintService",
	"java.lang.Object",
	"javax.print.PrintService,sun.print.AttributeUpdater,sun.print.SunPrinterJobService",
	_UnixPrintService_FieldInfo_,
	_UnixPrintService_MethodInfo_
};

$Object* allocate$UnixPrintService($Class* clazz) {
	return $of($alloc(UnixPrintService));
}

$Object* UnixPrintService::clone() {
	 return this->$PrintService::clone();
}

void UnixPrintService::finalize() {
	this->$PrintService::finalize();
}

bool UnixPrintService::$assertionsDisabled = false;
$String* UnixPrintService::encoding = nullptr;
$DocFlavor* UnixPrintService::textByteFlavor = nullptr;
$DocFlavorArray* UnixPrintService::supportedDocFlavors = nullptr;
$DocFlavorArray* UnixPrintService::supportedDocFlavorsInit = nullptr;
$DocFlavorArray* UnixPrintService::supportedHostDocFlavors = nullptr;
$ClassArray* UnixPrintService::serviceAttrCats = nullptr;
$ClassArray* UnixPrintService::otherAttrCats = nullptr;
int32_t UnixPrintService::MAXCOPIES = 0;
$MediaSizeNameArray* UnixPrintService::mediaSizes = nullptr;
$MediaPrintableAreaArray* UnixPrintService::mpas = nullptr;

void UnixPrintService::init$($String* name) {
	$set(this, lpcStatusCom, $new($StringArray, {
		""_s,
		"| grep -E \'^[ 0-9a-zA-Z_-]*@\' | awk \'{print $2, $3}\'"_s
	}));
	$set(this, lpcQueueCom, $new($StringArray, {
		""_s,
		"| grep -E \'^[ 0-9a-zA-Z_-]*@\' | awk \'{print $4}\'"_s
	}));
	$set(this, notifier, nullptr);
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "null printer name"_s);
	}
	$set(this, printer, name);
	this->isInvalid = false;
}

void UnixPrintService::invalidateService() {
	this->isInvalid = true;
}

$String* UnixPrintService::getName() {
	return this->printer;
}

$PrinterName* UnixPrintService::getPrinterName() {
	if (this->name == nullptr) {
		$set(this, name, $new($PrinterName, this->printer, nullptr));
	}
	return this->name;
}

$PrinterIsAcceptingJobs* UnixPrintService::getPrinterIsAcceptingJobsBSD() {
	$useLocalCurrentObjectStackCache();
	$init($PrintServiceLookupProvider);
	if ($PrintServiceLookupProvider::cmdIndex == $PrintServiceLookupProvider::UNINITIALIZED) {
		$PrintServiceLookupProvider::cmdIndex = $PrintServiceLookupProvider::getBSDCommandIndex();
	}
	$var($String, command, $str({"/usr/sbin/lpc status "_s, this->printer, $nc(this->lpcStatusCom)->get($PrintServiceLookupProvider::cmdIndex)}));
	$var($StringArray, results, $PrintServiceLookupProvider::execCmd(command));
	if (results != nullptr && results->length > 0) {
		if ($PrintServiceLookupProvider::cmdIndex == $PrintServiceLookupProvider::BSD_LPD_NG) {
			if ($nc(results->get(0))->startsWith("enabled enabled"_s)) {
				$init($PrinterIsAcceptingJobs);
				return $PrinterIsAcceptingJobs::ACCEPTING_JOBS;
			}
		} else {
			bool var$4 = $($nc(results->get(1))->trim())->startsWith("queuing is enabled"_s);
			bool var$3 = (var$4 && $($nc(results->get(2))->trim())->startsWith("printing is enabled"_s));
			if (!var$3) {
				bool var$5 = results->length >= 4 && $($nc(results->get(2))->trim())->startsWith("queuing is enabled"_s);
				var$3 = (var$5 && $($nc(results->get(3))->trim())->startsWith("printing is enabled"_s));
			}
			if (var$3) {
				$init($PrinterIsAcceptingJobs);
				return $PrinterIsAcceptingJobs::ACCEPTING_JOBS;
			}
		}
	}
	$init($PrinterIsAcceptingJobs);
	return $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS;
}

$StringArray* UnixPrintService::filterPrinterNamesAIX($StringArray* posPrinters) {
	$init(UnixPrintService);
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, printers, $new($ArrayList));
	$var($StringArray, splitPart, nullptr);
	for (int32_t i = 0; i < $nc(posPrinters)->length; ++i) {
		bool var$1 = $nc(posPrinters->get(i))->startsWith("---"_s);
		bool var$0 = var$1 || $nc(posPrinters->get(i))->startsWith("Queue"_s);
		if (var$0 || $nc(posPrinters->get(i))->isEmpty()) {
			continue;
		}
		$assign(splitPart, $nc(posPrinters->get(i))->split(" "_s));
		if (splitPart->length >= 1 && !$($nc(splitPart->get(0))->trim())->endsWith(":"_s)) {
			printers->add(posPrinters->get(i));
		}
	}
	return $fcast($StringArray, printers->toArray($$new($StringArray, printers->size())));
}

$PrinterIsAcceptingJobs* UnixPrintService::getPrinterIsAcceptingJobsAIX() {
	$useLocalCurrentObjectStackCache();
	$var($String, command, $str({"/usr/bin/lpstat -a"_s, this->printer}));
	$var($StringArray, results, $PrintServiceLookupProvider::execCmd(command));
	$assign(results, filterPrinterNamesAIX(results));
	if (results != nullptr && results->length > 0) {
		for (int32_t i = 0; i < results->length; ++i) {
			bool var$0 = $nc(results->get(i))->contains("READY"_s);
			if (var$0 || $nc(results->get(i))->contains("RUNNING"_s)) {
				$init($PrinterIsAcceptingJobs);
				return $PrinterIsAcceptingJobs::ACCEPTING_JOBS;
			}
		}
	}
	$init($PrinterIsAcceptingJobs);
	return $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS;
}

$PrinterIsAcceptingJobs* UnixPrintService::getPrinterIsAcceptingJobs() {
	if ($PrintServiceLookupProvider::isBSD()) {
		return getPrinterIsAcceptingJobsBSD();
	} else if ($PrintServiceLookupProvider::isAIX()) {
		return getPrinterIsAcceptingJobsAIX();
	} else {
		$init($PrinterIsAcceptingJobs);
		return $PrinterIsAcceptingJobs::ACCEPTING_JOBS;
	}
}

$PrinterState* UnixPrintService::getPrinterState() {
	if (this->isInvalid) {
		$init($PrinterState);
		return $PrinterState::STOPPED;
	} else {
		return nullptr;
	}
}

$PrinterStateReasons* UnixPrintService::getPrinterStateReasons() {
	if (this->isInvalid) {
		$var($PrinterStateReasons, psr, $new($PrinterStateReasons));
		$init($PrinterStateReason);
		$init($Severity);
		psr->put($PrinterStateReason::SHUTDOWN, $Severity::ERROR);
		return psr;
	} else {
		return nullptr;
	}
}

$QueuedJobCount* UnixPrintService::getQueuedJobCountBSD() {
	$useLocalCurrentObjectStackCache();
	$init($PrintServiceLookupProvider);
	if ($PrintServiceLookupProvider::cmdIndex == $PrintServiceLookupProvider::UNINITIALIZED) {
		$PrintServiceLookupProvider::cmdIndex = $PrintServiceLookupProvider::getBSDCommandIndex();
	}
	int32_t qlen = 0;
	$var($String, command, $str({"/usr/sbin/lpc status "_s, this->printer, $nc(this->lpcQueueCom)->get($PrintServiceLookupProvider::cmdIndex)}));
	$var($StringArray, results, $PrintServiceLookupProvider::execCmd(command));
	if (results != nullptr && results->length > 0) {
		$var($String, queued, nullptr);
		if ($PrintServiceLookupProvider::cmdIndex == $PrintServiceLookupProvider::BSD_LPD_NG) {
			$assign(queued, results->get(0));
		} else {
			$assign(queued, $nc(results->get(3))->trim());
			if (queued->startsWith("no"_s)) {
				return $new($QueuedJobCount, 0);
			} else {
				$assign(queued, queued->substring(0, queued->indexOf((int32_t)u' ')));
			}
		}
		try {
			qlen = $Integer::parseInt(queued);
		} catch ($NumberFormatException& e) {
		}
	}
	return $new($QueuedJobCount, qlen);
}

$QueuedJobCount* UnixPrintService::getQueuedJobCountAIX() {
	$useLocalCurrentObjectStackCache();
	$var($String, command, $str({"/usr/bin/lpstat -a"_s, this->printer}));
	$var($StringArray, results, $PrintServiceLookupProvider::execCmd(command));
	$assign(results, filterPrinterNamesAIX(results));
	int32_t qlen = 0;
	if (results != nullptr && results->length > 0) {
		for (int32_t i = 0; i < results->length; ++i) {
			if ($nc(results->get(i))->contains("QUEUED"_s)) {
				++qlen;
			}
		}
	}
	return $new($QueuedJobCount, qlen);
}

$QueuedJobCount* UnixPrintService::getQueuedJobCount() {
	if ($PrintServiceLookupProvider::isBSD()) {
		return getQueuedJobCountBSD();
	} else if ($PrintServiceLookupProvider::isAIX()) {
		return getQueuedJobCountAIX();
	} else {
		return $new($QueuedJobCount, 0);
	}
}

$PrintServiceAttributeSet* UnixPrintService::getBSDServiceAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceAttributeSet, attrs, $new($HashPrintServiceAttributeSet));
	attrs->add($(getQueuedJobCountBSD()));
	attrs->add($(getPrinterIsAcceptingJobsBSD()));
	return attrs;
}

$PrintServiceAttributeSet* UnixPrintService::getAIXServiceAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceAttributeSet, attrs, $new($HashPrintServiceAttributeSet));
	attrs->add($(getQueuedJobCountAIX()));
	attrs->add($(getPrinterIsAcceptingJobsAIX()));
	return attrs;
}

bool UnixPrintService::isSupportedCopies($Copies* copies) {
	int32_t numCopies = $nc(copies)->getValue();
	return (numCopies > 0 && numCopies < UnixPrintService::MAXCOPIES);
}

bool UnixPrintService::isSupportedMedia($MediaSizeName* msn) {
	for (int32_t i = 0; i < $nc(UnixPrintService::mediaSizes)->length; ++i) {
		if ($nc(msn)->equals($nc(UnixPrintService::mediaSizes)->get(i))) {
			return true;
		}
	}
	return false;
}

$DocPrintJob* UnixPrintService::createPrintJob() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $new($UnixPrintJob, this);
}

$PrintServiceAttributeSet* UnixPrintService::getDynamicAttributes() {
	if ($PrintServiceLookupProvider::isAIX()) {
		return getAIXServiceAttributes();
	} else {
		return getBSDServiceAttributes();
	}
}

$PrintServiceAttributeSet* UnixPrintService::getUpdatedAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceAttributeSet, currSet, getDynamicAttributes());
	if (this->lastSet == nullptr) {
		$set(this, lastSet, currSet);
		return $AttributeSetUtilities::unmodifiableView(currSet);
	} else {
		$var($PrintServiceAttributeSet, updates, $new($HashPrintServiceAttributeSet));
		$var($AttributeArray, attrs, $nc(currSet)->toArray());
		$var($Attribute, attr, nullptr);
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			$assign(attr, attrs->get(i));
			if (!$nc(this->lastSet)->containsValue(attr)) {
				updates->add(attr);
			}
		}
		$set(this, lastSet, currSet);
		return $AttributeSetUtilities::unmodifiableView(updates);
	}
}

void UnixPrintService::wakeNotifier() {
	$synchronized(this) {
		if (this->notifier != nullptr) {
			$nc(this->notifier)->wake();
		}
	}
}

void UnixPrintService::addPrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->notifier == nullptr) {
			$set(this, notifier, $new($ServiceNotifier, this));
		}
		$nc(this->notifier)->addListener(listener);
	}
}

void UnixPrintService::removePrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->notifier == nullptr) {
			return;
		}
		$nc(this->notifier)->removeListener(listener);
		if ($nc(this->notifier)->isEmpty()) {
			$nc(this->notifier)->stopNotifier();
			$set(this, notifier, nullptr);
		}
	}
}

$PrintServiceAttribute* UnixPrintService::getAttribute($Class* category) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "category"_s);
	}
	$load($PrintServiceAttribute);
	if (!($PrintServiceAttribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, "Not a PrintServiceAttribute"_s);
	}
	$load($PrinterName);
	if (category == $PrinterName::class$) {
		return static_cast<$PrintServiceAttribute*>(getPrinterName());
	} else {
		$load($PrinterState);
		if (category == $PrinterState::class$) {
			return static_cast<$PrintServiceAttribute*>(getPrinterState());
		} else {
			$load($PrinterStateReasons);
			if (category == $PrinterStateReasons::class$) {
				return static_cast<$PrintServiceAttribute*>(getPrinterStateReasons());
			} else {
				$load($QueuedJobCount);
				if (category == $QueuedJobCount::class$) {
					return static_cast<$PrintServiceAttribute*>(getQueuedJobCount());
				} else {
					$load($PrinterIsAcceptingJobs);
					if (category == $PrinterIsAcceptingJobs::class$) {
						return static_cast<$PrintServiceAttribute*>(getPrinterIsAcceptingJobs());
					} else {
						return nullptr;
					}
				}
			}
		}
	}
}

$PrintServiceAttributeSet* UnixPrintService::getAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceAttributeSet, attrs, $new($HashPrintServiceAttributeSet));
	attrs->add($(getPrinterName()));
	attrs->add($(getPrinterIsAcceptingJobs()));
	$var($PrinterState, prnState, getPrinterState());
	if (prnState != nullptr) {
		attrs->add(prnState);
	}
	$var($PrinterStateReasons, prnStateReasons, getPrinterStateReasons());
	if (prnStateReasons != nullptr) {
		attrs->add(prnStateReasons);
	}
	attrs->add($(getQueuedJobCount()));
	return $AttributeSetUtilities::unmodifiableView(attrs);
}

void UnixPrintService::initSupportedDocFlavors() {
	$useLocalCurrentObjectStackCache();
	$init($DocFlavor);
	$init($Locale);
	$var($String, hostEnc, $nc($DocFlavor::hostEncoding)->toLowerCase($Locale::ENGLISH));
	bool var$3 = !hostEnc->equals("utf-8"_s);
	bool var$2 = var$3 && !hostEnc->equals("utf-16"_s);
	bool var$1 = var$2 && !hostEnc->equals("utf-16be"_s);
	bool var$0 = var$1 && !hostEnc->equals("utf-16le"_s);
	if (var$0 && !hostEnc->equals("us-ascii"_s)) {
		int32_t len = $nc(UnixPrintService::supportedDocFlavorsInit)->length;
		$var($DocFlavorArray, flavors, $new($DocFlavorArray, len + $nc(UnixPrintService::supportedHostDocFlavors)->length));
		$System::arraycopy(UnixPrintService::supportedHostDocFlavors, 0, flavors, len, $nc(UnixPrintService::supportedHostDocFlavors)->length);
		$System::arraycopy(UnixPrintService::supportedDocFlavorsInit, 0, flavors, 0, len);
		$assignStatic(UnixPrintService::supportedDocFlavors, flavors);
	} else {
		$assignStatic(UnixPrintService::supportedDocFlavors, UnixPrintService::supportedDocFlavorsInit);
	}
}

$DocFlavorArray* UnixPrintService::getSupportedDocFlavors() {
	if (UnixPrintService::supportedDocFlavors == nullptr) {
		initSupportedDocFlavors();
	}
	int32_t len = $nc(UnixPrintService::supportedDocFlavors)->length;
	$var($DocFlavorArray, flavors, $new($DocFlavorArray, len));
	$System::arraycopy(UnixPrintService::supportedDocFlavors, 0, flavors, 0, len);
	return flavors;
}

bool UnixPrintService::isDocFlavorSupported($DocFlavor* flavor) {
	if (UnixPrintService::supportedDocFlavors == nullptr) {
		initSupportedDocFlavors();
	}
	for (int32_t f = 0; f < $nc(UnixPrintService::supportedDocFlavors)->length; ++f) {
		if ($nc(flavor)->equals($nc(UnixPrintService::supportedDocFlavors)->get(f))) {
			return true;
		}
	}
	return false;
}

$ClassArray* UnixPrintService::getSupportedAttributeCategories() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, categList, $new($ArrayList, $nc(UnixPrintService::otherAttrCats)->length));
	{
		$var($ClassArray, arr$, UnixPrintService::otherAttrCats);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* c = arr$->get(i$);
			{
				categList->add(c);
			}
		}
	}
	if ($GraphicsEnvironment::isHeadless() == false) {
		$load($DialogOwner);
		categList->add($DialogOwner::class$);
		$load($DialogTypeSelection);
		categList->add($DialogTypeSelection::class$);
	}
	return $fcast($ClassArray, categList->toArray($$new($ClassArray, categList->size())));
}

bool UnixPrintService::isAttributeCategorySupported($Class* category) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!($Attribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, $$str({category, " is not an Attribute"_s}));
	}
	for (int32_t i = 0; i < $nc(UnixPrintService::otherAttrCats)->length; ++i) {
		if (category == $nc(UnixPrintService::otherAttrCats)->get(i)) {
			return true;
		}
	}
	return false;
}

$Object* UnixPrintService::getDefaultAttributeValue($Class* category) {
	$useLocalCurrentObjectStackCache();
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!$Attribute::class$->isAssignableFrom(category)) {
		$throwNew($IllegalArgumentException, $$str({category, " is not an Attribute"_s}));
	}
	if (!isAttributeCategorySupported(category)) {
		return $of(nullptr);
	}
	$load($Copies);
	if (category == $Copies::class$) {
		return $of($new($Copies, 1));
	} else {
		$load($Chromaticity);
		if (category == $Chromaticity::class$) {
			$init($Chromaticity);
			return $of($Chromaticity::COLOR);
		} else {
			$load($Destination);
			if (category == $Destination::class$) {
				try {
					return $of($new($Destination, $(($$new($File, "out.ps"_s))->toURI())));
				} catch ($SecurityException& se) {
					try {
						return $of($new($Destination, $$new($URI, "file:out.ps"_s)));
					} catch ($URISyntaxException& e) {
						return $of(nullptr);
					}
				}
			} else {
				$load($Fidelity);
				if (category == $Fidelity::class$) {
					$init($Fidelity);
					return $of($Fidelity::FIDELITY_FALSE);
				} else {
					$load($JobName);
					if (category == $JobName::class$) {
						return $of($new($JobName, "Java Printing"_s, nullptr));
					} else {
						$load($JobSheets);
						if (category == $JobSheets::class$) {
							$init($JobSheets);
							return $of($JobSheets::STANDARD);
						} else {
							$load($Media);
							if (category == $Media::class$) {
								$var($String, defaultCountry, $nc($($Locale::getDefault()))->getCountry());
								bool var$0 = defaultCountry != nullptr;
								if (var$0) {
									bool var$2 = defaultCountry->isEmpty();
									bool var$1 = var$2 || $nc(defaultCountry)->equals($($nc($Locale::US)->getCountry()));
									var$0 = (var$1 || defaultCountry->equals($($nc($Locale::CANADA)->getCountry())));
								}
								if (var$0) {
									$init($MediaSizeName);
									return $of($MediaSizeName::NA_LETTER);
								} else {
									$init($MediaSizeName);
									return $of($MediaSizeName::ISO_A4);
								}
							} else {
								$load($MediaPrintableArea);
								if (category == $MediaPrintableArea::class$) {
									$var($String, defaultCountry, $nc($($Locale::getDefault()))->getCountry());
									float iw = 0.0;
									float ih = 0.0;
									bool var$3 = defaultCountry != nullptr;
									if (var$3) {
										bool var$5 = defaultCountry->isEmpty();
										bool var$4 = var$5 || $nc(defaultCountry)->equals($($nc($Locale::US)->getCountry()));
										var$3 = (var$4 || defaultCountry->equals($($nc($Locale::CANADA)->getCountry())));
									}
									if (var$3) {
										$init($MediaSize$NA);
										iw = $nc($MediaSize$NA::LETTER)->getX($Size2DSyntax::INCH) - 0.5f;
										ih = $nc($MediaSize$NA::LETTER)->getY($Size2DSyntax::INCH) - 0.5f;
									} else {
										$init($MediaSize$ISO);
										iw = $nc($MediaSize$ISO::A4)->getX($Size2DSyntax::INCH) - 0.5f;
										ih = $nc($MediaSize$ISO::A4)->getY($Size2DSyntax::INCH) - 0.5f;
									}
									return $of($new($MediaPrintableArea, 0.25f, 0.25f, iw, ih, $MediaPrintableArea::INCH));
								} else {
									$load($OrientationRequested);
									if (category == $OrientationRequested::class$) {
										$init($OrientationRequested);
										return $of($OrientationRequested::PORTRAIT);
									} else {
										$load($PageRanges);
										if (category == $PageRanges::class$) {
											return $of($new($PageRanges, 1, $Integer::MAX_VALUE));
										} else {
											$load($RequestingUserName);
											if (category == $RequestingUserName::class$) {
												$var($String, userName, ""_s);
												try {
													$assign(userName, $System::getProperty("user.name"_s, ""_s));
												} catch ($SecurityException& se) {
												}
												return $of($new($RequestingUserName, userName, nullptr));
											} else {
												$load($SheetCollate);
												if (category == $SheetCollate::class$) {
													$init($SheetCollate);
													return $of($SheetCollate::UNCOLLATED);
												} else {
													$load($Sides);
													if (category == $Sides::class$) {
														$init($Sides);
														return $of($Sides::ONE_SIDED);
													} else {
														return $of(nullptr);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool UnixPrintService::isAutoSense($DocFlavor* flavor) {
	$init($DocFlavor$BYTE_ARRAY);
	bool var$1 = $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::AUTOSENSE);
	$init($DocFlavor$INPUT_STREAM);
	bool var$0 = var$1 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::AUTOSENSE);
	$init($DocFlavor$URL);
	if (var$0 || $nc(flavor)->equals($DocFlavor$URL::AUTOSENSE)) {
		return true;
	} else {
		return false;
	}
}

$Object* UnixPrintService::getSupportedAttributeValues($Class* category, $DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!$Attribute::class$->isAssignableFrom(category)) {
		$throwNew($IllegalArgumentException, $$str({category, " does not implement Attribute"_s}));
	}
	if (flavor != nullptr) {
		if (!isDocFlavorSupported(flavor)) {
			$throwNew($IllegalArgumentException, $$str({flavor, " is an unsupported flavor"_s}));
		} else if (isAutoSense(flavor)) {
			return $of(nullptr);
		}
	}
	if (!isAttributeCategorySupported(category)) {
		return $of(nullptr);
	}
	$load($Chromaticity);
	if (category == $Chromaticity::class$) {
		if (flavor == nullptr || isServiceFormattedFlavor(flavor)) {
			$var($ChromaticityArray, arr, $new($ChromaticityArray, 1));
			$init($Chromaticity);
			arr->set(0, $Chromaticity::COLOR);
			return $of((arr));
		} else {
			return $of(nullptr);
		}
	} else {
		$load($Destination);
		if (category == $Destination::class$) {
			try {
				return $of($new($Destination, $(($$new($File, "out.ps"_s))->toURI())));
			} catch ($SecurityException& se) {
				try {
					return $of($new($Destination, $$new($URI, "file:out.ps"_s)));
				} catch ($URISyntaxException& e) {
					return $of(nullptr);
				}
			}
		} else {
			$load($JobName);
			if (category == $JobName::class$) {
				return $of($new($JobName, "Java Printing"_s, nullptr));
			} else {
				$load($JobSheets);
				if (category == $JobSheets::class$) {
					$var($JobSheetsArray, arr, $new($JobSheetsArray, 2));
					$init($JobSheets);
					arr->set(0, $JobSheets::NONE);
					arr->set(1, $JobSheets::STANDARD);
					return $of(arr);
				} else {
					$load($RequestingUserName);
					if (category == $RequestingUserName::class$) {
						$var($String, userName, ""_s);
						try {
							$assign(userName, $System::getProperty("user.name"_s, ""_s));
						} catch ($SecurityException& se) {
						}
						return $of($new($RequestingUserName, userName, nullptr));
					} else {
						$load($OrientationRequested);
						if (category == $OrientationRequested::class$) {
							if (flavor == nullptr || isServiceFormattedFlavor(flavor)) {
								$var($OrientationRequestedArray, arr, $new($OrientationRequestedArray, 3));
								$init($OrientationRequested);
								arr->set(0, $OrientationRequested::PORTRAIT);
								arr->set(1, $OrientationRequested::LANDSCAPE);
								arr->set(2, $OrientationRequested::REVERSE_LANDSCAPE);
								return $of(arr);
							} else {
								return $of(nullptr);
							}
						} else {
							$load($Copies);
							$load($CopiesSupported);
							if ((category == $Copies::class$) || (category == $CopiesSupported::class$)) {
								bool var$0 = flavor == nullptr;
								if (!var$0) {
									$init($DocFlavor$INPUT_STREAM);
									bool var$2 = $nc(flavor)->equals($DocFlavor$INPUT_STREAM::POSTSCRIPT);
									$init($DocFlavor$URL);
									bool var$1 = var$2 || $nc(flavor)->equals($DocFlavor$URL::POSTSCRIPT);
									$init($DocFlavor$BYTE_ARRAY);
									var$0 = !(var$1 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::POSTSCRIPT));
								}
								if (var$0) {
									return $of($new($CopiesSupported, 1, UnixPrintService::MAXCOPIES));
								} else {
									return $of(nullptr);
								}
							} else {
								$load($Media);
								if (category == $Media::class$) {
									$var($MediaArray, arr, $new($MediaArray, $nc(UnixPrintService::mediaSizes)->length));
									$System::arraycopy(UnixPrintService::mediaSizes, 0, arr, 0, $nc(UnixPrintService::mediaSizes)->length);
									return $of(arr);
								} else {
									$load($Fidelity);
									if (category == $Fidelity::class$) {
										$var($FidelityArray, arr, $new($FidelityArray, 2));
										$init($Fidelity);
										arr->set(0, $Fidelity::FIDELITY_FALSE);
										arr->set(1, $Fidelity::FIDELITY_TRUE);
										return $of(arr);
									} else {
										$load($MediaPrintableArea);
										if (category == $MediaPrintableArea::class$) {
											if (attributes == nullptr) {
												return $of(getAllPrintableAreas());
											}
											$load($MediaSize);
											$var($MediaSize, mediaSize, $cast($MediaSize, $nc(attributes)->get($MediaSize::class$)));
											$var($Media, media, $cast($Media, attributes->get($Media::class$)));
											$var($MediaPrintableAreaArray, arr, $new($MediaPrintableAreaArray, 1));
											if (mediaSize == nullptr) {
												if ($instanceOf($MediaSizeName, media)) {
													$var($MediaSizeName, msn, $cast($MediaSizeName, media));
													$assign(mediaSize, $MediaSize::getMediaSizeForName(msn));
													if (mediaSize == nullptr) {
														$assign(media, $cast($Media, getDefaultAttributeValue($Media::class$)));
														if ($instanceOf($MediaSizeName, media)) {
															$assign(msn, $cast($MediaSizeName, media));
															$assign(mediaSize, $MediaSize::getMediaSizeForName(msn));
														}
														if (mediaSize == nullptr) {
															arr->set(0, $$new($MediaPrintableArea, 0.25f, 0.25f, 8.0f, 10.5f, $MediaSize::INCH));
															return $of(arr);
														}
													}
												} else {
													return $of(getAllPrintableAreas());
												}
											}
											if (!UnixPrintService::$assertionsDisabled && !(mediaSize != nullptr)) {
												$throwNew($AssertionError);
											}
											float var$3 = $nc(mediaSize)->getX($MediaSize::INCH) - 0.5f;
											arr->set(0, $$new($MediaPrintableArea, 0.25f, 0.25f, var$3, mediaSize->getY($MediaSize::INCH) - 0.5f, $MediaSize::INCH));
											return $of(arr);
										} else {
											$load($PageRanges);
											if (category == $PageRanges::class$) {
												$init($DocFlavor$SERVICE_FORMATTED);
												bool var$4 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
												if (var$4 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
													$var($PageRangesArray, arr, $new($PageRangesArray, 1));
													arr->set(0, $$new($PageRanges, 1, $Integer::MAX_VALUE));
													return $of(arr);
												} else {
													return $of(nullptr);
												}
											} else {
												$load($SheetCollate);
												if (category == $SheetCollate::class$) {
													$init($DocFlavor$SERVICE_FORMATTED);
													bool var$5 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
													if (var$5 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
														$var($SheetCollateArray, arr, $new($SheetCollateArray, 2));
														$init($SheetCollate);
														arr->set(0, $SheetCollate::UNCOLLATED);
														arr->set(1, $SheetCollate::COLLATED);
														return $of(arr);
													} else {
														return $of(nullptr);
													}
												} else {
													$load($Sides);
													if (category == $Sides::class$) {
														$init($DocFlavor$SERVICE_FORMATTED);
														bool var$6 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
														if (var$6 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
															$var($SidesArray, arr, $new($SidesArray, 3));
															$init($Sides);
															arr->set(0, $Sides::ONE_SIDED);
															arr->set(1, $Sides::TWO_SIDED_LONG_EDGE);
															arr->set(2, $Sides::TWO_SIDED_SHORT_EDGE);
															return $of(arr);
														} else {
															return $of(nullptr);
														}
													} else {
														return $of(nullptr);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

$MediaPrintableAreaArray* UnixPrintService::getAllPrintableAreas() {
	$useLocalCurrentObjectStackCache();
	if (UnixPrintService::mpas == nullptr) {
		$load($Media);
		$var($MediaArray, media, $cast($MediaArray, getSupportedAttributeValues($Media::class$, nullptr, nullptr)));
		$assignStatic(UnixPrintService::mpas, $new($MediaPrintableAreaArray, $nc(media)->length));
		for (int32_t i = 0; i < $nc(UnixPrintService::mpas)->length; ++i) {
			if ($instanceOf($MediaSizeName, media->get(i))) {
				$var($MediaSizeName, msn, $cast($MediaSizeName, media->get(i)));
				$var($MediaSize, mediaSize, $MediaSize::getMediaSizeForName(msn));
				if (mediaSize == nullptr) {
					$load($MediaPrintableArea);
					$nc(UnixPrintService::mpas)->set(i, $cast($MediaPrintableArea, $(getDefaultAttributeValue($MediaPrintableArea::class$))));
				} else {
					float var$0 = $nc(mediaSize)->getX($MediaSize::INCH) - 0.5f;
					$nc(UnixPrintService::mpas)->set(i, $$new($MediaPrintableArea, 0.25f, 0.25f, var$0, mediaSize->getY($MediaSize::INCH) - 0.5f, $MediaSize::INCH));
				}
			}
		}
	}
	$var($MediaPrintableAreaArray, mpasCopy, $new($MediaPrintableAreaArray, $nc(UnixPrintService::mpas)->length));
	$System::arraycopy(UnixPrintService::mpas, 0, mpasCopy, 0, $nc(UnixPrintService::mpas)->length);
	return mpasCopy;
}

bool UnixPrintService::isServiceFormattedFlavor($DocFlavor* flavor) {
	$init($DocFlavor$SERVICE_FORMATTED);
	bool var$9 = $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
	bool var$8 = var$9 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
	$init($DocFlavor$BYTE_ARRAY);
	bool var$7 = var$8 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::GIF);
	$init($DocFlavor$INPUT_STREAM);
	bool var$6 = var$7 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::GIF);
	$init($DocFlavor$URL);
	bool var$5 = var$6 || $nc(flavor)->equals($DocFlavor$URL::GIF);
	bool var$4 = var$5 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::JPEG);
	bool var$3 = var$4 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::JPEG);
	bool var$2 = var$3 || $nc(flavor)->equals($DocFlavor$URL::JPEG);
	bool var$1 = var$2 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::PNG);
	bool var$0 = var$1 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::PNG);
	return var$0 || $nc(flavor)->equals($DocFlavor$URL::PNG);
}

bool UnixPrintService::isAttributeValueSupported($Attribute* attr, $DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	if (attr == nullptr) {
		$throwNew($NullPointerException, "null attribute"_s);
	}
	if (flavor != nullptr) {
		if (!isDocFlavorSupported(flavor)) {
			$throwNew($IllegalArgumentException, $$str({flavor, " is an unsupported flavor"_s}));
		} else if (isAutoSense(flavor)) {
			return false;
		}
	}
	$Class* category = $nc(attr)->getCategory();
	if (!isAttributeCategorySupported(category)) {
		return false;
	} else {
		$load($Chromaticity);
		if (attr->getCategory() == $Chromaticity::class$) {
			if (flavor == nullptr || isServiceFormattedFlavor(flavor)) {
				$init($Chromaticity);
				return $equals(attr, $Chromaticity::COLOR);
			} else {
				return false;
			}
		} else {
			$load($Copies);
			if (attr->getCategory() == $Copies::class$) {
				bool var$1 = flavor == nullptr;
				if (!var$1) {
					$init($DocFlavor$INPUT_STREAM);
					bool var$3 = $nc(flavor)->equals($DocFlavor$INPUT_STREAM::POSTSCRIPT);
					$init($DocFlavor$URL);
					bool var$2 = var$3 || $nc(flavor)->equals($DocFlavor$URL::POSTSCRIPT);
					$init($DocFlavor$BYTE_ARRAY);
					var$1 = !(var$2 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::POSTSCRIPT));
				}
				bool var$0 = (var$1);
				return var$0 && isSupportedCopies($cast($Copies, attr));
			} else {
				$load($Destination);
				if (attr->getCategory() == $Destination::class$) {
					$var($URI, uri, $nc(($cast($Destination, attr)))->getURI());
					bool var$4 = "file"_s->equals($($nc(uri)->getScheme()));
					if (var$4 && !$nc($($nc(uri)->getSchemeSpecificPart()))->isEmpty()) {
						return true;
					} else {
						return false;
					}
				} else {
					$load($Media);
					if (attr->getCategory() == $Media::class$) {
						if ($instanceOf($MediaSizeName, attr)) {
							return isSupportedMedia($cast($MediaSizeName, attr));
						} else {
							return false;
						}
					} else {
						$load($OrientationRequested);
						if (attr->getCategory() == $OrientationRequested::class$) {
							$init($OrientationRequested);
							if ($equals(attr, $OrientationRequested::REVERSE_PORTRAIT) || (flavor != nullptr) && !isServiceFormattedFlavor(flavor)) {
								return false;
							}
						} else {
							$load($PageRanges);
							if (attr->getCategory() == $PageRanges::class$) {
								bool var$5 = flavor != nullptr;
								if (var$5) {
									$init($DocFlavor$SERVICE_FORMATTED);
									bool var$6 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
									var$5 = !(var$6 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
								}
								if (var$5) {
									return false;
								}
							} else {
								$load($SheetCollate);
								if (attr->getCategory() == $SheetCollate::class$) {
									bool var$7 = flavor != nullptr;
									if (var$7) {
										$init($DocFlavor$SERVICE_FORMATTED);
										bool var$8 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
										var$7 = !(var$8 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
									}
									if (var$7) {
										return false;
									}
								} else {
									$load($Sides);
									if (attr->getCategory() == $Sides::class$) {
										bool var$9 = flavor != nullptr;
										if (var$9) {
											$init($DocFlavor$SERVICE_FORMATTED);
											bool var$10 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
											var$9 = !(var$10 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
										}
										if (var$9) {
											return false;
										}
									} else {
										$load($DialogOwner);
										if (attr->getCategory() == $DialogOwner::class$) {
											$var($DialogOwner, owner, $cast($DialogOwner, attr));
											if ($DialogOwnerAccessor::getID(owner) != 0) {
												return false;
											}
											if (owner->getOwner() != nullptr) {
												return true;
											} else {
												return $nc($($Toolkit::getDefaultToolkit()))->isAlwaysOnTopSupported();
											}
										} else {
											$load($DialogTypeSelection);
											if (attr->getCategory() == $DialogTypeSelection::class$) {
												$var($DialogTypeSelection, dts, $cast($DialogTypeSelection, attr));
												$init($DialogTypeSelection);
												return dts == $DialogTypeSelection::COMMON;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return true;
}

$AttributeSet* UnixPrintService::getUnsupportedAttributes($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	if (flavor != nullptr && !isDocFlavorSupported(flavor)) {
		$throwNew($IllegalArgumentException, $$str({"flavor "_s, flavor, "is not supported"_s}));
	}
	if (attributes == nullptr) {
		return nullptr;
	}
	$var($Attribute, attr, nullptr);
	$var($AttributeSet, unsupp, $new($HashAttributeSet));
	$var($AttributeArray, attrs, $nc(attributes)->toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		try {
			$assign(attr, attrs->get(i));
			if (!isAttributeCategorySupported($nc(attr)->getCategory())) {
				unsupp->add(attr);
			} else if (!isAttributeValueSupported(attr, flavor, attributes)) {
				unsupp->add(attr);
			}
		} catch ($ClassCastException& e) {
		}
	}
	if (unsupp->isEmpty()) {
		return nullptr;
	} else {
		return unsupp;
	}
}

$ServiceUIFactory* UnixPrintService::getServiceUIFactory() {
	return nullptr;
}

$String* UnixPrintService::toString() {
	return $str({"Unix Printer : "_s, $(getName())});
}

bool UnixPrintService::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	return ($equals(obj, this) || ($instanceOf(UnixPrintService, obj) && $nc($($nc(($cast(UnixPrintService, obj)))->getName()))->equals($(getName()))));
}

int32_t UnixPrintService::hashCode() {
	int32_t var$0 = $of($of(this)->getClass())->hashCode();
	return var$0 + $nc($(getName()))->hashCode();
}

bool UnixPrintService::usesClass($Class* c) {
	$load($PSPrinterJob);
	return (c == $PSPrinterJob::class$);
}

void clinit$UnixPrintService($Class* class$) {
	$beforeCallerSensitive();
	UnixPrintService::$assertionsDisabled = !UnixPrintService::class$->desiredAssertionStatus();
	$assignStatic(UnixPrintService::encoding, "ISO8859_1"_s);
	$assignStatic(UnixPrintService::supportedDocFlavors, nullptr);
	$init($DocFlavor$BYTE_ARRAY);
	$init($DocFlavor$INPUT_STREAM);
	$init($DocFlavor$URL);
	$init($DocFlavor$CHAR_ARRAY);
	$init($DocFlavor$READER);
	$init($DocFlavor$STRING);
	$init($DocFlavor$SERVICE_FORMATTED);
	$assignStatic(UnixPrintService::supportedDocFlavorsInit, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::POSTSCRIPT),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::POSTSCRIPT),
		static_cast<$DocFlavor*>($DocFlavor$URL::POSTSCRIPT),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::GIF),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::GIF),
		static_cast<$DocFlavor*>($DocFlavor$URL::GIF),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$URL::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::PNG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::PNG),
		static_cast<$DocFlavor*>($DocFlavor$URL::PNG),
		static_cast<$DocFlavor*>($DocFlavor$CHAR_ARRAY::TEXT_PLAIN),
		static_cast<$DocFlavor*>($DocFlavor$READER::TEXT_PLAIN),
		static_cast<$DocFlavor*>($DocFlavor$STRING::TEXT_PLAIN),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_8),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16BE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16LE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_US_ASCII),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_8),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16BE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16LE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_US_ASCII),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_UTF_8),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_UTF_16),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_UTF_16BE),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_UTF_16LE),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_US_ASCII),
		static_cast<$DocFlavor*>($DocFlavor$SERVICE_FORMATTED::PAGEABLE),
		static_cast<$DocFlavor*>($DocFlavor$SERVICE_FORMATTED::PRINTABLE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::AUTOSENSE),
		static_cast<$DocFlavor*>($DocFlavor$URL::AUTOSENSE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::AUTOSENSE)
	}));
	$assignStatic(UnixPrintService::supportedHostDocFlavors, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_HOST),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_HOST),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_HOST)
	}));
	{
		$assignStatic(UnixPrintService::encoding, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "file.encoding"_s)))));
	}
	$load($PrinterName);
	$load($PrinterIsAcceptingJobs);
	$load($QueuedJobCount);
	$assignStatic(UnixPrintService::serviceAttrCats, $new($ClassArray, {
		$PrinterName::class$,
		$PrinterIsAcceptingJobs::class$,
		$QueuedJobCount::class$
	}));
	$load($Chromaticity);
	$load($Copies);
	$load($Destination);
	$load($Fidelity);
	$load($JobName);
	$load($JobSheets);
	$load($Media);
	$load($MediaPrintableArea);
	$load($OrientationRequested);
	$load($PageRanges);
	$load($RequestingUserName);
	$load($SheetCollate);
	$load($Sides);
	$assignStatic(UnixPrintService::otherAttrCats, $new($ClassArray, {
		$Chromaticity::class$,
		$Copies::class$,
		$Destination::class$,
		$Fidelity::class$,
		$JobName::class$,
		$JobSheets::class$,
		$Media::class$,
		$MediaPrintableArea::class$,
		$OrientationRequested::class$,
		$PageRanges::class$,
		$RequestingUserName::class$,
		$SheetCollate::class$,
		$Sides::class$
	}));
	UnixPrintService::MAXCOPIES = 1000;
	$init($MediaSizeName);
	$assignStatic(UnixPrintService::mediaSizes, $new($MediaSizeNameArray, {
		$MediaSizeName::NA_LETTER,
		$MediaSizeName::TABLOID,
		$MediaSizeName::LEDGER,
		$MediaSizeName::NA_LEGAL,
		$MediaSizeName::EXECUTIVE,
		$MediaSizeName::ISO_A3,
		$MediaSizeName::ISO_A4,
		$MediaSizeName::ISO_A5,
		$MediaSizeName::ISO_B4,
		$MediaSizeName::ISO_B5
	}));
	$assignStatic(UnixPrintService::mpas, nullptr);
}

UnixPrintService::UnixPrintService() {
}

$Class* UnixPrintService::load$($String* name, bool initialize) {
	$loadClass(UnixPrintService, name, initialize, &_UnixPrintService_ClassInfo_, clinit$UnixPrintService, allocate$UnixPrintService);
	return class$;
}

$Class* UnixPrintService::class$ = nullptr;

	} // print
} // sun