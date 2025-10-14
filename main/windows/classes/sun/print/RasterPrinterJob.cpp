#include <sun/print/RasterPrinterJob.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Window.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/print/Book.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterAbortException.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
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
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Locale.h>
#include <javax/print/Doc.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/PrintException.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/ServiceUI.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/ResolutionSyntax.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/DialogTypeSelection.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobSheets.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/PrinterResolution.h>
#include <javax/print/attribute/standard/PrinterState.h>
#include <javax/print/attribute/standard/PrinterStateReason.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <sun/print/CustomMediaSizeName.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <sun/print/OpenBook.h>
#include <sun/print/PageableDoc.h>
#include <sun/print/PathGraphics.h>
#include <sun/print/PeekGraphics.h>
#include <sun/print/PrinterGraphicsConfig.h>
#include <sun/print/PrinterJobWrapper.h>
#include <sun/print/ProxyGraphics2D.h>
#include <sun/print/RasterPrinterJob$1.h>
#include <sun/print/RasterPrinterJob$2.h>
#include <sun/print/RasterPrinterJob$3.h>
#include <sun/print/RasterPrinterJob$4.h>
#include <sun/print/RasterPrinterJob$GraphicsState.h>
#include <sun/print/ServiceDialog.h>
#include <sun/print/SunAlternateMedia.h>
#include <sun/print/SunMinMaxPage.h>
#include <sun/print/SunPageSelection.h>
#include <sun/print/SunPrinterJobService.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ALL
#undef APPROVE
#undef CANADA
#undef COLLATED
#undef DPI
#undef ENGLISH
#undef FIDELITY_TRUE
#undef FILE
#undef FORCE_PDL
#undef FORCE_PIPE_PROP
#undef FORCE_RASTER
#undef INCH
#undef LANDSCAPE
#undef LETTER
#undef MAX_BAND_SIZE
#undef MAX_UNKNOWN_PAGES
#undef MAX_VALUE
#undef NATIVE
#undef NA_LETTER
#undef NONE
#undef NOT_ACCEPTING_JOBS
#undef ONE_SIDED
#undef PAGEABLE
#undef PAGE_EXISTS
#undef PD_ALLPAGES
#undef PD_NOSELECTION
#undef PD_PAGENUMS
#undef PD_SELECTION
#undef PORTRAIT
#undef PRINTABLE
#undef PRINTER
#undef RANGE
#undef REVERSE_LANDSCAPE
#undef SELECTION
#undef SHAPE_TEXT_PROP
#undef SHUTDOWN
#undef STOPPED
#undef STREAM
#undef TYPE_3BYTE_BGR
#undef UNKNOWN_NUMBER_OF_PAGES
#undef US

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $StreamPrintServiceArray = $Array<::javax::print::StreamPrintService>;
using $StreamPrintServiceFactoryArray = $Array<::javax::print::StreamPrintServiceFactory>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $intArray2 = $Array<int32_t, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Paint = ::java::awt::Paint;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Window = ::java::awt::Window;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Book = ::java::awt::print::Book;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterAbortException = ::java::awt::print::PrinterAbortException;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
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
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Doc = ::javax::print::Doc;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintException = ::javax::print::PrintException;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $ServiceUI = ::javax::print::ServiceUI;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $ResolutionSyntax = ::javax::print::attribute::ResolutionSyntax;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $TextSyntax = ::javax::print::attribute::TextSyntax;
using $URISyntax = ::javax::print::attribute::URISyntax;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogTypeSelection = ::javax::print::attribute::standard::DialogTypeSelection;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobSheets = ::javax::print::attribute::standard::JobSheets;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $PrinterResolution = ::javax::print::attribute::standard::PrinterResolution;
using $PrinterState = ::javax::print::attribute::standard::PrinterState;
using $PrinterStateReason = ::javax::print::attribute::standard::PrinterStateReason;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $CustomMediaSizeName = ::sun::print::CustomMediaSizeName;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;
using $OpenBook = ::sun::print::OpenBook;
using $PageableDoc = ::sun::print::PageableDoc;
using $PathGraphics = ::sun::print::PathGraphics;
using $PeekGraphics = ::sun::print::PeekGraphics;
using $PrinterGraphicsConfig = ::sun::print::PrinterGraphicsConfig;
using $PrinterJobWrapper = ::sun::print::PrinterJobWrapper;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;
using $RasterPrinterJob$1 = ::sun::print::RasterPrinterJob$1;
using $RasterPrinterJob$2 = ::sun::print::RasterPrinterJob$2;
using $RasterPrinterJob$3 = ::sun::print::RasterPrinterJob$3;
using $RasterPrinterJob$4 = ::sun::print::RasterPrinterJob$4;
using $RasterPrinterJob$GraphicsState = ::sun::print::RasterPrinterJob$GraphicsState;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $SunAlternateMedia = ::sun::print::SunAlternateMedia;
using $SunMinMaxPage = ::sun::print::SunMinMaxPage;
using $SunPageSelection = ::sun::print::SunPageSelection;
using $SunPrinterJobService = ::sun::print::SunPrinterJobService;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace print {

$FieldInfo _RasterPrinterJob_FieldInfo_[] = {
	{"PRINTER", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, PRINTER)},
	{"FILE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, FILE)},
	{"STREAM", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, STREAM)},
	{"MAX_UNKNOWN_PAGES", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, MAX_UNKNOWN_PAGES)},
	{"PD_ALLPAGES", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, PD_ALLPAGES)},
	{"PD_SELECTION", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, PD_SELECTION)},
	{"PD_PAGENUMS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, PD_PAGENUMS)},
	{"PD_NOSELECTION", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RasterPrinterJob, PD_NOSELECTION)},
	{"MAX_BAND_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RasterPrinterJob, MAX_BAND_SIZE)},
	{"DPI", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RasterPrinterJob, DPI)},
	{"FORCE_PIPE_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RasterPrinterJob, FORCE_PIPE_PROP)},
	{"FORCE_RASTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RasterPrinterJob, FORCE_RASTER)},
	{"FORCE_PDL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RasterPrinterJob, FORCE_PDL)},
	{"SHAPE_TEXT_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RasterPrinterJob, SHAPE_TEXT_PROP)},
	{"forcePDL", "Z", nullptr, $PUBLIC | $STATIC, $staticField(RasterPrinterJob, forcePDL)},
	{"forceRaster", "Z", nullptr, $PUBLIC | $STATIC, $staticField(RasterPrinterJob, forceRaster)},
	{"shapeTextProp", "Z", nullptr, $PUBLIC | $STATIC, $staticField(RasterPrinterJob, shapeTextProp)},
	{"cachedBandWidth", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, cachedBandWidth)},
	{"cachedBandHeight", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, cachedBandHeight)},
	{"cachedBand", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(RasterPrinterJob, cachedBand)},
	{"mNumCopies", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, mNumCopies)},
	{"mCollate", "Z", nullptr, $PRIVATE, $field(RasterPrinterJob, mCollate)},
	{"mFirstPage", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, mFirstPage)},
	{"mLastPage", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, mLastPage)},
	{"previousPaper", "Ljava/awt/print/Paper;", nullptr, $PRIVATE, $field(RasterPrinterJob, previousPaper)},
	{"mDocument", "Ljava/awt/print/Pageable;", nullptr, $PROTECTED, $field(RasterPrinterJob, mDocument)},
	{"mDocName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RasterPrinterJob, mDocName)},
	{"performingPrinting", "Z", nullptr, $PROTECTED, $field(RasterPrinterJob, performingPrinting)},
	{"userCancelled", "Z", nullptr, $PROTECTED, $field(RasterPrinterJob, userCancelled)},
	{"printToFilePermission", "Ljava/io/FilePermission;", nullptr, $PRIVATE, $field(RasterPrinterJob, printToFilePermission)},
	{"redrawList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/print/RasterPrinterJob$GraphicsState;>;", $PRIVATE, $field(RasterPrinterJob, redrawList)},
	{"copiesAttr", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, copiesAttr)},
	{"jobNameAttr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RasterPrinterJob, jobNameAttr)},
	{"userNameAttr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RasterPrinterJob, userNameAttr)},
	{"pageRangesAttr", "Ljavax/print/attribute/standard/PageRanges;", nullptr, $PRIVATE, $field(RasterPrinterJob, pageRangesAttr)},
	{"printerResAttr", "Ljavax/print/attribute/standard/PrinterResolution;", nullptr, $PROTECTED, $field(RasterPrinterJob, printerResAttr)},
	{"sidesAttr", "Ljavax/print/attribute/standard/Sides;", nullptr, $PROTECTED, $field(RasterPrinterJob, sidesAttr)},
	{"destinationAttr", "Ljava/lang/String;", nullptr, $PROTECTED, $field(RasterPrinterJob, destinationAttr)},
	{"noJobSheet", "Z", nullptr, $PROTECTED, $field(RasterPrinterJob, noJobSheet)},
	{"mDestType", "I", nullptr, $PROTECTED, $field(RasterPrinterJob, mDestType)},
	{"mDestination", "Ljava/lang/String;", nullptr, $PROTECTED, $field(RasterPrinterJob, mDestination)},
	{"collateAttReq", "Z", nullptr, $PROTECTED, $field(RasterPrinterJob, collateAttReq)},
	{"landscapeRotates270", "Z", nullptr, $PROTECTED, $field(RasterPrinterJob, landscapeRotates270)},
	{"attributes", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PROTECTED, $field(RasterPrinterJob, attributes)},
	{"myService", "Ljavax/print/PrintService;", nullptr, $PROTECTED, $field(RasterPrinterJob, myService)},
	{"debugPrint", "Z", nullptr, $PUBLIC | $STATIC, $staticField(RasterPrinterJob, debugPrint)},
	{"deviceWidth", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, deviceWidth)},
	{"deviceHeight", "I", nullptr, $PRIVATE, $field(RasterPrinterJob, deviceHeight)},
	{"defaultDeviceTransform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(RasterPrinterJob, defaultDeviceTransform)},
	{"pgConfig", "Lsun/print/PrinterGraphicsConfig;", nullptr, $PRIVATE, $field(RasterPrinterJob, pgConfig)},
	{"onTop", "Ljavax/print/attribute/standard/DialogOwner;", nullptr, $PRIVATE, $field(RasterPrinterJob, onTop)},
	{"parentWindowID", "J", nullptr, $PRIVATE, $field(RasterPrinterJob, parentWindowID)},
	{}
};

$MethodInfo _RasterPrinterJob_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RasterPrinterJob::*)()>(&RasterPrinterJob::init$))},
	{"abortDoc", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"attributeToPageFormat", "(Ljavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;)Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $method(static_cast<$PageFormat*(RasterPrinterJob::*)($PrintService*,$PrintRequestAttributeSet*)>(&RasterPrinterJob::attributeToPageFormat))},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"cancelDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterAbortException"},
	{"checkAllowedToPrintToFile", "()Z", nullptr, $PUBLIC},
	{"clearParentWindowID", "()V", nullptr, $PRIVATE, $method(static_cast<void(RasterPrinterJob::*)()>(&RasterPrinterJob::clearParentWindowID))},
	{"createPathGraphics", "(Lsun/print/PeekGraphics;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;I)Ljava/awt/Graphics2D;", nullptr, $PROTECTED},
	{"createPeekGraphics", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;)Lsun/print/PeekGraphics;", nullptr, $PROTECTED},
	{"debug_println", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"defaultPage", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"endDoc", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"endPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"getCollatedCopies", "()I", nullptr, $PROTECTED},
	{"getCopies", "()I", nullptr, $PUBLIC},
	{"getCopiesInt", "()I", nullptr, $PROTECTED},
	{"getDefaultPrintableArea", "(Ljava/awt/print/PageFormat;DD)Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PROTECTED},
	{"getFirstPage", "()I", nullptr, $PROTECTED},
	{"getFromPageAttrib", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RasterPrinterJob::*)()>(&RasterPrinterJob::getFromPageAttrib))},
	{"getJobName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getJobNameInt", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getLastPage", "()I", nullptr, $PROTECTED},
	{"getMaxPageAttrib", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RasterPrinterJob::*)()>(&RasterPrinterJob::getMaxPageAttrib))},
	{"getMediaSize", "(Ljavax/print/attribute/standard/Media;Ljavax/print/PrintService;Ljava/awt/print/PageFormat;)Ljavax/print/attribute/standard/MediaSize;", nullptr, $PROTECTED},
	{"getMinPageAttrib", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RasterPrinterJob::*)()>(&RasterPrinterJob::getMinPageAttrib))},
	{"getNoncollatedCopies", "()I", nullptr, $PROTECTED},
	{"getPageFormatFromAttributes", "()Ljava/awt/print/PageFormat;", nullptr, $PROTECTED},
	{"getPageable", "()Ljava/awt/print/Pageable;", nullptr, $PROTECTED},
	{"getParentWindowID", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(RasterPrinterJob::*)()>(&RasterPrinterJob::getParentWindowID))},
	{"getPhysicalPageHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED | $ABSTRACT},
	{"getPhysicalPageWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED | $ABSTRACT},
	{"getPhysicalPrintableHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED | $ABSTRACT},
	{"getPhysicalPrintableWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED | $ABSTRACT},
	{"getPhysicalPrintableX", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED | $ABSTRACT},
	{"getPhysicalPrintableY", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED | $ABSTRACT},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"getPrinterGraphicsConfig", "()Lsun/print/PrinterGraphicsConfig;", nullptr, $SYNCHRONIZED},
	{"getSelectAttrib", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RasterPrinterJob::*)()>(&RasterPrinterJob::getSelectAttrib))},
	{"getToPageAttrib", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RasterPrinterJob::*)()>(&RasterPrinterJob::getToPageAttrib))},
	{"getUserName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUserNameInt", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getXRes", "()D", nullptr, $PROTECTED | $ABSTRACT},
	{"getYRes", "()D", nullptr, $PROTECTED | $ABSTRACT},
	{"initPrinter", "()V", nullptr, $PROTECTED},
	{"initPrinterGraphics", "(Ljava/awt/Graphics2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, $PROTECTED},
	{"isCancelled", "()Z", nullptr, $PUBLIC},
	{"isCollated", "()Z", nullptr, $PROTECTED},
	{"isSupportedValue", "(Ljavax/print/attribute/Attribute;Ljavax/print/attribute/PrintRequestAttributeSet;)Z", nullptr, $PROTECTED},
	{"lookupDefaultPrintService", "()Ljavax/print/PrintService;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$PrintService*(*)()>(&RasterPrinterJob::lookupDefaultPrintService))},
	{"pageDialog", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"pageDialog", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"print", "()V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"print", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"printBand", "([BIIII)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"printDialog", "(Ljavax/print/attribute/PrintRequestAttributeSet;)Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"printDialog", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"printPage", "(Ljava/awt/print/Pageable;I)I", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"removeControlChars", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"saveState", "(Ljava/awt/geom/AffineTransform;Ljava/awt/Shape;Ljava/awt/geom/Rectangle2D;DD)V", nullptr, $PUBLIC},
	{"setAttributes", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"setCollated", "(Z)V", nullptr, $PROTECTED},
	{"setCopies", "(I)V", nullptr, $PUBLIC},
	{"setGraphicsConfigInfo", "(Ljava/awt/geom/AffineTransform;DD)V", nullptr, $SYNCHRONIZED},
	{"setJobName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPageRange", "(II)V", nullptr, $PROTECTED},
	{"setPageable", "(Ljava/awt/print/Pageable;)V", nullptr, $PUBLIC, nullptr, "java.lang.NullPointerException"},
	{"setParentWindowID", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(RasterPrinterJob::*)($PrintRequestAttributeSet*)>(&RasterPrinterJob::setParentWindowID))},
	{"setPrintService", "(Ljavax/print/PrintService;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"setPrintable", "(Ljava/awt/print/Printable;)V", nullptr, $PUBLIC},
	{"setPrintable", "(Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;)V", nullptr, $PUBLIC},
	{"setXYRes", "(DD)V", nullptr, $PROTECTED},
	{"spoolToService", "(Ljavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"startDoc", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"startPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;IZ)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"throwPrintToFile", "()V", nullptr, $PRIVATE, $method(static_cast<void(RasterPrinterJob::*)()>(&RasterPrinterJob::throwPrintToFile))},
	{"updateAttributesWithPageFormat", "(Ljavax/print/PrintService;Ljava/awt/print/PageFormat;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PROTECTED},
	{"updatePageAttributes", "(Ljavax/print/PrintService;Ljava/awt/print/PageFormat;)V", nullptr, $PROTECTED},
	{"validateDestination", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"validatePage", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"validatePaper", "(Ljava/awt/print/Paper;Ljava/awt/print/Paper;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _RasterPrinterJob_InnerClassesInfo_[] = {
	{"sun.print.RasterPrinterJob$GraphicsState", "sun.print.RasterPrinterJob", "GraphicsState", $PRIVATE},
	{"sun.print.RasterPrinterJob$4", nullptr, nullptr, 0},
	{"sun.print.RasterPrinterJob$3", nullptr, nullptr, 0},
	{"sun.print.RasterPrinterJob$2", nullptr, nullptr, 0},
	{"sun.print.RasterPrinterJob$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RasterPrinterJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.print.RasterPrinterJob",
	"java.awt.print.PrinterJob",
	nullptr,
	_RasterPrinterJob_FieldInfo_,
	_RasterPrinterJob_MethodInfo_,
	nullptr,
	nullptr,
	_RasterPrinterJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.RasterPrinterJob$GraphicsState,sun.print.RasterPrinterJob$4,sun.print.RasterPrinterJob$3,sun.print.RasterPrinterJob$2,sun.print.RasterPrinterJob$1"
};

$Object* allocate$RasterPrinterJob($Class* clazz) {
	return $of($alloc(RasterPrinterJob));
}

float RasterPrinterJob::DPI = 0.0;

$String* RasterPrinterJob::FORCE_PIPE_PROP = nullptr;

$String* RasterPrinterJob::FORCE_RASTER = nullptr;

$String* RasterPrinterJob::FORCE_PDL = nullptr;

$String* RasterPrinterJob::SHAPE_TEXT_PROP = nullptr;

bool RasterPrinterJob::forcePDL = false;
bool RasterPrinterJob::forceRaster = false;
bool RasterPrinterJob::shapeTextProp = false;
bool RasterPrinterJob::debugPrint = false;

void RasterPrinterJob::init$() {
	$PrinterJob::init$();
	this->cachedBandWidth = 0;
	this->cachedBandHeight = 0;
	$set(this, cachedBand, nullptr);
	this->mNumCopies = 1;
	this->mCollate = false;
	this->mFirstPage = $Pageable::UNKNOWN_NUMBER_OF_PAGES;
	this->mLastPage = $Pageable::UNKNOWN_NUMBER_OF_PAGES;
	$set(this, mDocument, $new($Book));
	$set(this, mDocName, "Java Printing"_s);
	this->performingPrinting = false;
	this->userCancelled = false;
	$set(this, redrawList, $new($ArrayList));
	this->noJobSheet = false;
	this->mDestType = RasterPrinterJob::FILE;
	$set(this, mDestination, ""_s);
	this->collateAttReq = false;
	this->landscapeRotates270 = false;
	$set(this, attributes, nullptr);
	$set(this, onTop, nullptr);
	this->parentWindowID = 0;
}

void RasterPrinterJob::saveState($AffineTransform* at, $Shape* clip, $Rectangle2D* region, double sx, double sy) {
	$var($RasterPrinterJob$GraphicsState, gstate, $new($RasterPrinterJob$GraphicsState, this));
	$set(gstate, theTransform, at);
	$set(gstate, theClip, clip);
	$set(gstate, region, region);
	gstate->sx = sx;
	gstate->sy = sy;
	$nc(this->redrawList)->add(gstate);
}

$PrintService* RasterPrinterJob::lookupDefaultPrintService() {
	$init(RasterPrinterJob);
	$var($PrintService, service, $PrintServiceLookup::lookupDefaultPrintService());
	$init($DocFlavor$SERVICE_FORMATTED);
	bool var$0 = service != nullptr && service->isDocFlavorSupported($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
	if (var$0 && service->isDocFlavorSupported($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
		return service;
	} else {
		$var($PrintServiceArray, services, $PrintServiceLookup::lookupPrintServices($DocFlavor$SERVICE_FORMATTED::PAGEABLE, nullptr));
		if ($nc(services)->length > 0) {
			return services->get(0);
		}
	}
	return nullptr;
}

$PrintService* RasterPrinterJob::getPrintService() {
	if (this->myService == nullptr) {
		$var($PrintService, svc, $PrintServiceLookup::lookupDefaultPrintService());
		$init($DocFlavor$SERVICE_FORMATTED);
		if (svc != nullptr && svc->isDocFlavorSupported($DocFlavor$SERVICE_FORMATTED::PAGEABLE)) {
			try {
				setPrintService(svc);
				$set(this, myService, svc);
			} catch ($PrinterException&) {
				$catch();
			}
		}
		if (this->myService == nullptr) {
			$var($PrintServiceArray, svcs, $PrintServiceLookup::lookupPrintServices($DocFlavor$SERVICE_FORMATTED::PAGEABLE, nullptr));
			if ($nc(svcs)->length > 0) {
				try {
					setPrintService(svcs->get(0));
					$set(this, myService, svcs->get(0));
				} catch ($PrinterException&) {
					$catch();
				}
			}
		}
	}
	return this->myService;
}

void RasterPrinterJob::setPrintService($PrintService* service) {
	if (service == nullptr) {
		$throwNew($PrinterException, "Service cannot be null"_s);
	} else if (!($instanceOf($StreamPrintService, service)) && service->getName() == nullptr) {
		$throwNew($PrinterException, "Null PrintService name."_s);
	} else {
		$load($PrinterState);
		$var($PrinterState, prnState, $cast($PrinterState, service->getAttribute($PrinterState::class$)));
		$init($PrinterState);
		if (prnState == $PrinterState::STOPPED) {
			$load($PrinterStateReasons);
			$var($PrinterStateReasons, prnStateReasons, $cast($PrinterStateReasons, service->getAttribute($PrinterStateReasons::class$)));
			$init($PrinterStateReason);
			if ((prnStateReasons != nullptr) && (prnStateReasons->containsKey($PrinterStateReason::SHUTDOWN))) {
				$throwNew($PrinterException, "PrintService is no longer available."_s);
			}
		}
		$init($DocFlavor$SERVICE_FORMATTED);
		bool var$0 = service->isDocFlavorSupported($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
		if (var$0 && service->isDocFlavorSupported($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
			$set(this, myService, service);
		} else {
			$throwNew($PrinterException, $$str({"Not a 2D print service: "_s, service}));
		}
	}
}

$PageFormat* RasterPrinterJob::attributeToPageFormat($PrintService* service, $PrintRequestAttributeSet* attSet) {
	$var($PageFormat, page, defaultPage());
	if (service == nullptr) {
		return page;
	}
	$load($OrientationRequested);
	$var($OrientationRequested, orient, $cast($OrientationRequested, $nc(attSet)->get($OrientationRequested::class$)));
	if (orient == nullptr) {
		$assign(orient, $cast($OrientationRequested, $nc(service)->getDefaultAttributeValue($OrientationRequested::class$)));
	}
	$init($OrientationRequested);
	if (orient == $OrientationRequested::REVERSE_LANDSCAPE) {
		$nc(page)->setOrientation($PageFormat::REVERSE_LANDSCAPE);
	} else {
		if (orient == $OrientationRequested::LANDSCAPE) {
			$nc(page)->setOrientation($PageFormat::LANDSCAPE);
		} else {
			$nc(page)->setOrientation($PageFormat::PORTRAIT);
		}
	}
	$load($Media);
	$var($Media, media, $cast($Media, attSet->get($Media::class$)));
	$var($MediaSize, size, getMediaSize(media, service, page));
	$var($Paper, paper, $new($Paper));
	$var($floats, dim, $nc(size)->getSize(1));
	double w = $Math::rint($div(($nc(dim)->get(0) * 72.0), $Size2DSyntax::INCH));
	double h = $Math::rint($div(($nc(dim)->get(1) * 72.0), $Size2DSyntax::INCH));
	paper->setSize(w, h);
	$load($MediaPrintableArea);
	$var($MediaPrintableArea, area, $cast($MediaPrintableArea, attSet->get($MediaPrintableArea::class$)));
	if (area == nullptr) {
		$assign(area, getDefaultPrintableArea(page, w, h));
	}
	double ix = 0.0;
	double iw = 0.0;
	double iy = 0.0;
	double ih = 0.0;
	ix = $Math::rint($nc(area)->getX($MediaPrintableArea::INCH) * RasterPrinterJob::DPI);
	iy = $Math::rint($nc(area)->getY($MediaPrintableArea::INCH) * RasterPrinterJob::DPI);
	iw = $Math::rint($nc(area)->getWidth($MediaPrintableArea::INCH) * RasterPrinterJob::DPI);
	ih = $Math::rint($nc(area)->getHeight($MediaPrintableArea::INCH) * RasterPrinterJob::DPI);
	paper->setImageableArea(ix, iy, iw, ih);
	$nc(page)->setPaper(paper);
	return page;
}

$MediaSize* RasterPrinterJob::getMediaSize($Media* media$renamed, $PrintService* service, $PageFormat* page) {
	$var($Media, media, media$renamed);
	if (media == nullptr) {
		$load($Media);
		$assign(media, $cast($Media, $nc(service)->getDefaultAttributeValue($Media::class$)));
	}
	if (!($instanceOf($MediaSizeName, media))) {
		$init($MediaSizeName);
		$assign(media, $MediaSizeName::NA_LETTER);
	}
	$var($MediaSize, size, $MediaSize::getMediaSizeForName($cast($MediaSizeName, media)));
	$init($MediaSize$NA);
	return size != nullptr ? size : $MediaSize$NA::LETTER;
}

$MediaPrintableArea* RasterPrinterJob::getDefaultPrintableArea($PageFormat* page, double w, double h) {
	double ix = 0.0;
	double iw = 0.0;
	double iy = 0.0;
	double ih = 0.0;
	if (w >= 72.0 * 6.0) {
		ix = 72.0;
		iw = w - 2 * 72.0;
	} else {
		ix = w / 6.0;
		iw = w * 0.75;
	}
	if (h >= 72.0 * 6.0) {
		iy = 72.0;
		ih = h - 2 * 72.0;
	} else {
		iy = h / 6.0;
		ih = h * 0.75;
	}
	return $new($MediaPrintableArea, (float)($div(ix, RasterPrinterJob::DPI)), (float)($div(iy, RasterPrinterJob::DPI)), (float)($div(iw, RasterPrinterJob::DPI)), (float)($div(ih, RasterPrinterJob::DPI)), $MediaPrintableArea::INCH);
}

void RasterPrinterJob::updatePageAttributes($PrintService* service, $PageFormat* page) {
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashPrintRequestAttributeSet));
	}
	updateAttributesWithPageFormat(service, page, this->attributes);
}

void RasterPrinterJob::updateAttributesWithPageFormat($PrintService* service, $PageFormat* page, $PrintRequestAttributeSet* pageAttributes) {
	if (service == nullptr || page == nullptr || pageAttributes == nullptr) {
		return;
	}
	float x = $div((float)$Math::rint($div(($nc($($nc(page)->getPaper()))->getWidth() * $Size2DSyntax::INCH), (72.0))), (float)$Size2DSyntax::INCH);
	float y = $div((float)$Math::rint($div(($nc($($nc(page)->getPaper()))->getHeight() * $Size2DSyntax::INCH), (72.0))), (float)$Size2DSyntax::INCH);
	$load($Media);
	$var($MediaArray, mediaList, $cast($MediaArray, $nc(service)->getSupportedAttributeValues($Media::class$, nullptr, nullptr)));
	$var($Media, media, nullptr);
	try {
		$assign(media, $CustomMediaSizeName::findMedia(mediaList, x, y, $Size2DSyntax::INCH));
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	if ((media == nullptr) || !(service->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)), nullptr, nullptr))) {
		$assign(media, $cast($Media, service->getDefaultAttributeValue($Media::class$)));
	}
	$var($OrientationRequested, orient, nullptr);
	switch ($nc(page)->getOrientation()) {
	case $PageFormat::LANDSCAPE:
		{
			$init($OrientationRequested);
			$assign(orient, $OrientationRequested::LANDSCAPE);
			break;
		}
	case $PageFormat::REVERSE_LANDSCAPE:
		{
			$init($OrientationRequested);
			$assign(orient, $OrientationRequested::REVERSE_LANDSCAPE);
			break;
		}
	default:
		{
			$init($OrientationRequested);
			$assign(orient, $OrientationRequested::PORTRAIT);
		}
	}
	if (media != nullptr) {
		$nc(pageAttributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)));
	}
	$nc(pageAttributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(orient)));
	float ix = (float)($div($nc($(page->getPaper()))->getImageableX(), RasterPrinterJob::DPI));
	float iw = (float)($div($nc($(page->getPaper()))->getImageableWidth(), RasterPrinterJob::DPI));
	float iy = (float)($div($nc($(page->getPaper()))->getImageableY(), RasterPrinterJob::DPI));
	float ih = (float)($div($nc($(page->getPaper()))->getImageableHeight(), RasterPrinterJob::DPI));
	if (ix < 0) {
		ix = (float)0;
	}
	if (iy < 0) {
		iy = (float)0;
	}
	if (iw <= 0) {
		iw = (float)($div($nc($(page->getPaper()))->getWidth(), RasterPrinterJob::DPI)) - (ix * 2);
	}
	if (iw < 0) {
		iw = (float)0;
	}
	if (ih <= 0) {
		ih = (float)($div($nc($(page->getPaper()))->getHeight(), RasterPrinterJob::DPI)) - (iy * 2);
	}
	if (ih < 0) {
		ih = (float)0;
	}
	try {
		pageAttributes->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($$new($MediaPrintableArea, ix, iy, iw, ih, $MediaPrintableArea::INCH))));
	} catch ($IllegalArgumentException&) {
		$catch();
	}
}

