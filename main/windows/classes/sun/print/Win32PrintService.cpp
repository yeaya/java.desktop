#include <sun/print/Win32PrintService.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <javax/print/CancelablePrintJob.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/PrintService.h>
#include <javax/print/ServiceUIFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/standard/ColorSupported.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/CopiesSupported.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/DialogTypeSelection.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/PrintQuality.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <javax/print/attribute/standard/PrinterResolution.h>
#include <javax/print/attribute/standard/PrinterState.h>
#include <javax/print/attribute/standard/PrinterStateReason.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/QueuedJobCount.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/attribute/standard/Severity.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <sun/print/DocumentPropertiesUI.h>
#include <sun/print/ServiceNotifier.h>
#include <sun/print/SunAlternateMedia.h>
#include <sun/print/Win32MediaSize.h>
#include <sun/print/Win32MediaTray.h>
#include <sun/print/Win32PrintJob.h>
#include <sun/print/Win32PrintService$Win32DocumentPropertiesUI.h>
#include <sun/print/Win32PrintService$Win32ServiceUIFactory.h>
#include <jcpp.h>

#undef ACCEPTING_JOBS
#undef AUTO
#undef AUTOSENSE
#undef B
#undef BOTTOM
#undef C
#undef COLLATED
#undef COLOR
#undef D
#undef DEVCAP_COLLATE
#undef DEVCAP_COLOR
#undef DEVCAP_DUPLEX
#undef DEVCAP_POSTSCRIPT
#undef DEVCAP_QUALITY
#undef DMCOLLATE_TRUE
#undef DMCOLOR_COLOR
#undef DMCOLOR_MONOCHROME
#undef DMDUP_HORIZONTAL
#undef DMDUP_VERTICAL
#undef DMORIENT_LANDSCAPE
#undef DMPAPER_A2
#undef DMPAPER_A6
#undef DMPAPER_B6_JIS
#undef DMRES_HIGH
#undef DMRES_MEDIUM
#undef DM_PAPERSIZE
#undef DM_PRINTQUALITY
#undef DM_YRESOLUTION
#undef DPI
#undef DRAFT
#undef E
#undef ENVELOPE
#undef ENVELOPE_MANUAL
#undef ERROR
#undef EXECUTIVE
#undef FIDELITY_FALSE
#undef FIDELITY_TRUE
#undef FOLIO
#undef FORMSOURCE
#undef GIF
#undef HIGH
#undef INCH
#undef INVOICE
#undef ISO_A2
#undef ISO_A3
#undef ISO_A4
#undef ISO_A5
#undef ISO_A6
#undef ISO_B4
#undef ISO_B5
#undef ISO_B6
#undef ISO_C3
#undef ISO_C4
#undef ISO_C5
#undef ISO_C6
#undef ISO_DESIGNATED_LONG
#undef ITALY_ENVELOPE
#undef JAPANESE_POSTCARD
#undef JIS_B4
#undef JIS_B5
#undef JIS_B6
#undef JPEG
#undef LANDSCAPE
#undef LARGE_CAPACITY
#undef LARGE_FORMAT
#undef LEDGER
#undef MAIN
#undef MANUAL
#undef MAX_VALUE
#undef MIDDLE
#undef MM
#undef MONARCH_ENVELOPE
#undef MONOCHROME
#undef NATIVE
#undef NA_9X11_ENVELOPE
#undef NA_9X12_ENVELOPE
#undef NA_LEGAL
#undef NA_LETTER
#undef NA_NUMBER_10_ENVELOPE
#undef NA_NUMBER_11_ENVELOPE
#undef NA_NUMBER_12_ENVELOPE
#undef NA_NUMBER_14_ENVELOPE
#undef NA_NUMBER_9_ENVELOPE
#undef NORMAL
#undef NOT_ACCEPTING_JOBS
#undef NOT_SUPPORTED
#undef ONE_SIDED
#undef PAGEABLE
#undef PERSONAL_ENVELOPE
#undef PNG
#undef PORTRAIT
#undef POSTSCRIPT
#undef PRINTABLE
#undef QUARTO
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT
#undef SHUTDOWN
#undef SMALL_FORMAT
#undef STOPPED
#undef SUPPORTED
#undef TABLOID
#undef TOP
#undef TRACTOR
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef UNCOLLATED

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $FidelityArray = $Array<::javax::print::attribute::standard::Fidelity>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $MediaSizeArray = $Array<::javax::print::attribute::standard::MediaSize>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $OrientationRequestedArray = $Array<::javax::print::attribute::standard::OrientationRequested>;
using $PageRangesArray = $Array<::javax::print::attribute::standard::PageRanges>;
using $PrintQualityArray = $Array<::javax::print::attribute::standard::PrintQuality>;
using $PrinterResolutionArray = $Array<::javax::print::attribute::standard::PrinterResolution>;
using $SheetCollateArray = $Array<::javax::print::attribute::standard::SheetCollate>;
using $SidesArray = $Array<::javax::print::attribute::standard::Sides>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $File = ::java::io::File;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $CancelablePrintJob = ::javax::print::CancelablePrintJob;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintService = ::javax::print::PrintService;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $URISyntax = ::javax::print::attribute::URISyntax;
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $ColorSupported = ::javax::print::attribute::standard::ColorSupported;
using $Copies = ::javax::print::attribute::standard::Copies;
using $CopiesSupported = ::javax::print::attribute::standard::CopiesSupported;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogTypeSelection = ::javax::print::attribute::standard::DialogTypeSelection;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $PrintQuality = ::javax::print::attribute::standard::PrintQuality;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $PrinterResolution = ::javax::print::attribute::standard::PrinterResolution;
using $PrinterState = ::javax::print::attribute::standard::PrinterState;
using $PrinterStateReason = ::javax::print::attribute::standard::PrinterStateReason;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $QueuedJobCount = ::javax::print::attribute::standard::QueuedJobCount;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $Severity = ::javax::print::attribute::standard::Severity;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;
using $AttributeUpdater = ::sun::print::AttributeUpdater;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;
using $DocumentPropertiesUI = ::sun::print::DocumentPropertiesUI;
using $ServiceNotifier = ::sun::print::ServiceNotifier;
using $SunAlternateMedia = ::sun::print::SunAlternateMedia;
using $SunPrinterJobService = ::sun::print::SunPrinterJobService;
using $Win32MediaSize = ::sun::print::Win32MediaSize;
using $Win32MediaTray = ::sun::print::Win32MediaTray;
using $Win32PrintJob = ::sun::print::Win32PrintJob;
using $Win32PrintService$Win32DocumentPropertiesUI = ::sun::print::Win32PrintService$Win32DocumentPropertiesUI;
using $Win32PrintService$Win32ServiceUIFactory = ::sun::print::Win32PrintService$Win32ServiceUIFactory;

