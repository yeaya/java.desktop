#include <sun/print/IPPPrintService.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/io/BufferedReader.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLDecoder.h>
#include <java/nio/charset/Charset.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
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
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/standard/ColorSupported.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/CopiesSupported.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/DialogTypeSelection.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/Finishings.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobSheets.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize$ISO.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <javax/print/attribute/standard/NumberUp.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PDLOverrideSupported.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/PagesPerMinute.h>
#include <javax/print/attribute/standard/PagesPerMinuteColor.h>
#include <javax/print/attribute/standard/PrinterInfo.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/PrinterLocation.h>
#include <javax/print/attribute/standard/PrinterMakeAndModel.h>
#include <javax/print/attribute/standard/PrinterMessageFromOperator.h>
#include <javax/print/attribute/standard/PrinterMoreInfo.h>
#include <javax/print/attribute/standard/PrinterMoreInfoManufacturer.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <javax/print/attribute/standard/PrinterResolution.h>
#include <javax/print/attribute/standard/PrinterState.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/PrinterURI.h>
#include <javax/print/attribute/standard/QueuedJobCount.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <sun/print/AttributeClass.h>
#include <sun/print/CUPSPrinter.h>
#include <sun/print/CustomMediaSizeName.h>
#include <sun/print/CustomMediaTray.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <sun/print/IPPPrintService$1.h>
#include <sun/print/IPPPrintService$ExtFinishing.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <sun/print/ServiceNotifier.h>
#include <sun/print/UnixPrintJob.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ACCEPTING_JOBS
#undef ATTRIBUTES_CHARSET
#undef ATTRIBUTES_NATURAL_LANGUAGE
#undef AUTOSENSE
#undef CANADA
#undef COLOR
#undef COMMON
#undef DPI
#undef ENGLISH
#undef FALSE
#undef FIDELITY_FALSE
#undef FIDELITY_TRUE
#undef FORCE_PIPE_PROP
#undef GIF
#undef GRPTAG_END_ATTRIBUTES
#undef GRPTAG_JOB_ATTRIBUTES
#undef GRPTAG_OP_ATTRIBUTES
#undef GRPTAG_PRINTER_ATTRIBUTES
#undef INCH
#undef ISO_A4
#undef JPEG
#undef LANDSCAPE
#undef LETTER
#undef MAXCOPIES
#undef MAX_ATTRIBUTE_LENGTH
#undef MAX_VALUE
#undef NATIVE
#undef NA_LETTER
#undef NONE
#undef NOT_ACCEPTING_JOBS
#undef NOT_ATTEMPTED
#undef NOT_SUPPORTED
#undef ONE_SIDED
#undef OP_CUPS_GET_DEFAULT
#undef OP_CUPS_GET_PRINTERS
#undef OP_GET_ATTRIBUTES
#undef PAGEABLE
#undef PCL
#undef PDF
#undef PNG
#undef PORTRAIT
#undef POSTSCRIPT
#undef PRINTABLE
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT
#undef STANDARD
#undef STATUSCODE_SUCCESS
#undef SUPPORTED
#undef TAG_INT
#undef TAG_KEYWORD
#undef TAG_MEMBER_ATTRNAME
#undef TAG_MIME_MEDIATYPE
#undef TAG_TEXT_LANGUAGE
#undef TAG_UNSUPPORTED_VALUE
#undef TAG_URI
#undef TEXT_HTML_HOST
#undef TEXT_HTML_US_ASCII
#undef TEXT_HTML_UTF_16
#undef TEXT_HTML_UTF_16BE
#undef TEXT_HTML_UTF_16LE
#undef TEXT_HTML_UTF_8
#undef TEXT_PLAIN
#undef TEXT_PLAIN_HOST
#undef TEXT_PLAIN_US_ASCII
#undef TEXT_PLAIN_UTF_16
#undef TEXT_PLAIN_UTF_16BE
#undef TEXT_PLAIN_UTF_16LE
#undef TEXT_PLAIN_UTF_8
#undef TRUE
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef UNCOLLATED
#undef US

using $HashMapArray = $Array<::java::util::HashMap>;
using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $FidelityArray = $Array<::javax::print::attribute::standard::Fidelity>;
using $FinishingsArray = $Array<::javax::print::attribute::standard::Finishings>;
using $JobSheetsArray = $Array<::javax::print::attribute::standard::JobSheets>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $NumberUpArray = $Array<::javax::print::attribute::standard::NumberUp>;
using $OrientationRequestedArray = $Array<::javax::print::attribute::standard::OrientationRequested>;
using $PageRangesArray = $Array<::javax::print::attribute::standard::PageRanges>;
using $PrinterResolutionArray = $Array<::javax::print::attribute::standard::PrinterResolution>;
using $SidesArray = $Array<::javax::print::attribute::standard::Sides>;
using $AttributeClassArray = $Array<::sun::print::AttributeClass>;
using $CustomMediaSizeNameArray = $Array<::sun::print::CustomMediaSizeName>;
using $intArray2 = $Array<int32_t, 2>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $BufferedReader = ::java::io::BufferedReader;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLDecoder = ::java::net::URLDecoder;
using $Charset = ::java::nio::charset::Charset;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
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
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $ColorSupported = ::javax::print::attribute::standard::ColorSupported;
using $Copies = ::javax::print::attribute::standard::Copies;
using $CopiesSupported = ::javax::print::attribute::standard::CopiesSupported;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogTypeSelection = ::javax::print::attribute::standard::DialogTypeSelection;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $Finishings = ::javax::print::attribute::standard::Finishings;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobSheets = ::javax::print::attribute::standard::JobSheets;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSize$ISO = ::javax::print::attribute::standard::MediaSize$ISO;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;
using $NumberUp = ::javax::print::attribute::standard::NumberUp;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PDLOverrideSupported = ::javax::print::attribute::standard::PDLOverrideSupported;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $PagesPerMinute = ::javax::print::attribute::standard::PagesPerMinute;
using $PagesPerMinuteColor = ::javax::print::attribute::standard::PagesPerMinuteColor;
using $PrinterInfo = ::javax::print::attribute::standard::PrinterInfo;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $PrinterLocation = ::javax::print::attribute::standard::PrinterLocation;
using $PrinterMakeAndModel = ::javax::print::attribute::standard::PrinterMakeAndModel;
using $PrinterMessageFromOperator = ::javax::print::attribute::standard::PrinterMessageFromOperator;
using $PrinterMoreInfo = ::javax::print::attribute::standard::PrinterMoreInfo;
using $PrinterMoreInfoManufacturer = ::javax::print::attribute::standard::PrinterMoreInfoManufacturer;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $PrinterResolution = ::javax::print::attribute::standard::PrinterResolution;
using $PrinterState = ::javax::print::attribute::standard::PrinterState;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $PrinterURI = ::javax::print::attribute::standard::PrinterURI;
using $QueuedJobCount = ::javax::print::attribute::standard::QueuedJobCount;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;
using $AttributeClass = ::sun::print::AttributeClass;
using $CUPSPrinter = ::sun::print::CUPSPrinter;
using $CustomMediaSizeName = ::sun::print::CustomMediaSizeName;
using $CustomMediaTray = ::sun::print::CustomMediaTray;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;
using $IPPPrintService$1 = ::sun::print::IPPPrintService$1;
using $IPPPrintService$ExtFinishing = ::sun::print::IPPPrintService$ExtFinishing;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;
using $ServiceNotifier = ::sun::print::ServiceNotifier;
using $UnixPrintJob = ::sun::print::UnixPrintJob;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace print {

$FieldInfo _IPPPrintService_FieldInfo_[] = {
	{"debugPrint", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IPPPrintService, debugPrint)},
	{"debugPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IPPPrintService, debugPrefix)},
	{"FORCE_PIPE_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IPPPrintService, FORCE_PIPE_PROP)},
	{"printer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IPPPrintService, printer)},
	{"myURI", "Ljava/net/URI;", nullptr, $PRIVATE, $field(IPPPrintService, myURI)},
	{"myURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(IPPPrintService, myURL)},
	{"notifier", "Lsun/print/ServiceNotifier;", nullptr, $PRIVATE | $TRANSIENT, $field(IPPPrintService, notifier)},
	{"MAXCOPIES", "I", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, MAXCOPIES)},
	{"MAX_ATTRIBUTE_LENGTH", "S", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, MAX_ATTRIBUTE_LENGTH)},
	{"cps", "Lsun/print/CUPSPrinter;", nullptr, $PRIVATE, $field(IPPPrintService, cps)},
	{"urlConnection", "Ljava/net/HttpURLConnection;", nullptr, $PRIVATE, $field(IPPPrintService, urlConnection)},
	{"supportedDocFlavors", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE, $field(IPPPrintService, supportedDocFlavors)},
	{"supportedCats", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE, $field(IPPPrintService, supportedCats)},
	{"mediaTrays", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE, $field(IPPPrintService, mediaTrays)},
	{"mediaSizeNames", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(IPPPrintService, mediaSizeNames)},
	{"customMediaSizeNames", "[Lsun/print/CustomMediaSizeName;", nullptr, $PRIVATE, $field(IPPPrintService, customMediaSizeNames)},
	{"defaultMediaIndex", "I", nullptr, $PRIVATE, $field(IPPPrintService, defaultMediaIndex)},
	{"rawResolutions", "[I", nullptr, $PRIVATE, $field(IPPPrintService, rawResolutions)},
	{"printerResolutions", "[Ljavax/print/attribute/standard/PrinterResolution;", nullptr, $PRIVATE, $field(IPPPrintService, printerResolutions)},
	{"isCupsPrinter", "Z", nullptr, $PRIVATE, $field(IPPPrintService, isCupsPrinter)},
	{"init", "Z", nullptr, $PRIVATE, $field(IPPPrintService, init)},
	{"isPS", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(IPPPrintService, isPS)},
	{"getAttMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/print/AttributeClass;>;", $PRIVATE, $field(IPPPrintService, getAttMap)},
	{"pngImagesAdded", "Z", nullptr, $PRIVATE, $field(IPPPrintService, pngImagesAdded)},
	{"gifImagesAdded", "Z", nullptr, $PRIVATE, $field(IPPPrintService, gifImagesAdded)},
	{"jpgImagesAdded", "Z", nullptr, $PRIVATE, $field(IPPPrintService, jpgImagesAdded)},
	{"STATUSCODE_SUCCESS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPPPrintService, STATUSCODE_SUCCESS)},
	{"GRPTAG_OP_ATTRIBUTES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPPPrintService, GRPTAG_OP_ATTRIBUTES)},
	{"GRPTAG_JOB_ATTRIBUTES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPPPrintService, GRPTAG_JOB_ATTRIBUTES)},
	{"GRPTAG_PRINTER_ATTRIBUTES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPPPrintService, GRPTAG_PRINTER_ATTRIBUTES)},
	{"GRPTAG_END_ATTRIBUTES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPPPrintService, GRPTAG_END_ATTRIBUTES)},
	{"OP_GET_ATTRIBUTES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IPPPrintService, OP_GET_ATTRIBUTES)},
	{"OP_CUPS_GET_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IPPPrintService, OP_CUPS_GET_DEFAULT)},
	{"OP_CUPS_GET_PRINTERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IPPPrintService, OP_CUPS_GET_PRINTERS)},
	{"printReqAttribDefault", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, printReqAttribDefault)},
	{"serviceAttributes", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, serviceAttributes)},
	{"appPDF", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, appPDF)},
	{"appPostScript", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, appPostScript)},
	{"appOctetStream", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, appOctetStream)},
	{"textPlain", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, textPlain)},
	{"textPlainHost", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, textPlainHost)},
	{"imageJPG", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, imageJPG)},
	{"imageGIF", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, imageGIF)},
	{"imagePNG", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, imagePNG)},
	{"textHtml", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, textHtml)},
	{"textHtmlHost", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, textHtmlHost)},
	{"appPCL", "[Ljavax/print/DocFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, appPCL)},
	{"allDocFlavors", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(IPPPrintService, allDocFlavors)},
	{}
};