$PageFormat* RasterPrinterJob::pageDialog($PageFormat* page) {
	$beforeCallerSensitive();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$var($GraphicsConfiguration, gc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	$var($PrintService, service, $cast($PrintService, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($RasterPrinterJob$1, this, gc)))));
	if (service == nullptr) {
		return page;
	}
	updatePageAttributes(service, page);
	$var($PageFormat, newPage, nullptr);
	$load($DialogTypeSelection);
	$var($DialogTypeSelection, dts, $cast($DialogTypeSelection, $nc(this->attributes)->get($DialogTypeSelection::class$)));
	$init($DialogTypeSelection);
	if (dts == $DialogTypeSelection::NATIVE) {
		$nc(this->attributes)->remove($DialogTypeSelection::class$);
		$assign(newPage, pageDialog(this->attributes));
		$nc(this->attributes)->add($DialogTypeSelection::NATIVE);
	} else {
		$assign(newPage, pageDialog(this->attributes));
	}
	if (newPage == nullptr) {
		return page;
	} else {
		return newPage;
	}
}

$PageFormat* RasterPrinterJob::pageDialog($PrintRequestAttributeSet* attributes) {
	$beforeCallerSensitive();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$load($DialogTypeSelection);
	$var($DialogTypeSelection, dlg, $cast($DialogTypeSelection, $nc(attributes)->get($DialogTypeSelection::class$)));
	$init($DialogTypeSelection);
	if (dlg == $DialogTypeSelection::NATIVE) {
		$var($PrintService, pservice, getPrintService());
		$var($PageFormat, pageFrmAttrib, attributeToPageFormat(pservice, attributes));
		setParentWindowID(attributes);
		$var($PageFormat, page, this->pageDialog(pageFrmAttrib));
		clearParentWindowID();
		if (page == pageFrmAttrib) {
			return nullptr;
		}
		updateAttributesWithPageFormat(pservice, page, attributes);
		return page;
	}
	$var($GraphicsConfiguration, grCfg, nullptr);
	$var($Window, w, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getActiveWindow());
	if (w != nullptr) {
		$assign(grCfg, w->getGraphicsConfiguration());
	} else {
		$assign(grCfg, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	$var($GraphicsConfiguration, gc, grCfg);
	$var($PrintService, service, $cast($PrintService, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($RasterPrinterJob$2, this, gc)))));
	if (service == nullptr) {
		return nullptr;
	}
	$var($Rectangle, gcBounds, $nc(gc)->getBounds());
	int32_t x = $nc(gcBounds)->x + 50;
	int32_t y = gcBounds->y + 50;
	$var($ServiceDialog, pageDialog, nullptr);
	bool setOnTop = false;
	if (this->onTop != nullptr) {
		attributes->add(this->onTop);
		$var($Window, owner, $nc(this->onTop)->getOwner());
		if (owner != nullptr) {
			$assign(w, owner);
		} else if ($DialogOwnerAccessor::getID(this->onTop) == 0) {
			setOnTop = true;
		}
	}
	$init($DocFlavor$SERVICE_FORMATTED);
	$assign(pageDialog, $new($ServiceDialog, gc, x, y, service, $DocFlavor$SERVICE_FORMATTED::PAGEABLE, attributes, w));
	if (setOnTop) {
		try {
			pageDialog->setAlwaysOnTop(true);
		} catch ($SecurityException&) {
			$catch();
		}
	}
	$var($Rectangle, dlgBounds, pageDialog->getBounds());
	if (!gcBounds->contains(dlgBounds)) {
		if ($nc(dlgBounds)->x + dlgBounds->width > gcBounds->x + gcBounds->width) {
			if ((gcBounds->x + gcBounds->width - dlgBounds->width) > gcBounds->x) {
				x = (gcBounds->x + gcBounds->width) - dlgBounds->width;
			} else {
				x = gcBounds->x;
			}
		}
		if ($nc(dlgBounds)->y + dlgBounds->height > gcBounds->y + gcBounds->height) {
			if ((gcBounds->y + gcBounds->height - dlgBounds->height) > gcBounds->y) {
				y = (gcBounds->y + gcBounds->height) - dlgBounds->height;
			} else {
				y = gcBounds->y;
			}
		}
		pageDialog->setBounds(x, y, $nc(dlgBounds)->width, dlgBounds->height);
	}
	pageDialog->show();
	if (pageDialog->getStatus() == $ServiceDialog::APPROVE) {
		$var($PrintRequestAttributeSet, newas, pageDialog->getAttributes());
		$load($SunAlternateMedia);
		$Class* amCategory = $SunAlternateMedia::class$;
		bool var$0 = attributes->containsKey(amCategory);
		if (var$0 && !$nc(newas)->containsKey(amCategory)) {
			attributes->remove(amCategory);
		}
		attributes->addAll(newas);
		return attributeToPageFormat(service, attributes);
	} else {
		return nullptr;
	}
}