namespace sun {
	namespace print {

$FieldInfo _Win32PrintService_FieldInfo_[] = {
	{"predefMedia", "[Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC, $staticField(Win32PrintService, predefMedia)},
	{"supportedFlavors", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32PrintService, supportedFlavors)},
	{"serviceAttrCats", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(Win32PrintService, serviceAttrCats)},
	{"otherAttrCats", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticField(Win32PrintService, otherAttrCats)},
	{"dmPaperToPrintService", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Win32PrintService, dmPaperToPrintService)},
	{"dmPaperBinToPrintService", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32PrintService, dmPaperBinToPrintService)},
	{"DM_PAPERSIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(Win32PrintService, DM_PAPERSIZE)},
	{"DM_PRINTQUALITY", "I", nullptr, $PRIVATE | $STATIC, $staticField(Win32PrintService, DM_PRINTQUALITY)},
	{"DM_YRESOLUTION", "I", nullptr, $PRIVATE | $STATIC, $staticField(Win32PrintService, DM_YRESOLUTION)},
	{"DMRES_MEDIUM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMRES_MEDIUM)},
	{"DMRES_HIGH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMRES_HIGH)},
	{"DMORIENT_LANDSCAPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMORIENT_LANDSCAPE)},
	{"DMDUP_VERTICAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMDUP_VERTICAL)},
	{"DMDUP_HORIZONTAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMDUP_HORIZONTAL)},
	{"DMCOLLATE_TRUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMCOLLATE_TRUE)},
	{"DMCOLOR_MONOCHROME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMCOLOR_MONOCHROME)},
	{"DMCOLOR_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMCOLOR_COLOR)},
	{"DMPAPER_A2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMPAPER_A2)},
	{"DMPAPER_A6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMPAPER_A6)},
	{"DMPAPER_B6_JIS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DMPAPER_B6_JIS)},
	{"DEVCAP_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DEVCAP_COLOR)},
	{"DEVCAP_DUPLEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DEVCAP_DUPLEX)},
	{"DEVCAP_COLLATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DEVCAP_COLLATE)},
	{"DEVCAP_QUALITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DEVCAP_QUALITY)},
	{"DEVCAP_POSTSCRIPT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintService, DEVCAP_POSTSCRIPT)},
	{"printer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Win32PrintService, printer)},
	{"name", "Ljavax/print/attribute/standard/PrinterName;", nullptr, $PRIVATE, $field(Win32PrintService, name)},
	{"port", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Win32PrintService, port)},
	{"lastSet", "Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(Win32PrintService, lastSet)},
	{"notifier", "Lsun/print/ServiceNotifier;", nullptr, $PRIVATE | $TRANSIENT, $field(Win32PrintService, notifier)},
	{"mediaSizeNames", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(Win32PrintService, mediaSizeNames)},
	{"mediaPrintables", "[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE, $field(Win32PrintService, mediaPrintables)},
	{"mediaTrays", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE, $field(Win32PrintService, mediaTrays)},
	{"printRes", "[Ljavax/print/attribute/standard/PrinterResolution;", nullptr, $PRIVATE, $field(Win32PrintService, printRes)},
	{"mpaMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljavax/print/attribute/standard/MediaSizeName;Ljavax/print/attribute/standard/MediaPrintableArea;>;", $PRIVATE, $field(Win32PrintService, mpaMap)},
	{"nCopies", "I", nullptr, $PRIVATE, $field(Win32PrintService, nCopies)},
	{"prnCaps", "I", nullptr, $PRIVATE, $field(Win32PrintService, prnCaps)},
	{"defaultSettings", "[I", nullptr, $PRIVATE, $field(Win32PrintService, defaultSettings)},
	{"gotTrays", "Z", nullptr, $PRIVATE, $field(Win32PrintService, gotTrays)},
	{"gotCopies", "Z", nullptr, $PRIVATE, $field(Win32PrintService, gotCopies)},
	{"mediaInitialized", "Z", nullptr, $PRIVATE, $field(Win32PrintService, mediaInitialized)},
	{"mpaListInitialized", "Z", nullptr, $PRIVATE, $field(Win32PrintService, mpaListInitialized)},
	{"idList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PRIVATE, $field(Win32PrintService, idList)},
	{"mediaSizes", "[Ljavax/print/attribute/standard/MediaSize;", nullptr, $PRIVATE, $field(Win32PrintService, mediaSizes)},
	{"isInvalid", "Z", nullptr, $PRIVATE, $field(Win32PrintService, isInvalid)},
	{"docPropertiesUI", "Lsun/print/Win32PrintService$Win32DocumentPropertiesUI;", nullptr, $PRIVATE, $field(Win32PrintService, docPropertiesUI)},
	{"uiFactory", "Lsun/print/Win32PrintService$Win32ServiceUIFactory;", nullptr, $PRIVATE, $field(Win32PrintService, uiFactory)},
	{}
};

$MethodInfo _Win32PrintService_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Win32PrintService::*)($String*)>(&Win32PrintService::init$))},
	{"addPrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"addToUniqueList", "(Ljava/util/ArrayList;Ljavax/print/attribute/standard/MediaSizeName;)Z", "(Ljava/util/ArrayList<Ljavax/print/attribute/standard/MediaSizeName;>;Ljavax/print/attribute/standard/MediaSizeName;)Z", $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($ArrayList*,$MediaSizeName*)>(&Win32PrintService::addToUniqueList))},
	{"createPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findMatchingMediaSizeNameMM", "(FF)Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC},
	{"findMediaTray", "(I)Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC},
	{"findPaperID", "(Ljavax/print/attribute/standard/MediaSizeName;)I", nullptr, $PUBLIC},
	{"findTrayID", "(Ljavax/print/attribute/standard/MediaTray;)I", nullptr, $PUBLIC},
	{"findWin32Media", "(I)Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC},
	{"getAllMediaIDs", "(Ljava/lang/String;Ljava/lang/String;)[I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ints*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getAllMediaIDs))},
	{"getAllMediaNames", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$StringArray*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getAllMediaNames))},
	{"getAllMediaSizes", "(Ljava/lang/String;Ljava/lang/String;)[I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ints*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getAllMediaSizes))},
	{"getAllMediaTrayNames", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$StringArray*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getAllMediaTrayNames))},
	{"getAllMediaTrays", "(Ljava/lang/String;Ljava/lang/String;)[I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ints*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getAllMediaTrays))},
	{"getAllResolutions", "(Ljava/lang/String;Ljava/lang/String;)[I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ints*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getAllResolutions))},
	{"getAttribute", "(Ljava/lang/Class;)Ljavax/print/attribute/PrintServiceAttribute;", "<T::Ljavax/print/attribute/PrintServiceAttribute;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC},
	{"getCapabilities", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getCapabilities))},
	{"getCopiesSupported", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getCopiesSupported))},
	{"getDefaultAttributeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Ljava/lang/Object;", $PUBLIC},
	{"getDefaultPrinterSettings", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(Win32PrintService::*)()>(&Win32PrintService::getDefaultPrinterSettings))},
	{"getDefaultSettings", "(Ljava/lang/String;Ljava/lang/String;)[I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ints*(Win32PrintService::*)($String*,$String*)>(&Win32PrintService::getDefaultSettings))},
	{"getDocumentPropertiesUI", "()Lsun/print/DocumentPropertiesUI;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$DocumentPropertiesUI*(Win32PrintService::*)()>(&Win32PrintService::getDocumentPropertiesUI))},
	{"getDynamicAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE, $method(static_cast<$PrintServiceAttributeSet*(Win32PrintService::*)()>(&Win32PrintService::getDynamicAttributes))},
	{"getJobStatus", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Win32PrintService::*)($String*,int32_t)>(&Win32PrintService::getJobStatus))},
	{"getMediaPrintableArea", "(Ljava/lang/String;I)[F", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$floats*(Win32PrintService::*)($String*,int32_t)>(&Win32PrintService::getMediaPrintableArea))},
	{"getMediaPrintables", "(Ljavax/print/attribute/standard/MediaSizeName;)[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$MediaPrintableAreaArray*(Win32PrintService::*)($MediaSizeName*)>(&Win32PrintService::getMediaPrintables))},
	{"getMediaSizes", "(Ljava/util/ArrayList;[ILjava/util/ArrayList;)[Ljavax/print/attribute/standard/MediaSize;", "(Ljava/util/ArrayList<Ljava/lang/Integer;>;[ILjava/util/ArrayList<Ljava/lang/String;>;)[Ljavax/print/attribute/standard/MediaSize;", $PRIVATE, $method(static_cast<$MediaSizeArray*(Win32PrintService::*)($ArrayList*,$ints*,$ArrayList*)>(&Win32PrintService::getMediaSizes))},
	{"getMediaTrays", "()[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$MediaTrayArray*(Win32PrintService::*)()>(&Win32PrintService::getMediaTrays))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPort", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Win32PrintService::*)()>(&Win32PrintService::getPort))},
	{"getPrintResolutions", "()[Ljavax/print/attribute/standard/PrinterResolution;", nullptr, $PRIVATE, $method(static_cast<$PrinterResolutionArray*(Win32PrintService::*)()>(&Win32PrintService::getPrintResolutions))},
	{"getPrinterCapabilities", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Win32PrintService::*)()>(&Win32PrintService::getPrinterCapabilities))},
	{"getPrinterIsAcceptingJobs", "()Ljavax/print/attribute/standard/PrinterIsAcceptingJobs;", nullptr, $PRIVATE, $method(static_cast<$PrinterIsAcceptingJobs*(Win32PrintService::*)()>(&Win32PrintService::getPrinterIsAcceptingJobs))},
	{"getPrinterName", "()Ljavax/print/attribute/standard/PrinterName;", nullptr, $PRIVATE, $method(static_cast<$PrinterName*(Win32PrintService::*)()>(&Win32PrintService::getPrinterName))},
	{"getPrinterPort", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(Win32PrintService::*)($String*)>(&Win32PrintService::getPrinterPort))},
	{"getPrinterState", "()Ljavax/print/attribute/standard/PrinterState;", nullptr, $PRIVATE, $method(static_cast<$PrinterState*(Win32PrintService::*)()>(&Win32PrintService::getPrinterState))},
	{"getPrinterStateReasons", "()Ljavax/print/attribute/standard/PrinterStateReasons;", nullptr, $PRIVATE, $method(static_cast<$PrinterStateReasons*(Win32PrintService::*)()>(&Win32PrintService::getPrinterStateReasons))},
	{"getQueuedJobCount", "()Ljavax/print/attribute/standard/QueuedJobCount;", nullptr, $PRIVATE, $method(static_cast<$QueuedJobCount*(Win32PrintService::*)()>(&Win32PrintService::getQueuedJobCount))},
	{"getServiceUIFactory", "()Ljavax/print/ServiceUIFactory;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSupportedAttributeCategories", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"getSupportedAttributeValues", "(Ljava/lang/Class;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", $PUBLIC},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{"getUnsupportedAttributes", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC},
	{"getUpdatedAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initMedia", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Win32PrintService::*)()>(&Win32PrintService::initMedia))},
	{"invalidateService", "()V", nullptr, $PUBLIC},
	{"isAttributeCategorySupported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Z", $PUBLIC},
	{"isAttributeValueSupported", "(Ljavax/print/attribute/Attribute;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"isAutoSense", "(Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($DocFlavor*)>(&Win32PrintService::isAutoSense))},
	{"isDocFlavorSupported", "(Ljavax/print/DocFlavor;)Z", nullptr, $PUBLIC},
	{"isPSDocAttr", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($Class*)>(&Win32PrintService::isPSDocAttr))},
	{"isPostScriptFlavor", "(Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($DocFlavor*)>(&Win32PrintService::isPostScriptFlavor))},
	{"isSameSize", "(FFFF)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)(float,float,float,float)>(&Win32PrintService::isSameSize))},
	{"isSupportedCopies", "(Ljavax/print/attribute/standard/Copies;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($Copies*)>(&Win32PrintService::isSupportedCopies))},
	{"isSupportedMedia", "(Ljavax/print/attribute/standard/MediaSizeName;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($MediaSizeName*)>(&Win32PrintService::isSupportedMedia))},
	{"isSupportedMediaPrintableArea", "(Ljavax/print/attribute/standard/MediaPrintableArea;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($MediaPrintableArea*)>(&Win32PrintService::isSupportedMediaPrintableArea))},
	{"isSupportedMediaTray", "(Ljavax/print/attribute/standard/MediaTray;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($MediaTray*)>(&Win32PrintService::isSupportedMediaTray))},
	{"isSupportedResolution", "(Ljavax/print/attribute/standard/PrinterResolution;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32PrintService::*)($PrinterResolution*)>(&Win32PrintService::isSupportedResolution))},
	{"removePrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usesClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{"wakeNotifier", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getAllMediaIDs 12
#define _METHOD_INDEX_getAllMediaNames 13
#define _METHOD_INDEX_getAllMediaSizes 14
#define _METHOD_INDEX_getAllMediaTrayNames 15
#define _METHOD_INDEX_getAllMediaTrays 16
#define _METHOD_INDEX_getAllResolutions 17
#define _METHOD_INDEX_getCapabilities 20
#define _METHOD_INDEX_getCopiesSupported 21
#define _METHOD_INDEX_getDefaultSettings 24
#define _METHOD_INDEX_getJobStatus 27
#define _METHOD_INDEX_getMediaPrintableArea 28
#define _METHOD_INDEX_getPrinterPort 38

$InnerClassInfo _Win32PrintService_InnerClassesInfo_[] = {
	{"sun.print.Win32PrintService$Win32ServiceUIFactory", "sun.print.Win32PrintService", "Win32ServiceUIFactory", $PRIVATE | $STATIC},
	{"sun.print.Win32PrintService$Win32DocumentPropertiesUI", "sun.print.Win32PrintService", "Win32DocumentPropertiesUI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Win32PrintService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.Win32PrintService",
	"java.lang.Object",
	"javax.print.PrintService,sun.print.AttributeUpdater,sun.print.SunPrinterJobService",
	_Win32PrintService_FieldInfo_,
	_Win32PrintService_MethodInfo_,
	nullptr,
	nullptr,
	_Win32PrintService_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.Win32PrintService$Win32ServiceUIFactory,sun.print.Win32PrintService$Win32DocumentPropertiesUI"
};

$Object* allocate$Win32PrintService($Class* clazz) {
	return $of($alloc(Win32PrintService));
}

$Object* Win32PrintService::clone() {
	 return this->$PrintService::clone();
}

void Win32PrintService::finalize() {
	this->$PrintService::finalize();
}

$MediaSizeArray* Win32PrintService::predefMedia = nullptr;
$DocFlavorArray* Win32PrintService::supportedFlavors = nullptr;
$ClassArray* Win32PrintService::serviceAttrCats = nullptr;
$ClassArray* Win32PrintService::otherAttrCats = nullptr;
$MediaSizeNameArray* Win32PrintService::dmPaperToPrintService = nullptr;
$MediaTrayArray* Win32PrintService::dmPaperBinToPrintService = nullptr;
int32_t Win32PrintService::DM_PAPERSIZE = 0;
int32_t Win32PrintService::DM_PRINTQUALITY = 0;
int32_t Win32PrintService::DM_YRESOLUTION = 0;

void Win32PrintService::init$($String* name) {
	$set(this, notifier, nullptr);
	$set(this, docPropertiesUI, nullptr);
	$set(this, uiFactory, nullptr);
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "null printer name"_s);
	}
	$set(this, printer, name);
	this->mediaInitialized = false;
	this->gotTrays = false;
	this->gotCopies = false;
	this->isInvalid = false;
	$set(this, printRes, nullptr);
	this->prnCaps = 0;
	$set(this, defaultSettings, nullptr);
	$set(this, port, nullptr);
}

void Win32PrintService::invalidateService() {
	this->isInvalid = true;
}

$String* Win32PrintService::getName() {
	return this->printer;
}

$PrinterName* Win32PrintService::getPrinterName() {
	if (this->name == nullptr) {
		$set(this, name, $new($PrinterName, this->printer, nullptr));
	}
	return this->name;
}

int32_t Win32PrintService::findPaperID($MediaSizeName* msn) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Win32MediaSize, msn)) {
		$var($Win32MediaSize, winMedia, $cast($Win32MediaSize, msn));
		return $nc(winMedia)->getDMPaper();
	} else {
		for (int32_t id = 0; id < $nc(Win32PrintService::dmPaperToPrintService)->length; ++id) {
			if ($nc($nc(Win32PrintService::dmPaperToPrintService)->get(id))->equals(msn)) {
				return id + 1;
			}
		}
		$init($MediaSizeName);
		if ($nc(msn)->equals($MediaSizeName::ISO_A2)) {
			return Win32PrintService::DMPAPER_A2;
		} else {
			if (msn->equals($MediaSizeName::ISO_A6)) {
				return Win32PrintService::DMPAPER_A6;
			} else {
				if (msn->equals($MediaSizeName::JIS_B6)) {
					return Win32PrintService::DMPAPER_B6_JIS;
				}
			}
		}
	}
	initMedia();
	if ((this->idList != nullptr) && (this->mediaSizes != nullptr) && ($nc(this->idList)->size() == $nc(this->mediaSizes)->length)) {
		for (int32_t i = 0; i < $nc(this->idList)->size(); ++i) {
			if ($nc($nc(this->mediaSizes)->get(i))->getMediaSizeName() == msn) {
				return $nc(($cast($Integer, $($nc(this->idList)->get(i)))))->intValue();
			}
		}
	}
	return 0;
}

int32_t Win32PrintService::findTrayID($MediaTray* tray) {
	getMediaTrays();
	if ($instanceOf($Win32MediaTray, tray)) {
		$var($Win32MediaTray, winTray, $cast($Win32MediaTray, tray));
		return $nc(winTray)->getDMBinID();
	}
	for (int32_t id = 0; id < $nc(Win32PrintService::dmPaperBinToPrintService)->length; ++id) {
		if ($nc(tray)->equals($nc(Win32PrintService::dmPaperBinToPrintService)->get(id))) {
			return id + 1;
		}
	}
	return 0;
}

$MediaTray* Win32PrintService::findMediaTray(int32_t dmBin) {
	$useLocalCurrentObjectStackCache();
	if (dmBin >= 1 && dmBin <= $nc(Win32PrintService::dmPaperBinToPrintService)->length) {
		return $nc(Win32PrintService::dmPaperBinToPrintService)->get(dmBin - 1);
	}
	$var($MediaTrayArray, trays, getMediaTrays());
	if (trays != nullptr) {
		for (int32_t i = 0; i < trays->length; ++i) {
			if ($instanceOf($Win32MediaTray, trays->get(i))) {
				$var($Win32MediaTray, win32Tray, $cast($Win32MediaTray, trays->get(i)));
				if ($nc(win32Tray)->winID == dmBin) {
					return win32Tray;
				}
			}
		}
	}
	$init($Win32MediaTray);
	return $Win32MediaTray::AUTO;
}

$MediaSizeName* Win32PrintService::findWin32Media(int32_t dmIndex) {
	if (dmIndex >= 1 && dmIndex <= $nc(Win32PrintService::dmPaperToPrintService)->length) {
		return $nc(Win32PrintService::dmPaperToPrintService)->get(dmIndex - 1);
	}
	switch (dmIndex) {
	case Win32PrintService::DMPAPER_A2:
		{
			$init($MediaSizeName);
			return $MediaSizeName::ISO_A2;
		}
	case Win32PrintService::DMPAPER_A6:
		{
			$init($MediaSizeName);
			return $MediaSizeName::ISO_A6;
		}
	case Win32PrintService::DMPAPER_B6_JIS:
		{
			$init($MediaSizeName);
			return $MediaSizeName::JIS_B6;
		}
	default:
		{
			return nullptr;
		}
	}
}

bool Win32PrintService::addToUniqueList($ArrayList* msnList, $MediaSizeName* mediaName) {
	$var($MediaSizeName, msn, nullptr);
	for (int32_t i = 0; i < $nc(msnList)->size(); ++i) {
		$assign(msn, $cast($MediaSizeName, msnList->get(i)));
		if (msn == mediaName) {
			return false;
		}
	}
	$nc(msnList)->add(mediaName);
	return true;
}

void Win32PrintService::initMedia() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->mediaInitialized == true) {
			return;
		}
		this->mediaInitialized = true;
		$var($ints, media, getAllMediaIDs(this->printer, $(getPort())));
		if (media == nullptr) {
			return;
		}
		$var($ArrayList, msnList, $new($ArrayList));
		$var($ArrayList, trailingWmsList, $new($ArrayList));
		$var($MediaSizeName, mediaName, nullptr);
		bool added = false;
		bool queryFailure = false;
		$var($floats, prnArea, nullptr);
		$set(this, idList, $new($ArrayList));
		for (int32_t i = 0; i < $nc(media)->length; ++i) {
			$nc(this->idList)->add($($Integer::valueOf(media->get(i))));
		}
		$var($ArrayList, dmPaperNameList, $new($ArrayList));
		$set(this, mediaSizes, getMediaSizes(this->idList, media, dmPaperNameList));
		for (int32_t i = 0; i < $nc(this->idList)->size(); ++i) {
			$assign(mediaName, findWin32Media($nc(($cast($Integer, $($nc(this->idList)->get(i)))))->intValue()));
			if (mediaName != nullptr && $nc(this->idList)->size() == $nc(this->mediaSizes)->length) {
				$var($MediaSize, win32Size, $MediaSize::getMediaSizeForName(mediaName));
				$var($MediaSize, driverSize, $nc(this->mediaSizes)->get(i));
				int32_t error = 2540;
				float var$1 = $nc(win32Size)->getX(1);
				bool var$0 = $Math::abs(var$1 - $nc(driverSize)->getX(1)) > error;
				if (!var$0) {
					float var$2 = $nc(win32Size)->getY(1);
					var$0 = $Math::abs(var$2 - $nc(driverSize)->getY(1)) > error;
				}
				if (var$0) {
					$assign(mediaName, nullptr);
				}
			}
			bool dmPaperIDMatched = (mediaName != nullptr);
			if ((mediaName == nullptr) && ($nc(this->idList)->size() == $nc(this->mediaSizes)->length)) {
				$assign(mediaName, $nc($nc(this->mediaSizes)->get(i))->getMediaSizeName());
			}
			added = false;
			if (mediaName != nullptr) {
				added = addToUniqueList(msnList, mediaName);
			}
			bool var$3 = (!dmPaperIDMatched || !added);
			if (var$3) {
				int32_t var$4 = $nc(this->idList)->size();
				var$3 = (var$4 == dmPaperNameList->size());
			}
			if (var$3) {
				$var($Win32MediaSize, wms, $Win32MediaSize::findMediaName($cast($String, $(dmPaperNameList->get(i)))));
				if ((wms == nullptr) && ($nc(this->idList)->size() == $nc(this->mediaSizes)->length)) {
					$var($String, var$5, $cast($String, dmPaperNameList->get(i)));
					$assign(wms, $new($Win32MediaSize, var$5, $nc(($cast($Integer, $($nc(this->idList)->get(i)))))->intValue()));
					float var$6 = $nc($nc(this->mediaSizes)->get(i))->getX($MediaSize::MM);
					$nc(this->mediaSizes)->set(i, $$new($MediaSize, var$6, $nc($nc(this->mediaSizes)->get(i))->getY($MediaSize::MM), $MediaSize::MM, static_cast<$MediaSizeName*>(wms)));
				}
				if ((wms != nullptr) && (!$equals(wms, mediaName))) {
					if (!added) {
						added = addToUniqueList(msnList, $assign(mediaName, wms));
					} else {
						trailingWmsList->add(wms);
					}
				}
			}
		}
		{
			$var($Iterator, i$, trailingWmsList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Win32MediaSize, wms, $cast($Win32MediaSize, i$->next()));
				{
					added = addToUniqueList(msnList, wms);
				}
			}
		}
		$set(this, mediaSizeNames, $new($MediaSizeNameArray, msnList->size()));
		msnList->toArray(this->mediaSizeNames);
	}
}

$MediaPrintableAreaArray* Win32PrintService::getMediaPrintables($MediaSizeName* msn) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (msn == nullptr) {
			if (this->mpaListInitialized == true) {
				return this->mediaPrintables;
			}
		} else if (this->mpaMap != nullptr && ($nc(this->mpaMap)->get(msn) != nullptr)) {
			$var($MediaPrintableAreaArray, mpaArr, $new($MediaPrintableAreaArray, 1));
			mpaArr->set(0, $cast($MediaPrintableArea, $($nc(this->mpaMap)->get(msn))));
			return mpaArr;
		}
		initMedia();
		if ((this->mediaSizeNames == nullptr) || ($nc(this->mediaSizeNames)->length == 0)) {
			return nullptr;
		}
		$var($MediaSizeNameArray, loopNames, nullptr);
		if (msn != nullptr) {
			$assign(loopNames, $new($MediaSizeNameArray, 1));
			loopNames->set(0, msn);
		} else {
			$assign(loopNames, this->mediaSizeNames);
		}
		if (this->mpaMap == nullptr) {
			$set(this, mpaMap, $new($HashMap));
		}
		for (int32_t i = 0; i < $nc(loopNames)->length; ++i) {
			$var($MediaSizeName, mediaName, loopNames->get(i));
			if ($nc(this->mpaMap)->get(mediaName) != nullptr) {
				continue;
			}
			if (mediaName != nullptr) {
				int32_t defPaper = findPaperID(mediaName);
				$var($floats, prnArea, (defPaper != 0) ? getMediaPrintableArea(this->printer, defPaper) : ($floats*)nullptr);
				$var($MediaPrintableArea, printableArea, nullptr);
				if (prnArea != nullptr) {
					try {
						$assign(printableArea, $new($MediaPrintableArea, prnArea->get(0), prnArea->get(1), prnArea->get(2), prnArea->get(3), $MediaPrintableArea::INCH));
						$nc(this->mpaMap)->put(mediaName, printableArea);
					} catch ($IllegalArgumentException&) {
						$catch();
					}
				} else {
					$var($MediaSize, ms, $MediaSize::getMediaSizeForName(mediaName));
					if (ms != nullptr) {
						try {
							float var$0 = ms->getX($MediaSize::INCH);
							$assign(printableArea, $new($MediaPrintableArea, (float)0, (float)0, var$0, ms->getY($MediaSize::INCH), $MediaPrintableArea::INCH));
							$nc(this->mpaMap)->put(mediaName, printableArea);
						} catch ($IllegalArgumentException&) {
							$catch();
						}
					}
				}
			}
		}
		if ($nc(this->mpaMap)->size() == 0) {
			return nullptr;
		}
		if (msn != nullptr) {
			if ($nc(this->mpaMap)->get(msn) == nullptr) {
				return nullptr;
			}
			$var($MediaPrintableAreaArray, mpaArr, $new($MediaPrintableAreaArray, 1));
			mpaArr->set(0, $cast($MediaPrintableArea, $($nc(this->mpaMap)->get(msn))));
			return mpaArr;
		} else {
			$set(this, mediaPrintables, $fcast($MediaPrintableAreaArray, $nc($($nc(this->mpaMap)->values()))->toArray($$new($MediaPrintableAreaArray, 0))));
			this->mpaListInitialized = true;
			return this->mediaPrintables;
		}
	}
}

$MediaTrayArray* Win32PrintService::getMediaTrays() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->gotTrays == true && this->mediaTrays != nullptr) {
			return this->mediaTrays;
		}
		$var($String, prnPort, getPort());
		$var($ints, mediaTr, getAllMediaTrays(this->printer, prnPort));
		$var($StringArray, winMediaTrayNames, getAllMediaTrayNames(this->printer, prnPort));
		if ((mediaTr == nullptr) || (winMediaTrayNames == nullptr)) {
			return nullptr;
		}
		int32_t nTray = 0;
		for (int32_t i = 0; i < $nc(mediaTr)->length; ++i) {
			if (mediaTr->get(i) > 0) {
				++nTray;
			}
		}
		$var($MediaTrayArray, arr, $new($MediaTrayArray, nTray));
		int32_t dmBin = 0;
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < $Math::min($nc(mediaTr)->length, $nc(winMediaTrayNames)->length); ++i) {
				dmBin = $nc(mediaTr)->get(i);
				if (dmBin > 0) {
					if ((dmBin > $nc(Win32PrintService::dmPaperBinToPrintService)->length) || ($nc(Win32PrintService::dmPaperBinToPrintService)->get(dmBin - 1) == nullptr)) {
						arr->set(j++, $$new($Win32MediaTray, dmBin, $nc(winMediaTrayNames)->get(i)));
					} else {
						arr->set(j++, $nc(Win32PrintService::dmPaperBinToPrintService)->get(dmBin - 1));
					}
				}
			}
		}
		$set(this, mediaTrays, arr);
		this->gotTrays = true;
		return this->mediaTrays;
	}
}

bool Win32PrintService::isSameSize(float w1, float h1, float w2, float h2) {
	float diffX = w1 - w2;
	float diffY = h1 - h2;
	float diffXrev = w1 - h2;
	float diffYrev = h1 - w2;
	bool var$1 = ($Math::abs(diffX) <= 1);
	bool var$0 = (var$1 && ($Math::abs(diffY) <= 1));
	if (!var$0) {
		bool var$2 = ($Math::abs(diffXrev) <= 1);
		var$0 = (var$2 && ($Math::abs(diffYrev) <= 1));
	}
	if (var$0) {
		return true;
	} else {
		return false;
	}
}

$MediaSizeName* Win32PrintService::findMatchingMediaSizeNameMM(float w, float h) {
	if (Win32PrintService::predefMedia != nullptr) {
		for (int32_t k = 0; k < $nc(Win32PrintService::predefMedia)->length; ++k) {
			if ($nc(Win32PrintService::predefMedia)->get(k) == nullptr) {
				continue;
			}
			float var$0 = $nc($nc(Win32PrintService::predefMedia)->get(k))->getX($MediaSize::MM);
			if (isSameSize(var$0, $nc($nc(Win32PrintService::predefMedia)->get(k))->getY($MediaSize::MM), w, h)) {
				return $nc($nc(Win32PrintService::predefMedia)->get(k))->getMediaSizeName();
			}
		}
	}
	return nullptr;
}

$MediaSizeArray* Win32PrintService::getMediaSizes($ArrayList* idList, $ints* media, $ArrayList* dmPaperNameList$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, dmPaperNameList, dmPaperNameList$renamed);
	if (dmPaperNameList == nullptr) {
		$assign(dmPaperNameList, $new($ArrayList));
	}
	$var($String, prnPort, getPort());
	$var($ints, mediaSz, getAllMediaSizes(this->printer, prnPort));
	$var($StringArray, winMediaNames, getAllMediaNames(this->printer, prnPort));
	$var($MediaSizeName, msn, nullptr);
	$var($MediaSize, ms, nullptr);
	float wid = 0.0;
	float ht = 0.0;
	if ((mediaSz == nullptr) || (winMediaNames == nullptr)) {
		return nullptr;
	}
	int32_t nMedia = $nc(mediaSz)->length / 2;
	$var($ArrayList, msList, $new($ArrayList));
	for (int32_t i = 0; i < nMedia; ++i, $assign(ms, nullptr)) {
		wid = mediaSz->get(i * 2) / 10.0f;
		ht = mediaSz->get(i * 2 + 1) / 10.0f;
		if ((wid <= 0) || (ht <= 0)) {
			if (nMedia == $nc(media)->length) {
				$var($Integer, remObj, $Integer::valueOf(media->get(i)));
				$nc(idList)->remove(idList->indexOf(remObj));
			}
			continue;
		}
		$assign(msn, findMatchingMediaSizeNameMM(wid, ht));
		if (msn != nullptr) {
			$assign(ms, $MediaSize::getMediaSizeForName(msn));
		}
		if (ms != nullptr) {
			msList->add(ms);
			$nc(dmPaperNameList)->add($nc(winMediaNames)->get(i));
		} else {
			$var($Win32MediaSize, wms, $Win32MediaSize::findMediaName($nc(winMediaNames)->get(i)));
			if (wms == nullptr) {
				$assign(wms, $new($Win32MediaSize, $nc(winMediaNames)->get(i), $nc(media)->get(i)));
			}
			try {
				$assign(ms, $new($MediaSize, wid, ht, $MediaSize::MM, static_cast<$MediaSizeName*>(wms)));
				msList->add(ms);
				$nc(dmPaperNameList)->add($nc(winMediaNames)->get(i));
			} catch ($IllegalArgumentException&) {
				$var($IllegalArgumentException, e, $catch());
				if (nMedia == $nc(media)->length) {
					$var($Integer, remObj, $Integer::valueOf(media->get(i)));
					$nc(idList)->remove(idList->indexOf(remObj));
				}
			}
		}
	}
	$var($MediaSizeArray, arr2, $new($MediaSizeArray, msList->size()));
	msList->toArray(arr2);
	return arr2;
}

$PrinterIsAcceptingJobs* Win32PrintService::getPrinterIsAcceptingJobs() {
	if (getJobStatus(this->printer, 2) != 1) {
		$init($PrinterIsAcceptingJobs);
		return $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS;
	} else {
		$init($PrinterIsAcceptingJobs);
		return $PrinterIsAcceptingJobs::ACCEPTING_JOBS;
	}
}

$PrinterState* Win32PrintService::getPrinterState() {
	if (this->isInvalid) {
		$init($PrinterState);
		return $PrinterState::STOPPED;
	} else {
		return nullptr;
	}
}

$PrinterStateReasons* Win32PrintService::getPrinterStateReasons() {
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

$QueuedJobCount* Win32PrintService::getQueuedJobCount() {
	int32_t count = getJobStatus(this->printer, 1);
	if (count != -1) {
		return $new($QueuedJobCount, count);
	} else {
		return $new($QueuedJobCount, 0);
	}
}

bool Win32PrintService::isSupportedCopies($Copies* copies) {
	$synchronized(this) {
		if (this->gotCopies == false) {
			this->nCopies = getCopiesSupported(this->printer, $(getPort()));
			this->gotCopies = true;
		}
	}
	int32_t numCopies = $nc(copies)->getValue();
	return (numCopies > 0 && numCopies <= this->nCopies);
}

bool Win32PrintService::isSupportedMedia($MediaSizeName* msn) {
	initMedia();
	if (this->mediaSizeNames != nullptr) {
		for (int32_t i = 0; i < $nc(this->mediaSizeNames)->length; ++i) {
			if ($nc(msn)->equals($nc(this->mediaSizeNames)->get(i))) {
				return true;
			}
		}
	}
	return false;
}

bool Win32PrintService::isSupportedMediaPrintableArea($MediaPrintableArea* mpa) {
	getMediaPrintables(nullptr);
	int32_t units = $MediaPrintableArea::INCH;
	if (this->mediaPrintables != nullptr) {
		for (int32_t i = 0; i < $nc(this->mediaPrintables)->length; ++i) {
			float var$3 = $nc(mpa)->getX(units);
			bool var$2 = (var$3 >= $nc($nc(this->mediaPrintables)->get(i))->getX(units));
			if (var$2) {
				float var$4 = mpa->getY(units);
				var$2 = (var$4 >= $nc($nc(this->mediaPrintables)->get(i))->getY(units));
			}
			bool var$1 = var$2;
			if (var$1) {
				float var$6 = mpa->getX(units);
				float var$5 = var$6 + mpa->getWidth(units);
				float var$8 = $nc($nc(this->mediaPrintables)->get(i))->getX(units);
				float var$7 = var$8 + $nc($nc(this->mediaPrintables)->get(i))->getWidth(units);
				var$1 = (var$5 <= var$7);
			}
			bool var$0 = var$1;
			if (var$0) {
				float var$10 = mpa->getY(units);
				float var$9 = var$10 + mpa->getHeight(units);
				float var$12 = $nc($nc(this->mediaPrintables)->get(i))->getY(units);
				float var$11 = var$12 + $nc($nc(this->mediaPrintables)->get(i))->getHeight(units);
				var$0 = (var$9 <= var$11);
			}
			if (var$0) {
				return true;
			}
		}
	}
	return false;
}

bool Win32PrintService::isSupportedMediaTray($MediaTray* msn) {
	$var($MediaTrayArray, trays, getMediaTrays());
	if (trays != nullptr) {
		for (int32_t i = 0; i < trays->length; ++i) {
			if ($nc(msn)->equals(trays->get(i))) {
				return true;
			}
		}
	}
	return false;
}

int32_t Win32PrintService::getPrinterCapabilities() {
	if (this->prnCaps == 0) {
		this->prnCaps = getCapabilities(this->printer, $(getPort()));
	}
	return this->prnCaps;
}

$String* Win32PrintService::getPort() {
	if (this->port == nullptr) {
		$set(this, port, getPrinterPort(this->printer));
	}
	return this->port;
}

$ints* Win32PrintService::getDefaultPrinterSettings() {
	if (this->defaultSettings == nullptr) {
		$set(this, defaultSettings, getDefaultSettings(this->printer, $(getPort())));
	}
	return this->defaultSettings;
}

$PrinterResolutionArray* Win32PrintService::getPrintResolutions() {
	$useLocalCurrentObjectStackCache();
	if (this->printRes == nullptr) {
		$var($ints, prnRes, getAllResolutions(this->printer, $(getPort())));
		if (prnRes == nullptr) {
			$set(this, printRes, $new($PrinterResolutionArray, 0));
		} else {
			int32_t nRes = $nc(prnRes)->length / 2;
			$var($ArrayList, arrList, $new($ArrayList));
			$var($PrinterResolution, pr, nullptr);
			for (int32_t i = 0; i < nRes; ++i) {
				try {
					$assign(pr, $new($PrinterResolution, prnRes->get(i * 2), prnRes->get(i * 2 + 1), $PrinterResolution::DPI));
					arrList->add(pr);
				} catch ($IllegalArgumentException&) {
					$catch();
				}
			}
			$set(this, printRes, $fcast($PrinterResolutionArray, arrList->toArray($$new($PrinterResolutionArray, arrList->size()))));
		}
	}
	return this->printRes;
}

bool Win32PrintService::isSupportedResolution($PrinterResolution* res) {
	$var($PrinterResolutionArray, supportedRes, getPrintResolutions());
	if (supportedRes != nullptr) {
		for (int32_t i = 0; i < supportedRes->length; ++i) {
			if ($nc(res)->equals(supportedRes->get(i))) {
				return true;
			}
		}
	}
	return false;
}

$DocPrintJob* Win32PrintService::createPrintJob() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $new($Win32PrintJob, this);
}

$PrintServiceAttributeSet* Win32PrintService::getDynamicAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceAttributeSet, attrs, $new($HashPrintServiceAttributeSet));
	attrs->add($(getPrinterIsAcceptingJobs()));
	attrs->add($(getQueuedJobCount()));
	return attrs;
}