$MethodInfo _IPPPrintService_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(IPPPrintService::*)($String*,$URL*)>(&IPPPrintService::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(IPPPrintService::*)($String*,$String*,bool)>(&IPPPrintService::init$))},
	{"addPrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"createPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC},
	{"debug_println", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($String*)>(&IPPPrintService::debug_println))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findCustomMedia", "(Ljavax/print/attribute/standard/MediaSizeName;)Lsun/print/CustomMediaSizeName;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Class;)Ljavax/print/attribute/PrintServiceAttribute;", "<T::Ljavax/print/attribute/PrintServiceAttribute;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $SYNCHRONIZED},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultAttributeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Ljava/lang/Object;", $PUBLIC | $SYNCHRONIZED},
	{"getDest", "()Ljava/lang/String;", nullptr, 0},
	{"getIPPConnection", "(Ljava/net/URL;)Ljava/net/HttpURLConnection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HttpURLConnection*(*)($URL*)>(&IPPPrintService::getIPPConnection))},
	{"getIPPMedia", "(Ljava/lang/String;)Ljavax/print/attribute/standard/Media;", nullptr, $PRIVATE, $method(static_cast<$Media*(IPPPrintService::*)($String*)>(&IPPPrintService::getIPPMedia))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrintResolutions", "()[Ljavax/print/attribute/standard/PrinterResolution;", nullptr, $PRIVATE, $method(static_cast<$PrinterResolutionArray*(IPPPrintService::*)()>(&IPPPrintService::getPrintResolutions))},
	{"getServiceUIFactory", "()Ljavax/print/ServiceUIFactory;", nullptr, $PUBLIC},
	{"getSupportedAttributeCategories", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $SYNCHRONIZED},
	{"getSupportedAttributeValues", "(Ljava/lang/Class;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", $PUBLIC | $SYNCHRONIZED},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSupportedMedia", "()[Ljavax/print/attribute/standard/Media;", nullptr, $PRIVATE, $method(static_cast<$MediaArray*(IPPPrintService::*)()>(&IPPPrintService::getSupportedMedia))},
	{"getUnsupportedAttributes", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initAttributes", "()V", nullptr, $PRIVATE, $method(static_cast<void(IPPPrintService::*)()>(&IPPPrintService::initAttributes))},
	{"isAttributeCategorySupported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Z", $PUBLIC},
	{"isAttributeValueSupported", "(Ljavax/print/attribute/Attribute;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"isAutoSense", "(Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE, $method(static_cast<bool(IPPPrintService::*)($DocFlavor*)>(&IPPPrintService::isAutoSense))},
	{"isDestinationSupported", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PRIVATE, $method(static_cast<bool(IPPPrintService::*)($DocFlavor*,$AttributeSet*)>(&IPPPrintService::isDestinationSupported))},
	{"isDocFlavorSupported", "(Ljavax/print/DocFlavor;)Z", nullptr, $PUBLIC},
	{"isIPPSupportedImages", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isPostscript", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isSupportedCopies", "(Ljavax/print/attribute/standard/Copies;)Z", nullptr, $PRIVATE, $method(static_cast<bool(IPPPrintService::*)($Copies*)>(&IPPPrintService::isSupportedCopies))},
	{"isSupportedMedia", "(Ljavax/print/attribute/standard/MediaSizeName;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(IPPPrintService::*)($MediaSizeName*)>(&IPPPrintService::isSupportedMedia))},
	{"isSupportedMediaTray", "(Ljavax/print/attribute/standard/MediaTray;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(IPPPrintService::*)($MediaTray*)>(&IPPPrintService::isSupportedMediaTray))},
	{"isSupportedResolution", "(Ljavax/print/attribute/standard/PrinterResolution;)Z", nullptr, $PRIVATE, $method(static_cast<bool(IPPPrintService::*)($PrinterResolution*)>(&IPPPrintService::isSupportedResolution))},
	{"opGetAttributes", "()V", nullptr, $PRIVATE, $method(static_cast<void(IPPPrintService::*)()>(&IPPPrintService::opGetAttributes))},
	{"readIPPResponse", "(Ljava/io/InputStream;)[Ljava/util/HashMap;", "(Ljava/io/InputStream;)[Ljava/util/HashMap<Ljava/lang/String;Lsun/print/AttributeClass;>;", $PUBLIC | $STATIC, $method(static_cast<$HashMapArray*(*)($InputStream*)>(&IPPPrintService::readIPPResponse))},
	{"removePrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"toHex", "(B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&IPPPrintService::toHex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usesClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{"wakeNotifier", "()V", nullptr, $PUBLIC},
	{"writeIPPRequest", "(Ljava/io/OutputStream;Ljava/lang/String;[Lsun/print/AttributeClass;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($OutputStream*,$String*,$AttributeClassArray*)>(&IPPPrintService::writeIPPRequest))},
	{}
};

$InnerClassInfo _IPPPrintService_InnerClassesInfo_[] = {
	{"sun.print.IPPPrintService$ExtFinishing", "sun.print.IPPPrintService", "ExtFinishing", $PRIVATE},
	{"sun.print.IPPPrintService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IPPPrintService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.IPPPrintService",
	"java.lang.Object",
	"javax.print.PrintService,sun.print.SunPrinterJobService",
	_IPPPrintService_FieldInfo_,
	_IPPPrintService_MethodInfo_,
	nullptr,
	nullptr,
	_IPPPrintService_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.IPPPrintService$ExtFinishing,sun.print.IPPPrintService$1"
};

$Object* allocate$IPPPrintService($Class* clazz) {
	return $of($alloc(IPPPrintService));
}

$Object* IPPPrintService::clone() {
	 return this->$PrintService::clone();
}

void IPPPrintService::finalize() {
	this->$PrintService::finalize();
}

bool IPPPrintService::debugPrint = false;
$String* IPPPrintService::debugPrefix = nullptr;
$String* IPPPrintService::FORCE_PIPE_PROP = nullptr;
int32_t IPPPrintService::MAXCOPIES = 0;
int16_t IPPPrintService::MAX_ATTRIBUTE_LENGTH = 0;
$String* IPPPrintService::OP_GET_ATTRIBUTES = nullptr;
$String* IPPPrintService::OP_CUPS_GET_DEFAULT = nullptr;
$String* IPPPrintService::OP_CUPS_GET_PRINTERS = nullptr;
$ObjectArray* IPPPrintService::printReqAttribDefault = nullptr;
$ObjectArray2* IPPPrintService::serviceAttributes = nullptr;
$DocFlavorArray* IPPPrintService::appPDF = nullptr;
$DocFlavorArray* IPPPrintService::appPostScript = nullptr;
$DocFlavorArray* IPPPrintService::appOctetStream = nullptr;
$DocFlavorArray* IPPPrintService::textPlain = nullptr;
$DocFlavorArray* IPPPrintService::textPlainHost = nullptr;
$DocFlavorArray* IPPPrintService::imageJPG = nullptr;
$DocFlavorArray* IPPPrintService::imageGIF = nullptr;
$DocFlavorArray* IPPPrintService::imagePNG = nullptr;
$DocFlavorArray* IPPPrintService::textHtml = nullptr;
$DocFlavorArray* IPPPrintService::textHtmlHost = nullptr;
$DocFlavorArray* IPPPrintService::appPCL = nullptr;
$ObjectArray* IPPPrintService::allDocFlavors = nullptr;

void IPPPrintService::debug_println($String* str) {
	$init(IPPPrintService);
	if (IPPPrintService::debugPrint) {
		$nc($System::out)->println(str);
	}
}

void IPPPrintService::init$($String* name, $URL* url) {
	$useLocalCurrentObjectStackCache();
	$set(this, notifier, nullptr);
	$set(this, urlConnection, nullptr);
	$set(this, rawResolutions, nullptr);
	$set(this, printerResolutions, nullptr);
	this->pngImagesAdded = false;
	this->gifImagesAdded = false;
	this->jpgImagesAdded = false;
	if ((name == nullptr) || (url == nullptr)) {
		$throwNew($IllegalArgumentException, "null uri or printer name"_s);
	}
	try {
		$set(this, printer, $URLDecoder::decode(name, "UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$set(this, printer, name);
	}
	$set(this, supportedDocFlavors, nullptr);
	$set(this, supportedCats, nullptr);
	$set(this, mediaSizeNames, nullptr);
	$set(this, customMediaSizeNames, nullptr);
	$set(this, mediaTrays, nullptr);
	$set(this, myURL, url);
	$set(this, cps, nullptr);
	this->isCupsPrinter = false;
	this->init = false;
	this->defaultMediaIndex = -1;
	$var($String, host, $nc(this->myURL)->getHost());
	if (host != nullptr && host->equals($($CUPSPrinter::getServer()))) {
		this->isCupsPrinter = true;
		try {
			$set(this, myURI, $new($URI, $$str({"ipp://"_s, host, "/printers/"_s, this->printer})));
			debug_println($$str({IPPPrintService::debugPrefix, "IPPPrintService myURI : "_s, this->myURI}));
		} catch ($URISyntaxException& e) {
			$throwNew($IllegalArgumentException, "invalid url"_s);
		}
	}
}

void IPPPrintService::init$($String* name, $String* uriStr, bool isCups) {
	$useLocalCurrentObjectStackCache();
	$set(this, notifier, nullptr);
	$set(this, urlConnection, nullptr);
	$set(this, rawResolutions, nullptr);
	$set(this, printerResolutions, nullptr);
	this->pngImagesAdded = false;
	this->gifImagesAdded = false;
	this->jpgImagesAdded = false;
	if ((name == nullptr) || (uriStr == nullptr)) {
		$throwNew($IllegalArgumentException, "null uri or printer name"_s);
	}
	try {
		$set(this, printer, $URLDecoder::decode(name, "UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$set(this, printer, name);
	}
	$set(this, supportedDocFlavors, nullptr);
	$set(this, supportedCats, nullptr);
	$set(this, mediaSizeNames, nullptr);
	$set(this, customMediaSizeNames, nullptr);
	$set(this, mediaTrays, nullptr);
	$set(this, cps, nullptr);
	this->init = false;
	this->defaultMediaIndex = -1;
	try {
		$set(this, myURL, $new($URL, $($nc(uriStr)->replaceFirst("ipp"_s, "http"_s))));
	} catch ($Exception& e) {
		IPPPrintService::debug_println($$str({IPPPrintService::debugPrefix, " IPPPrintService, myURL="_s, this->myURL, " Exception= "_s, e}));
		$throwNew($IllegalArgumentException, "invalid url"_s);
	}
	this->isCupsPrinter = isCups;
	try {
		$set(this, myURI, $new($URI, uriStr));
		debug_println($$str({IPPPrintService::debugPrefix, "IPPPrintService myURI : "_s, this->myURI}));
	} catch ($URISyntaxException& e) {
		$throwNew($IllegalArgumentException, "invalid uri"_s);
	}
}

void IPPPrintService::initAttributes() {
	$useLocalCurrentObjectStackCache();
	if (!this->init) {
		$set(this, customMediaSizeNames, $new($CustomMediaSizeNameArray, 0));
		if (($set(this, urlConnection, getIPPConnection(this->myURL))) == nullptr) {
			$set(this, mediaSizeNames, $new($MediaSizeNameArray, 0));
			$set(this, mediaTrays, $new($MediaTrayArray, 0));
			debug_println($$str({IPPPrintService::debugPrefix, "initAttributes, NULL urlConnection "_s}));
			this->init = true;
			return;
		}
		opGetAttributes();
		if (this->isCupsPrinter) {
			try {
				$set(this, cps, $new($CUPSPrinter, this->printer));
				$set(this, mediaSizeNames, $nc(this->cps)->getMediaSizeNames());
				$set(this, mediaTrays, $nc(this->cps)->getMediaTrays());
				$set(this, customMediaSizeNames, $nc(this->cps)->getCustomMediaSizeNames());
				this->defaultMediaIndex = $nc(this->cps)->getDefaultMediaIndex();
				$set(this, rawResolutions, $nc(this->cps)->getRawResolutions());
				$nc(this->urlConnection)->disconnect();
				this->init = true;
				return;
			} catch ($Exception& e) {
				IPPPrintService::debug_println($$str({IPPPrintService::debugPrefix, "initAttributes, error creating CUPSPrinter e="_s, e}));
			}
		}
		$var($MediaArray, allMedia, getSupportedMedia());
		$var($ArrayList, sizeList, $new($ArrayList));
		$var($ArrayList, trayList, $new($ArrayList));
		for (int32_t i = 0; i < $nc(allMedia)->length; ++i) {
			if ($instanceOf($MediaSizeName, allMedia->get(i))) {
				sizeList->add(allMedia->get(i));
			} else if ($instanceOf($MediaTray, allMedia->get(i))) {
				trayList->add(allMedia->get(i));
			}
		}
		if (sizeList != nullptr) {
			$set(this, mediaSizeNames, $new($MediaSizeNameArray, sizeList->size()));
			$set(this, mediaSizeNames, $fcast($MediaSizeNameArray, sizeList->toArray(this->mediaSizeNames)));
		}
		if (trayList != nullptr) {
			$set(this, mediaTrays, $new($MediaTrayArray, trayList->size()));
			$set(this, mediaTrays, $fcast($MediaTrayArray, trayList->toArray(this->mediaTrays)));
		}
		$nc(this->urlConnection)->disconnect();
		this->init = true;
	}
}

$DocPrintJob* IPPPrintService::createPrintJob() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $new($UnixPrintJob, this);
}

$Object* IPPPrintService::getSupportedAttributeValues($Class* category, $DocFlavor* flavor, $AttributeSet* attributes) {
	$synchronized(this) {
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
		if (!isDestinationSupported(flavor, attributes)) {
			return $of(nullptr);
		}
		initAttributes();
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
				$var($CopiesSupported, cs, $new($CopiesSupported, 1, IPPPrintService::MAXCOPIES));
				$var($AttributeClass, attribClass, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get($(cs->getName()))) : ($AttributeClass*)nullptr);
				if (attribClass != nullptr) {
					$var($ints, range, attribClass->getIntRangeValue());
					$assign(cs, $new($CopiesSupported, $nc(range)->get(0), range->get(1)));
				}
				return $of(cs);
			} else {
				return $of(nullptr);
			}
		} else {
			$load($Chromaticity);
			if (category == $Chromaticity::class$) {
				$init($DocFlavor$SERVICE_FORMATTED);
				bool var$4 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
				bool var$3 = var$4 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
				if (var$3 || !isIPPSupportedImages($($nc(flavor)->getMimeType()))) {
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
					$init($DocFlavor$SERVICE_FORMATTED);
					bool var$5 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
					if (var$5 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
						try {
							return $of($new($Destination, $(($$new($File, "out.ps"_s))->toURI())));
						} catch ($SecurityException& se) {
							try {
								return $of($new($Destination, $$new($URI, "file:out.ps"_s)));
							} catch ($URISyntaxException& e) {
								return $of(nullptr);
							}
						}
					}
					return $of(nullptr);
				} else {
					$load($Fidelity);
					if (category == $Fidelity::class$) {
						$var($FidelityArray, arr, $new($FidelityArray, 2));
						$init($Fidelity);
						arr->set(0, $Fidelity::FIDELITY_FALSE);
						arr->set(1, $Fidelity::FIDELITY_TRUE);
						return $of(arr);
					} else {
						$load($Finishings);
						if (category == $Finishings::class$) {
							$var($AttributeClass, attribClass, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get("finishings-supported"_s)) : ($AttributeClass*)nullptr);
							if (attribClass != nullptr) {
								$var($ints, finArray, attribClass->getArrayOfIntValues());
								if ((finArray != nullptr) && (finArray->length > 0)) {
									$var($FinishingsArray, finSup, $new($FinishingsArray, finArray->length));
									for (int32_t i = 0; i < finArray->length; ++i) {
										$init($Finishings);
										finSup->set(i, $Finishings::NONE);
										$var($FinishingsArray, fAll, $fcast($FinishingsArray, ($$new($IPPPrintService$ExtFinishing, this, 100))->getAll()));
										for (int32_t j = 0; j < $nc(fAll)->length; ++j) {
											if (fAll->get(j) == nullptr) {
												continue;
											}
											if (finArray->get(i) == $nc(fAll->get(j))->getValue()) {
												finSup->set(i, fAll->get(j));
												break;
											}
										}
									}
									return $of(finSup);
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
									$load($Media);
									if (category == $Media::class$) {
										$var($MediaArray, allMedia, $new($MediaArray, $nc(this->mediaSizeNames)->length + $nc(this->mediaTrays)->length));
										for (int32_t i = 0; i < $nc(this->mediaSizeNames)->length; ++i) {
											allMedia->set(i, $nc(this->mediaSizeNames)->get(i));
										}
										for (int32_t i = 0; i < $nc(this->mediaTrays)->length; ++i) {
											allMedia->set(i + $nc(this->mediaSizeNames)->length, $nc(this->mediaTrays)->get(i));
										}
										if (allMedia->length == 0) {
											$assign(allMedia, $new($MediaArray, 1));
											allMedia->set(0, $cast($Media, $(getDefaultAttributeValue($Media::class$))));
										}
										return $of(allMedia);
									} else {
										$load($MediaPrintableArea);
										if (category == $MediaPrintableArea::class$) {
											$var($MediaPrintableAreaArray, mpas, nullptr);
											if (this->cps != nullptr) {
												$assign(mpas, $nc(this->cps)->getMediaPrintableArea());
											}
											if (mpas == nullptr) {
												$assign(mpas, $new($MediaPrintableAreaArray, 1));
												mpas->set(0, $cast($MediaPrintableArea, $(getDefaultAttributeValue($MediaPrintableArea::class$))));
											}
											if ((attributes == nullptr) || ($nc(attributes)->size() == 0)) {
												$var($ArrayList, printableList, $new($ArrayList));
												for (int32_t i = 0; i < $nc(mpas)->length; ++i) {
													if (mpas->get(i) != nullptr) {
														printableList->add(mpas->get(i));
													}
												}
												if (printableList->size() > 0) {
													$assign(mpas, $new($MediaPrintableAreaArray, printableList->size()));
													printableList->toArray(mpas);
												}
												return $of(mpas);
											}
											int32_t match = -1;
											$var($Media, media, $cast($Media, $nc(attributes)->get($Media::class$)));
											if (media != nullptr && $instanceOf($MediaSizeName, media)) {
												$var($MediaSizeName, msn, $cast($MediaSizeName, media));
												if ($nc(this->mediaSizeNames)->length == 0 && msn->equals($(getDefaultAttributeValue($Media::class$)))) {
													return $of(mpas);
												}
												for (int32_t i = 0; i < $nc(this->mediaSizeNames)->length; ++i) {
													if (msn->equals($nc(this->mediaSizeNames)->get(i))) {
														match = i;
													}
												}
											}
											if (match == -1) {
												return $of(nullptr);
											} else {
												$var($MediaPrintableAreaArray, arr, $new($MediaPrintableAreaArray, 1));
												arr->set(0, $nc(mpas)->get(match));
												return $of(arr);
											}
										} else {
											$load($NumberUp);
											if (category == $NumberUp::class$) {
												$var($AttributeClass, attribClass, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get("number-up-supported"_s)) : ($AttributeClass*)nullptr);
												if (attribClass != nullptr) {
													$var($ints, values, attribClass->getArrayOfIntValues());
													if (values != nullptr) {
														$var($NumberUpArray, nUp, $new($NumberUpArray, values->length));
														for (int32_t i = 0; i < values->length; ++i) {
															nUp->set(i, $$new($NumberUp, values->get(i)));
														}
														return $of(nUp);
													} else {
														return $of(nullptr);
													}
												}
											} else {
												$load($OrientationRequested);
												if (category == $OrientationRequested::class$) {
													bool var$6 = (flavor != nullptr);
													if (var$6) {
														$init($DocFlavor$INPUT_STREAM);
														bool var$8 = flavor->equals($DocFlavor$INPUT_STREAM::POSTSCRIPT);
														$init($DocFlavor$URL);
														bool var$7 = var$8 || $nc(flavor)->equals($DocFlavor$URL::POSTSCRIPT);
														$init($DocFlavor$BYTE_ARRAY);
														var$6 = (var$7 || flavor->equals($DocFlavor$BYTE_ARRAY::POSTSCRIPT));
													}
													if (var$6) {
														return $of(nullptr);
													}
													bool revPort = false;
													$var($OrientationRequestedArray, orientSup, nullptr);
													$var($AttributeClass, attribClass, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get("orientation-requested-supported"_s)) : ($AttributeClass*)nullptr);
													if (attribClass != nullptr) {
														$var($ints, orientArray, attribClass->getArrayOfIntValues());
														if ((orientArray != nullptr) && (orientArray->length > 0)) {
															$assign(orientSup, $new($OrientationRequestedArray, orientArray->length));
															for (int32_t i = 0; i < orientArray->length; ++i) {
																switch (orientArray->get(i)) {
																default:
																	{}
																case 3:
																	{
																		$init($OrientationRequested);
																		orientSup->set(i, $OrientationRequested::PORTRAIT);
																		break;
																	}
																case 4:
																	{
																		$init($OrientationRequested);
																		orientSup->set(i, $OrientationRequested::LANDSCAPE);
																		break;
																	}
																case 5:
																	{
																		$init($OrientationRequested);
																		orientSup->set(i, $OrientationRequested::REVERSE_LANDSCAPE);
																		break;
																	}
																case 6:
																	{
																		$init($OrientationRequested);
																		orientSup->set(i, $OrientationRequested::REVERSE_PORTRAIT);
																		revPort = true;
																		break;
																	}
																}
															}
														}
													}
													$init($DocFlavor$SERVICE_FORMATTED);
													bool var$9 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
													if (var$9 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
														if (revPort && flavor == nullptr) {
															$var($OrientationRequestedArray, orSup, $new($OrientationRequestedArray, 4));
															$init($OrientationRequested);
															orSup->set(0, $OrientationRequested::PORTRAIT);
															orSup->set(1, $OrientationRequested::LANDSCAPE);
															orSup->set(2, $OrientationRequested::REVERSE_LANDSCAPE);
															orSup->set(3, $OrientationRequested::REVERSE_PORTRAIT);
															return $of(orSup);
														} else {
															$var($OrientationRequestedArray, orSup, $new($OrientationRequestedArray, 3));
															$init($OrientationRequested);
															orSup->set(0, $OrientationRequested::PORTRAIT);
															orSup->set(1, $OrientationRequested::LANDSCAPE);
															orSup->set(2, $OrientationRequested::REVERSE_LANDSCAPE);
															return $of(orSup);
														}
													} else {
														return $of(orientSup);
													}
												} else {
													$load($PageRanges);
													if (category == $PageRanges::class$) {
														$init($DocFlavor$SERVICE_FORMATTED);
														bool var$10 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
														if (var$10 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
															$var($PageRangesArray, arr, $new($PageRangesArray, 1));
															arr->set(0, $$new($PageRanges, 1, $Integer::MAX_VALUE));
															return $of(arr);
														} else {
															return $of(nullptr);
														}
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
															$load($Sides);
															if (category == $Sides::class$) {
																$var($AttributeClass, attribClass, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get("sides-supported"_s)) : ($AttributeClass*)nullptr);
																if (attribClass != nullptr) {
																	$var($StringArray, sidesArray, attribClass->getArrayOfStringValues());
																	if ((sidesArray != nullptr) && (sidesArray->length > 0)) {
																		$var($SidesArray, sidesSup, $new($SidesArray, sidesArray->length));
																		for (int32_t i = 0; i < sidesArray->length; ++i) {
																			if ($nc(sidesArray->get(i))->endsWith("long-edge"_s)) {
																				$init($Sides);
																				sidesSup->set(i, $Sides::TWO_SIDED_LONG_EDGE);
																			} else if ($nc(sidesArray->get(i))->endsWith("short-edge"_s)) {
																				$init($Sides);
																				sidesSup->set(i, $Sides::TWO_SIDED_SHORT_EDGE);
																			} else {
																				$init($Sides);
																				sidesSup->set(i, $Sides::ONE_SIDED);
																			}
																		}
																		return $of(sidesSup);
																	}
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
}

$AttributeSet* IPPPrintService::getUnsupportedAttributes($DocFlavor* flavor, $AttributeSet* attributes) {
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

$DocFlavorArray* IPPPrintService::getSupportedDocFlavors() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->supportedDocFlavors != nullptr) {
			int32_t len = $nc(this->supportedDocFlavors)->length;
			$var($DocFlavorArray, copyflavors, $new($DocFlavorArray, len));
			$System::arraycopy(this->supportedDocFlavors, 0, copyflavors, 0, len);
			return copyflavors;
		}
		initAttributes();
		if ((this->getAttMap != nullptr) && $nc(this->getAttMap)->containsKey("document-format-supported"_s)) {
			$var($AttributeClass, attribClass, $cast($AttributeClass, $nc(this->getAttMap)->get("document-format-supported"_s)));
			if (attribClass != nullptr) {
				$var($String, mimeType, nullptr);
				bool psSupported = false;
				$var($StringArray, docFlavors, attribClass->getArrayOfStringValues());
				$var($DocFlavorArray, flavors, nullptr);
				$var($HashSet, docList, $new($HashSet));
				int32_t j = 0;
				$init($DocFlavor);
				$init($Locale);
				$var($String, hostEnc, $nc($DocFlavor::hostEncoding)->toLowerCase($Locale::ENGLISH));
				bool var$3 = !hostEnc->equals("utf-8"_s);
				bool var$2 = var$3 && !hostEnc->equals("utf-16"_s);
				bool var$1 = var$2 && !hostEnc->equals("utf-16be"_s);
				bool var$0 = var$1 && !hostEnc->equals("utf-16le"_s);
				bool addHostEncoding = var$0 && !hostEnc->equals("us-ascii"_s);
				for (int32_t i = 0; i < $nc(docFlavors)->length; ++i) {
					for (j = 0; j < $nc(IPPPrintService::allDocFlavors)->length; ++j) {
						$assign(flavors, $cast($DocFlavorArray, $nc(IPPPrintService::allDocFlavors)->get(j)));
						$assign(mimeType, $nc($nc(flavors)->get(0))->getMimeType());
						if ($nc(mimeType)->startsWith(docFlavors->get(i))) {
							docList->addAll($($Arrays::asList(flavors)));
							if (mimeType->equals("text/plain"_s) && addHostEncoding) {
								docList->add($($Arrays::asList(IPPPrintService::textPlainHost)));
							} else if (mimeType->equals("text/html"_s) && addHostEncoding) {
								docList->add($($Arrays::asList(IPPPrintService::textHtmlHost)));
							} else if (mimeType->equals("image/png"_s)) {
								this->pngImagesAdded = true;
							} else if (mimeType->equals("image/gif"_s)) {
								this->gifImagesAdded = true;
							} else if (mimeType->equals("image/jpeg"_s)) {
								this->jpgImagesAdded = true;
							} else if (mimeType->indexOf("postscript"_s) != -1) {
								psSupported = true;
							}
							break;
						}
					}
					if (j == $nc(IPPPrintService::allDocFlavors)->length) {
						docList->add($$new($DocFlavor$BYTE_ARRAY, docFlavors->get(i)));
						docList->add($$new($DocFlavor$INPUT_STREAM, docFlavors->get(i)));
						docList->add($$new($DocFlavor$URL, docFlavors->get(i)));
					}
				}
				if (psSupported || this->isCupsPrinter) {
					$init($DocFlavor$SERVICE_FORMATTED);
					docList->add($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
					docList->add($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
					docList->addAll($($Arrays::asList(IPPPrintService::imageJPG)));
					docList->addAll($($Arrays::asList(IPPPrintService::imagePNG)));
					docList->addAll($($Arrays::asList(IPPPrintService::imageGIF)));
				}
				$set(this, supportedDocFlavors, $new($DocFlavorArray, docList->size()));
				docList->toArray(this->supportedDocFlavors);
				int32_t len = $nc(this->supportedDocFlavors)->length;
				$var($DocFlavorArray, copyflavors, $new($DocFlavorArray, len));
				$System::arraycopy(this->supportedDocFlavors, 0, copyflavors, 0, len);
				return copyflavors;
			}
		}
		$var($DocFlavorArray, flavor, $new($DocFlavorArray, 2));
		$init($DocFlavor$SERVICE_FORMATTED);
		flavor->set(0, $DocFlavor$SERVICE_FORMATTED::PAGEABLE);
		flavor->set(1, $DocFlavor$SERVICE_FORMATTED::PRINTABLE);
		$set(this, supportedDocFlavors, flavor);
		return flavor;
	}
}

bool IPPPrintService::isDocFlavorSupported($DocFlavor* flavor) {
	if (this->supportedDocFlavors == nullptr) {
		getSupportedDocFlavors();
	}
	if (this->supportedDocFlavors != nullptr) {
		for (int32_t f = 0; f < $nc(this->supportedDocFlavors)->length; ++f) {
			if ($nc(flavor)->equals($nc(this->supportedDocFlavors)->get(f))) {
				return true;
			}
		}
	}
	return false;
}

$CustomMediaSizeName* IPPPrintService::findCustomMedia($MediaSizeName* media) {
	$useLocalCurrentObjectStackCache();
	if (this->customMediaSizeNames == nullptr) {
		return nullptr;
	}
	for (int32_t i = 0; i < $nc(this->customMediaSizeNames)->length; ++i) {
		$var($CustomMediaSizeName, custom, $nc(this->customMediaSizeNames)->get(i));
		$var($MediaSizeName, msn, $nc(custom)->getStandardMedia());
		if ($nc(media)->equals(msn)) {
			return $nc(this->customMediaSizeNames)->get(i);
		}
	}
	return nullptr;
}

$Media* IPPPrintService::getIPPMedia($String* mediaName) {
	$useLocalCurrentObjectStackCache();
	$var($CustomMediaSizeName, sampleSize, $new($CustomMediaSizeName, "sample"_s, ""_s, (float)0, (float)0));
	$var($MediaArray, sizes, sampleSize->getSuperEnumTable());
	for (int32_t i = 0; i < $nc(sizes)->length; ++i) {
		if ($nc(mediaName)->equals($$str({""_s, sizes->get(i)}))) {
			return sizes->get(i);
		}
	}
	$var($CustomMediaTray, sampleTray, $new($CustomMediaTray, "sample"_s, ""_s));
	$var($MediaArray, trays, sampleTray->getSuperEnumTable());
	for (int32_t i = 0; i < $nc(trays)->length; ++i) {
		if ($nc(mediaName)->equals($$str({""_s, trays->get(i)}))) {
			return trays->get(i);
		}
	}
	return nullptr;
}

$MediaArray* IPPPrintService::getSupportedMedia() {
	$useLocalCurrentObjectStackCache();
	if ((this->getAttMap != nullptr) && $nc(this->getAttMap)->containsKey("media-supported"_s)) {
		$var($AttributeClass, attribClass, $cast($AttributeClass, $nc(this->getAttMap)->get("media-supported"_s)));
		if (attribClass != nullptr) {
			$var($StringArray, mediaVals, attribClass->getArrayOfStringValues());
			$var($Media, msn, nullptr);
			$var($MediaArray, mediaNames, $new($MediaArray, $nc(mediaVals)->length));
			for (int32_t i = 0; i < mediaVals->length; ++i) {
				$assign(msn, getIPPMedia(mediaVals->get(i)));
				mediaNames->set(i, msn);
			}
			return mediaNames;
		}
	}
	return $new($MediaArray, 0);
}

$ClassArray* IPPPrintService::getSupportedAttributeCategories() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->supportedCats != nullptr) {
			$var($ClassArray, copyCats, $new($ClassArray, $nc(this->supportedCats)->length));
			$System::arraycopy(this->supportedCats, 0, copyCats, 0, copyCats->length);
			return copyCats;
		}
		initAttributes();
		$var($ArrayList, catList, $new($ArrayList));
		for (int32_t i = 0; i < $nc(IPPPrintService::printReqAttribDefault)->length; ++i) {
			$var($PrintRequestAttribute, pra, $cast($PrintRequestAttribute, $nc(IPPPrintService::printReqAttribDefault)->get(i)));
			if (this->getAttMap != nullptr && $nc(this->getAttMap)->containsKey($$str({$($nc(pra)->getName()), "-supported"_s}))) {
				catList->add($nc(pra)->getCategory());
			}
		}
		if (this->isCupsPrinter) {
			$load($Media);
			if (!catList->contains($Media::class$)) {
				catList->add($Media::class$);
			}
			$load($MediaPrintableArea);
			catList->add($MediaPrintableArea::class$);
			$load($Destination);
			catList->add($Destination::class$);
			$load($SheetCollate);
			catList->add($SheetCollate::class$);
		}
		if (this->getAttMap != nullptr && $nc(this->getAttMap)->containsKey("color-supported"_s)) {
			$load($Chromaticity);
			catList->add($Chromaticity::class$);
		}
		$var($PrinterResolutionArray, supportedRes, getPrintResolutions());
		if (supportedRes != nullptr && (supportedRes->length > 0)) {
			$load($PrinterResolution);
			catList->add($PrinterResolution::class$);
		}
		if ($GraphicsEnvironment::isHeadless() == false) {
			$load($DialogOwner);
			catList->add($DialogOwner::class$);
			$load($DialogTypeSelection);
			catList->add($DialogTypeSelection::class$);
		}
		$set(this, supportedCats, $new($ClassArray, catList->size()));
		catList->toArray(this->supportedCats);
		$var($ClassArray, copyCats, $new($ClassArray, $nc(this->supportedCats)->length));
		$System::arraycopy(this->supportedCats, 0, copyCats, 0, copyCats->length);
		return copyCats;
	}
}

bool IPPPrintService::isAttributeCategorySupported($Class* category) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!($Attribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, $$str({category, " is not an Attribute"_s}));
	}
	if (this->supportedCats == nullptr) {
		getSupportedAttributeCategories();
	}
	$load($OrientationRequested);
	if (category == $OrientationRequested::class$) {
		return true;
	}
	for (int32_t i = 0; i < $nc(this->supportedCats)->length; ++i) {
		if (category == $nc(this->supportedCats)->get(i)) {
			return true;
		}
	}
	return false;
}

$PrintServiceAttribute* IPPPrintService::getAttribute($Class* category) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (category == nullptr) {
			$throwNew($NullPointerException, "category"_s);
		}
		$load($PrintServiceAttribute);
		if (!($PrintServiceAttribute::class$->isAssignableFrom(category))) {
			$throwNew($IllegalArgumentException, "Not a PrintServiceAttribute"_s);
		}
		initAttributes();
		$load($PrinterName);
		if (category == $PrinterName::class$) {
			return static_cast<$PrintServiceAttribute*>(($new($PrinterName, this->printer, nullptr)));
		} else {
			$load($PrinterInfo);
			if (category == $PrinterInfo::class$) {
				$var($PrinterInfo, pInfo, $new($PrinterInfo, this->printer, nullptr));
				$var($AttributeClass, ac, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get($(pInfo->getName()))) : ($AttributeClass*)nullptr);
				if (ac != nullptr) {
					return static_cast<$PrintServiceAttribute*>(($new($PrinterInfo, $(ac->getStringValue()), nullptr)));
				}
				return static_cast<$PrintServiceAttribute*>(pInfo);
			} else {
				$load($QueuedJobCount);
				if (category == $QueuedJobCount::class$) {
					$var($QueuedJobCount, qjc, $new($QueuedJobCount, 0));
					$var($AttributeClass, ac, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get($(qjc->getName()))) : ($AttributeClass*)nullptr);
					if (ac != nullptr) {
						$assign(qjc, $new($QueuedJobCount, ac->getIntValue()));
					}
					return static_cast<$PrintServiceAttribute*>(qjc);
				} else {
					$load($PrinterIsAcceptingJobs);
					if (category == $PrinterIsAcceptingJobs::class$) {
						$init($PrinterIsAcceptingJobs);
						$var($PrinterIsAcceptingJobs, accJob, $PrinterIsAcceptingJobs::ACCEPTING_JOBS);
						$var($AttributeClass, ac, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get($($nc(accJob)->getName()))) : ($AttributeClass*)nullptr);
						if ((ac != nullptr) && (ac->getByteValue() == 0)) {
							$assign(accJob, $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS);
						}
						return static_cast<$PrintServiceAttribute*>(accJob);
					} else {
						$load($ColorSupported);
						if (category == $ColorSupported::class$) {
							$init($ColorSupported);
							$var($ColorSupported, cs, $ColorSupported::SUPPORTED);
							$var($AttributeClass, ac, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get($($nc(cs)->getName()))) : ($AttributeClass*)nullptr);
							if ((ac != nullptr) && (ac->getByteValue() == 0)) {
								$assign(cs, $ColorSupported::NOT_SUPPORTED);
							}
							return static_cast<$PrintServiceAttribute*>(cs);
						} else {
							$load($PDLOverrideSupported);
							if (category == $PDLOverrideSupported::class$) {
								if (this->isCupsPrinter) {
									$init($PDLOverrideSupported);
									return static_cast<$PrintServiceAttribute*>($PDLOverrideSupported::NOT_ATTEMPTED);
								} else {
									$init($PDLOverrideSupported);
									return static_cast<$PrintServiceAttribute*>($PDLOverrideSupported::NOT_ATTEMPTED);
								}
							} else {
								$load($PrinterURI);
								if (category == $PrinterURI::class$) {
									return static_cast<$PrintServiceAttribute*>(($new($PrinterURI, this->myURI)));
								} else {
									return nullptr;
								}
							}
						}
					}
				}
			}
		}
	}
}

$PrintServiceAttributeSet* IPPPrintService::getAttributes() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->init = false;
		initAttributes();
		$var($HashPrintServiceAttributeSet, attrs, $new($HashPrintServiceAttributeSet));
		for (int32_t i = 0; i < $nc(IPPPrintService::serviceAttributes)->length; ++i) {
			$var($String, name, $cast($String, $nc($nc(IPPPrintService::serviceAttributes)->get(i))->get(1)));
			if (this->getAttMap != nullptr && $nc(this->getAttMap)->containsKey(name)) {
				$Class* c = $cast($Class, $nc($nc(IPPPrintService::serviceAttributes)->get(i))->get(0));
				$var($PrintServiceAttribute, psa, getAttribute(c));
				if (psa != nullptr) {
					attrs->add(psa);
				}
			}
		}
		return $AttributeSetUtilities::unmodifiableView(static_cast<$PrintServiceAttributeSet*>(attrs));
	}
}

bool IPPPrintService::isIPPSupportedImages($String* mimeType) {
	if (this->supportedDocFlavors == nullptr) {
		getSupportedDocFlavors();
	}
	if ($nc(mimeType)->equals("image/png"_s) && this->pngImagesAdded) {
		return true;
	} else if (mimeType->equals("image/gif"_s) && this->gifImagesAdded) {
		return true;
	} else if (mimeType->equals("image/jpeg"_s) && this->jpgImagesAdded) {
		return true;
	}
	return false;
}

bool IPPPrintService::isSupportedCopies($Copies* copies) {
	$useLocalCurrentObjectStackCache();
	$load($Copies);
	$var($CopiesSupported, cs, $cast($CopiesSupported, getSupportedAttributeValues($Copies::class$, nullptr, nullptr)));
	$var($intArray2, members, $nc(cs)->getMembers());
	int32_t min = 0;
	int32_t max = 0;
	if (($nc(members)->length > 0) && ($nc(members->get(0))->length > 0)) {
		min = $nc(members->get(0))->get(0);
		max = $nc(members->get(0))->get(1);
	} else {
		min = 1;
		max = IPPPrintService::MAXCOPIES;
	}
	int32_t value = $nc(copies)->getValue();
	return (value >= min && value <= max);
}

bool IPPPrintService::isAutoSense($DocFlavor* flavor) {
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

bool IPPPrintService::isSupportedMediaTray($MediaTray* msn) {
	$synchronized(this) {
		initAttributes();
		if (this->mediaTrays != nullptr) {
			for (int32_t i = 0; i < $nc(this->mediaTrays)->length; ++i) {
				if ($nc(msn)->equals($nc(this->mediaTrays)->get(i))) {
					return true;
				}
			}
		}
		return false;
	}
}

bool IPPPrintService::isSupportedMedia($MediaSizeName* msn) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		initAttributes();
		$load($Media);
		if ($nc(msn)->equals($cast($Media, $(getDefaultAttributeValue($Media::class$))))) {
			return true;
		}
		for (int32_t i = 0; i < $nc(this->mediaSizeNames)->length; ++i) {
			debug_println($$str({IPPPrintService::debugPrefix, "isSupportedMedia, mediaSizeNames[i] "_s, $nc(this->mediaSizeNames)->get(i)}));
			if ($nc(msn)->equals($nc(this->mediaSizeNames)->get(i))) {
				return true;
			}
		}
		return false;
	}
}

bool IPPPrintService::isDestinationSupported($DocFlavor* flavor, $AttributeSet* attributes) {
	$load($Destination);
	bool var$0 = (attributes != nullptr) && (attributes->get($Destination::class$) != nullptr);
	if (var$0) {
		$init($DocFlavor$SERVICE_FORMATTED);
		bool var$1 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
		var$0 = !(var$1 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
	}
	if (var$0) {
		return false;
	}
	return true;
}

bool IPPPrintService::isAttributeValueSupported($Attribute* attr, $DocFlavor* flavor, $AttributeSet* attributes) {
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
	}
	if (!isDestinationSupported(flavor, attributes)) {
		return false;
	}
	$load($Chromaticity);
	if (attr->getCategory() == $Chromaticity::class$) {
		$init($DocFlavor$SERVICE_FORMATTED);
		bool var$1 = (flavor == nullptr) || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
		bool var$0 = var$1 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
		if (var$0 || !isIPPSupportedImages($($nc(flavor)->getMimeType()))) {
			$init($Chromaticity);
			return $equals(attr, $Chromaticity::COLOR);
		} else {
			return false;
		}
	} else {
		$load($Copies);
		if (attr->getCategory() == $Copies::class$) {
			bool var$3 = flavor == nullptr;
			if (!var$3) {
				$init($DocFlavor$INPUT_STREAM);
				bool var$5 = $nc(flavor)->equals($DocFlavor$INPUT_STREAM::POSTSCRIPT);
				$init($DocFlavor$URL);
				bool var$4 = var$5 || $nc(flavor)->equals($DocFlavor$URL::POSTSCRIPT);
				$init($DocFlavor$BYTE_ARRAY);
				var$3 = !(var$4 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::POSTSCRIPT));
			}
			bool var$2 = (var$3);
			return var$2 && isSupportedCopies($cast($Copies, attr));
		} else {
			$load($Destination);
			if (attr->getCategory() == $Destination::class$) {
				$init($DocFlavor$SERVICE_FORMATTED);
				bool var$6 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
				if (var$6 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
					$var($URI, uri, $nc(($cast($Destination, attr)))->getURI());
					bool var$7 = "file"_s->equals($($nc(uri)->getScheme()));
					if (var$7 && !$nc($($nc(uri)->getSchemeSpecificPart()))->isEmpty()) {
						return true;
					}
				}
				return false;
			} else {
				$load($Media);
				if (attr->getCategory() == $Media::class$) {
					if ($instanceOf($MediaSizeName, attr)) {
						return isSupportedMedia($cast($MediaSizeName, attr));
					}
					if ($instanceOf($MediaTray, attr)) {
						return isSupportedMediaTray($cast($MediaTray, attr));
					}
				} else {
					$load($PageRanges);
					if (attr->getCategory() == $PageRanges::class$) {
						bool var$8 = flavor != nullptr;
						if (var$8) {
							$init($DocFlavor$SERVICE_FORMATTED);
							bool var$9 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
							var$8 = !(var$9 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
						}
						if (var$8) {
							return false;
						}
					} else {
						$load($SheetCollate);
						if (attr->getCategory() == $SheetCollate::class$) {
							bool var$10 = flavor != nullptr;
							if (var$10) {
								$init($DocFlavor$SERVICE_FORMATTED);
								bool var$11 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
								var$10 = !(var$11 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
							}
							if (var$10) {
								return false;
							}
						} else {
							$load($Sides);
							if (attr->getCategory() == $Sides::class$) {
								$var($SidesArray, sidesArray, $cast($SidesArray, getSupportedAttributeValues($Sides::class$, flavor, attributes)));
								if (sidesArray != nullptr) {
									for (int32_t i = 0; i < sidesArray->length; ++i) {
										if (sidesArray->get(i) == $cast($Sides, attr)) {
											return true;
										}
									}
								}
								return false;
							} else {
								$load($OrientationRequested);
								if (attr->getCategory() == $OrientationRequested::class$) {
									$var($OrientationRequestedArray, orientArray, $cast($OrientationRequestedArray, getSupportedAttributeValues($OrientationRequested::class$, flavor, attributes)));
									if (orientArray != nullptr) {
										for (int32_t i = 0; i < orientArray->length; ++i) {
											if (orientArray->get(i) == $cast($OrientationRequested, attr)) {
												return true;
											}
										}
									}
									return false;
								} else {
									$load($PrinterResolution);
									if (attr->getCategory() == $PrinterResolution::class$) {
										if ($instanceOf($PrinterResolution, attr)) {
											return isSupportedResolution($cast($PrinterResolution, attr));
										}
									} else {
										$load($DialogOwner);
										if (attr->getCategory() == $DialogOwner::class$) {
											$var($DialogOwner, owner, $cast($DialogOwner, attr));
											if ($DialogOwnerAccessor::getID(owner) != 0) {
												return false;
											}
											$load($DialogTypeSelection);
											$var($DialogTypeSelection, dst, (attributes == nullptr) ? ($DialogTypeSelection*)nullptr : $cast($DialogTypeSelection, $nc(attributes)->get($DialogTypeSelection::class$)));
											$init($DialogTypeSelection);
											if ($PrintServiceLookupProvider::isMac() && dst == $DialogTypeSelection::NATIVE) {
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
												if ($PrintServiceLookupProvider::isMac()) {
													return true;
												} else {
													$var($DialogTypeSelection, dst, $cast($DialogTypeSelection, attr));
													$init($DialogTypeSelection);
													return $equals(attr, $DialogTypeSelection::COMMON);
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

$Object* IPPPrintService::getDefaultAttributeValue($Class* category) {
	$synchronized(this) {
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
		initAttributes();
		$var($String, catName, nullptr);
		for (int32_t i = 0; i < $nc(IPPPrintService::printReqAttribDefault)->length; ++i) {
			$var($PrintRequestAttribute, pra, $cast($PrintRequestAttribute, $nc(IPPPrintService::printReqAttribDefault)->get(i)));
			if ($nc(pra)->getCategory() == category) {
				$assign(catName, pra->getName());
				break;
			}
		}
		$var($String, attribName, $str({catName, "-default"_s}));
		$var($AttributeClass, attribClass, (this->getAttMap != nullptr) ? $cast($AttributeClass, $nc(this->getAttMap)->get(attribName)) : ($AttributeClass*)nullptr);
		$load($Copies);
		if (category == $Copies::class$) {
			if (attribClass != nullptr) {
				return $of($new($Copies, attribClass->getIntValue()));
			} else {
				return $of($new($Copies, 1));
			}
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
						$load($Finishings);
						if (category == $Finishings::class$) {
							$init($Finishings);
							return $of($Finishings::NONE);
						} else {
							$load($JobName);
							if (category == $JobName::class$) {
								return $of($new($JobName, "Java Printing"_s, nullptr));
							} else {
								$load($JobSheets);
								if (category == $JobSheets::class$) {
									if (attribClass != nullptr && $nc($(attribClass->getStringValue()))->equals("none"_s)) {
										$init($JobSheets);
										return $of($JobSheets::NONE);
									} else {
										$init($JobSheets);
										return $of($JobSheets::STANDARD);
									}
								} else {
									$load($Media);
									if (category == $Media::class$) {
										if (this->defaultMediaIndex == -1) {
											this->defaultMediaIndex = 0;
										}
										if ($nc(this->mediaSizeNames)->length == 0) {
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
										}
										if (attribClass != nullptr) {
											$var($String, name, attribClass->getStringValue());
											if (this->isCupsPrinter) {
												return $of($nc(this->mediaSizeNames)->get(this->defaultMediaIndex));
											} else {
												for (int32_t i = 0; i < $nc(this->mediaSizeNames)->length; ++i) {
													if ($nc($($nc($nc(this->mediaSizeNames)->get(i))->toString()))->indexOf(name) != -1) {
														this->defaultMediaIndex = i;
														return $of($nc(this->mediaSizeNames)->get(this->defaultMediaIndex));
													}
												}
											}
										}
										return $of($nc(this->mediaSizeNames)->get(this->defaultMediaIndex));
									} else {
										$load($MediaPrintableArea);
										if (category == $MediaPrintableArea::class$) {
											$var($MediaPrintableAreaArray, mpas, nullptr);
											if ((this->cps != nullptr) && (($assign(mpas, $nc(this->cps)->getMediaPrintableArea())) != nullptr)) {
												if (this->defaultMediaIndex == -1) {
													getDefaultAttributeValue($Media::class$);
												}
												return $of($nc(mpas)->get(this->defaultMediaIndex));
											} else {
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
											}
										} else {
											$load($NumberUp);
											if (category == $NumberUp::class$) {
												return $of($new($NumberUp, 1));
											} else {
												$load($OrientationRequested);
												if (category == $OrientationRequested::class$) {
													if (attribClass != nullptr) {
														switch (attribClass->getIntValue()) {
														default:
															{}
														case 3:
															{
																$init($OrientationRequested);
																return $of($OrientationRequested::PORTRAIT);
															}
														case 4:
															{
																$init($OrientationRequested);
																return $of($OrientationRequested::LANDSCAPE);
															}
														case 5:
															{
																$init($OrientationRequested);
																return $of($OrientationRequested::REVERSE_LANDSCAPE);
															}
														case 6:
															{
																$init($OrientationRequested);
																return $of($OrientationRequested::REVERSE_PORTRAIT);
															}
														}
													} else {
														$init($OrientationRequested);
														return $of($OrientationRequested::PORTRAIT);
													}
												} else {
													$load($PageRanges);
													if (category == $PageRanges::class$) {
														if (attribClass != nullptr) {
															$var($ints, range, attribClass->getIntRangeValue());
															return $of($new($PageRanges, $nc(range)->get(0), range->get(1)));
														} else {
															return $of($new($PageRanges, 1, $Integer::MAX_VALUE));
														}
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
																	if (attribClass != nullptr) {
																		if ($nc($(attribClass->getStringValue()))->endsWith("long-edge"_s)) {
																			$init($Sides);
																			return $of($Sides::TWO_SIDED_LONG_EDGE);
																		} else if ($nc($(attribClass->getStringValue()))->endsWith("short-edge"_s)) {
																			$init($Sides);
																			return $of($Sides::TWO_SIDED_SHORT_EDGE);
																		}
																	}
																	$init($Sides);
																	return $of($Sides::ONE_SIDED);
																} else {
																	$load($PrinterResolution);
																	if (category == $PrinterResolution::class$) {
																		$var($PrinterResolutionArray, supportedRes, getPrintResolutions());
																		if ((supportedRes != nullptr) && (supportedRes->length > 0)) {
																			return $of(supportedRes->get(0));
																		} else {
																			return $of($new($PrinterResolution, 300, 300, $PrinterResolution::DPI));
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
		return $of(nullptr);
	}
}

$PrinterResolutionArray* IPPPrintService::getPrintResolutions() {
	$useLocalCurrentObjectStackCache();
	if (this->printerResolutions == nullptr) {
		if (this->rawResolutions == nullptr) {
			$set(this, printerResolutions, $new($PrinterResolutionArray, 0));
		} else {
			int32_t numRes = $nc(this->rawResolutions)->length / 2;
			$var($PrinterResolutionArray, pres, $new($PrinterResolutionArray, numRes));
			for (int32_t i = 0; i < numRes; ++i) {
				pres->set(i, $$new($PrinterResolution, $nc(this->rawResolutions)->get(i * 2), $nc(this->rawResolutions)->get(i * 2 + 1), $PrinterResolution::DPI));
			}
			$set(this, printerResolutions, pres);
		}
	}
	return this->printerResolutions;
}

bool IPPPrintService::isSupportedResolution($PrinterResolution* res) {
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

$ServiceUIFactory* IPPPrintService::getServiceUIFactory() {
	return nullptr;
}

void IPPPrintService::wakeNotifier() {
	$synchronized(this) {
		if (this->notifier != nullptr) {
			$nc(this->notifier)->wake();
		}
	}
}

void IPPPrintService::addPrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
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

void IPPPrintService::removePrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
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

$String* IPPPrintService::getDest() {
	return this->printer;
}

$String* IPPPrintService::getName() {
	$useLocalCurrentObjectStackCache();
	if ($PrintServiceLookupProvider::isMac()) {
		$var($PrintServiceAttributeSet, psaSet, this->getAttributes());
		if (psaSet != nullptr) {
			$load($PrinterInfo);
			$var($PrinterInfo, pName, $cast($PrinterInfo, psaSet->get($PrinterInfo::class$)));
			if (pName != nullptr) {
				return pName->toString();
			}
		}
	}
	return this->printer;
}

bool IPPPrintService::usesClass($Class* c) {
	$load($PSPrinterJob);
	return (c == $PSPrinterJob::class$);
}

$HttpURLConnection* IPPPrintService::getIPPConnection($URL* url) {
	$init(IPPPrintService);
	$useLocalCurrentObjectStackCache();
	$var($HttpURLConnection, connection, nullptr);
	$var($URLConnection, urlc, nullptr);
	try {
		$assign(urlc, $nc(url)->openConnection());
	} catch ($IOException& ioe) {
		return nullptr;
	}
	if (!($instanceOf($HttpURLConnection, urlc))) {
		return nullptr;
	}
	$assign(connection, $cast($HttpURLConnection, urlc));
	$nc(connection)->setUseCaches(false);
	connection->setDoInput(true);
	connection->setDoOutput(true);
	connection->setRequestProperty("Content-type"_s, "application/ipp"_s);
	return connection;
}

bool IPPPrintService::isPostscript() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->isPS == nullptr) {
			$init($Boolean);
			$set(this, isPS, $Boolean::TRUE);
			if (this->isCupsPrinter) {
				try {
					$set(this, urlConnection, getIPPConnection($$new($URL, $$str({this->myURL, ".ppd"_s}))));
					$var($InputStream, is, $nc(this->urlConnection)->getInputStream());
					if (is != nullptr) {
						$var($BufferedReader, d, $new($BufferedReader, $$new($InputStreamReader, is, $($Charset::forName("ISO-8859-1"_s)))));
						$var($String, lineStr, nullptr);
						while (($assign(lineStr, d->readLine())) != nullptr) {
							if ($nc(lineStr)->startsWith("*cupsFilter:"_s)) {
								$set(this, isPS, $Boolean::FALSE);
								break;
							}
						}
					}
				} catch ($IOException& e) {
					debug_println($$str({" isPostscript, e= "_s, e}));
				}
			}
		}
		return $nc(this->isPS)->booleanValue();
	}
}

void IPPPrintService::opGetAttributes() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		debug_println($$str({IPPPrintService::debugPrefix, "opGetAttributes myURI "_s, this->myURI, " myURL "_s, this->myURL}));
		$init($AttributeClass);
		$var($AttributeClassArray, attClNoUri, $new($AttributeClassArray, {
			$AttributeClass::ATTRIBUTES_CHARSET,
			$AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE
		}));
		$var($AttributeClassArray, attCl, $new($AttributeClassArray, {
			$AttributeClass::ATTRIBUTES_CHARSET,
			$AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE,
			$$new($AttributeClass, "printer-uri"_s, $AttributeClass::TAG_URI, $$str({""_s, this->myURI}))
		}));
		$var($OutputStream, os, $cast($OutputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($IPPPrintService$1, this)))));
		if (os == nullptr) {
			return;
		}
		bool success = (this->myURI == nullptr) ? writeIPPRequest(os, IPPPrintService::OP_GET_ATTRIBUTES, attClNoUri) : writeIPPRequest(os, IPPPrintService::OP_GET_ATTRIBUTES, attCl);
		if (success) {
			$var($InputStream, is, nullptr);
			if (($assign(is, $nc(this->urlConnection)->getInputStream())) != nullptr) {
				$var($HashMapArray, responseMap, readIPPResponse(is));
				if (responseMap != nullptr && responseMap->length > 0) {
					$set(this, getAttMap, responseMap->get(0));
					if (responseMap->length > 1) {
						for (int32_t i = 1; i < responseMap->length; ++i) {
							{
								$var($Iterator, i$, $nc($($nc(responseMap->get(i))->entrySet()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
									{
										if (!$nc(this->getAttMap)->containsKey($($nc(entry)->getValue()))) {
											$var($Object, var$0, $cast($String, $nc(entry)->getKey()));
											$nc(this->getAttMap)->put(var$0, $cast($AttributeClass, $(entry->getValue())));
										}
									}
								}
							}
						}
					}
				}
			} else {
				debug_println($$str({IPPPrintService::debugPrefix, "opGetAttributes - null input stream"_s}));
			}
			$nc(is)->close();
		}
		$nc(os)->close();
	} catch ($IOException& e) {
		debug_println($$str({IPPPrintService::debugPrefix, "opGetAttributes - input/output stream: "_s, e}));
	}
}

bool IPPPrintService::writeIPPRequest($OutputStream* os, $String* operCode, $AttributeClassArray* attCl) {
	$init(IPPPrintService);
	$useLocalCurrentObjectStackCache();
	$var($OutputStreamWriter, osw, nullptr);
	try {
		$assign(osw, $new($OutputStreamWriter, os, "UTF-8"_s));
	} catch ($UnsupportedEncodingException& exc) {
		debug_println($$str({IPPPrintService::debugPrefix, "writeIPPRequest, UTF-8 not supported? Exception: "_s, exc}));
		return false;
	}
	debug_println($$str({IPPPrintService::debugPrefix, "writeIPPRequest, op code= "_s, operCode}));
	$var($chars, opCode, $new($chars, 2));
	opCode->set(0, (char16_t)$Byte::parseByte($($nc(operCode)->substring(0, 2)), 16));
	opCode->set(1, (char16_t)$Byte::parseByte($($nc(operCode)->substring(2, 4)), 16));
	$var($chars, bytes, $new($chars, {
		(char16_t)1,
		(char16_t)1,
		(char16_t)0,
		(char16_t)1
	}));
	try {
		$nc(osw)->write(bytes, 0, 2);
		osw->write(opCode, 0, 2);
		bytes->set(0, (char16_t)0);
		bytes->set(1, (char16_t)0);
		osw->write(bytes, 0, 4);
		bytes->set(0, (char16_t)1);
		osw->write((int32_t)bytes->get(0));
		$var($String, valStr, nullptr);
		$var($chars, lenStr, nullptr);
		$var($AttributeClass, ac, nullptr);
		for (int32_t i = 0; i < $nc(attCl)->length; ++i) {
			$assign(ac, attCl->get(i));
			osw->write((int32_t)$nc(ac)->getType());
			$assign(lenStr, $nc(ac)->getLenChars());
			osw->write(lenStr, 0, 2);
			$var($String, var$0, $str({""_s, ac}));
			osw->write(var$0, 0, $nc($(ac->getName()))->length());
			bool var$1 = ac->getType() >= $AttributeClass::TAG_TEXT_LANGUAGE;
			if (var$1 && ac->getType() <= $AttributeClass::TAG_MIME_MEDIATYPE) {
				$assign(valStr, $cast($String, ac->getObjectValue()));
				bytes->set(0, (char16_t)0);
				bytes->set(1, (char16_t)$nc(valStr)->length());
				osw->write(bytes, 0, 2);
				osw->write(valStr, 0, valStr->length());
			}
		}
		osw->write((int32_t)IPPPrintService::GRPTAG_END_ATTRIBUTES);
		osw->flush();
		osw->close();
	} catch ($IOException& ioe) {
		debug_println($$str({IPPPrintService::debugPrefix, "writeIPPRequest, IPPPrintService Exception in writeIPPRequest: "_s, ioe}));
		return false;
	}
	return true;
}

$HashMapArray* IPPPrintService::readIPPResponse($InputStream* inputStream) {
	$init(IPPPrintService);
	$useLocalCurrentObjectStackCache();
	if (inputStream == nullptr) {
		return nullptr;
	}
	$var($bytes, response, $new($bytes, IPPPrintService::MAX_ATTRIBUTE_LENGTH));
	try {
		$var($DataInputStream, ois, $new($DataInputStream, inputStream));
		if ((ois->read(response, 0, 8) > -1) && (response->get(2) == IPPPrintService::STATUSCODE_SUCCESS)) {
			$var($ByteArrayOutputStream, outObj, nullptr);
			int32_t counter = 0;
			int16_t len = (int16_t)0;
			$var($String, attribStr, nullptr);
			int8_t valTagByte = (int8_t)$AttributeClass::TAG_KEYWORD;
			$var($ArrayList, respList, $new($ArrayList));
			$var($HashMap, responseMap, $new($HashMap));
			response->set(0, ois->readByte());
			while ((response->get(0) >= IPPPrintService::GRPTAG_OP_ATTRIBUTES) && (response->get(0) <= IPPPrintService::GRPTAG_PRINTER_ATTRIBUTES) && (response->get(0) != IPPPrintService::GRPTAG_END_ATTRIBUTES)) {
				debug_println($$str({IPPPrintService::debugPrefix, "readIPPResponse, checking group tag,  response[0]= "_s, $$str(response->get(0))}));
				$assign(outObj, $new($ByteArrayOutputStream));
				counter = 0;
				$assign(attribStr, nullptr);
				response->set(0, ois->readByte());
				while (response->get(0) >= $AttributeClass::TAG_UNSUPPORTED_VALUE && response->get(0) <= $AttributeClass::TAG_MEMBER_ATTRNAME) {
					len = ois->readShort();
					if ((len != 0) && (attribStr != nullptr)) {
						outObj->write(counter);
						outObj->flush();
						outObj->close();
						$var($bytes, outArray, outObj->toByteArray());
						if (responseMap->containsKey(attribStr)) {
							respList->add(responseMap);
							$assign(responseMap, $new($HashMap));
						}
						if (valTagByte >= $AttributeClass::TAG_INT) {
							$var($AttributeClass, ac, $new($AttributeClass, attribStr, valTagByte, outArray));
							responseMap->put($(ac->getName()), ac);
							debug_println($$str({IPPPrintService::debugPrefix, "readIPPResponse "_s, ac}));
						}
						$assign(outObj, $new($ByteArrayOutputStream));
						counter = 0;
					}
					if (counter == 0) {
						valTagByte = response->get(0);
					}
					if (len != 0) {
						if (len > IPPPrintService::MAX_ATTRIBUTE_LENGTH) {
							$assign(response, $new($bytes, len));
						}
						ois->read(response, 0, len);
						$assign(attribStr, $new($String, response, 0, (int32_t)len));
					}
					len = ois->readShort();
					outObj->write((int32_t)len);
					if (len > IPPPrintService::MAX_ATTRIBUTE_LENGTH) {
						$assign(response, $new($bytes, len));
					}
					ois->read(response, 0, len);
					outObj->write(response, 0, len);
					++counter;
					response->set(0, ois->readByte());
				}
				if (attribStr != nullptr) {
					outObj->write(counter);
					outObj->flush();
					outObj->close();
					if ((counter != 0) && responseMap->containsKey(attribStr)) {
						respList->add(responseMap);
						$assign(responseMap, $new($HashMap));
					}
					$var($bytes, outArray, outObj->toByteArray());
					$var($AttributeClass, ac, $new($AttributeClass, attribStr, valTagByte, outArray));
					responseMap->put($(ac->getName()), ac);
				}
			}
			ois->close();
			if ((responseMap != nullptr) && (responseMap->size() > 0)) {
				respList->add(responseMap);
			}
			$var($HashMapArray, tmp, $fcast($HashMapArray, respList->toArray($$new($HashMapArray, respList->size()))));
			return tmp;
		} else {
			$var($String, var$0, $$str({IPPPrintService::debugPrefix, "readIPPResponse client error, IPP status code: 0x"_s, $(toHex(response->get(2)))}));
			debug_println($$concat(var$0, $(toHex(response->get(3)))));
			return nullptr;
		}
	} catch ($IOException& e) {
		debug_println($$str({IPPPrintService::debugPrefix, "readIPPResponse: "_s, e}));
		if (IPPPrintService::debugPrint) {
			e->printStackTrace();
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* IPPPrintService::toHex(int8_t v) {
	$init(IPPPrintService);
	$var($String, s, $Integer::toHexString((int32_t)(v & (uint32_t)255)));
	return ($nc(s)->length() == 2) ? s : $str({"0"_s, s});
}

$String* IPPPrintService::toString() {
	return $str({"IPP Printer : "_s, $(getName())});
}

bool IPPPrintService::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	return ($equals(obj, this) || ($instanceOf(IPPPrintService, obj) && $nc($($nc(($cast(IPPPrintService, obj)))->getName()))->equals($(getName()))));
}

int32_t IPPPrintService::hashCode() {
	int32_t var$0 = $of($of(this)->getClass())->hashCode();
	return var$0 + $nc($(getName()))->hashCode();
}

void clinit$IPPPrintService($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IPPPrintService::debugPrefix, "IPPPrintService>> "_s);
	$assignStatic(IPPPrintService::FORCE_PIPE_PROP, "sun.print.ippdebug"_s);
	$assignStatic(IPPPrintService::OP_GET_ATTRIBUTES, "000B"_s);
	$assignStatic(IPPPrintService::OP_CUPS_GET_DEFAULT, "4001"_s);
	$assignStatic(IPPPrintService::OP_CUPS_GET_PRINTERS, "4002"_s);
	$beforeCallerSensitive();
	{
		$var($String, debugStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, IPPPrintService::FORCE_PIPE_PROP)))));
		IPPPrintService::debugPrint = "true"_s->equalsIgnoreCase(debugStr);
	}
	IPPPrintService::MAXCOPIES = 1000;
	IPPPrintService::MAX_ATTRIBUTE_LENGTH = (int16_t)255;
	$init($Chromaticity);
	$init($Fidelity);
	$init($Finishings);
	$init($JobSheets);
	$init($MediaSizeName);
	$init($OrientationRequested);
	$init($Sides);
	$assignStatic(IPPPrintService::printReqAttribDefault, $new($ObjectArray, {
		$of($Chromaticity::COLOR),
		$of($$new($Copies, 1)),
		$of($Fidelity::FIDELITY_FALSE),
		$of($Finishings::NONE),
		$of($$new($JobName, ""_s, $($Locale::getDefault()))),
		$of($JobSheets::NONE),
		static_cast<$Media*>($MediaSizeName::NA_LETTER),
		$of($$new($NumberUp, 1)),
		$of($OrientationRequested::PORTRAIT),
		$of($$new($PageRanges, 1)),
		$of($$new($RequestingUserName, ""_s, $($Locale::getDefault()))),
		$of($Sides::ONE_SIDED)
	}));
	$load($ColorSupported);
	$load($PagesPerMinute);
	$load($PagesPerMinuteColor);
	$load($PDLOverrideSupported);
	$load($PrinterInfo);
	$load($PrinterIsAcceptingJobs);
	$load($PrinterLocation);
	$load($PrinterMakeAndModel);
	$load($PrinterMessageFromOperator);
	$load($PrinterMoreInfo);
	$load($PrinterMoreInfoManufacturer);
	$load($PrinterName);
	$load($PrinterState);
	$load($PrinterStateReasons);
	$load($PrinterURI);
	$load($QueuedJobCount);
	$assignStatic(IPPPrintService::serviceAttributes, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ColorSupported::class$),
			$of("color-supported"_s)
		}),
		$$new($ObjectArray, {
			$of($PagesPerMinute::class$),
			$of("pages-per-minute"_s)
		}),
		$$new($ObjectArray, {
			$of($PagesPerMinuteColor::class$),
			$of("pages-per-minute-color"_s)
		}),
		$$new($ObjectArray, {
			$of($PDLOverrideSupported::class$),
			$of("pdl-override-supported"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterInfo::class$),
			$of("printer-info"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterIsAcceptingJobs::class$),
			$of("printer-is-accepting-jobs"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterLocation::class$),
			$of("printer-location"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterMakeAndModel::class$),
			$of("printer-make-and-model"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterMessageFromOperator::class$),
			$of("printer-message-from-operator"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterMoreInfo::class$),
			$of("printer-more-info"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterMoreInfoManufacturer::class$),
			$of("printer-more-info-manufacturer"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterName::class$),
			$of("printer-name"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterState::class$),
			$of("printer-state"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterStateReasons::class$),
			$of("printer-state-reasons"_s)
		}),
		$$new($ObjectArray, {
			$of($PrinterURI::class$),
			$of("printer-uri"_s)
		}),
		$$new($ObjectArray, {
			$of($QueuedJobCount::class$),
			$of("queued-job-count"_s)
		})
	}));
	$init($DocFlavor$BYTE_ARRAY);
	$init($DocFlavor$INPUT_STREAM);
	$init($DocFlavor$URL);
	$assignStatic(IPPPrintService::appPDF, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::PDF),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::PDF),
		static_cast<$DocFlavor*>($DocFlavor$URL::PDF)
	}));
	$assignStatic(IPPPrintService::appPostScript, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::POSTSCRIPT),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::POSTSCRIPT),
		static_cast<$DocFlavor*>($DocFlavor$URL::POSTSCRIPT)
	}));
	$assignStatic(IPPPrintService::appOctetStream, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::AUTOSENSE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::AUTOSENSE),
		static_cast<$DocFlavor*>($DocFlavor$URL::AUTOSENSE)
	}));
	$init($DocFlavor$CHAR_ARRAY);
	$init($DocFlavor$STRING);
	$init($DocFlavor$READER);
	$assignStatic(IPPPrintService::textPlain, $new($DocFlavorArray, {
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
		static_cast<$DocFlavor*>($DocFlavor$CHAR_ARRAY::TEXT_PLAIN),
		static_cast<$DocFlavor*>($DocFlavor$STRING::TEXT_PLAIN),
		static_cast<$DocFlavor*>($DocFlavor$READER::TEXT_PLAIN)
	}));
	$assignStatic(IPPPrintService::textPlainHost, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_PLAIN_HOST),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_PLAIN_HOST),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_PLAIN_HOST)
	}));
	$assignStatic(IPPPrintService::imageJPG, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::JPEG),
		static_cast<$DocFlavor*>($DocFlavor$URL::JPEG)
	}));
	$assignStatic(IPPPrintService::imageGIF, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::GIF),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::GIF),
		static_cast<$DocFlavor*>($DocFlavor$URL::GIF)
	}));
	$assignStatic(IPPPrintService::imagePNG, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::PNG),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::PNG),
		static_cast<$DocFlavor*>($DocFlavor$URL::PNG)
	}));
	$assignStatic(IPPPrintService::textHtml, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_8),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16BE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16LE),
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_HTML_US_ASCII),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_8),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16BE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16LE),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_HTML_US_ASCII),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_HTML_UTF_8),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_HTML_UTF_16),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_HTML_UTF_16BE),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_HTML_UTF_16LE),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_HTML_US_ASCII)
	}));
	$assignStatic(IPPPrintService::textHtmlHost, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::TEXT_HTML_HOST),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::TEXT_HTML_HOST),
		static_cast<$DocFlavor*>($DocFlavor$URL::TEXT_HTML_HOST)
	}));
	$assignStatic(IPPPrintService::appPCL, $new($DocFlavorArray, {
		static_cast<$DocFlavor*>($DocFlavor$BYTE_ARRAY::PCL),
		static_cast<$DocFlavor*>($DocFlavor$INPUT_STREAM::PCL),
		static_cast<$DocFlavor*>($DocFlavor$URL::PCL)
	}));
	$assignStatic(IPPPrintService::allDocFlavors, $new($ObjectArray, {
		$of(IPPPrintService::appPDF),
		$of(IPPPrintService::appPostScript),
		$of(IPPPrintService::appOctetStream),
		$of(IPPPrintService::textPlain),
		$of(IPPPrintService::imageJPG),
		$of(IPPPrintService::imageGIF),
		$of(IPPPrintService::imagePNG),
		$of(IPPPrintService::textHtml),
		$of(IPPPrintService::appPCL)
	}));
}

IPPPrintService::IPPPrintService() {
}

$Class* IPPPrintService::load$($String* name, bool initialize) {
	$loadClass(IPPPrintService, name, initialize, &_IPPPrintService_ClassInfo_, clinit$IPPPrintService, allocate$IPPPrintService);
	return class$;
}

$Class* IPPPrintService::class$ = nullptr;

	} // print
} // sun