$PageFormat* RasterPrinterJob::getPageFormatFromAttributes() {
	$var($Pageable, pageable, nullptr);
	bool var$0 = this->attributes == nullptr || $nc(this->attributes)->isEmpty();
	if (var$0 || !($instanceOf($OpenBook, $assign(pageable, getPageable())))) {
		return nullptr;
	}
	$var($PageFormat, newPf, attributeToPageFormat($(getPrintService()), this->attributes));
	$var($PageFormat, oldPf, nullptr);
	if (($assign(oldPf, $nc(pageable)->getPageFormat(0))) != nullptr) {
		$load($OrientationRequested);
		if ($nc(this->attributes)->get($OrientationRequested::class$) == nullptr) {
			$nc(newPf)->setOrientation($nc(oldPf)->getOrientation());
		}
		$var($Paper, newPaper, $nc(newPf)->getPaper());
		$var($Paper, oldPaper, $nc(oldPf)->getPaper());
		bool oldPaperValWasSet = false;
		$load($MediaSizeName);
		if ($nc(this->attributes)->get($MediaSizeName::class$) == nullptr) {
			double var$1 = $nc(oldPaper)->getWidth();
			$nc(newPaper)->setSize(var$1, oldPaper->getHeight());
			oldPaperValWasSet = true;
		}
		$load($MediaPrintableArea);
		if ($nc(this->attributes)->get($MediaPrintableArea::class$) == nullptr) {
			double var$2 = $nc(oldPaper)->getImageableX();
			double var$3 = oldPaper->getImageableY();
			double var$4 = oldPaper->getImageableWidth();
			$nc(newPaper)->setImageableArea(var$2, var$3, var$4, oldPaper->getImageableHeight());
			oldPaperValWasSet = true;
		}
		if (oldPaperValWasSet) {
			newPf->setPaper(newPaper);
		}
	}
	return newPf;
}