$PrintServiceAttributeSet* Win32PrintService::getUpdatedAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceAttributeSet, currSet, getDynamicAttributes());
	if (this->lastSet == nullptr) {
		$set(this, lastSet, currSet);
		return $AttributeSetUtilities::unmodifiableView(currSet);
	} else {
		$var($PrintServiceAttributeSet, updates, $new($HashPrintServiceAttributeSet));
		$var($AttributeArray, attrs, $nc(currSet)->toArray());
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			$var($Attribute, attr, attrs->get(i));
			if (!$nc(this->lastSet)->containsValue(attr)) {
				updates->add(attr);
			}
		}
		$set(this, lastSet, currSet);
		return $AttributeSetUtilities::unmodifiableView(updates);
	}
}

void Win32PrintService::wakeNotifier() {
	$synchronized(this) {
		if (this->notifier != nullptr) {
			$nc(this->notifier)->wake();
		}
	}
}

void Win32PrintService::addPrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
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

void Win32PrintService::removePrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
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

$PrintServiceAttribute* Win32PrintService::getAttribute($Class* category) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "category"_s);
	}
	$load($PrintServiceAttribute);
	if (!($PrintServiceAttribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, "Not a PrintServiceAttribute"_s);
	}
	$load($ColorSupported);
	if (category == $ColorSupported::class$) {
		int32_t caps = getPrinterCapabilities();
		if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) != 0) {
			$init($ColorSupported);
			return static_cast<$PrintServiceAttribute*>($ColorSupported::SUPPORTED);
		} else {
			$init($ColorSupported);
			return static_cast<$PrintServiceAttribute*>($ColorSupported::NOT_SUPPORTED);
		}
	} else {
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
}