bool RasterPrinterJob::printDialog($PrintRequestAttributeSet* attributes) {
	$beforeCallerSensitive();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$load($DialogTypeSelection);
	$var($DialogTypeSelection, dlg, $cast($DialogTypeSelection, $nc(attributes)->get($DialogTypeSelection::class$)));
	$init($DialogTypeSelection);
	if (dlg == $DialogTypeSelection::NATIVE) {
		$set(this, attributes, attributes);
		try {
			debug_println("calling setAttributes in printDialog"_s);
			setAttributes(attributes);
		} catch ($PrinterException&) {
			$catch();
		}
		setParentWindowID(attributes);
		bool ret = printDialog();
		clearParentWindowID();
		$set(this, attributes, attributes);
		return ret;
	}
	$var($GraphicsConfiguration, grCfg, nullptr);
	$var($Window, w, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getActiveWindow());
	if (w != nullptr) {
		$assign(grCfg, w->getGraphicsConfiguration());
		$load($DialogOwner);
		if (attributes->get($DialogOwner::class$) == nullptr) {
			attributes->add($$new($DialogOwner, w));
		}
	} else {
		$assign(grCfg, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	$var($GraphicsConfiguration, gc, grCfg);
	$var($PrintService, service, $cast($PrintService, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($RasterPrinterJob$3, this, gc)))));
	if (service == nullptr) {
		return false;
	}
	$var($PrintServiceArray, services, nullptr);
	$var($StreamPrintServiceFactoryArray, spsFactories, nullptr);
	if ($instanceOf($StreamPrintService, service)) {
		$assign(spsFactories, lookupStreamPrintServices(nullptr));
		$assign(services, $fcast($PrintServiceArray, $new($StreamPrintServiceArray, $nc(spsFactories)->length)));
		for (int32_t i = 0; i < spsFactories->length; ++i) {
			services->set(i, $($nc(spsFactories->get(i))->getPrintService(nullptr)));
		}
	} else {
		$assign(services, $cast($PrintServiceArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($RasterPrinterJob$4, this)))));
		if ((services == nullptr) || ($nc(services)->length == 0)) {
			$assign(services, $new($PrintServiceArray, 1));
			services->set(0, service);
		}
	}
	int32_t x = 50;
	int32_t y = 50;
	$var($PrintService, newService, nullptr);
	$var($PrinterJobWrapper, jobWrapper, $new($PrinterJobWrapper, this));
	attributes->add(jobWrapper);
	$load($PageRanges);
	$var($PageRanges, pgRng, $cast($PageRanges, attributes->get($PageRanges::class$)));
	if (pgRng == nullptr && $nc(this->mDocument)->getNumberOfPages() > 1) {
		attributes->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($$new($PageRanges, 1, $nc(this->mDocument)->getNumberOfPages()))));
	}
	try {
		$init($DocFlavor$SERVICE_FORMATTED);
		$assign(newService, $ServiceUI::printDialog(gc, x, y, services, service, $DocFlavor$SERVICE_FORMATTED::PAGEABLE, attributes));
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$init($DocFlavor$SERVICE_FORMATTED);
		$assign(newService, $ServiceUI::printDialog(gc, x, y, services, $nc(services)->get(0), $DocFlavor$SERVICE_FORMATTED::PAGEABLE, attributes));
	}
	$load($PrinterJobWrapper);
	attributes->remove($PrinterJobWrapper::class$);
	$load($DialogOwner);
	attributes->remove($DialogOwner::class$);
	if (newService == nullptr) {
		return false;
	}
	if (!$nc(service)->equals(newService)) {
		try {
			setPrintService(newService);
		} catch ($PrinterException&) {
			$var($PrinterException, e, $catch());
			$set(this, myService, newService);
		}
	}
	return true;
}

bool RasterPrinterJob::printDialog() {
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$var($PrintRequestAttributeSet, attributes, $new($HashPrintRequestAttributeSet));
	attributes->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, getCopies()))));
	attributes->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($JobName, $(getJobName()), nullptr))));
	bool doPrint = printDialog(attributes);
	if (doPrint) {
		$load($JobName);
		$var($JobName, jobName, $cast($JobName, attributes->get($JobName::class$)));
		if (jobName != nullptr) {
			setJobName($(jobName->getValue()));
		}
		$load($Copies);
		$var($Copies, copies, $cast($Copies, attributes->get($Copies::class$)));
		if (copies != nullptr) {
			setCopies(copies->getValue());
		}
		$load($Destination);
		$var($Destination, dest, $cast($Destination, attributes->get($Destination::class$)));
		if (dest != nullptr) {
			try {
				this->mDestType = RasterPrinterJob::FILE;
				$set(this, mDestination, ($$new($File, $(dest->getURI())))->getPath());
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$set(this, mDestination, "out.prn"_s);
				$var($PrintService, ps, getPrintService());
				if (ps != nullptr) {
					$var($Destination, defaultDest, $cast($Destination, ps->getDefaultAttributeValue($Destination::class$)));
					if (defaultDest != nullptr) {
						$set(this, mDestination, ($$new($File, $(defaultDest->getURI())))->getPath());
					}
				}
			}
		} else {
			this->mDestType = RasterPrinterJob::PRINTER;
			$var($PrintService, ps, getPrintService());
			if (ps != nullptr) {
				$set(this, mDestination, ps->getName());
			}
		}
	}
	return doPrint;
}