$PrintServiceAttributeSet* Win32PrintService::getAttributes() {
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
	int32_t caps = getPrinterCapabilities();
	if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) != 0) {
		$init($ColorSupported);
		attrs->add($ColorSupported::SUPPORTED);
	} else {
		$init($ColorSupported);
		attrs->add($ColorSupported::NOT_SUPPORTED);
	}
	return $AttributeSetUtilities::unmodifiableView(attrs);
}

$DocFlavorArray* Win32PrintService::getSupportedDocFlavors() {
	int32_t len = $nc(Win32PrintService::supportedFlavors)->length;
	$var($DocFlavorArray, supportedDocFlavors, nullptr);
	int32_t caps = getPrinterCapabilities();
	if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_POSTSCRIPT)) != 0) {
		$assign(supportedDocFlavors, $new($DocFlavorArray, len + 3));
		$System::arraycopy(Win32PrintService::supportedFlavors, 0, supportedDocFlavors, 0, len);
		$init($DocFlavor$BYTE_ARRAY);
		supportedDocFlavors->set(len, $DocFlavor$BYTE_ARRAY::POSTSCRIPT);
		$init($DocFlavor$INPUT_STREAM);
		supportedDocFlavors->set(len + 1, $DocFlavor$INPUT_STREAM::POSTSCRIPT);
		$init($DocFlavor$URL);
		supportedDocFlavors->set(len + 2, $DocFlavor$URL::POSTSCRIPT);
	} else {
		$assign(supportedDocFlavors, $new($DocFlavorArray, len));
		$System::arraycopy(Win32PrintService::supportedFlavors, 0, supportedDocFlavors, 0, len);
	}
	return supportedDocFlavors;
}