void RasterPrinterJob::setPrintable($Printable* painter) {
	setPageable($$new($OpenBook, $(defaultPage($$new($PageFormat))), painter));
}

void RasterPrinterJob::setPrintable($Printable* painter, $PageFormat* format) {
	setPageable($$new($OpenBook, format, painter));
	updatePageAttributes($(getPrintService()), format);
}

void RasterPrinterJob::setPageable($Pageable* document) {
	if (document != nullptr) {
		$set(this, mDocument, document);
	} else {
		$throwNew($NullPointerException);
	}
}

void RasterPrinterJob::initPrinter() {
	return;
}

bool RasterPrinterJob::isSupportedValue($Attribute* attrval, $PrintRequestAttributeSet* attrset) {
	$var($PrintService, ps, getPrintService());
	$init($DocFlavor$SERVICE_FORMATTED);
	return (attrval != nullptr && ps != nullptr && ps->isAttributeValueSupported(attrval, $DocFlavor$SERVICE_FORMATTED::PAGEABLE, attrset));
}

void RasterPrinterJob::setXYRes(double x, double y) {
}

void RasterPrinterJob::setAttributes($PrintRequestAttributeSet* attributes) {
	setCollated(false);
	$set(this, sidesAttr, nullptr);
	$set(this, printerResAttr, nullptr);
	$set(this, pageRangesAttr, nullptr);
	this->copiesAttr = 0;
	$set(this, jobNameAttr, nullptr);
	$set(this, userNameAttr, nullptr);
	$set(this, destinationAttr, nullptr);
	this->collateAttReq = false;
	$var($PrintService, service, getPrintService());
	if (attributes == nullptr || service == nullptr) {
		return;
	}
	bool fidelity = false;
	$load($Fidelity);
	$var($Fidelity, attrFidelity, $cast($Fidelity, $nc(attributes)->get($Fidelity::class$)));
	$init($Fidelity);
	if (attrFidelity != nullptr && attrFidelity == $Fidelity::FIDELITY_TRUE) {
		fidelity = true;
	}
	if (fidelity == true) {
		$init($DocFlavor$SERVICE_FORMATTED);
		$var($AttributeSet, unsupported, $nc(service)->getUnsupportedAttributes($DocFlavor$SERVICE_FORMATTED::PAGEABLE, attributes));
		if (unsupported != nullptr) {
			$throwNew($PrinterException, "Fidelity cannot be satisfied"_s);
		}
	}
	$load($SheetCollate);
	$var($SheetCollate, collateAttr, $cast($SheetCollate, attributes->get($SheetCollate::class$)));
	if (isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(collateAttr)), attributes)) {
		$init($SheetCollate);
		setCollated(collateAttr == $SheetCollate::COLLATED);
	}
	$load($Sides);
	$set(this, sidesAttr, $cast($Sides, attributes->get($Sides::class$)));
	if (!isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(this->sidesAttr)), attributes)) {
		$init($Sides);
		$set(this, sidesAttr, $Sides::ONE_SIDED);
	}
	$load($PrinterResolution);
	$set(this, printerResAttr, $cast($PrinterResolution, attributes->get($PrinterResolution::class$)));
	if ($nc(service)->isAttributeCategorySupported($PrinterResolution::class$)) {
		if (!isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(this->printerResAttr)), attributes)) {
			$set(this, printerResAttr, $cast($PrinterResolution, service->getDefaultAttributeValue($PrinterResolution::class$)));
		}
		if (this->printerResAttr != nullptr) {
			double xr = (double)$nc(this->printerResAttr)->getCrossFeedResolution($ResolutionSyntax::DPI);
			double yr = (double)$nc(this->printerResAttr)->getFeedResolution($ResolutionSyntax::DPI);
			setXYRes(xr, yr);
		}
	}
	$load($PageRanges);
	$set(this, pageRangesAttr, $cast($PageRanges, attributes->get($PageRanges::class$)));
	if (!isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(this->pageRangesAttr)), attributes)) {
		$set(this, pageRangesAttr, nullptr);
		setPageRange(-1, -1);
	} else {
		$load($SunPageSelection);
		$init($SunPageSelection);
		if ($cast($SunPageSelection, attributes->get($SunPageSelection::class$)) == $SunPageSelection::RANGE) {
			$var($intArray2, range, $nc(this->pageRangesAttr)->getMembers());
			setPageRange($nc($nc(range)->get(0))->get(0) - 1, $nc(range->get(0))->get(1) - 1);
		} else {
			setPageRange(-1, -1);
		}
	}
	$load($Copies);
	$var($Copies, copies, $cast($Copies, attributes->get($Copies::class$)));
	if (isSupportedValue(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(copies)), attributes) || (!fidelity && copies != nullptr)) {
		this->copiesAttr = copies->getValue();
		setCopies(this->copiesAttr);
	} else {
		this->copiesAttr = getCopies();
	}
	$load($Destination);
	$var($Destination, destination, $cast($Destination, attributes->get($Destination::class$)));
	if (isSupportedValue(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>(destination)), attributes)) {
		try {
			$set(this, destinationAttr, $str({""_s, $$new($File, $($nc($($nc(destination)->getURI()))->getSchemeSpecificPart()))}));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($Destination, defaultDest, $cast($Destination, $nc(service)->getDefaultAttributeValue($Destination::class$)));
			if (defaultDest != nullptr) {
				$set(this, destinationAttr, $str({""_s, $$new($File, $($nc($(defaultDest->getURI()))->getSchemeSpecificPart()))}));
			}
		}
	}
	$load($JobSheets);
	$var($JobSheets, jobSheets, $cast($JobSheets, attributes->get($JobSheets::class$)));
	if (jobSheets != nullptr) {
		$init($JobSheets);
		this->noJobSheet = jobSheets == $JobSheets::NONE;
	}
	$load($JobName);
	$var($JobName, jobName, $cast($JobName, attributes->get($JobName::class$)));
	if (isSupportedValue(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)), attributes) || (!fidelity && jobName != nullptr)) {
		$set(this, jobNameAttr, jobName->getValue());
		setJobName(this->jobNameAttr);
	} else {
		$set(this, jobNameAttr, getJobName());
	}
	$load($RequestingUserName);
	$var($RequestingUserName, userName, $cast($RequestingUserName, attributes->get($RequestingUserName::class$)));
	if (isSupportedValue(userName, attributes) || (!fidelity && userName != nullptr)) {
		$set(this, userNameAttr, userName->getValue());
	} else {
		try {
			$set(this, userNameAttr, getUserName());
		} catch ($SecurityException&) {
			$var($SecurityException, e, $catch());
			$set(this, userNameAttr, ""_s);
		}
	}
	$load($Media);
	$var($Media, media, $cast($Media, attributes->get($Media::class$)));
	$load($OrientationRequested);
	$var($OrientationRequested, orientReq, $cast($OrientationRequested, attributes->get($OrientationRequested::class$)));
	$load($MediaPrintableArea);
	$var($MediaPrintableArea, mpa, $cast($MediaPrintableArea, attributes->get($MediaPrintableArea::class$)));
	if ((orientReq != nullptr || media != nullptr || mpa != nullptr) && $instanceOf($OpenBook, $(getPageable()))) {
		$var($Pageable, pageable, getPageable());
		$var($Printable, printable, $nc(pageable)->getPrintable(0));
		$var($PageFormat, pf, $cast($PageFormat, $nc($(pageable->getPageFormat(0)))->clone()));
		$var($Paper, paper, $nc(pf)->getPaper());
		if (mpa == nullptr && media != nullptr && $nc(service)->isAttributeCategorySupported($MediaPrintableArea::class$)) {
			$var($Object, mpaVals, service->getSupportedAttributeValues($MediaPrintableArea::class$, nullptr, attributes));
			if ($instanceOf($MediaPrintableAreaArray, mpaVals) && $nc(($cast($MediaPrintableAreaArray, mpaVals)))->length > 0) {
				$assign(mpa, $nc(($cast($MediaPrintableAreaArray, mpaVals)))->get(0));
			}
		}
		if (isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(orientReq)), attributes) || (!fidelity && orientReq != nullptr)) {
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
		if (isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)), attributes) || (!fidelity && media != nullptr)) {
			if ($instanceOf($MediaSizeName, media)) {
				$var($MediaSizeName, msn, $cast($MediaSizeName, media));
				$var($MediaSize, msz, $MediaSize::getMediaSizeForName(msn));
				if (msz != nullptr) {
					float paperWid = msz->getX($MediaSize::INCH) * 72.0f;
					float paperHgt = msz->getY($MediaSize::INCH) * 72.0f;
					$nc(paper)->setSize(paperWid, paperHgt);
					if (mpa == nullptr) {
						paper->setImageableArea(72.0, 72.0, paperWid - 144.0, paperHgt - 144.0);
					}
				}
			}
		}
		if (isSupportedValue(static_cast<$Attribute*>(static_cast<$DocAttribute*>(mpa)), attributes) || (!fidelity && mpa != nullptr)) {
			$var($floats, printableArea, mpa->getPrintableArea($MediaPrintableArea::INCH));
			for (int32_t i = 0; i < $nc(printableArea)->length; ++i) {
				printableArea->set(i, printableArea->get(i) * 72.0f);
			}
			$nc(paper)->setImageableArea($nc(printableArea)->get(0), printableArea->get(1), printableArea->get(2), printableArea->get(3));
		}
		pf->setPaper(paper);
		$assign(pf, validatePage(pf));
		setPrintable(printable, pf);
	} else {
		$set(this, attributes, attributes);
	}
}