bool Win32PrintService::isDocFlavorSupported($DocFlavor* flavor) {
	$var($DocFlavorArray, supportedDocFlavors, nullptr);
	if (isPostScriptFlavor(flavor)) {
		$assign(supportedDocFlavors, getSupportedDocFlavors());
	} else {
		$assign(supportedDocFlavors, Win32PrintService::supportedFlavors);
	}
	for (int32_t f = 0; f < $nc(supportedDocFlavors)->length; ++f) {
		if ($nc(flavor)->equals(supportedDocFlavors->get(f))) {
			return true;
		}
	}
	return false;
}

$ClassArray* Win32PrintService::getSupportedAttributeCategories() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, categList, $new($ArrayList, $nc(Win32PrintService::otherAttrCats)->length + 3));
	for (int32_t i = 0; i < $nc(Win32PrintService::otherAttrCats)->length; ++i) {
		categList->add($nc(Win32PrintService::otherAttrCats)->get(i));
	}
	int32_t caps = getPrinterCapabilities();
	if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_DUPLEX)) != 0) {
		$load($Sides);
		categList->add($Sides::class$);
	}
	if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_QUALITY)) != 0) {
		$var($ints, defaults, getDefaultPrinterSettings());
		if (($nc(defaults)->get(3) >= Win32PrintService::DMRES_HIGH) && (defaults->get(3) < 0)) {
			$load($PrintQuality);
			categList->add($PrintQuality::class$);
		}
	}
	$var($PrinterResolutionArray, supportedRes, getPrintResolutions());
	if ((supportedRes != nullptr) && (supportedRes->length > 0)) {
		$load($PrinterResolution);
		categList->add($PrinterResolution::class$);
	}
	if ($GraphicsEnvironment::isHeadless() == false) {
		$load($DialogOwner);
		categList->add($DialogOwner::class$);
		$load($DialogTypeSelection);
		categList->add($DialogTypeSelection::class$);
	}
	return $fcast($ClassArray, categList->toArray($$new($ClassArray, categList->size())));
}

bool Win32PrintService::isAttributeCategorySupported($Class* category) {
	$useLocalCurrentObjectStackCache();
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!($Attribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, $$str({category, " is not an Attribute"_s}));
	}
	$var($ClassArray, classList, getSupportedAttributeCategories());
	for (int32_t i = 0; i < $nc(classList)->length; ++i) {
		if ($nc($of(category))->equals(classList->get(i))) {
			return true;
		}
	}
	return false;
}

$Object* Win32PrintService::getDefaultAttributeValue($Class* category) {
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
	$var($ints, defaults, getDefaultPrinterSettings());
	int32_t defPaper = $nc(defaults)->get(0);
	int32_t defYRes = defaults->get(2);
	int32_t defQuality = defaults->get(3);
	int32_t defCopies = defaults->get(4);
	int32_t defOrient = defaults->get(5);
	int32_t defSides = defaults->get(6);
	int32_t defCollate = defaults->get(7);
	int32_t defColor = defaults->get(8);
	$load($Copies);
	if (category == $Copies::class$) {
		if (defCopies > 0) {
			return $of($new($Copies, defCopies));
		} else {
			return $of($new($Copies, 1));
		}
	} else {
		$load($Chromaticity);
		if (category == $Chromaticity::class$) {
			if (defColor == Win32PrintService::DMCOLOR_COLOR) {
				$init($Chromaticity);
				return $of($Chromaticity::COLOR);
			} else {
				$init($Chromaticity);
				return $of($Chromaticity::MONOCHROME);
			}
		} else {
			$load($JobName);
			if (category == $JobName::class$) {
				return $of($new($JobName, "Java Printing"_s, nullptr));
			} else {
				$load($OrientationRequested);
				if (category == $OrientationRequested::class$) {
					if (defOrient == Win32PrintService::DMORIENT_LANDSCAPE) {
						$init($OrientationRequested);
						return $of($OrientationRequested::LANDSCAPE);
					} else {
						$init($OrientationRequested);
						return $of($OrientationRequested::PORTRAIT);
					}
				} else {
					$load($PageRanges);
					if (category == $PageRanges::class$) {
						return $of($new($PageRanges, 1, $Integer::MAX_VALUE));
					} else {
						$load($Media);
						if (category == $Media::class$) {
							$var($MediaSizeName, msn, findWin32Media(defPaper));
							if (msn != nullptr) {
								if (!isSupportedMedia(msn) && this->mediaSizeNames != nullptr) {
									$assign(msn, $nc(this->mediaSizeNames)->get(0));
									defPaper = findPaperID(msn);
								}
								return $of(msn);
							} else {
								initMedia();
								if ((this->mediaSizeNames != nullptr) && ($nc(this->mediaSizeNames)->length > 0)) {
									if ((this->idList != nullptr) && (this->mediaSizes != nullptr) && ($nc(this->idList)->size() == $nc(this->mediaSizes)->length)) {
										$var($Integer, defIdObj, $Integer::valueOf(defPaper));
										int32_t index = $nc(this->idList)->indexOf(defIdObj);
										if (index >= 0 && index < $nc(this->mediaSizes)->length) {
											return $of($nc($nc(this->mediaSizes)->get(index))->getMediaSizeName());
										}
									}
									return $of($nc(this->mediaSizeNames)->get(0));
								}
							}
						} else {
							$load($MediaPrintableArea);
							if (category == $MediaPrintableArea::class$) {
								$var($MediaSizeName, msn, findWin32Media(defPaper));
								if (msn != nullptr && !isSupportedMedia(msn) && this->mediaSizeNames != nullptr) {
									defPaper = findPaperID($nc(this->mediaSizeNames)->get(0));
								}
								$var($floats, prnArea, getMediaPrintableArea(this->printer, defPaper));
								if (prnArea != nullptr) {
									$var($MediaPrintableArea, printableArea, nullptr);
									try {
										$assign(printableArea, $new($MediaPrintableArea, prnArea->get(0), prnArea->get(1), prnArea->get(2), prnArea->get(3), $MediaPrintableArea::INCH));
									} catch ($IllegalArgumentException&) {
										$catch();
									}
									return $of(printableArea);
								}
								return $of(nullptr);
							} else {
								$load($SunAlternateMedia);
								if (category == $SunAlternateMedia::class$) {
									return $of(nullptr);
								} else {
									$load($Destination);
									if (category == $Destination::class$) {
										try {
											return $of($new($Destination, $(($$new($File, "out.prn"_s))->toURI())));
										} catch ($SecurityException&) {
											$var($SecurityException, se, $catch());
											try {
												return $of($new($Destination, $$new($URI, "file:out.prn"_s)));
											} catch ($URISyntaxException&) {
												$var($URISyntaxException, e, $catch());
												return $of(nullptr);
											}
										}
									} else {
										$load($Sides);
										if (category == $Sides::class$) {
											switch (defSides) {
											case Win32PrintService::DMDUP_VERTICAL:
												{
													$init($Sides);
													return $of($Sides::TWO_SIDED_LONG_EDGE);
												}
											case Win32PrintService::DMDUP_HORIZONTAL:
												{
													$init($Sides);
													return $of($Sides::TWO_SIDED_SHORT_EDGE);
												}
											default:
												{
													$init($Sides);
													return $of($Sides::ONE_SIDED);
												}
											}
										} else {
											$load($PrinterResolution);
											if (category == $PrinterResolution::class$) {
												int32_t yRes = defYRes;
												int32_t xRes = defQuality;
												if ((xRes < 0) || (yRes < 0)) {
													int32_t res = (yRes > xRes) ? yRes : xRes;
													if (res > 0) {
														return $of($new($PrinterResolution, res, res, $PrinterResolution::DPI));
													}
												} else {
													return $of($new($PrinterResolution, xRes, yRes, $PrinterResolution::DPI));
												}
											} else {
												$load($ColorSupported);
												if (category == $ColorSupported::class$) {
													int32_t caps = getPrinterCapabilities();
													if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) != 0) {
														$init($ColorSupported);
														return $of($ColorSupported::SUPPORTED);
													} else {
														$init($ColorSupported);
														return $of($ColorSupported::NOT_SUPPORTED);
													}
												} else {
													$load($PrintQuality);
													if (category == $PrintQuality::class$) {
														if ((defQuality < 0) && (defQuality >= Win32PrintService::DMRES_HIGH)) {
															switch (defQuality) {
															case Win32PrintService::DMRES_HIGH:
																{
																	$init($PrintQuality);
																	return $of($PrintQuality::HIGH);
																}
															case Win32PrintService::DMRES_MEDIUM:
																{
																	$init($PrintQuality);
																	return $of($PrintQuality::NORMAL);
																}
															default:
																{
																	$init($PrintQuality);
																	return $of($PrintQuality::DRAFT);
																}
															}
														}
													} else {
														$load($RequestingUserName);
														if (category == $RequestingUserName::class$) {
															$var($String, userName, ""_s);
															try {
																$assign(userName, $System::getProperty("user.name"_s, ""_s));
															} catch ($SecurityException&) {
																$catch();
															}
															return $of($new($RequestingUserName, userName, nullptr));
														} else {
															$load($SheetCollate);
															if (category == $SheetCollate::class$) {
																if (defCollate == Win32PrintService::DMCOLLATE_TRUE) {
																	$init($SheetCollate);
																	return $of($SheetCollate::COLLATED);
																} else {
																	$init($SheetCollate);
																	return $of($SheetCollate::UNCOLLATED);
																}
															} else {
																$load($Fidelity);
																if (category == $Fidelity::class$) {
																	$init($Fidelity);
																	return $of($Fidelity::FIDELITY_FALSE);
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
		}
	}
	return $of(nullptr);
}

bool Win32PrintService::isPostScriptFlavor($DocFlavor* flavor) {
	$init($DocFlavor$BYTE_ARRAY);
	bool var$1 = $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::POSTSCRIPT);
	$init($DocFlavor$INPUT_STREAM);
	bool var$0 = var$1 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::POSTSCRIPT);
	$init($DocFlavor$URL);
	if (var$0 || $nc(flavor)->equals($DocFlavor$URL::POSTSCRIPT)) {
		return true;
	} else {
		return false;
	}
}

bool Win32PrintService::isPSDocAttr($Class* category) {
	$load($OrientationRequested);
	$load($Copies);
	if (category == $OrientationRequested::class$ || category == $Copies::class$) {
		return true;
	} else {
		return false;
	}
}

bool Win32PrintService::isAutoSense($DocFlavor* flavor) {
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

$Object* Win32PrintService::getSupportedAttributeValues($Class* category, $DocFlavor* flavor, $AttributeSet* attributes) {
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
		} else {
			bool var$2 = isAutoSense(flavor);
			if (!var$2) {
				bool var$3 = isPostScriptFlavor(flavor);
				var$2 = (var$3 && (isPSDocAttr(category)));
			}
			if (var$2) {
				return $of(nullptr);
			}
		}
	}
	if (!isAttributeCategorySupported(category)) {
		return $of(nullptr);
	}
	$load($JobName);
	if (category == $JobName::class$) {
		return $of($new($JobName, "Java Printing"_s, nullptr));
	} else {
		$load($RequestingUserName);
		if (category == $RequestingUserName::class$) {
			$var($String, userName, ""_s);
			try {
				$assign(userName, $System::getProperty("user.name"_s, ""_s));
			} catch ($SecurityException&) {
				$catch();
			}
			return $of($new($RequestingUserName, userName, nullptr));
		} else {
			$load($ColorSupported);
			if (category == $ColorSupported::class$) {
				int32_t caps = getPrinterCapabilities();
				if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) != 0) {
					$init($ColorSupported);
					return $of($ColorSupported::SUPPORTED);
				} else {
					$init($ColorSupported);
					return $of($ColorSupported::NOT_SUPPORTED);
				}
			} else {
				$load($Chromaticity);
				if (category == $Chromaticity::class$) {
					$init($DocFlavor$SERVICE_FORMATTED);
					bool var$13 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
					bool var$12 = var$13 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
					$init($DocFlavor$BYTE_ARRAY);
					bool var$11 = var$12 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::GIF);
					$init($DocFlavor$INPUT_STREAM);
					bool var$10 = var$11 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::GIF);
					$init($DocFlavor$URL);
					bool var$9 = var$10 || $nc(flavor)->equals($DocFlavor$URL::GIF);
					bool var$8 = var$9 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::JPEG);
					bool var$7 = var$8 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::JPEG);
					bool var$6 = var$7 || $nc(flavor)->equals($DocFlavor$URL::JPEG);
					bool var$5 = var$6 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::PNG);
					bool var$4 = var$5 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::PNG);
					if (var$4 || $nc(flavor)->equals($DocFlavor$URL::PNG)) {
						int32_t caps = getPrinterCapabilities();
						if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) == 0) {
							$var($ChromaticityArray, arr, $new($ChromaticityArray, 1));
							$init($Chromaticity);
							arr->set(0, $Chromaticity::MONOCHROME);
							return $of((arr));
						} else {
							$var($ChromaticityArray, arr, $new($ChromaticityArray, 2));
							$init($Chromaticity);
							arr->set(0, $Chromaticity::MONOCHROME);
							arr->set(1, $Chromaticity::COLOR);
							return $of((arr));
						}
					} else {
						return $of(nullptr);
					}
				} else {
					$load($Destination);
					if (category == $Destination::class$) {
						try {
							return $of($new($Destination, $(($$new($File, "out.prn"_s))->toURI())));
						} catch ($SecurityException&) {
							$var($SecurityException, se, $catch());
							try {
								return $of($new($Destination, $$new($URI, "file:out.prn"_s)));
							} catch ($URISyntaxException&) {
								$var($URISyntaxException, e, $catch());
								return $of(nullptr);
							}
						}
					} else {
						$load($OrientationRequested);
						if (category == $OrientationRequested::class$) {
							$init($DocFlavor$SERVICE_FORMATTED);
							bool var$23 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
							bool var$22 = var$23 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
							$init($DocFlavor$INPUT_STREAM);
							bool var$21 = var$22 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::GIF);
							bool var$20 = var$21 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::JPEG);
							bool var$19 = var$20 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::PNG);
							$init($DocFlavor$BYTE_ARRAY);
							bool var$18 = var$19 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::GIF);
							bool var$17 = var$18 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::JPEG);
							bool var$16 = var$17 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::PNG);
							$init($DocFlavor$URL);
							bool var$15 = var$16 || $nc(flavor)->equals($DocFlavor$URL::GIF);
							bool var$14 = var$15 || $nc(flavor)->equals($DocFlavor$URL::JPEG);
							if (var$14 || $nc(flavor)->equals($DocFlavor$URL::PNG)) {
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
								$synchronized(this) {
									if (this->gotCopies == false) {
										this->nCopies = getCopiesSupported(this->printer, $(getPort()));
										this->gotCopies = true;
									}
								}
								return $of($new($CopiesSupported, 1, this->nCopies));
							} else {
								$load($Media);
								if (category == $Media::class$) {
									initMedia();
									int32_t len = (this->mediaSizeNames == nullptr) ? 0 : $nc(this->mediaSizeNames)->length;
									$var($MediaTrayArray, trays, getMediaTrays());
									len += (trays == nullptr) ? 0 : $nc(trays)->length;
									$var($MediaArray, arr, $new($MediaArray, len));
									if (this->mediaSizeNames != nullptr) {
										$System::arraycopy(this->mediaSizeNames, 0, arr, 0, $nc(this->mediaSizeNames)->length);
									}
									if (trays != nullptr) {
										$System::arraycopy(trays, 0, arr, len - trays->length, trays->length);
									}
									return $of(arr);
								} else {
									$load($MediaPrintableArea);
									if (category == $MediaPrintableArea::class$) {
										$var($Media, mediaName, nullptr);
										if ((attributes != nullptr) && (($assign(mediaName, $cast($Media, attributes->get($Media::class$)))) != nullptr)) {
											if (!($instanceOf($MediaSizeName, mediaName))) {
												$assign(mediaName, nullptr);
											}
										}
										$var($MediaPrintableAreaArray, mpas, getMediaPrintables($cast($MediaSizeName, mediaName)));
										if (mpas != nullptr) {
											$var($MediaPrintableAreaArray, arr, $new($MediaPrintableAreaArray, mpas->length));
											$System::arraycopy(mpas, 0, arr, 0, mpas->length);
											return $of(arr);
										} else {
											return $of(nullptr);
										}
									} else {
										$load($SunAlternateMedia);
										if (category == $SunAlternateMedia::class$) {
											return $of($new($SunAlternateMedia, $cast($Media, $(getDefaultAttributeValue($Media::class$)))));
										} else {
											$load($PageRanges);
											if (category == $PageRanges::class$) {
												$init($DocFlavor$SERVICE_FORMATTED);
												bool var$24 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
												if (var$24 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
													$var($PageRangesArray, arr, $new($PageRangesArray, 1));
													arr->set(0, $$new($PageRanges, 1, $Integer::MAX_VALUE));
													return $of(arr);
												} else {
													return $of(nullptr);
												}
											} else {
												$load($PrinterResolution);
												if (category == $PrinterResolution::class$) {
													$var($PrinterResolutionArray, supportedRes, getPrintResolutions());
													if (supportedRes == nullptr) {
														return $of(nullptr);
													}
													$var($PrinterResolutionArray, arr, $new($PrinterResolutionArray, $nc(supportedRes)->length));
													$System::arraycopy(supportedRes, 0, arr, 0, supportedRes->length);
													return $of(arr);
												} else {
													$load($Sides);
													if (category == $Sides::class$) {
														$init($DocFlavor$SERVICE_FORMATTED);
														bool var$25 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
														if (var$25 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
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
														$load($PrintQuality);
														if (category == $PrintQuality::class$) {
															$var($PrintQualityArray, arr, $new($PrintQualityArray, 3));
															$init($PrintQuality);
															arr->set(0, $PrintQuality::DRAFT);
															arr->set(1, $PrintQuality::HIGH);
															arr->set(2, $PrintQuality::NORMAL);
															return $of(arr);
														} else {
															$load($SheetCollate);
															if (category == $SheetCollate::class$) {
																bool var$26 = flavor == nullptr;
																if (!var$26) {
																	$init($DocFlavor$SERVICE_FORMATTED);
																	bool var$27 = $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
																	var$26 = (var$27 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
																}
																if (var$26) {
																	$var($SheetCollateArray, arr, $new($SheetCollateArray, 2));
																	$init($SheetCollate);
																	arr->set(0, $SheetCollate::COLLATED);
																	arr->set(1, $SheetCollate::UNCOLLATED);
																	return $of(arr);
																} else {
																	return $of(nullptr);
																}
															} else {
																$load($Fidelity);
																if (category == $Fidelity::class$) {
																	$var($FidelityArray, arr, $new($FidelityArray, 2));
																	$init($Fidelity);
																	arr->set(0, $Fidelity::FIDELITY_FALSE);
																	arr->set(1, $Fidelity::FIDELITY_TRUE);
																	return $of(arr);
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
		}
	}
}

bool Win32PrintService::isAttributeValueSupported($Attribute* attr, $DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	if (attr == nullptr) {
		$throwNew($NullPointerException, "null attribute"_s);
	}
	$Class* category = $nc(attr)->getCategory();
	if (flavor != nullptr) {
		if (!isDocFlavorSupported(flavor)) {
			$throwNew($IllegalArgumentException, $$str({flavor, " is an unsupported flavor"_s}));
		} else {
			bool var$2 = isAutoSense(flavor);
			if (!var$2) {
				bool var$3 = isPostScriptFlavor(flavor);
				var$2 = (var$3 && (isPSDocAttr(category)));
			}
			if (var$2) {
				return false;
			}
		}
	}
	if (!isAttributeCategorySupported(category)) {
		return false;
	} else {
		$load($Chromaticity);
		if (category == $Chromaticity::class$) {
			$init($DocFlavor$SERVICE_FORMATTED);
			bool var$13 = (flavor == nullptr) || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
			bool var$12 = var$13 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
			$init($DocFlavor$BYTE_ARRAY);
			bool var$11 = var$12 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::GIF);
			$init($DocFlavor$INPUT_STREAM);
			bool var$10 = var$11 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::GIF);
			$init($DocFlavor$URL);
			bool var$9 = var$10 || $nc(flavor)->equals($DocFlavor$URL::GIF);
			bool var$8 = var$9 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::JPEG);
			bool var$7 = var$8 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::JPEG);
			bool var$6 = var$7 || $nc(flavor)->equals($DocFlavor$URL::JPEG);
			bool var$5 = var$6 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::PNG);
			bool var$4 = var$5 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::PNG);
			if (var$4 || $nc(flavor)->equals($DocFlavor$URL::PNG)) {
				int32_t caps = getPrinterCapabilities();
				if (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) != 0) {
					return true;
				} else {
					$init($Chromaticity);
					return $equals(attr, $Chromaticity::MONOCHROME);
				}
			} else {
				return false;
			}
		} else {
			$load($Copies);
			if (category == $Copies::class$) {
				return isSupportedCopies($cast($Copies, attr));
			} else {
				$load($Destination);
				if (category == $Destination::class$) {
					$var($URI, uri, $nc(($cast($Destination, attr)))->getURI());
					bool var$14 = "file"_s->equals($($nc(uri)->getScheme()));
					if (var$14 && !$nc($($nc(uri)->getSchemeSpecificPart()))->isEmpty()) {
						return true;
					} else {
						return false;
					}
				} else {
					$load($Media);
					if (category == $Media::class$) {
						if ($instanceOf($MediaSizeName, attr)) {
							return isSupportedMedia($cast($MediaSizeName, attr));
						}
						if ($instanceOf($MediaTray, attr)) {
							return isSupportedMediaTray($cast($MediaTray, attr));
						}
					} else {
						$load($MediaPrintableArea);
						if (category == $MediaPrintableArea::class$) {
							return isSupportedMediaPrintableArea($cast($MediaPrintableArea, attr));
						} else {
							$load($SunAlternateMedia);
							if (category == $SunAlternateMedia::class$) {
								$var($Media, media, $nc(($cast($SunAlternateMedia, attr)))->getMedia());
								return isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)), flavor, attributes);
							} else {
								$load($PageRanges);
								$load($SheetCollate);
								$load($Sides);
								if (category == $PageRanges::class$ || category == $SheetCollate::class$ || category == $Sides::class$) {
									bool var$15 = flavor != nullptr;
									if (var$15) {
										$init($DocFlavor$SERVICE_FORMATTED);
										bool var$16 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
										var$15 = !(var$16 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
									}
									if (var$15) {
										return false;
									}
								} else {
									$load($PrinterResolution);
									if (category == $PrinterResolution::class$) {
										if ($instanceOf($PrinterResolution, attr)) {
											return isSupportedResolution($cast($PrinterResolution, attr));
										}
									} else {
										$load($OrientationRequested);
										if (category == $OrientationRequested::class$) {
											$init($OrientationRequested);
											bool var$17 = $equals(attr, $OrientationRequested::REVERSE_PORTRAIT);
											if (!var$17) {
												bool var$18 = (flavor != nullptr);
												if (var$18) {
													$init($DocFlavor$SERVICE_FORMATTED);
													bool var$28 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
													bool var$27 = var$28 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
													$init($DocFlavor$INPUT_STREAM);
													bool var$26 = var$27 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::GIF);
													bool var$25 = var$26 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::JPEG);
													bool var$24 = var$25 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::PNG);
													$init($DocFlavor$BYTE_ARRAY);
													bool var$23 = var$24 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::GIF);
													bool var$22 = var$23 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::JPEG);
													bool var$21 = var$22 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::PNG);
													$init($DocFlavor$URL);
													bool var$20 = var$21 || $nc(flavor)->equals($DocFlavor$URL::GIF);
													bool var$19 = var$20 || $nc(flavor)->equals($DocFlavor$URL::JPEG);
													var$18 = !(var$19 || flavor->equals($DocFlavor$URL::PNG));
												}
												var$17 = var$18;
											}
											if (var$17) {
												return false;
											}
										} else {
											$load($ColorSupported);
											if (category == $ColorSupported::class$) {
												int32_t caps = getPrinterCapabilities();
												bool isColorSup = (((int32_t)(caps & (uint32_t)Win32PrintService::DEVCAP_COLOR)) != 0);
												$init($ColorSupported);
												if ((!isColorSup && ($equals(attr, $ColorSupported::SUPPORTED))) || (isColorSup && ($equals(attr, $ColorSupported::NOT_SUPPORTED)))) {
													return false;
												}
											} else {
												$load($DialogTypeSelection);
												if (category == $DialogTypeSelection::class$) {
													return true;
												} else {
													$load($DialogOwner);
													if (category == $DialogOwner::class$) {
														$var($DialogOwner, owner, $cast($DialogOwner, attr));
														$var($DialogTypeSelection, dts, (attributes == nullptr) ? ($DialogTypeSelection*)nullptr : $cast($DialogTypeSelection, $nc(attributes)->get($DialogTypeSelection::class$)));
														$init($DialogTypeSelection);
														if (dts == $DialogTypeSelection::NATIVE) {
															return $DialogOwnerAccessor::getID(owner) != 0;
														} else if ($DialogOwnerAccessor::getID(owner) != 0) {
															return false;
														} else if (owner->getOwner() != nullptr) {
															return true;
														} else {
															return $nc($($Toolkit::getDefaultToolkit()))->isAlwaysOnTopSupported();
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
	return true;
}

$AttributeSet* Win32PrintService::getUnsupportedAttributes($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	if (flavor != nullptr && !isDocFlavorSupported(flavor)) {
		$throwNew($IllegalArgumentException, $$str({"flavor "_s, flavor, " is not supported"_s}));
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
		} catch ($ClassCastException&) {
			$catch();
		}
	}
	if (unsupp->isEmpty()) {
		return nullptr;
	} else {
		return unsupp;
	}
}

$DocumentPropertiesUI* Win32PrintService::getDocumentPropertiesUI() {
	$synchronized(this) {
		return $new($Win32PrintService$Win32DocumentPropertiesUI, this);
	}
}

$ServiceUIFactory* Win32PrintService::getServiceUIFactory() {
	$synchronized(this) {
		if (this->uiFactory == nullptr) {
			$set(this, uiFactory, $new($Win32PrintService$Win32ServiceUIFactory, this));
		}
		return this->uiFactory;
	}
}

$String* Win32PrintService::toString() {
	return $str({"Win32 Printer : "_s, $(getName())});
}

bool Win32PrintService::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	return ($equals(obj, this) || ($instanceOf(Win32PrintService, obj) && $nc($($nc(($cast(Win32PrintService, obj)))->getName()))->equals($(getName()))));
}

int32_t Win32PrintService::hashCode() {
	int32_t var$0 = $of($of(this)->getClass())->hashCode();
	return var$0 + $nc($(getName()))->hashCode();
}

bool Win32PrintService::usesClass($Class* c) {
	$load($WPrinterJob);
	return (c == $WPrinterJob::class$);
}

$ints* Win32PrintService::getAllMediaIDs($String* printerName, $String* port) {
	$var($ints, $ret, nullptr);
	$prepareNative(Win32PrintService, getAllMediaIDs, $ints*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getAllMediaIDs, printerName, port));
	$finishNative();
	return $ret;
}

$ints* Win32PrintService::getAllMediaSizes($String* printerName, $String* port) {
	$var($ints, $ret, nullptr);
	$prepareNative(Win32PrintService, getAllMediaSizes, $ints*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getAllMediaSizes, printerName, port));
	$finishNative();
	return $ret;
}

$ints* Win32PrintService::getAllMediaTrays($String* printerName, $String* port) {
	$var($ints, $ret, nullptr);
	$prepareNative(Win32PrintService, getAllMediaTrays, $ints*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getAllMediaTrays, printerName, port));
	$finishNative();
	return $ret;
}

$floats* Win32PrintService::getMediaPrintableArea($String* printerName, int32_t paperSize) {
	$var($floats, $ret, nullptr);
	$prepareNative(Win32PrintService, getMediaPrintableArea, $floats*, $String* printerName, int32_t paperSize);
	$assign($ret, $invokeNative(Win32PrintService, getMediaPrintableArea, printerName, paperSize));
	$finishNative();
	return $ret;
}

$StringArray* Win32PrintService::getAllMediaNames($String* printerName, $String* port) {
	$var($StringArray, $ret, nullptr);
	$prepareNative(Win32PrintService, getAllMediaNames, $StringArray*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getAllMediaNames, printerName, port));
	$finishNative();
	return $ret;
}

$StringArray* Win32PrintService::getAllMediaTrayNames($String* printerName, $String* port) {
	$var($StringArray, $ret, nullptr);
	$prepareNative(Win32PrintService, getAllMediaTrayNames, $StringArray*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getAllMediaTrayNames, printerName, port));
	$finishNative();
	return $ret;
}

int32_t Win32PrintService::getCopiesSupported($String* printerName, $String* port) {
	int32_t $ret = 0;
	$prepareNative(Win32PrintService, getCopiesSupported, int32_t, $String* printerName, $String* port);
	$ret = $invokeNative(Win32PrintService, getCopiesSupported, printerName, port);
	$finishNative();
	return $ret;
}

$ints* Win32PrintService::getAllResolutions($String* printerName, $String* port) {
	$var($ints, $ret, nullptr);
	$prepareNative(Win32PrintService, getAllResolutions, $ints*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getAllResolutions, printerName, port));
	$finishNative();
	return $ret;
}