void RasterPrinterJob::spoolToService($PrintService* psvc, $PrintRequestAttributeSet* attributes$renamed) {
	$var($PrintRequestAttributeSet, attributes, attributes$renamed);
	if (psvc == nullptr) {
		$throwNew($PrinterException, "No print service found."_s);
	}
	$var($DocPrintJob, job, $nc(psvc)->createPrintJob());
	$var($Doc, doc, $new($PageableDoc, $(getPageable())));
	if (attributes == nullptr) {
		$assign(attributes, $new($HashPrintRequestAttributeSet));
		attributes->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, getCopies()))));
		attributes->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($JobName, $(getJobName()), nullptr))));
	}
	try {
		$nc(job)->print(doc, attributes);
	} catch ($PrintException&) {
		$var($PrintException, e, $catch());
		$throwNew($PrinterException, $(e->toString()));
	}
}

void RasterPrinterJob::print() {
	print(this->attributes);
}

void RasterPrinterJob::debug_println($String* str) {
	if (RasterPrinterJob::debugPrint) {
		$init($System);
		$nc($System::out)->println($$str({"RasterPrinterJob "_s, str, " "_s, this}));
	}
}

void RasterPrinterJob::print($PrintRequestAttributeSet* attributes) {
	$var($PrintService, psvc, getPrintService());
	debug_println($$str({"psvc = "_s, psvc}));
	if (psvc == nullptr) {
		$throwNew($PrinterException, "No print service found."_s);
	}
	$load($PrinterState);
	$var($PrinterState, prnState, $cast($PrinterState, $nc(psvc)->getAttribute($PrinterState::class$)));
	$init($PrinterState);
	if (prnState == $PrinterState::STOPPED) {
		$load($PrinterStateReasons);
		$var($PrinterStateReasons, prnStateReasons, $cast($PrinterStateReasons, psvc->getAttribute($PrinterStateReasons::class$)));
		$init($PrinterStateReason);
		if ((prnStateReasons != nullptr) && (prnStateReasons->containsKey($PrinterStateReason::SHUTDOWN))) {
			$throwNew($PrinterException, "PrintService is no longer available."_s);
		}
	}
	$load($PrinterIsAcceptingJobs);
	$init($PrinterIsAcceptingJobs);
	if ($equals(psvc->getAttribute($PrinterIsAcceptingJobs::class$), $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS)) {
		$throwNew($PrinterException, "Printer is not accepting job."_s);
	}
	$load($JobSheets);
	$var($JobSheets, js, $cast($JobSheets, psvc->getDefaultAttributeValue($JobSheets::class$)));
	$init($JobSheets);
	if (js != nullptr && $of(js)->equals($JobSheets::NONE)) {
		this->noJobSheet = true;
	}
	if (($instanceOf($SunPrinterJobService, psvc)) && $nc(($cast($SunPrinterJobService, psvc)))->usesClass($of(this)->getClass())) {
		setAttributes(attributes);
		if (this->destinationAttr != nullptr) {
			validateDestination(this->destinationAttr);
		}
	} else {
		spoolToService(psvc, attributes);
		return;
	}
	initPrinter();
	int32_t numCollatedCopies = getCollatedCopies();
	int32_t numNonCollatedCopies = getNoncollatedCopies();
	debug_println($$str({"getCollatedCopies()  "_s, $$str(numCollatedCopies), " getNoncollatedCopies() "_s, $$str(numNonCollatedCopies)}));
	int32_t numPages = $nc(this->mDocument)->getNumberOfPages();
	if (numPages == 0) {
		return;
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
			startDoc();
			if (isCancelled()) {
				cancelDoc();
			}
			bool rangeIsSelected = true;
			if (attributes != nullptr) {
				$load($SunPageSelection);
				$var($SunPageSelection, pages, $cast($SunPageSelection, attributes->get($SunPageSelection::class$)));
				$init($SunPageSelection);
				if ((pages != nullptr) && (pages != $SunPageSelection::RANGE)) {
					rangeIsSelected = false;
				}
			}
			debug_println($$str({"after startDoc rangeSelected? "_s, $$str(rangeIsSelected), " numNonCollatedCopies "_s, $$str(numNonCollatedCopies)}));
			for (int32_t collated = 0; collated < numCollatedCopies; ++collated) {
				{
					int32_t i = firstPage;
					int32_t pageResult = $Printable::PAGE_EXISTS;
					for (; (i <= lastPage || lastPage == $Pageable::UNKNOWN_NUMBER_OF_PAGES) && pageResult == $Printable::PAGE_EXISTS; ++i) {
						if ((this->pageRangesAttr != nullptr) && rangeIsSelected) {
							int32_t nexti = $nc(this->pageRangesAttr)->next(i);
							if (nexti == -1) {
								break;
							} else if (nexti != i + 1) {
								continue;
							}
						}
						for (int32_t nonCollated = 0; nonCollated < numNonCollatedCopies && pageResult == $Printable::PAGE_EXISTS; ++nonCollated) {
							if (isCancelled()) {
								cancelDoc();
							}
							debug_println($$str({"printPage "_s, $$str(i)}));
							pageResult = printPage(this->mDocument, i);
						}
					}
				}
			}
			if (isCancelled()) {
				cancelDoc();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$set(this, previousPaper, nullptr);
			$synchronized(this) {
				if (this->performingPrinting) {
					endDoc();
				}
				this->performingPrinting = false;
				$of(this)->notify();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void RasterPrinterJob::validateDestination($String* dest) {
	if (dest == nullptr) {
		return;
	}
	$var($File, f, $new($File, dest));
	try {
		if (f->createNewFile()) {
			f->delete$();
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($PrinterException, $$str({"Cannot write to file:"_s, dest}));
	} catch ($SecurityException&) {
		$catch();
	}
	$var($File, pFile, f->getParentFile());
	bool var$1 = f->exists();
	if (var$1) {
		bool var$2 = !f->isFile();
		var$1 = (var$2 || !f->canWrite());
	}
	bool var$0 = (var$1);
	if (!var$0) {
		bool var$3 = (pFile != nullptr);
		if (var$3) {
			bool var$4 = !pFile->exists();
			if (!var$4) {
				bool var$5 = $nc(pFile)->exists();
				var$4 = (var$5 && !pFile->canWrite());
			}
			var$3 = (var$4);
		}
		var$0 = (var$3);
	}
	if (var$0) {
		if (f->exists()) {
			f->delete$();
		}
		$throwNew($PrinterException, $$str({"Cannot write to file:"_s, dest}));
	}
}

void RasterPrinterJob::validatePaper($Paper* origPaper, $Paper* newPaper) {
	if (origPaper == nullptr || newPaper == nullptr) {
		return;
	} else {
		double wid = $nc(origPaper)->getWidth();
		double hgt = origPaper->getHeight();
		double ix = origPaper->getImageableX();
		double iy = origPaper->getImageableY();
		double iw = origPaper->getImageableWidth();
		double ih = origPaper->getImageableHeight();
		$var($Paper, defaultPaper, $new($Paper));
		wid = ((wid > 0.0) ? wid : defaultPaper->getWidth());
		hgt = ((hgt > 0.0) ? hgt : defaultPaper->getHeight());
		ix = ((ix > 0.0) ? ix : defaultPaper->getImageableX());
		iy = ((iy > 0.0) ? iy : defaultPaper->getImageableY());
		iw = ((iw > 0.0) ? iw : defaultPaper->getImageableWidth());
		ih = ((ih > 0.0) ? ih : defaultPaper->getImageableHeight());
		if (iw > wid) {
			iw = wid;
		}
		if (ih > hgt) {
			ih = hgt;
		}
		if ((ix + iw) > wid) {
			ix = wid - iw;
		}
		if ((iy + ih) > hgt) {
			iy = hgt - ih;
		}
		$nc(newPaper)->setSize(wid, hgt);
		newPaper->setImageableArea(ix, iy, iw, ih);
	}
}

$PageFormat* RasterPrinterJob::defaultPage($PageFormat* page) {
	$var($PageFormat, newPage, $cast($PageFormat, $nc(page)->clone()));
	$nc(newPage)->setOrientation($PageFormat::PORTRAIT);
	$var($Paper, newPaper, $new($Paper));
	double ptsPerInch = 72.0;
	double w = 0.0;
	double h = 0.0;
	$var($Media, media, nullptr);
	$var($PrintService, service, getPrintService());
	if (service != nullptr) {
		$var($MediaSize, size, nullptr);
		$load($Media);
		$assign(media, $cast($Media, service->getDefaultAttributeValue($Media::class$)));
		if ($instanceOf($MediaSizeName, media) && (($assign(size, $MediaSize::getMediaSizeForName($cast($MediaSizeName, media)))) != nullptr)) {
			w = $nc(size)->getX($MediaSize::INCH) * ptsPerInch;
			h = size->getY($MediaSize::INCH) * ptsPerInch;
			newPaper->setSize(w, h);
			newPaper->setImageableArea(ptsPerInch, ptsPerInch, w - 2.0 * ptsPerInch, h - 2.0 * ptsPerInch);
			newPage->setPaper(newPaper);
			return newPage;
		}
	}
	$var($String, defaultCountry, $nc($($Locale::getDefault()))->getCountry());
	bool var$1 = !$nc($($Locale::getDefault()))->equals($Locale::ENGLISH) && defaultCountry != nullptr;
	bool var$0 = var$1 && !defaultCountry->equals($($nc($Locale::US)->getCountry()));
	if (var$0 && !defaultCountry->equals($($nc($Locale::CANADA)->getCountry()))) {
		double mmPerInch = 25.4;
		w = $Math::rint((210.0 * ptsPerInch) / mmPerInch);
		h = $Math::rint((297.0 * ptsPerInch) / mmPerInch);
		newPaper->setSize(w, h);
		newPaper->setImageableArea(ptsPerInch, ptsPerInch, w - 2.0 * ptsPerInch, h - 2.0 * ptsPerInch);
	}
	newPage->setPaper(newPaper);
	return newPage;
}

$PageFormat* RasterPrinterJob::validatePage($PageFormat* page) {
	$var($PageFormat, newPage, $cast($PageFormat, $nc(page)->clone()));
	$var($Paper, newPaper, $new($Paper));
	validatePaper($($nc(newPage)->getPaper()), newPaper);
	$nc(newPage)->setPaper(newPaper);
	return newPage;
}

void RasterPrinterJob::setCopies(int32_t copies) {
	this->mNumCopies = copies;
}

int32_t RasterPrinterJob::getCopies() {
	return this->mNumCopies;
}

int32_t RasterPrinterJob::getCopiesInt() {
	return (this->copiesAttr > 0) ? this->copiesAttr : getCopies();
}

$String* RasterPrinterJob::getUserName() {
	return $System::getProperty("user.name"_s);
}

$String* RasterPrinterJob::getUserNameInt() {
	if (this->userNameAttr != nullptr) {
		return this->userNameAttr;
	} else {
		try {
			return getUserName();
		} catch ($SecurityException&) {
			$var($SecurityException, e, $catch());
			return ""_s;
		}
	}
	$shouldNotReachHere();
}

void RasterPrinterJob::setJobName($String* jobName) {
	if (jobName != nullptr) {
		$set(this, mDocName, jobName);
	} else {
		$throwNew($NullPointerException);
	}
}

$String* RasterPrinterJob::getJobName() {
	return this->mDocName;
}

$String* RasterPrinterJob::getJobNameInt() {
	return (this->jobNameAttr != nullptr) ? this->jobNameAttr : getJobName();
}

void RasterPrinterJob::setPageRange(int32_t firstPage, int32_t lastPage) {
	if (firstPage >= 0 && lastPage >= 0) {
		this->mFirstPage = firstPage;
		this->mLastPage = lastPage;
		if (this->mLastPage < this->mFirstPage) {
			this->mLastPage = this->mFirstPage;
		}
	} else {
		this->mFirstPage = $Pageable::UNKNOWN_NUMBER_OF_PAGES;
		this->mLastPage = $Pageable::UNKNOWN_NUMBER_OF_PAGES;
	}
}

int32_t RasterPrinterJob::getFirstPage() {
	return this->mFirstPage == $Book::UNKNOWN_NUMBER_OF_PAGES ? 0 : this->mFirstPage;
}

int32_t RasterPrinterJob::getLastPage() {
	return this->mLastPage;
}

void RasterPrinterJob::setCollated(bool collate) {
	this->mCollate = collate;
	this->collateAttReq = true;
}

bool RasterPrinterJob::isCollated() {
	return this->mCollate;
}

int32_t RasterPrinterJob::getSelectAttrib() {
	if (this->attributes != nullptr) {
		$load($SunPageSelection);
		$var($SunPageSelection, pages, $cast($SunPageSelection, $nc(this->attributes)->get($SunPageSelection::class$)));
		$init($SunPageSelection);
		if (pages == $SunPageSelection::RANGE) {
			return RasterPrinterJob::PD_PAGENUMS;
		} else {
			if (pages == $SunPageSelection::SELECTION) {
				return RasterPrinterJob::PD_SELECTION;
			} else {
				if (pages == $SunPageSelection::ALL) {
					return RasterPrinterJob::PD_ALLPAGES;
				}
			}
		}
	}
	return RasterPrinterJob::PD_NOSELECTION;
}

int32_t RasterPrinterJob::getFromPageAttrib() {
	if (this->attributes != nullptr) {
		$load($PageRanges);
		$var($PageRanges, pageRangesAttr, $cast($PageRanges, $nc(this->attributes)->get($PageRanges::class$)));
		if (pageRangesAttr != nullptr) {
			$var($intArray2, range, pageRangesAttr->getMembers());
			return $nc($nc(range)->get(0))->get(0);
		}
	}
	return getMinPageAttrib();
}

int32_t RasterPrinterJob::getToPageAttrib() {
	if (this->attributes != nullptr) {
		$load($PageRanges);
		$var($PageRanges, pageRangesAttr, $cast($PageRanges, $nc(this->attributes)->get($PageRanges::class$)));
		if (pageRangesAttr != nullptr) {
			$var($intArray2, range, pageRangesAttr->getMembers());
			return $nc($nc(range)->get(range->length - 1))->get(1);
		}
	}
	return getMaxPageAttrib();
}

int32_t RasterPrinterJob::getMinPageAttrib() {
	if (this->attributes != nullptr) {
		$load($SunMinMaxPage);
		$var($SunMinMaxPage, s, $cast($SunMinMaxPage, $nc(this->attributes)->get($SunMinMaxPage::class$)));
		if (s != nullptr) {
			return s->getMin();
		}
	}
	return 1;
}

int32_t RasterPrinterJob::getMaxPageAttrib() {
	if (this->attributes != nullptr) {
		$load($SunMinMaxPage);
		$var($SunMinMaxPage, s, $cast($SunMinMaxPage, $nc(this->attributes)->get($SunMinMaxPage::class$)));
		if (s != nullptr) {
			return s->getMax();
		}
	}
	$var($Pageable, pageable, getPageable());
	if (pageable != nullptr) {
		int32_t numPages = pageable->getNumberOfPages();
		if (numPages <= $Pageable::UNKNOWN_NUMBER_OF_PAGES) {
			numPages = RasterPrinterJob::MAX_UNKNOWN_PAGES;
		}
		return ((numPages == 0) ? 1 : numPages);
	}
	return $Integer::MAX_VALUE;
}

void RasterPrinterJob::cancelDoc() {
	abortDoc();
	$synchronized(this) {
		this->userCancelled = false;
		this->performingPrinting = false;
		$of(this)->notify();
	}
	$throwNew($PrinterAbortException);
}

int32_t RasterPrinterJob::getCollatedCopies() {
	return isCollated() ? getCopiesInt() : 1;
}

int32_t RasterPrinterJob::getNoncollatedCopies() {
	return isCollated() ? 1 : getCopiesInt();
}

void RasterPrinterJob::setGraphicsConfigInfo($AffineTransform* at, double pw, double ph) {
	$synchronized(this) {
		$var($Point2D$Double, pt, $new($Point2D$Double, pw, ph));
		$nc(at)->transform(pt, pt);
		bool var$1 = this->pgConfig == nullptr || this->defaultDeviceTransform == nullptr || !at->equals(this->defaultDeviceTransform);
		bool var$0 = var$1 || this->deviceWidth != $cast(int32_t, pt->getX());
		if (var$0 || this->deviceHeight != $cast(int32_t, pt->getY())) {
			this->deviceWidth = $cast(int32_t, pt->getX());
			this->deviceHeight = $cast(int32_t, pt->getY());
			$set(this, defaultDeviceTransform, at);
			$set(this, pgConfig, nullptr);
		}
	}
}

$PrinterGraphicsConfig* RasterPrinterJob::getPrinterGraphicsConfig() {
	$synchronized(this) {
		if (this->pgConfig != nullptr) {
			return this->pgConfig;
		}
		$var($String, deviceID, "Printer Device"_s);
		$var($PrintService, service, getPrintService());
		if (service != nullptr) {
			$assign(deviceID, $of(service)->toString());
		}
		$set(this, pgConfig, $new($PrinterGraphicsConfig, deviceID, this->defaultDeviceTransform, this->deviceWidth, this->deviceHeight));
		return this->pgConfig;
	}
}

int32_t RasterPrinterJob::printPage($Pageable* document, int32_t pageIndex) {
	$var($PageFormat, page, nullptr);
	$var($PageFormat, origPage, nullptr);
	$var($Printable, painter, nullptr);
	try {
		$assign(origPage, $nc(document)->getPageFormat(pageIndex));
		$assign(page, $cast($PageFormat, $nc(origPage)->clone()));
		$assign(painter, document->getPrintable(pageIndex));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($PrinterException, pe, $new($PrinterException, $$str({"Error getting page or printable.[ "_s, e, " ]"_s})));
		pe->initCause(e);
		$throw(pe);
	}
	$var($Paper, paper, $nc(page)->getPaper());
	if (page->getOrientation() != $PageFormat::PORTRAIT && this->landscapeRotates270) {
		double left = $nc(paper)->getImageableX();
		double top = paper->getImageableY();
		double width = paper->getImageableWidth();
		double height = paper->getImageableHeight();
		double var$0 = paper->getWidth() - left - width;
		paper->setImageableArea(var$0, paper->getHeight() - top - height, width, height);
		page->setPaper(paper);
		if (page->getOrientation() == $PageFormat::LANDSCAPE) {
			page->setOrientation($PageFormat::REVERSE_LANDSCAPE);
		} else {
			page->setOrientation($PageFormat::LANDSCAPE);
		}
	}
	double xScale = getXRes() / 72.0;
	double yScale = getYRes() / 72.0;
	double var$1 = $nc(paper)->getImageableX() * xScale;
	double var$2 = paper->getImageableY() * yScale;
	double var$3 = paper->getImageableWidth() * xScale;
	$var($Rectangle2D, deviceArea, $new($Rectangle2D$Double, var$1, var$2, var$3, paper->getImageableHeight() * yScale));
	$var($AffineTransform, uniformTransform, $new($AffineTransform));
	$var($AffineTransform, scaleTransform, $new($AffineTransform));
	scaleTransform->scale(xScale, yScale);
	int32_t bandWidth = $cast(int32_t, deviceArea->getWidth());
	if (bandWidth % 4 != 0) {
		bandWidth += (4 - (bandWidth % 4));
	}
	if (bandWidth <= 0) {
		$throwNew($PrinterException, "Paper\'s imageable width is too small."_s);
	}
	int32_t deviceAreaHeight = $cast(int32_t, deviceArea->getHeight());
	if (deviceAreaHeight <= 0) {
		$throwNew($PrinterException, "Paper\'s imageable height is too small."_s);
	}
	int32_t bandHeight = ($div(RasterPrinterJob::MAX_BAND_SIZE, bandWidth) / 3);
	int32_t deviceLeft = $cast(int32_t, $Math::rint($nc(paper)->getImageableX() * xScale));
	int32_t deviceTop = $cast(int32_t, $Math::rint($nc(paper)->getImageableY() * yScale));
	$var($AffineTransform, deviceTransform, $new($AffineTransform));
	deviceTransform->translate((double)(-deviceLeft), (double)deviceTop);
	deviceTransform->translate((double)0, (double)bandHeight);
	deviceTransform->scale((double)1, (double)-1);
	$var($BufferedImage, pBand, $new($BufferedImage, 1, 1, $BufferedImage::TYPE_3BYTE_BGR));
	$var($PeekGraphics, peekGraphics, createPeekGraphics($(pBand->createGraphics()), this));
	double var$4 = page->getImageableX();
	double var$5 = page->getImageableY();
	double var$6 = page->getImageableWidth();
	$var($Rectangle2D$Double, pageFormatArea, $new($Rectangle2D$Double, var$4, var$5, var$6, page->getImageableHeight()));
	$nc(peekGraphics)->transform(scaleTransform);
	double var$7 = -getPhysicalPrintableX(paper) / xScale;
	peekGraphics->translate(var$7, -getPhysicalPrintableY(paper) / yScale);
	peekGraphics->transform($$new($AffineTransform, $(page->getMatrix())));
	initPrinterGraphics(peekGraphics, pageFormatArea);
	$var($AffineTransform, pgAt, peekGraphics->getTransform());
	$var($AffineTransform, var$8, scaleTransform);
	double var$9 = $nc(paper)->getWidth();
	setGraphicsConfigInfo(var$8, var$9, paper->getHeight());
	int32_t pageResult = $nc(painter)->print(peekGraphics, origPage, pageIndex);
	debug_println($$str({"pageResult "_s, $$str(pageResult)}));
	if (pageResult == $Printable::PAGE_EXISTS) {
		debug_println($$str({"startPage "_s, $$str(pageIndex)}));
		$var($Paper, thisPaper, page->getPaper());
		bool var$11 = this->previousPaper == nullptr;
		if (!var$11) {
			double var$12 = $nc(thisPaper)->getWidth();
			var$11 = var$12 != $nc(this->previousPaper)->getWidth();
		}
		bool var$10 = var$11;
		if (!var$10) {
			double var$13 = $nc(thisPaper)->getHeight();
			var$10 = var$13 != $nc(this->previousPaper)->getHeight();
		}
		bool paperChanged = var$10;
		$set(this, previousPaper, thisPaper);
		startPage(page, painter, pageIndex, paperChanged);
		$var($Graphics2D, pathGraphics, createPathGraphics(peekGraphics, this, painter, page, pageIndex));
		if (pathGraphics != nullptr) {
			pathGraphics->transform(scaleTransform);
			double var$14 = -getPhysicalPrintableX(paper) / xScale;
			pathGraphics->translate(var$14, -getPhysicalPrintableY(paper) / yScale);
			pathGraphics->transform($$new($AffineTransform, $(page->getMatrix())));
			initPrinterGraphics(pathGraphics, pageFormatArea);
			$nc(this->redrawList)->clear();
			$var($AffineTransform, initialTx, pathGraphics->getTransform());
			painter->print(pathGraphics, origPage, pageIndex);
			for (int32_t i = 0; i < $nc(this->redrawList)->size(); ++i) {
				$var($RasterPrinterJob$GraphicsState, gstate, $cast($RasterPrinterJob$GraphicsState, $nc(this->redrawList)->get(i)));
				pathGraphics->setTransform(initialTx);
				$nc(($cast($PathGraphics, pathGraphics)))->redrawRegion($nc(gstate)->region, gstate->sx, gstate->sy, gstate->theClip, gstate->theTransform);
			}
		} else {
			$var($BufferedImage, band, this->cachedBand);
			if (this->cachedBand == nullptr || bandWidth != this->cachedBandWidth || bandHeight != this->cachedBandHeight) {
				$assign(band, $new($BufferedImage, bandWidth, bandHeight, $BufferedImage::TYPE_3BYTE_BGR));
				$set(this, cachedBand, band);
				this->cachedBandWidth = bandWidth;
				this->cachedBandHeight = bandHeight;
			}
			$var($Graphics2D, bandGraphics, $nc(band)->createGraphics());
			$var($Rectangle2D$Double, clipArea, $new($Rectangle2D$Double, (double)0, (double)0, (double)bandWidth, (double)bandHeight));
			initPrinterGraphics(bandGraphics, clipArea);
			$var($ProxyGraphics2D, painterGraphics, $new($ProxyGraphics2D, bandGraphics, this));
			$var($Graphics2D, clearGraphics, band->createGraphics());
			$init($Color);
			$nc(clearGraphics)->setColor($Color::white);
			$var($ByteInterleavedRaster, tile, $cast($ByteInterleavedRaster, band->getRaster()));
			$var($bytes, data, $nc(tile)->getDataStorage());
			int32_t deviceBottom = deviceTop + deviceAreaHeight;
			int32_t deviceAddressableX = $cast(int32_t, getPhysicalPrintableX(paper));
			int32_t deviceAddressableY = $cast(int32_t, getPhysicalPrintableY(paper));
			for (int32_t bandTop = 0; bandTop <= deviceAreaHeight; bandTop += bandHeight) {
				clearGraphics->fillRect(0, 0, bandWidth, bandHeight);
				$nc(bandGraphics)->setTransform(uniformTransform);
				bandGraphics->transform(deviceTransform);
				deviceTransform->translate((double)0, (double)(-bandHeight));
				bandGraphics->transform(scaleTransform);
				bandGraphics->transform($$new($AffineTransform, $(page->getMatrix())));
				$var($Rectangle, clip, bandGraphics->getClipBounds());
				$assign(clip, $nc($($nc(pgAt)->createTransformedShape(clip)))->getBounds());
				if ((clip == nullptr) || peekGraphics->hitsDrawingArea(clip) && (bandWidth > 0 && bandHeight > 0)) {
					int32_t bandX = deviceLeft - deviceAddressableX;
					if (bandX < 0) {
						bandGraphics->translate(bandX / xScale, (double)0);
						bandX = 0;
					}
					int32_t bandY = deviceTop + bandTop - deviceAddressableY;
					if (bandY < 0) {
						bandGraphics->translate((double)0, bandY / yScale);
						bandY = 0;
					}
					painterGraphics->setDelegate($cast($Graphics2D, $(bandGraphics->create())));
					painter->print(painterGraphics, origPage, pageIndex);
					painterGraphics->dispose();
					printBand(data, bandX, bandY, bandWidth, bandHeight);
				}
			}
			clearGraphics->dispose();
			$nc(bandGraphics)->dispose();
		}
		debug_println($$str({"calling endPage "_s, $$str(pageIndex)}));
		endPage(page, painter, pageIndex);
	}
	return pageResult;
}

void RasterPrinterJob::cancel() {
	$synchronized(this) {
		if (this->performingPrinting) {
			this->userCancelled = true;
		}
		$of(this)->notify();
	}
}

bool RasterPrinterJob::isCancelled() {
	bool cancelled = false;
	$synchronized(this) {
		cancelled = (this->performingPrinting && this->userCancelled);
		$of(this)->notify();
	}
	return cancelled;
}

$Pageable* RasterPrinterJob::getPageable() {
	return this->mDocument;
}

$Graphics2D* RasterPrinterJob::createPathGraphics($PeekGraphics* graphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* pageFormat, int32_t pageIndex) {
	return nullptr;
}

$PeekGraphics* RasterPrinterJob::createPeekGraphics($Graphics2D* graphics, $PrinterJob* printerJob) {
	return $new($PeekGraphics, graphics, printerJob);
}

void RasterPrinterJob::initPrinterGraphics($Graphics2D* g, $Rectangle2D* clip) {
	$nc(g)->setClip(clip);
	$init($Color);
	g->setPaint($Color::black);
}

bool RasterPrinterJob::checkAllowedToPrintToFile() {
	try {
		throwPrintToFile();
		return true;
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

void RasterPrinterJob::throwPrintToFile() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		if (this->printToFilePermission == nullptr) {
			$set(this, printToFilePermission, $new($FilePermission, "<<ALL FILES>>"_s, "read,write"_s));
		}
		security->checkPermission(this->printToFilePermission);
	}
}

$String* RasterPrinterJob::removeControlChars($String* s) {
	$var($chars, in_chars, $nc(s)->toCharArray());
	int32_t len = in_chars->length;
	$var($chars, out_chars, $new($chars, len));
	int32_t pos = 0;
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = in_chars->get(i);
		if (c > u'\r' || c < u'\t' || c == (char16_t)0xB || c == u'\f') {
			out_chars->set(pos++, c);
		}
	}
	if (pos == len) {
		return s;
	} else {
		return $new($String, out_chars, 0, pos);
	}
}

int64_t RasterPrinterJob::getParentWindowID() {
	return this->parentWindowID;
}

void RasterPrinterJob::clearParentWindowID() {
	this->parentWindowID = 0;
	$set(this, onTop, nullptr);
}

void RasterPrinterJob::setParentWindowID($PrintRequestAttributeSet* attrs) {
	this->parentWindowID = 0;
	$load($DialogOwner);
	$set(this, onTop, $cast($DialogOwner, $nc(attrs)->get($DialogOwner::class$)));
	if (this->onTop != nullptr) {
		this->parentWindowID = $DialogOwnerAccessor::getID(this->onTop);
	}
}

void clinit$RasterPrinterJob($Class* class$) {
	RasterPrinterJob::DPI = 72.0f;
	$assignStatic(RasterPrinterJob::FORCE_PIPE_PROP, "sun.java2d.print.pipeline"_s);
	$assignStatic(RasterPrinterJob::FORCE_RASTER, "raster"_s);
	$assignStatic(RasterPrinterJob::FORCE_PDL, "pdl"_s);
	$assignStatic(RasterPrinterJob::SHAPE_TEXT_PROP, "sun.java2d.print.shapetext"_s);
	$beforeCallerSensitive();
	RasterPrinterJob::forcePDL = false;
	RasterPrinterJob::forceRaster = false;
	RasterPrinterJob::shapeTextProp = false;
	{
		$var($String, forceStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, RasterPrinterJob::FORCE_PIPE_PROP)))));
		if (forceStr != nullptr) {
			if (forceStr->equalsIgnoreCase(RasterPrinterJob::FORCE_PDL)) {
				RasterPrinterJob::forcePDL = true;
			} else if (forceStr->equalsIgnoreCase(RasterPrinterJob::FORCE_RASTER)) {
				RasterPrinterJob::forceRaster = true;
			}
		}
		$var($String, shapeTextStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, RasterPrinterJob::SHAPE_TEXT_PROP)))));
		if (shapeTextStr != nullptr) {
			RasterPrinterJob::shapeTextProp = true;
		}
	}
	RasterPrinterJob::debugPrint = false;
}

RasterPrinterJob::RasterPrinterJob() {
}

$Class* RasterPrinterJob::load$($String* name, bool initialize) {
	$loadClass(RasterPrinterJob, name, initialize, &_RasterPrinterJob_ClassInfo_, clinit$RasterPrinterJob, allocate$RasterPrinterJob);
	return class$;
}

$Class* RasterPrinterJob::class$ = nullptr;

	} // print
} // sun