int32_t Win32PrintService::getCapabilities($String* printerName, $String* port) {
	int32_t $ret = 0;
	$prepareNative(Win32PrintService, getCapabilities, int32_t, $String* printerName, $String* port);
	$ret = $invokeNative(Win32PrintService, getCapabilities, printerName, port);
	$finishNative();
	return $ret;
}

$ints* Win32PrintService::getDefaultSettings($String* printerName, $String* port) {
	$var($ints, $ret, nullptr);
	$prepareNative(Win32PrintService, getDefaultSettings, $ints*, $String* printerName, $String* port);
	$assign($ret, $invokeNative(Win32PrintService, getDefaultSettings, printerName, port));
	$finishNative();
	return $ret;
}

int32_t Win32PrintService::getJobStatus($String* printerName, int32_t type) {
	int32_t $ret = 0;
	$prepareNative(Win32PrintService, getJobStatus, int32_t, $String* printerName, int32_t type);
	$ret = $invokeNative(Win32PrintService, getJobStatus, printerName, type);
	$finishNative();
	return $ret;
}

$String* Win32PrintService::getPrinterPort($String* printerName) {
	$var($String, $ret, nullptr);
	$prepareNative(Win32PrintService, getPrinterPort, $String*, $String* printerName);
	$assign($ret, $invokeNative(Win32PrintService, getPrinterPort, printerName));
	$finishNative();
	return $ret;
}

void clinit$Win32PrintService($Class* class$) {
	$assignStatic(Win32PrintService::predefMedia, $Win32MediaSize::getPredefMedia());
		$init($DocFlavor$BYTE_ARRAY);
		$init($DocFlavor$INPUT_STREAM);
		$init($DocFlavor$URL);
		$init($DocFlavor$SERVICE_FORMATTED);
	$assignStatic(Win32PrintService::supportedFlavors, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::GIF),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::GIF),
		static_cast<$DocFlavor*>($DocFlavor$URL::GIF),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$URL::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::PNG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::PNG),
		static_cast<$DocFlavor*>($DocFlavor$URL::PNG),
		static_cast<$DocFlavor*>($DocFlavor$SERVICE_FORMATTED::PAGEABLE),
		static_cast<$DocFlavor*>($DocFlavor$SERVICE_FORMATTED::PRINTABLE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::AUTOSENSE),
		static_cast<$DocFlavor*>($DocFlavor$URL::AUTOSENSE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::AUTOSENSE)
	}));
		$load($PrinterName);
		$load($PrinterIsAcceptingJobs);
		$load($QueuedJobCount);
		$load($ColorSupported);
	$assignStatic(Win32PrintService::serviceAttrCats, $new($ClassArray, {
		$PrinterName::class$,
		$PrinterIsAcceptingJobs::class$,
		$QueuedJobCount::class$,
		$ColorSupported::class$
	}));
		$load($JobName);
		$load($RequestingUserName);
		$load($Copies);
		$load($Destination);
		$load($OrientationRequested);
		$load($PageRanges);
		$load($Media);
		$load($MediaPrintableArea);
		$load($Fidelity);
		$load($SheetCollate);
		$load($SunAlternateMedia);
		$load($Chromaticity);
	$assignStatic(Win32PrintService::otherAttrCats, $new($ClassArray, {
		$JobName::class$,
		$RequestingUserName::class$,
		$Copies::class$,
		$Destination::class$,
		$OrientationRequested::class$,
		$PageRanges::class$,
		$Media::class$,
		$MediaPrintableArea::class$,
		$Fidelity::class$,
		$SheetCollate::class$,
		$SunAlternateMedia::class$,
		$Chromaticity::class$
	}));
		$init($MediaSizeName);
	$assignStatic(Win32PrintService::dmPaperToPrintService, $new($MediaSizeNameArray, {
		$MediaSizeName::NA_LETTER,
		$MediaSizeName::NA_LETTER,
		$MediaSizeName::TABLOID,
		$MediaSizeName::LEDGER,
		$MediaSizeName::NA_LEGAL,
		$MediaSizeName::INVOICE,
		$MediaSizeName::EXECUTIVE,
		$MediaSizeName::ISO_A3,
		$MediaSizeName::ISO_A4,
		$MediaSizeName::ISO_A4,
		$MediaSizeName::ISO_A5,
		$MediaSizeName::JIS_B4,
		$MediaSizeName::JIS_B5,
		$MediaSizeName::FOLIO,
		$MediaSizeName::QUARTO,
		$MediaSizeName::NA_10X14_ENVELOPE,
		$MediaSizeName::B,
		$MediaSizeName::NA_LETTER,
		$MediaSizeName::NA_NUMBER_9_ENVELOPE,
		$MediaSizeName::NA_NUMBER_10_ENVELOPE,
		$MediaSizeName::NA_NUMBER_11_ENVELOPE,
		$MediaSizeName::NA_NUMBER_12_ENVELOPE,
		$MediaSizeName::NA_NUMBER_14_ENVELOPE,
		$MediaSizeName::C,
		$MediaSizeName::D,
		$MediaSizeName::E,
		$MediaSizeName::ISO_DESIGNATED_LONG,
		$MediaSizeName::ISO_C5,
		$MediaSizeName::ISO_C3,
		$MediaSizeName::ISO_C4,
		$MediaSizeName::ISO_C6,
		$MediaSizeName::ITALY_ENVELOPE,
		$MediaSizeName::ISO_B4,
		$MediaSizeName::ISO_B5,
		$MediaSizeName::ISO_B6,
		$MediaSizeName::ITALY_ENVELOPE,
		$MediaSizeName::MONARCH_ENVELOPE,
		$MediaSizeName::PERSONAL_ENVELOPE,
		$MediaSizeName::NA_10X15_ENVELOPE,
		$MediaSizeName::NA_9X12_ENVELOPE,
		$MediaSizeName::FOLIO,
		$MediaSizeName::ISO_B4,
		$MediaSizeName::JAPANESE_POSTCARD,
		$MediaSizeName::NA_9X11_ENVELOPE
	}));
		$init($MediaTray);
		$init($Win32MediaTray);
	$assignStatic(Win32PrintService::dmPaperBinToPrintService, $new($MediaTrayArray, {
		$MediaTray::TOP,
		$MediaTray::BOTTOM,
		$MediaTray::MIDDLE,
		$MediaTray::MANUAL,
		$MediaTray::ENVELOPE,
		static_cast<$MediaTray*>($Win32MediaTray::ENVELOPE_MANUAL),
		static_cast<$MediaTray*>($Win32MediaTray::AUTO),
		static_cast<$MediaTray*>($Win32MediaTray::TRACTOR),
		static_cast<$MediaTray*>($Win32MediaTray::SMALL_FORMAT),
		static_cast<$MediaTray*>($Win32MediaTray::LARGE_FORMAT),
		$MediaTray::LARGE_CAPACITY,
		($MediaTray*)nullptr,
		($MediaTray*)nullptr,
		$MediaTray::MAIN,
		static_cast<$MediaTray*>($Win32MediaTray::FORMSOURCE)
	}));
	Win32PrintService::DM_PAPERSIZE = 2;
	Win32PrintService::DM_PRINTQUALITY = 1024;
	Win32PrintService::DM_YRESOLUTION = 8192;
}

Win32PrintService::Win32PrintService() {
}

$Class* Win32PrintService::load$($String* name, bool initialize) {
	$loadClass(Win32PrintService, name, initialize, &_Win32PrintService_ClassInfo_, clinit$Win32PrintService, allocate$Win32PrintService);
	return class$;
}

$Class* Win32PrintService::class$ = nullptr;

	} // print
} // sun