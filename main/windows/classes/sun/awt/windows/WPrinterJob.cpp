#include <sun/awt/windows/WPrinterJob.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/Permission.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/PrintQuality.h>
#include <javax/print/attribute/standard/PrinterResolution.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/Win32FontManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPageDialog.h>
#include <sun/awt/windows/WPathGraphics.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WPrinterJob$DevModeValues.h>
#include <sun/awt/windows/WPrinterJob$HandleRecord.h>
#include <sun/awt/windows/WPrinterJob$PrintToFileErrorDialog.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/print/PathGraphics.h>
#include <sun/print/PeekGraphics.h>
#include <sun/print/PeekMetrics.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <sun/print/ProxyGraphics2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/print/ServiceDialog.h>
#include <sun/print/SunAlternateMedia.h>
#include <sun/print/SunPageSelection.h>
#include <sun/print/Win32MediaTray.h>
#include <sun/print/Win32PrintService.h>
#include <jcpp.h>

#undef ALL
#undef BOLD
#undef BOTTOM
#undef CAP_BUTT
#undef CAP_ROUND
#undef CAP_SQUARE
#undef COLLATED
#undef COLOR
#undef DMCOLLATE_FALSE
#undef DMCOLLATE_TRUE
#undef DMCOLOR_COLOR
#undef DMCOLOR_MONOCHROME
#undef DMDUP_HORIZONTAL
#undef DMDUP_SIMPLEX
#undef DMDUP_VERTICAL
#undef DMORIENT_LANDSCAPE
#undef DMORIENT_PORTRAIT
#undef DMRES_DRAFT
#undef DMRES_HIGH
#undef DMRES_LOW
#undef DMRES_MEDIUM
#undef DM_COLLATE
#undef DM_COLOR
#undef DM_COPIES
#undef DM_DEFAULTSOURCE
#undef DM_DUPLEX
#undef DM_ORIENTATION
#undef DM_PAPERSIZE
#undef DM_PRINTQUALITY
#undef DM_YRESOLUTION
#undef DPI
#undef DRAFT
#undef ENVELOPE
#undef HIGH
#undef INCH
#undef ITALIC
#undef JOIN_BEVEL
#undef JOIN_MITER
#undef JOIN_ROUND
#undef LANDSCAPE
#undef LARGE_CAPACITY
#undef MAIN
#undef MANUAL
#undef MAX_UNKNOWN_PAGES
#undef MAX_WCOLOR
#undef MIDDLE
#undef MONOCHROME
#undef NORMAL
#undef ONE_SIDED
#undef PD_COLLATE
#undef PD_NOSELECTION
#undef PD_PAGENUMS
#undef PD_PRINTTOFILE
#undef PD_SELECTION
#undef POLYFILL_ALTERNATE
#undef POLYFILL_WINDING
#undef PORTRAIT
#undef PS_ENDCAP_FLAT
#undef PS_ENDCAP_ROUND
#undef PS_ENDCAP_SQUARE
#undef PS_JOIN_BEVEL
#undef PS_JOIN_MITER
#undef PS_JOIN_ROUND
#undef RANGE
#undef REVERSE_LANDSCAPE
#undef SAVE
#undef SELECTION
#undef SET_COLLATED
#undef SET_COLOR
#undef SET_DUP_HORIZONTAL
#undef SET_DUP_VERTICAL
#undef SET_ORIENTATION
#undef SET_RES_HIGH
#undef SET_RES_LOW
#undef SIDE
#undef TOP
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef TYPE_INT_RGB
#undef UNCOLLATED

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FileDialog = ::java::awt::FileDialog;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Permission = ::java::security::Permission;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $ResolutionSyntax = ::javax::print::attribute::ResolutionSyntax;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $URISyntax = ::javax::print::attribute::URISyntax;
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $PrintQuality = ::javax::print::attribute::standard::PrintQuality;
using $PrinterResolution = ::javax::print::attribute::standard::PrinterResolution;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WPageDialog = ::sun::awt::windows::WPageDialog;
using $WPathGraphics = ::sun::awt::windows::WPathGraphics;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WPrinterJob$DevModeValues = ::sun::awt::windows::WPrinterJob$DevModeValues;
using $WPrinterJob$HandleRecord = ::sun::awt::windows::WPrinterJob$HandleRecord;
using $WPrinterJob$PrintToFileErrorDialog = ::sun::awt::windows::WPrinterJob$PrintToFileErrorDialog;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $DisposerTarget = ::sun::java2d::DisposerTarget;
using $PathGraphics = ::sun::print::PathGraphics;
using $PeekGraphics = ::sun::print::PeekGraphics;
using $PeekMetrics = ::sun::print::PeekMetrics;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $SunAlternateMedia = ::sun::print::SunAlternateMedia;
using $SunPageSelection = ::sun::print::SunPageSelection;
using $Win32MediaTray = ::sun::print::Win32MediaTray;
using $Win32PrintService = ::sun::print::Win32PrintService;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPrinterJob_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WPrinterJob, $assertionsDisabled)},
	{"PS_ENDCAP_ROUND", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, PS_ENDCAP_ROUND)},
	{"PS_ENDCAP_SQUARE", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, PS_ENDCAP_SQUARE)},
	{"PS_ENDCAP_FLAT", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, PS_ENDCAP_FLAT)},
	{"PS_JOIN_ROUND", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, PS_JOIN_ROUND)},
	{"PS_JOIN_BEVEL", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, PS_JOIN_BEVEL)},
	{"PS_JOIN_MITER", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, PS_JOIN_MITER)},
	{"POLYFILL_ALTERNATE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, POLYFILL_ALTERNATE)},
	{"POLYFILL_WINDING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WPrinterJob, POLYFILL_WINDING)},
	{"MAX_WCOLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, MAX_WCOLOR)},
	{"SET_DUP_VERTICAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_DUP_VERTICAL)},
	{"SET_DUP_HORIZONTAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_DUP_HORIZONTAL)},
	{"SET_RES_HIGH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_RES_HIGH)},
	{"SET_RES_LOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_RES_LOW)},
	{"SET_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_COLOR)},
	{"SET_ORIENTATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_ORIENTATION)},
	{"SET_COLLATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, SET_COLLATED)},
	{"PD_COLLATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, PD_COLLATE)},
	{"PD_PRINTTOFILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, PD_PRINTTOFILE)},
	{"DM_ORIENTATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_ORIENTATION)},
	{"DM_PAPERSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_PAPERSIZE)},
	{"DM_COPIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_COPIES)},
	{"DM_DEFAULTSOURCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_DEFAULTSOURCE)},
	{"DM_PRINTQUALITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_PRINTQUALITY)},
	{"DM_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_COLOR)},
	{"DM_DUPLEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_DUPLEX)},
	{"DM_YRESOLUTION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_YRESOLUTION)},
	{"DM_COLLATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DM_COLLATE)},
	{"DMCOLLATE_FALSE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMCOLLATE_FALSE)},
	{"DMCOLLATE_TRUE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMCOLLATE_TRUE)},
	{"DMORIENT_PORTRAIT", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMORIENT_PORTRAIT)},
	{"DMORIENT_LANDSCAPE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMORIENT_LANDSCAPE)},
	{"DMCOLOR_MONOCHROME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMCOLOR_MONOCHROME)},
	{"DMCOLOR_COLOR", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMCOLOR_COLOR)},
	{"DMRES_DRAFT", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMRES_DRAFT)},
	{"DMRES_LOW", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMRES_LOW)},
	{"DMRES_MEDIUM", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMRES_MEDIUM)},
	{"DMRES_HIGH", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMRES_HIGH)},
	{"DMDUP_SIMPLEX", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMDUP_SIMPLEX)},
	{"DMDUP_VERTICAL", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMDUP_VERTICAL)},
	{"DMDUP_HORIZONTAL", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, DMDUP_HORIZONTAL)},
	{"MAX_UNKNOWN_PAGES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPrinterJob, MAX_UNKNOWN_PAGES)},
	{"driverDoesMultipleCopies", "Z", nullptr, $PRIVATE, $field(WPrinterJob, driverDoesMultipleCopies)},
	{"driverDoesCollation", "Z", nullptr, $PRIVATE, $field(WPrinterJob, driverDoesCollation)},
	{"userRequestedCollation", "Z", nullptr, $PRIVATE, $field(WPrinterJob, userRequestedCollation)},
	{"noDefaultPrinter", "Z", nullptr, $PRIVATE, $field(WPrinterJob, noDefaultPrinter)},
	{"handleRecord", "Lsun/awt/windows/WPrinterJob$HandleRecord;", nullptr, $PRIVATE, $field(WPrinterJob, handleRecord)},
	{"mPrintPaperSize", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintPaperSize)},
	{"mPrintXRes", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintXRes)},
	{"mPrintYRes", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintYRes)},
	{"mPrintPhysX", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintPhysX)},
	{"mPrintPhysY", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintPhysY)},
	{"mPrintWidth", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintWidth)},
	{"mPrintHeight", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPrintHeight)},
	{"mPageWidth", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPageWidth)},
	{"mPageHeight", "I", nullptr, $PRIVATE, $field(WPrinterJob, mPageHeight)},
	{"mAttSides", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttSides)},
	{"mAttChromaticity", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttChromaticity)},
	{"mAttXRes", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttXRes)},
	{"mAttYRes", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttYRes)},
	{"mAttQuality", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttQuality)},
	{"mAttCollate", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttCollate)},
	{"mAttCopies", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttCopies)},
	{"mAttMediaSizeName", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttMediaSizeName)},
	{"mAttMediaTray", "I", nullptr, $PRIVATE, $field(WPrinterJob, mAttMediaTray)},
	{"mDestination", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WPrinterJob, mDestination)},
	{"mLastColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WPrinterJob, mLastColor)},
	{"mLastTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WPrinterJob, mLastTextColor)},
	{"mLastFontFamily", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WPrinterJob, mLastFontFamily)},
	{"mLastFontSize", "F", nullptr, $PRIVATE, $field(WPrinterJob, mLastFontSize)},
	{"mLastFontStyle", "I", nullptr, $PRIVATE, $field(WPrinterJob, mLastFontStyle)},
	{"mLastRotation", "I", nullptr, $PRIVATE, $field(WPrinterJob, mLastRotation)},
	{"mLastAwScale", "F", nullptr, $PRIVATE, $field(WPrinterJob, mLastAwScale)},
	{"pjob", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE, $field(WPrinterJob, pjob)},
	{"dialogOwnerPeer", "Ljava/awt/peer/ComponentPeer;", nullptr, $PRIVATE, $field(WPrinterJob, dialogOwnerPeer)},
	{"graphicsMode", "I", nullptr, $PRIVATE, $field(WPrinterJob, graphicsMode)},
	{"worldTransform", "[D", nullptr, $PRIVATE, $field(WPrinterJob, worldTransform)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(WPrinterJob, disposerReferent)},
	{"lastNativeService", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WPrinterJob, lastNativeService)},
	{"defaultCopies", "Z", nullptr, $PRIVATE, $field(WPrinterJob, defaultCopies)},
	{}
};

$MethodInfo _WPrinterJob_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::init$))},
	{"_startDoc", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WPrinterJob::*)($String*,$String*)>(&WPrinterJob::_startDoc)), "java.awt.print.PrinterException"},
	{"abortDoc", "()V", nullptr, $PROTECTED | $NATIVE},
	{"addPaperSize", "(Ljavax/print/attribute/PrintRequestAttributeSet;III)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($PrintRequestAttributeSet*,int32_t,int32_t,int32_t)>(&WPrinterJob::addPaperSize))},
	{"beginPath", "()V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::beginPath))},
	{"beginPath", "(J)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::beginPath))},
	{"closeFigure", "()V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::closeFigure))},
	{"closeFigure", "(J)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::closeFigure))},
	{"createPathGraphics", "(Lsun/print/PeekGraphics;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;I)Ljava/awt/Graphics2D;", nullptr, $PROTECTED},
	{"defaultPage", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"deleteDC", "(JJJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&WPrinterJob::deleteDC))},
	{"deviceEndPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;I)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)($PageFormat*,$Printable*,int32_t)>(&WPrinterJob::deviceEndPage))},
	{"deviceStartPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;IZ)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)($PageFormat*,$Printable*,int32_t,bool)>(&WPrinterJob::deviceStartPage))},
	{"displayNativeDialog", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(WPrinterJob::*)()>(&WPrinterJob::displayNativeDialog))},
	{"drawDIBImage", "([BFFFFFFFFILjava/awt/image/IndexColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)($bytes*,float,float,float,float,float,float,float,float,int32_t,$IndexColorModel*)>(&WPrinterJob::drawDIBImage))},
	{"drawDIBImage", "(J[BFFFFFFFFI[B)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,$bytes*,float,float,float,float,float,float,float,float,int32_t,$bytes*)>(&WPrinterJob::drawDIBImage))},
	{"drawImage3ByteBGR", "([BFFFFFFFF)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)($bytes*,float,float,float,float,float,float,float,float)>(&WPrinterJob::drawImage3ByteBGR))},
	{"endDoc", "()V", nullptr, $PROTECTED | $NATIVE},
	{"endPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;I)V", nullptr, $PROTECTED},
	{"endPath", "()V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::endPath))},
	{"endPath", "(J)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::endPath))},
	{"fillPath", "()V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::fillPath))},
	{"fillPath", "(J)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::fillPath))},
	{"fillRect", "(FFFFLjava/awt/Color;)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float,float,float,float,$Color*)>(&WPrinterJob::fillRect))},
	{"fillRect", "(JFFFFIII)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,float,float,float,float,int32_t,int32_t,int32_t)>(&WPrinterJob::fillRect))},
	{"frameRect", "(FFFF)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float,float,float,float)>(&WPrinterJob::frameRect))},
	{"frameRect", "(JFFFF)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,float,float,float,float)>(&WPrinterJob::frameRect))},
	{"getCollateAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getCollateAttrib))},
	{"getCollatedCopies", "()I", nullptr, $PROTECTED},
	{"getColorAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getColorAttrib))},
	{"getCopiesAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getCopiesAttrib))},
	{"getDefaultPage", "(Ljava/awt/print/PageFormat;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WPrinterJob::*)($PageFormat*)>(&WPrinterJob::getDefaultPage))},
	{"getDestAttrib", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(WPrinterJob::*)()>(&WPrinterJob::getDestAttrib))},
	{"getDevMode", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(WPrinterJob::*)()>(&WPrinterJob::getDevMode))},
	{"getDevModeValues", "(Ljavax/print/attribute/PrintRequestAttributeSet;Lsun/awt/windows/WPrinterJob$DevModeValues;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($PrintRequestAttributeSet*,$WPrinterJob$DevModeValues*)>(&WPrinterJob::getDevModeValues))},
	{"getDevNames", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(WPrinterJob::*)()>(&WPrinterJob::getDevNames))},
	{"getDisposerReferent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getGDIAdvance", "(Ljava/lang/String;)I", nullptr, $PROTECTED, $method(static_cast<int32_t(WPrinterJob::*)($String*)>(&WPrinterJob::getGDIAdvance))},
	{"getGDIAdvance", "(JLjava/lang/String;)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WPrinterJob::*)(int64_t,$String*)>(&WPrinterJob::getGDIAdvance))},
	{"getMediaTrayAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getMediaTrayAttrib))},
	{"getNativePrintService", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(WPrinterJob::*)()>(&WPrinterJob::getNativePrintService))},
	{"getNoncollatedCopies", "()I", nullptr, $PROTECTED},
	{"getOrientAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getOrientAttrib))},
	{"getPenX", "()I", nullptr, $PROTECTED, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getPenX))},
	{"getPenX", "(J)I", nullptr, $PROTECTED | $NATIVE, $method(static_cast<int32_t(WPrinterJob::*)(int64_t)>(&WPrinterJob::getPenX))},
	{"getPenY", "()I", nullptr, $PROTECTED, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getPenY))},
	{"getPenY", "(J)I", nullptr, $PROTECTED | $NATIVE, $method(static_cast<int32_t(WPrinterJob::*)(int64_t)>(&WPrinterJob::getPenY))},
	{"getPhysicalPageHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPageWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableX", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableY", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPrintDC", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(WPrinterJob::*)()>(&WPrinterJob::getPrintDC))},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"getPrintToFileEnabled", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(WPrinterJob::*)()>(&WPrinterJob::getPrintToFileEnabled))},
	{"getPrinterAttrib", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WPrinterJob::*)()>(&WPrinterJob::getPrinterAttrib))},
	{"getQualityAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getQualityAttrib))},
	{"getSidesAttrib", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::getSidesAttrib))},
	{"getWin32MediaAttrib", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(WPrinterJob::*)()>(&WPrinterJob::getWin32MediaAttrib))},
	{"getWorldTransform", "([D)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($doubles*)>(&WPrinterJob::getWorldTransform))},
	{"getWorldTransform", "(J[D)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,$doubles*)>(&WPrinterJob::getWorldTransform))},
	{"getXRes", "()D", nullptr, $PROTECTED},
	{"getYRes", "()D", nullptr, $PROTECTED},
	{"glyphsOut", "([IFF[F)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)($ints*,float,float,$floats*)>(&WPrinterJob::glyphsOut))},
	{"initAttributeMembers", "()V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::initAttributeMembers))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WPrinterJob::initIDs))},
	{"initPrinter", "()V", nullptr, $PROTECTED | $NATIVE},
	{"invalidateCachedState", "()V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::invalidateCachedState))},
	{"isCollated", "()Z", nullptr, $PROTECTED},
	{"jobSetup", "(Ljava/awt/print/Pageable;Z)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WPrinterJob::*)($Pageable*,bool)>(&WPrinterJob::jobSetup))},
	{"lineTo", "(FF)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float,float)>(&WPrinterJob::lineTo))},
	{"lineTo", "(JFF)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,float,float)>(&WPrinterJob::lineTo))},
	{"moveTo", "(FF)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float,float)>(&WPrinterJob::moveTo))},
	{"moveTo", "(JFF)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,float,float)>(&WPrinterJob::moveTo))},
	{"pageDialog", "(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"polyBezierTo", "(FFFFFF)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float,float,float,float,float,float)>(&WPrinterJob::polyBezierTo))},
	{"polyBezierTo", "(JFFFFFF)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,float,float,float,float,float,float)>(&WPrinterJob::polyBezierTo))},
	{"printBand", "([BIIII)V", nullptr, $PROTECTED | $NATIVE},
	{"printDialog", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"removeControlChars", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"restoreTransform", "()V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::restoreTransform))},
	{"scale", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(double,double)>(&WPrinterJob::scale))},
	{"scale", "(JDD)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,double,double)>(&WPrinterJob::scale))},
	{"scaleTransform", "(F)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float)>(&WPrinterJob::scaleTransform))},
	{"selectClipPath", "()V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)()>(&WPrinterJob::selectClipPath))},
	{"selectClipPath", "(J)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::selectClipPath))},
	{"selectPen", "(FLjava/awt/Color;)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(float,$Color*)>(&WPrinterJob::selectPen))},
	{"selectPen", "(JFIII)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,float,int32_t,int32_t,int32_t)>(&WPrinterJob::selectPen))},
	{"selectSolidBrush", "(Ljava/awt/Color;)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)($Color*)>(&WPrinterJob::selectSolidBrush))},
	{"selectSolidBrush", "(JIII)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,int32_t,int32_t,int32_t)>(&WPrinterJob::selectSolidBrush))},
	{"selectStylePen", "(IIFLjava/awt/Color;)Z", nullptr, $PROTECTED, $method(static_cast<bool(WPrinterJob::*)(int32_t,int32_t,float,$Color*)>(&WPrinterJob::selectStylePen))},
	{"selectStylePen", "(JJJFIII)Z", nullptr, $PROTECTED | $NATIVE, $method(static_cast<bool(WPrinterJob::*)(int64_t,int64_t,int64_t,float,int32_t,int32_t,int32_t)>(&WPrinterJob::selectStylePen))},
	{"setAdvancedGraphicsMode", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPrinterJob::*)()>(&WPrinterJob::setAdvancedGraphicsMode))},
	{"setAdvancedGraphicsMode", "(J)I", nullptr, $PROTECTED | $NATIVE, $method(static_cast<int32_t(WPrinterJob::*)(int64_t)>(&WPrinterJob::setAdvancedGraphicsMode))},
	{"setAttributes", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"setCollateAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setCollateAttrib))},
	{"setCollateAttrib", "(Ljavax/print/attribute/Attribute;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*,$PrintRequestAttributeSet*)>(&WPrinterJob::setCollateAttrib))},
	{"setColorAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setColorAttrib))},
	{"setColorAttrib", "(Ljavax/print/attribute/Attribute;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*,$PrintRequestAttributeSet*)>(&WPrinterJob::setColorAttrib))},
	{"setCopies", "(I)V", nullptr, $PUBLIC},
	{"setDevMode", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::setDevMode))},
	{"setDevNames", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::setDevNames))},
	{"setFont", "(Ljava/lang/String;FIIF)Z", nullptr, $PROTECTED, $method(static_cast<bool(WPrinterJob::*)($String*,float,int32_t,int32_t,float)>(&WPrinterJob::setFont))},
	{"setFont", "(JLjava/lang/String;FZZIF)Z", nullptr, $PROTECTED | $NATIVE, $method(static_cast<bool(WPrinterJob::*)(int64_t,$String*,float,bool,bool,int32_t,float)>(&WPrinterJob::setFont))},
	{"setGraphicsMode", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int32_t)>(&WPrinterJob::setGraphicsMode))},
	{"setGraphicsMode", "(JI)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,int32_t)>(&WPrinterJob::setGraphicsMode))},
	{"setJobAttributes", "(Ljavax/print/attribute/PrintRequestAttributeSet;IISSSSSSS)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($PrintRequestAttributeSet*,int32_t,int32_t,int16_t,int16_t,int16_t,int16_t,int16_t,int16_t,int16_t)>(&WPrinterJob::setJobAttributes))},
	{"setMediaTrayAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setMediaTrayAttrib))},
	{"setMediaTrayAttrib", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int32_t)>(&WPrinterJob::setMediaTrayAttrib))},
	{"setNativeAttributes", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int32_t,int32_t,int32_t)>(&WPrinterJob::setNativeAttributes))},
	{"setNativeCopies", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int32_t)>(&WPrinterJob::setNativeCopies))},
	{"setNativePrintService", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WPrinterJob::*)($String*)>(&WPrinterJob::setNativePrintService)), "java.awt.print.PrinterException"},
	{"setNativePrintServiceIfNeeded", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($String*)>(&WPrinterJob::setNativePrintServiceIfNeeded)), "java.awt.print.PrinterException"},
	{"setOrientAttrib", "(Ljavax/print/attribute/Attribute;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*,$PrintRequestAttributeSet*)>(&WPrinterJob::setOrientAttrib))},
	{"setPolyFillMode", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)(int32_t)>(&WPrinterJob::setPolyFillMode))},
	{"setPolyFillMode", "(JI)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,int32_t)>(&WPrinterJob::setPolyFillMode))},
	{"setPrintDC", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int64_t)>(&WPrinterJob::setPrintDC))},
	{"setPrintService", "(Ljavax/print/PrintService;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"setPrinterNameAttrib", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($String*)>(&WPrinterJob::setPrinterNameAttrib))},
	{"setQualityAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setQualityAttrib))},
	{"setQualityAttrib", "(Ljavax/print/attribute/Attribute;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*,$PrintRequestAttributeSet*)>(&WPrinterJob::setQualityAttrib))},
	{"setRangeCopiesAttribute", "(IIZI)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int32_t,int32_t,bool,int32_t)>(&WPrinterJob::setRangeCopiesAttribute))},
	{"setResolutionAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setResolutionAttrib))},
	{"setResolutionDPI", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int32_t,int32_t)>(&WPrinterJob::setResolutionDPI))},
	{"setSidesAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setSidesAttrib))},
	{"setSidesAttrib", "(Ljavax/print/attribute/Attribute;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*,$PrintRequestAttributeSet*)>(&WPrinterJob::setSidesAttrib))},
	{"setTextColor", "(Ljava/awt/Color;)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)($Color*)>(&WPrinterJob::setTextColor))},
	{"setTextColor", "(JIII)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,int32_t,int32_t,int32_t)>(&WPrinterJob::setTextColor))},
	{"setWin32MediaAttrib", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($Attribute*)>(&WPrinterJob::setWin32MediaAttrib))},
	{"setWin32MediaAttrib", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)(int32_t,int32_t,int32_t)>(&WPrinterJob::setWin32MediaAttrib))},
	{"setWorldTransform", "([D)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob::*)($doubles*)>(&WPrinterJob::setWorldTransform))},
	{"setWorldTransform", "(J[D)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,$doubles*)>(&WPrinterJob::setWorldTransform))},
	{"showDocProperties", "(JLjavax/print/attribute/PrintRequestAttributeSet;ISSSSSSSSS)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WPrinterJob::*)(int64_t,$PrintRequestAttributeSet*,int32_t,int16_t,int16_t,int16_t,int16_t,int16_t,int16_t,int16_t,int16_t,int16_t)>(&WPrinterJob::showDocProperties))},
	{"showDocumentProperties", "(Ljava/awt/Window;Ljavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;)Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC, $method(static_cast<$PrintRequestAttributeSet*(WPrinterJob::*)($Window*,$PrintService*,$PrintRequestAttributeSet*)>(&WPrinterJob::showDocumentProperties))},
	{"startDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"startPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;IZ)V", nullptr, $PROTECTED},
	{"textOut", "(Ljava/lang/String;FF[F)V", nullptr, $PROTECTED, $method(static_cast<void(WPrinterJob::*)($String*,float,float,$floats*)>(&WPrinterJob::textOut))},
	{"textOut", "(JLjava/lang/String;IZFF[F)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(WPrinterJob::*)(int64_t,$String*,int32_t,bool,float,float,$floats*)>(&WPrinterJob::textOut))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validatePaper", "(Ljava/awt/print/Paper;Ljava/awt/print/Paper;)V", nullptr, $PROTECTED | $NATIVE},
	{}
};

#define _METHOD_INDEX__startDoc 5
#define _METHOD_INDEX_abortDoc 6
#define _METHOD_INDEX_beginPath 9
#define _METHOD_INDEX_closeFigure 11
#define _METHOD_INDEX_deleteDC 14
#define _METHOD_INDEX_deviceEndPage 15
#define _METHOD_INDEX_deviceStartPage 16
#define _METHOD_INDEX_drawDIBImage 19
#define _METHOD_INDEX_endDoc 21
#define _METHOD_INDEX_endPath 24
#define _METHOD_INDEX_fillPath 26
#define _METHOD_INDEX_fillRect 28
#define _METHOD_INDEX_frameRect 30
#define _METHOD_INDEX_getDefaultPage 35
#define _METHOD_INDEX_getGDIAdvance 42
#define _METHOD_INDEX_getNativePrintService 44
#define _METHOD_INDEX_getPenX 48
#define _METHOD_INDEX_getPenY 50
#define _METHOD_INDEX_getWorldTransform 65
#define _METHOD_INDEX_initIDs 70
#define _METHOD_INDEX_initPrinter 71
#define _METHOD_INDEX_jobSetup 74
#define _METHOD_INDEX_lineTo 76
#define _METHOD_INDEX_moveTo 78
#define _METHOD_INDEX_polyBezierTo 81
#define _METHOD_INDEX_printBand 82
#define _METHOD_INDEX_scale 87
#define _METHOD_INDEX_selectClipPath 90
#define _METHOD_INDEX_selectPen 92
#define _METHOD_INDEX_selectSolidBrush 94
#define _METHOD_INDEX_selectStylePen 96
#define _METHOD_INDEX_setAdvancedGraphicsMode 98
#define _METHOD_INDEX_setFont 108
#define _METHOD_INDEX_setGraphicsMode 110
#define _METHOD_INDEX_setNativeCopies 115
#define _METHOD_INDEX_setNativePrintService 116
#define _METHOD_INDEX_setPolyFillMode 120
#define _METHOD_INDEX_setTextColor 132
#define _METHOD_INDEX_setWorldTransform 136
#define _METHOD_INDEX_showDocProperties 137
#define _METHOD_INDEX_textOut 142
#define _METHOD_INDEX_validatePaper 144

$InnerClassInfo _WPrinterJob_InnerClassesInfo_[] = {
	{"sun.awt.windows.WPrinterJob$PrintToFileErrorDialog", "sun.awt.windows.WPrinterJob", "PrintToFileErrorDialog", 0},
	{"sun.awt.windows.WPrinterJob$DevModeValues", "sun.awt.windows.WPrinterJob", "DevModeValues", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.windows.WPrinterJob$HandleRecord", "sun.awt.windows.WPrinterJob", "HandleRecord", $STATIC},
	{}
};

$ClassInfo _WPrinterJob_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.WPrinterJob",
	"sun.print.RasterPrinterJob",
	"sun.java2d.DisposerTarget",
	_WPrinterJob_FieldInfo_,
	_WPrinterJob_MethodInfo_,
	nullptr,
	nullptr,
	_WPrinterJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WPrinterJob$PrintToFileErrorDialog,sun.awt.windows.WPrinterJob$DevModeValues,sun.awt.windows.WPrinterJob$HandleRecord"
};

$Object* allocate$WPrinterJob($Class* clazz) {
	return $of($alloc(WPrinterJob));
}

int32_t WPrinterJob::hashCode() {
	 return this->$RasterPrinterJob::hashCode();
}

bool WPrinterJob::equals(Object$* arg0) {
	 return this->$RasterPrinterJob::equals(arg0);
}

$Object* WPrinterJob::clone() {
	 return this->$RasterPrinterJob::clone();
}

$String* WPrinterJob::toString() {
	 return this->$RasterPrinterJob::toString();
}

void WPrinterJob::finalize() {
	this->$RasterPrinterJob::finalize();
}

bool WPrinterJob::$assertionsDisabled = false;

void WPrinterJob::init$() {
	$RasterPrinterJob::init$();
	this->driverDoesMultipleCopies = false;
	this->driverDoesCollation = false;
	this->userRequestedCollation = false;
	this->noDefaultPrinter = false;
	$set(this, handleRecord, $new($WPrinterJob$HandleRecord));
	$set(this, mDestination, nullptr);
	$set(this, dialogOwnerPeer, nullptr);
	$set(this, worldTransform, $new($doubles, 6));
	$set(this, disposerReferent, $new($Object));
	$set(this, lastNativeService, nullptr);
	this->defaultCopies = true;
	$Disposer::addRecord(this->disposerReferent, ($assignField(this, handleRecord, $new($WPrinterJob$HandleRecord))));
	initAttributeMembers();
}

$Object* WPrinterJob::getDisposerReferent() {
	return $of(this->disposerReferent);
}

$PageFormat* WPrinterJob::pageDialog($PageFormat* page) {
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (!($instanceOf($Win32PrintService, $(getPrintService())))) {
		return $RasterPrinterJob::pageDialog(page);
	}
	$var($PageFormat, pageClone, $cast($PageFormat, $nc(page)->clone()));
	bool result = false;
	$var($WPageDialog, dialog, $new($WPageDialog, ($Frame*)nullptr, static_cast<$PrinterJob*>(this), pageClone, ($Printable*)nullptr));
	dialog->setRetVal(false);
	dialog->setVisible(true);
	result = dialog->getRetVal();
	dialog->dispose();
	if (result && (this->myService != nullptr)) {
		$var($String, printerName, getNativePrintService());
		if (!$nc($($nc(this->myService)->getName()))->equals(printerName)) {
			try {
				setPrintService($($nc($($PrintServiceLookupProvider::getWin32PrintLUS()))->getPrintServiceByName(printerName)));
			} catch ($PrinterException&) {
				$catch();
			}
		}
		updatePageAttributes(this->myService, pageClone);
		return pageClone;
	} else {
		return page;
	}
}

bool WPrinterJob::displayNativeDialog() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->attributes == nullptr) {
		return false;
	}
	$load($DialogOwner);
	$var($DialogOwner, dlgOwner, $cast($DialogOwner, $nc(this->attributes)->get($DialogOwner::class$)));
	$var($Window, owner, (dlgOwner != nullptr) ? $nc(dlgOwner)->getOwner() : ($Window*)nullptr);
	$var($WPrintDialog, dialog, ($instanceOf($Frame, owner)) ? $new($WPrintDialog, $cast($Frame, owner), static_cast<$PrinterJob*>(this)) : $new($WPrintDialog, $cast($Dialog, owner), static_cast<$PrinterJob*>(this)));
	$nc(dialog)->setRetVal(false);
	dialog->setVisible(true);
	bool prv = dialog->getRetVal();
	dialog->dispose();
	$load($Destination);
	$var($Destination, dest, $cast($Destination, $nc(this->attributes)->get($Destination::class$)));
	if ((dest == nullptr) || !prv) {
		return prv;
	} else {
		$var($String, title, nullptr);
		$var($String, strBundle, "sun.print.resources.serviceui"_s);
		$var($ResourceBundle, rb, $ResourceBundle::getBundle(strBundle));
		try {
			$assign(title, $nc(rb)->getString("dialog.printtofile"_s));
		} catch ($MissingResourceException&) {
			$catch();
		}
		$var($FileDialog, fileDialog, ($instanceOf($Frame, owner)) ? $new($FileDialog, $cast($Frame, owner), title, $FileDialog::SAVE) : $new($FileDialog, $cast($Dialog, owner), title, $FileDialog::SAVE));
		$var($URI, destURI, $nc(dest)->getURI());
		$var($String, pathName, (destURI != nullptr) ? $nc(destURI)->getSchemeSpecificPart() : ($String*)nullptr);
		if (pathName != nullptr) {
			$var($File, file, $new($File, pathName));
			$nc(fileDialog)->setFile($(file->getName()));
			$var($File, parent, file->getParentFile());
			if (parent != nullptr) {
				fileDialog->setDirectory($(parent->getPath()));
			}
		} else {
			$nc(fileDialog)->setFile("out.prn"_s);
		}
		$nc(fileDialog)->setVisible(true);
		$var($String, fileName, fileDialog->getFile());
		if (fileName == nullptr) {
			fileDialog->dispose();
			return false;
		}
		$var($String, fullName, $str({$(fileDialog->getDirectory()), fileName}));
		$var($File, f, $new($File, fullName));
		$var($File, pFile, f->getParentFile());
		while (true) {
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
			if (!(var$0)) {
				break;
			}
			{
				if ($instanceOf($Frame, owner)) {
					$var($Frame, var$6, $cast($Frame, owner));
					$var($String, var$7, $ServiceDialog::getMsg("dialog.owtitle"_s));
					$var($String, var$8, $str({$($ServiceDialog::getMsg("dialog.writeerror"_s)), " "_s, fullName}));
					($$new($WPrinterJob$PrintToFileErrorDialog, this, var$6, var$7, var$8, $($ServiceDialog::getMsg("button.ok"_s))))->setVisible(true);
				} else {
					$var($Dialog, var$9, $cast($Dialog, owner));
					$var($String, var$10, $ServiceDialog::getMsg("dialog.owtitle"_s));
					$var($String, var$11, $str({$($ServiceDialog::getMsg("dialog.writeerror"_s)), " "_s, fullName}));
					($$new($WPrinterJob$PrintToFileErrorDialog, this, var$9, var$10, var$11, $($ServiceDialog::getMsg("button.ok"_s))))->setVisible(true);
				}
				fileDialog->setVisible(true);
				$assign(fileName, fileDialog->getFile());
				if (fileName == nullptr) {
					fileDialog->dispose();
					return false;
				}
				$assign(fullName, $str({$(fileDialog->getDirectory()), fileName}));
				$assign(f, $new($File, fullName));
				$assign(pFile, f->getParentFile());
			}
		}
		fileDialog->dispose();
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>($$new($Destination, $(f->toURI())))));
		return true;
	}
}

bool WPrinterJob::printDialog() {
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashPrintRequestAttributeSet));
	}
	if (!($instanceOf($Win32PrintService, $(getPrintService())))) {
		return $RasterPrinterJob::printDialog(this->attributes);
	}
	if (this->noDefaultPrinter == true) {
		return false;
	} else {
		return displayNativeDialog();
	}
}

void WPrinterJob::setPrintService($PrintService* service) {
	$RasterPrinterJob::setPrintService(service);
	if (!($instanceOf($Win32PrintService, service))) {
		return;
	}
	this->driverDoesMultipleCopies = false;
	this->driverDoesCollation = false;
	setNativePrintServiceIfNeeded($($nc(service)->getName()));
}

void WPrinterJob::setNativePrintService($String* name) {
	$prepareNative(WPrinterJob, setNativePrintService, void, $String* name);
	$invokeNative(WPrinterJob, setNativePrintService, name);
	$finishNative();
}

void WPrinterJob::setNativePrintServiceIfNeeded($String* name) {
	if (name != nullptr && !(name->equals(this->lastNativeService))) {
		setNativePrintService(name);
		$set(this, lastNativeService, name);
	}
}

$PrintService* WPrinterJob::getPrintService() {
	$useLocalCurrentObjectStackCache();
	if (this->myService == nullptr) {
		$var($String, printerName, getNativePrintService());
		if (printerName != nullptr) {
			$set(this, myService, $nc($($PrintServiceLookupProvider::getWin32PrintLUS()))->getPrintServiceByName(printerName));
			if (this->myService != nullptr) {
				return this->myService;
			}
		}
		$set(this, myService, $PrintServiceLookup::lookupDefaultPrintService());
		if ($instanceOf($Win32PrintService, this->myService)) {
			try {
				setNativePrintServiceIfNeeded($($nc(this->myService)->getName()));
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$set(this, myService, nullptr);
			}
		}
	}
	return this->myService;
}

$String* WPrinterJob::getNativePrintService() {
	$var($String, $ret, nullptr);
	$prepareNative(WPrinterJob, getNativePrintService, $String*);
	$assign($ret, $invokeNative(WPrinterJob, getNativePrintService));
	$finishNative();
	return $ret;
}

void WPrinterJob::initAttributeMembers() {
	this->mAttSides = 0;
	this->mAttChromaticity = 0;
	this->mAttXRes = 0;
	this->mAttYRes = 0;
	this->mAttQuality = 0;
	this->mAttCollate = -1;
	this->mAttCopies = 0;
	this->mAttMediaTray = 0;
	this->mAttMediaSizeName = 0;
	$set(this, mDestination, nullptr);
}

void WPrinterJob::setAttributes($PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	initAttributeMembers();
	$RasterPrinterJob::setAttributes(attributes);
	this->mAttCopies = getCopiesInt();
	$set(this, mDestination, this->destinationAttr);
	if (attributes == nullptr) {
		return;
	}
	$var($AttributeArray, attrs, $nc(attributes)->toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$var($Attribute, attr, attrs->get(i));
		try {
			$load($Sides);
			if ($nc(attr)->getCategory() == $Sides::class$) {
				setSidesAttrib(attr);
			} else {
				$load($Chromaticity);
				if (attr->getCategory() == $Chromaticity::class$) {
					setColorAttrib(attr);
				} else {
					$load($PrinterResolution);
					if (attr->getCategory() == $PrinterResolution::class$) {
						if ($nc(this->myService)->isAttributeValueSupported(attr, nullptr, nullptr)) {
							setResolutionAttrib(attr);
						}
					} else {
						$load($PrintQuality);
						if (attr->getCategory() == $PrintQuality::class$) {
							setQualityAttrib(attr);
						} else {
							$load($SheetCollate);
							if (attr->getCategory() == $SheetCollate::class$) {
								setCollateAttrib(attr);
							} else {
								$load($Media);
								bool var$1 = attr->getCategory() == $Media::class$;
								$load($SunAlternateMedia);
								if (var$1 || attr->getCategory() == $SunAlternateMedia::class$) {
									if (attr->getCategory() == $SunAlternateMedia::class$) {
										$var($Media, media, $cast($Media, attributes->get($Media::class$)));
										if (media == nullptr || !($instanceOf($MediaTray, media))) {
											$assign(attr, static_cast<$Attribute*>(static_cast<$DocAttribute*>($nc(($cast($SunAlternateMedia, attr)))->getMedia())));
										}
									}
									if ($instanceOf($MediaSizeName, attr)) {
										setWin32MediaAttrib(attr);
									}
									if ($instanceOf($MediaTray, attr)) {
										setMediaTrayAttrib(attr);
									}
								}
							}
						}
					}
				}
			}
		} catch ($ClassCastException&) {
			$catch();
		}
	}
}

void WPrinterJob::getDefaultPage($PageFormat* page) {
	$prepareNative(WPrinterJob, getDefaultPage, void, $PageFormat* page);
	$invokeNative(WPrinterJob, getDefaultPage, page);
	$finishNative();
}

$PageFormat* WPrinterJob::defaultPage($PageFormat* page) {
	$var($PageFormat, newPage, $cast($PageFormat, $nc(page)->clone()));
	getDefaultPage(newPage);
	return newPage;
}

void WPrinterJob::validatePaper($Paper* origPaper, $Paper* newPaper) {
	$prepareNative(WPrinterJob, validatePaper, void, $Paper* origPaper, $Paper* newPaper);
	$invokeNative(WPrinterJob, validatePaper, origPaper, newPaper);
	$finishNative();
}

$Graphics2D* WPrinterJob::createPathGraphics($PeekGraphics* peekGraphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* pageFormat, int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($WPathGraphics, pathGraphics, nullptr);
	$var($PeekMetrics, metrics, $nc(peekGraphics)->getMetrics());
	$init($RasterPrinterJob);
	bool var$0 = $RasterPrinterJob::forcePDL == false;
	if (var$0) {
		bool var$1 = $RasterPrinterJob::forceRaster == true || $nc(metrics)->hasNonSolidColors();
		var$0 = (var$1 || $nc(metrics)->hasCompositing());
	}
	if (var$0) {
		$assign(pathGraphics, nullptr);
	} else {
		$var($BufferedImage, bufferedImage, $new($BufferedImage, 8, 8, $BufferedImage::TYPE_INT_RGB));
		$var($Graphics2D, bufferedGraphics, bufferedImage->createGraphics());
		bool canRedraw = peekGraphics->getAWTDrawingOnly() == false;
		$assign(pathGraphics, $new($WPathGraphics, bufferedGraphics, printerJob, painter, pageFormat, pageIndex, canRedraw));
	}
	return pathGraphics;
}

double WPrinterJob::getXRes() {
	if (this->mAttXRes != 0) {
		return (double)this->mAttXRes;
	} else {
		return (double)this->mPrintXRes;
	}
}

double WPrinterJob::getYRes() {
	if (this->mAttYRes != 0) {
		return (double)this->mAttYRes;
	} else {
		return (double)this->mPrintYRes;
	}
}

double WPrinterJob::getPhysicalPrintableX($Paper* p) {
	return (double)this->mPrintPhysX;
}

double WPrinterJob::getPhysicalPrintableY($Paper* p) {
	return (double)this->mPrintPhysY;
}

double WPrinterJob::getPhysicalPrintableWidth($Paper* p) {
	return (double)this->mPrintWidth;
}

double WPrinterJob::getPhysicalPrintableHeight($Paper* p) {
	return (double)this->mPrintHeight;
}

double WPrinterJob::getPhysicalPageWidth($Paper* p) {
	return (double)this->mPageWidth;
}

double WPrinterJob::getPhysicalPageHeight($Paper* p) {
	return (double)this->mPageHeight;
}

bool WPrinterJob::isCollated() {
	return this->userRequestedCollation;
}

int32_t WPrinterJob::getCollatedCopies() {
	$useLocalCurrentObjectStackCache();
	debug_println($$str({"driverDoesMultipleCopies="_s, $$str(this->driverDoesMultipleCopies), " driverDoesCollation="_s, $$str(this->driverDoesCollation)}));
	if ($RasterPrinterJob::isCollated() && !this->driverDoesCollation) {
		this->mAttCollate = 0;
		this->mAttCopies = 1;
		return getCopies();
	}
	return 1;
}

int32_t WPrinterJob::getNoncollatedCopies() {
	if (this->driverDoesMultipleCopies || $RasterPrinterJob::isCollated()) {
		return 1;
	} else {
		return getCopies();
	}
}

int64_t WPrinterJob::getPrintDC() {
	return $nc(this->handleRecord)->mPrintDC;
}

void WPrinterJob::setPrintDC(int64_t mPrintDC) {
	$nc(this->handleRecord)->mPrintDC = mPrintDC;
}

int64_t WPrinterJob::getDevMode() {
	return $nc(this->handleRecord)->mPrintHDevMode;
}

void WPrinterJob::setDevMode(int64_t mPrintHDevMode) {
	$nc(this->handleRecord)->mPrintHDevMode = mPrintHDevMode;
}

int64_t WPrinterJob::getDevNames() {
	return $nc(this->handleRecord)->mPrintHDevNames;
}

void WPrinterJob::setDevNames(int64_t mPrintHDevNames) {
	$nc(this->handleRecord)->mPrintHDevNames = mPrintHDevNames;
}

void WPrinterJob::beginPath() {
	beginPath(getPrintDC());
}

void WPrinterJob::endPath() {
	endPath(getPrintDC());
}

void WPrinterJob::scaleTransform(float scale) {
	this->graphicsMode = setAdvancedGraphicsMode();
	getWorldTransform(this->worldTransform);
	this->scale(scale, scale);
}

void WPrinterJob::restoreTransform() {
	setWorldTransform(this->worldTransform);
	setGraphicsMode(this->graphicsMode);
}

void WPrinterJob::closeFigure() {
	closeFigure(getPrintDC());
}

void WPrinterJob::fillPath() {
	fillPath(getPrintDC());
}

void WPrinterJob::moveTo(float x, float y) {
	moveTo(getPrintDC(), x, y);
}

void WPrinterJob::lineTo(float x, float y) {
	lineTo(getPrintDC(), x, y);
}

void WPrinterJob::polyBezierTo(float control1x, float control1y, float control2x, float control2y, float endX, float endY) {
	polyBezierTo(getPrintDC(), control1x, control1y, control2x, control2y, endX, endY);
}

void WPrinterJob::setPolyFillMode(int32_t fillRule) {
	setPolyFillMode(getPrintDC(), fillRule);
}

int32_t WPrinterJob::setAdvancedGraphicsMode() {
	return setAdvancedGraphicsMode(getPrintDC());
}

void WPrinterJob::setGraphicsMode(int32_t mode) {
	setGraphicsMode(getPrintDC(), mode);
}

void WPrinterJob::scale(double scaleX, double scaleY) {
	scale(getPrintDC(), scaleX, scaleY);
}

void WPrinterJob::getWorldTransform($doubles* transform) {
	getWorldTransform(getPrintDC(), transform);
}

void WPrinterJob::setWorldTransform($doubles* transform) {
	setWorldTransform(getPrintDC(), transform);
}

void WPrinterJob::selectSolidBrush($Color* color) {
	if ($nc(color)->equals(this->mLastColor) == false) {
		$set(this, mLastColor, color);
		$var($floats, rgb, color->getRGBColorComponents(nullptr));
		selectSolidBrush(getPrintDC(), $cast(int32_t, ($nc(rgb)->get(0) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(1) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(2) * WPrinterJob::MAX_WCOLOR)));
	}
}

int32_t WPrinterJob::getPenX() {
	return getPenX(getPrintDC());
}

int32_t WPrinterJob::getPenY() {
	return getPenY(getPrintDC());
}

void WPrinterJob::selectClipPath() {
	selectClipPath(getPrintDC());
}

void WPrinterJob::frameRect(float x, float y, float width, float height) {
	frameRect(getPrintDC(), x, y, width, height);
}

void WPrinterJob::fillRect(float x, float y, float width, float height, $Color* color) {
	$var($floats, rgb, $nc(color)->getRGBColorComponents(nullptr));
	fillRect(getPrintDC(), x, y, width, height, $cast(int32_t, ($nc(rgb)->get(0) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(1) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(2) * WPrinterJob::MAX_WCOLOR)));
}

void WPrinterJob::selectPen(float width, $Color* color) {
	$var($floats, rgb, $nc(color)->getRGBColorComponents(nullptr));
	selectPen(getPrintDC(), width, $cast(int32_t, ($nc(rgb)->get(0) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(1) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(2) * WPrinterJob::MAX_WCOLOR)));
}

bool WPrinterJob::selectStylePen(int32_t cap, int32_t join, float width, $Color* color) {
	int64_t endCap = 0;
	int64_t lineJoin = 0;
	$var($floats, rgb, $nc(color)->getRGBColorComponents(nullptr));
	switch (cap) {
	case $BasicStroke::CAP_BUTT:
		{
			endCap = WPrinterJob::PS_ENDCAP_FLAT;
			break;
		}
	case $BasicStroke::CAP_ROUND:
		{
			endCap = WPrinterJob::PS_ENDCAP_ROUND;
			break;
		}
	default:
		{}
	case $BasicStroke::CAP_SQUARE:
		{
			endCap = WPrinterJob::PS_ENDCAP_SQUARE;
			break;
		}
	}
	switch (join) {
	case $BasicStroke::JOIN_BEVEL:
		{
			lineJoin = WPrinterJob::PS_JOIN_BEVEL;
			break;
		}
	default:
		{}
	case $BasicStroke::JOIN_MITER:
		{
			lineJoin = WPrinterJob::PS_JOIN_MITER;
			break;
		}
	case $BasicStroke::JOIN_ROUND:
		{
			lineJoin = WPrinterJob::PS_JOIN_ROUND;
			break;
		}
	}
	return (selectStylePen(getPrintDC(), endCap, lineJoin, width, $cast(int32_t, ($nc(rgb)->get(0) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(1) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(2) * WPrinterJob::MAX_WCOLOR))));
}

bool WPrinterJob::setFont($String* family, float size, int32_t style, int32_t rotation, float awScale) {
	if ($nc(family)->isEmpty()) {
		return false;
	}
	bool didSetFont = true;
	if (!$nc(family)->equals(this->mLastFontFamily) || size != this->mLastFontSize || style != this->mLastFontStyle || rotation != this->mLastRotation || awScale != this->mLastAwScale) {
		didSetFont = setFont(getPrintDC(), family, size, ((int32_t)(style & (uint32_t)$Font::BOLD)) != 0, ((int32_t)(style & (uint32_t)$Font::ITALIC)) != 0, rotation, awScale);
		if (didSetFont) {
			$set(this, mLastFontFamily, family);
			this->mLastFontSize = size;
			this->mLastFontStyle = style;
			this->mLastRotation = rotation;
			this->mLastAwScale = awScale;
		}
	}
	return didSetFont;
}

void WPrinterJob::setTextColor($Color* color) {
	if ($nc(color)->equals(this->mLastTextColor) == false) {
		$set(this, mLastTextColor, color);
		$var($floats, rgb, color->getRGBColorComponents(nullptr));
		setTextColor(getPrintDC(), $cast(int32_t, ($nc(rgb)->get(0) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(1) * WPrinterJob::MAX_WCOLOR)), $cast(int32_t, (rgb->get(2) * WPrinterJob::MAX_WCOLOR)));
	}
}

$String* WPrinterJob::removeControlChars($String* str) {
	return $RasterPrinterJob::removeControlChars(str);
}

void WPrinterJob::textOut($String* str, float x, float y, $floats* positions) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, removeControlChars(str));
	bool var$0 = !WPrinterJob::$assertionsDisabled;
	if (var$0) {
		bool var$1 = (positions == nullptr);
		if (!var$1) {
			int32_t var$2 = $nc(text)->length();
			var$1 = (var$2 == $nc(str)->length());
		}
		var$0 = !var$1;
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	if ($nc(text)->length() == 0) {
		return;
	}
	int64_t var$3 = getPrintDC();
	$var($String, var$4, text);
	textOut(var$3, var$4, $nc(text)->length(), false, x, y, positions);
}

void WPrinterJob::glyphsOut($ints* glyphs, float x, float y, $floats* positions) {
	$useLocalCurrentObjectStackCache();
	$var($chars, glyphCharArray, $new($chars, $nc(glyphs)->length));
	for (int32_t i = 0; i < glyphs->length; ++i) {
		glyphCharArray->set(i, (char16_t)((int32_t)(glyphs->get(i) & (uint32_t)0x0000FFFF)));
	}
	$var($String, glyphStr, $new($String, glyphCharArray));
	textOut(getPrintDC(), glyphStr, glyphs->length, true, x, y, positions);
}

int32_t WPrinterJob::getGDIAdvance($String* text$renamed) {
	$var($String, text, text$renamed);
	$assign(text, removeControlChars(text));
	if ($nc(text)->length() == 0) {
		return 0;
	}
	return getGDIAdvance(getPrintDC(), text);
}

void WPrinterJob::drawImage3ByteBGR($bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight) {
	drawDIBImage(getPrintDC(), image, destX, destY, destWidth, destHeight, srcX, srcY, srcWidth, srcHeight, 24, nullptr);
}

void WPrinterJob::drawDIBImage($bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t sampleBitsPerPixel, $IndexColorModel* icm) {
	int32_t bitCount = 24;
	$var($bytes, bmiColors, nullptr);
	if (icm != nullptr) {
		bitCount = sampleBitsPerPixel;
		$assign(bmiColors, $new($bytes, ($sl(1, icm->getPixelSize())) * 4));
		for (int32_t i = 0; i < icm->getMapSize(); ++i) {
			bmiColors->set(i * 4 + 0, (int8_t)((int32_t)(icm->getBlue(i) & (uint32_t)255)));
			bmiColors->set(i * 4 + 1, (int8_t)((int32_t)(icm->getGreen(i) & (uint32_t)255)));
			bmiColors->set(i * 4 + 2, (int8_t)((int32_t)(icm->getRed(i) & (uint32_t)255)));
		}
	}
	drawDIBImage(getPrintDC(), image, destX, destY, destWidth, destHeight, srcX, srcY, srcWidth, srcHeight, bitCount, bmiColors);
}

void WPrinterJob::startPage($PageFormat* format, $Printable* painter, int32_t index, bool paperChanged) {
	invalidateCachedState();
	deviceStartPage(format, painter, index, paperChanged);
}

void WPrinterJob::endPage($PageFormat* format, $Printable* painter, int32_t index) {
	deviceEndPage(format, painter, index);
}

void WPrinterJob::invalidateCachedState() {
	$set(this, mLastColor, nullptr);
	$set(this, mLastTextColor, nullptr);
	$set(this, mLastFontFamily, nullptr);
}

void WPrinterJob::setCopies(int32_t copies) {
	$RasterPrinterJob::setCopies(copies);
	this->defaultCopies = false;
	this->mAttCopies = copies;
	setNativeCopies(copies);
}

void WPrinterJob::setNativeCopies(int32_t copies) {
	$prepareNative(WPrinterJob, setNativeCopies, void, int32_t copies);
	$invokeNative(WPrinterJob, setNativeCopies, copies);
	$finishNative();
}

bool WPrinterJob::jobSetup($Pageable* doc, bool allowPrintToFile) {
	bool $ret = false;
	$prepareNative(WPrinterJob, jobSetup, bool, $Pageable* doc, bool allowPrintToFile);
	$ret = $invokeNative(WPrinterJob, jobSetup, doc, allowPrintToFile);
	$finishNative();
	return $ret;
}

void WPrinterJob::initPrinter() {
	$prepareNative(WPrinterJob, initPrinter, void);
	$invokeNative(WPrinterJob, initPrinter);
	$finishNative();
}

bool WPrinterJob::_startDoc($String* dest, $String* jobName) {
	bool $ret = false;
	$prepareNative(WPrinterJob, _startDoc, bool, $String* dest, $String* jobName);
	$ret = $invokeNative(WPrinterJob, _startDoc, dest, jobName);
	$finishNative();
	return $ret;
}

void WPrinterJob::startDoc() {
	if (!_startDoc(this->mDestination, $(getJobName()))) {
		cancel();
	}
}

void WPrinterJob::endDoc() {
	$prepareNative(WPrinterJob, endDoc, void);
	$invokeNative(WPrinterJob, endDoc);
	$finishNative();
}

void WPrinterJob::abortDoc() {
	$prepareNative(WPrinterJob, abortDoc, void);
	$invokeNative(WPrinterJob, abortDoc);
	$finishNative();
}

void WPrinterJob::deleteDC(int64_t dc, int64_t devmode, int64_t devnames) {
	$init(WPrinterJob);
	$prepareNativeStatic(WPrinterJob, deleteDC, void, int64_t dc, int64_t devmode, int64_t devnames);
	$invokeNativeStatic(WPrinterJob, deleteDC, dc, devmode, devnames);
	$finishNativeStatic();
}

void WPrinterJob::deviceStartPage($PageFormat* format, $Printable* painter, int32_t index, bool paperChanged) {
	$prepareNative(WPrinterJob, deviceStartPage, void, $PageFormat* format, $Printable* painter, int32_t index, bool paperChanged);
	$invokeNative(WPrinterJob, deviceStartPage, format, painter, index, paperChanged);
	$finishNative();
}

void WPrinterJob::deviceEndPage($PageFormat* format, $Printable* painter, int32_t index) {
	$prepareNative(WPrinterJob, deviceEndPage, void, $PageFormat* format, $Printable* painter, int32_t index);
	$invokeNative(WPrinterJob, deviceEndPage, format, painter, index);
	$finishNative();
}

void WPrinterJob::printBand($bytes* data, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(WPrinterJob, printBand, void, $bytes* data, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(WPrinterJob, printBand, data, x, y, width, height);
	$finishNative();
}

void WPrinterJob::beginPath(int64_t printDC) {
	$prepareNative(WPrinterJob, beginPath, void, int64_t printDC);
	$invokeNative(WPrinterJob, beginPath, printDC);
	$finishNative();
}

void WPrinterJob::endPath(int64_t printDC) {
	$prepareNative(WPrinterJob, endPath, void, int64_t printDC);
	$invokeNative(WPrinterJob, endPath, printDC);
	$finishNative();
}

void WPrinterJob::closeFigure(int64_t printDC) {
	$prepareNative(WPrinterJob, closeFigure, void, int64_t printDC);
	$invokeNative(WPrinterJob, closeFigure, printDC);
	$finishNative();
}

void WPrinterJob::fillPath(int64_t printDC) {
	$prepareNative(WPrinterJob, fillPath, void, int64_t printDC);
	$invokeNative(WPrinterJob, fillPath, printDC);
	$finishNative();
}

void WPrinterJob::moveTo(int64_t printDC, float x, float y) {
	$prepareNative(WPrinterJob, moveTo, void, int64_t printDC, float x, float y);
	$invokeNative(WPrinterJob, moveTo, printDC, x, y);
	$finishNative();
}

void WPrinterJob::lineTo(int64_t printDC, float x, float y) {
	$prepareNative(WPrinterJob, lineTo, void, int64_t printDC, float x, float y);
	$invokeNative(WPrinterJob, lineTo, printDC, x, y);
	$finishNative();
}

void WPrinterJob::polyBezierTo(int64_t printDC, float control1x, float control1y, float control2x, float control2y, float endX, float endY) {
	$prepareNative(WPrinterJob, polyBezierTo, void, int64_t printDC, float control1x, float control1y, float control2x, float control2y, float endX, float endY);
	$invokeNative(WPrinterJob, polyBezierTo, printDC, control1x, control1y, control2x, control2y, endX, endY);
	$finishNative();
}

void WPrinterJob::setPolyFillMode(int64_t printDC, int32_t fillRule) {
	$prepareNative(WPrinterJob, setPolyFillMode, void, int64_t printDC, int32_t fillRule);
	$invokeNative(WPrinterJob, setPolyFillMode, printDC, fillRule);
	$finishNative();
}

int32_t WPrinterJob::setAdvancedGraphicsMode(int64_t printDC) {
	int32_t $ret = 0;
	$prepareNative(WPrinterJob, setAdvancedGraphicsMode, int32_t, int64_t printDC);
	$ret = $invokeNative(WPrinterJob, setAdvancedGraphicsMode, printDC);
	$finishNative();
	return $ret;
}

void WPrinterJob::setGraphicsMode(int64_t printDC, int32_t mode) {
	$prepareNative(WPrinterJob, setGraphicsMode, void, int64_t printDC, int32_t mode);
	$invokeNative(WPrinterJob, setGraphicsMode, printDC, mode);
	$finishNative();
}

void WPrinterJob::scale(int64_t printDC, double scaleX, double scaleY) {
	$prepareNative(WPrinterJob, scale, void, int64_t printDC, double scaleX, double scaleY);
	$invokeNative(WPrinterJob, scale, printDC, scaleX, scaleY);
	$finishNative();
}

void WPrinterJob::getWorldTransform(int64_t printDC, $doubles* transform) {
	$prepareNative(WPrinterJob, getWorldTransform, void, int64_t printDC, $doubles* transform);
	$invokeNative(WPrinterJob, getWorldTransform, printDC, transform);
	$finishNative();
}

void WPrinterJob::setWorldTransform(int64_t printDC, $doubles* transform) {
	$prepareNative(WPrinterJob, setWorldTransform, void, int64_t printDC, $doubles* transform);
	$invokeNative(WPrinterJob, setWorldTransform, printDC, transform);
	$finishNative();
}

void WPrinterJob::selectSolidBrush(int64_t printDC, int32_t red, int32_t green, int32_t blue) {
	$prepareNative(WPrinterJob, selectSolidBrush, void, int64_t printDC, int32_t red, int32_t green, int32_t blue);
	$invokeNative(WPrinterJob, selectSolidBrush, printDC, red, green, blue);
	$finishNative();
}

int32_t WPrinterJob::getPenX(int64_t printDC) {
	int32_t $ret = 0;
	$prepareNative(WPrinterJob, getPenX, int32_t, int64_t printDC);
	$ret = $invokeNative(WPrinterJob, getPenX, printDC);
	$finishNative();
	return $ret;
}

int32_t WPrinterJob::getPenY(int64_t printDC) {
	int32_t $ret = 0;
	$prepareNative(WPrinterJob, getPenY, int32_t, int64_t printDC);
	$ret = $invokeNative(WPrinterJob, getPenY, printDC);
	$finishNative();
	return $ret;
}

void WPrinterJob::selectClipPath(int64_t printDC) {
	$prepareNative(WPrinterJob, selectClipPath, void, int64_t printDC);
	$invokeNative(WPrinterJob, selectClipPath, printDC);
	$finishNative();
}

void WPrinterJob::frameRect(int64_t printDC, float x, float y, float width, float height) {
	$prepareNative(WPrinterJob, frameRect, void, int64_t printDC, float x, float y, float width, float height);
	$invokeNative(WPrinterJob, frameRect, printDC, x, y, width, height);
	$finishNative();
}

void WPrinterJob::fillRect(int64_t printDC, float x, float y, float width, float height, int32_t red, int32_t green, int32_t blue) {
	$prepareNative(WPrinterJob, fillRect, void, int64_t printDC, float x, float y, float width, float height, int32_t red, int32_t green, int32_t blue);
	$invokeNative(WPrinterJob, fillRect, printDC, x, y, width, height, red, green, blue);
	$finishNative();
}

void WPrinterJob::selectPen(int64_t printDC, float width, int32_t red, int32_t green, int32_t blue) {
	$prepareNative(WPrinterJob, selectPen, void, int64_t printDC, float width, int32_t red, int32_t green, int32_t blue);
	$invokeNative(WPrinterJob, selectPen, printDC, width, red, green, blue);
	$finishNative();
}

bool WPrinterJob::selectStylePen(int64_t printDC, int64_t cap, int64_t join, float width, int32_t red, int32_t green, int32_t blue) {
	bool $ret = false;
	$prepareNative(WPrinterJob, selectStylePen, bool, int64_t printDC, int64_t cap, int64_t join, float width, int32_t red, int32_t green, int32_t blue);
	$ret = $invokeNative(WPrinterJob, selectStylePen, printDC, cap, join, width, red, green, blue);
	$finishNative();
	return $ret;
}

bool WPrinterJob::setFont(int64_t printDC, $String* familyName, float fontSize, bool bold, bool italic, int32_t rotation, float awScale) {
	bool $ret = false;
	$prepareNative(WPrinterJob, setFont, bool, int64_t printDC, $String* familyName, float fontSize, bool bold, bool italic, int32_t rotation, float awScale);
	$ret = $invokeNative(WPrinterJob, setFont, printDC, familyName, fontSize, bold, italic, rotation, awScale);
	$finishNative();
	return $ret;
}

void WPrinterJob::setTextColor(int64_t printDC, int32_t red, int32_t green, int32_t blue) {
	$prepareNative(WPrinterJob, setTextColor, void, int64_t printDC, int32_t red, int32_t green, int32_t blue);
	$invokeNative(WPrinterJob, setTextColor, printDC, red, green, blue);
	$finishNative();
}

void WPrinterJob::textOut(int64_t printDC, $String* text, int32_t strlen, bool glyphs, float x, float y, $floats* positions) {
	$prepareNative(WPrinterJob, textOut, void, int64_t printDC, $String* text, int32_t strlen, bool glyphs, float x, float y, $floats* positions);
	$invokeNative(WPrinterJob, textOut, printDC, text, strlen, glyphs, x, y, positions);
	$finishNative();
}

int32_t WPrinterJob::getGDIAdvance(int64_t printDC, $String* text) {
	int32_t $ret = 0;
	$prepareNative(WPrinterJob, getGDIAdvance, int32_t, int64_t printDC, $String* text);
	$ret = $invokeNative(WPrinterJob, getGDIAdvance, printDC, text);
	$finishNative();
	return $ret;
}

void WPrinterJob::drawDIBImage(int64_t printDC, $bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t bitCount, $bytes* bmiColors) {
	$prepareNative(WPrinterJob, drawDIBImage, void, int64_t printDC, $bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t bitCount, $bytes* bmiColors);
	$invokeNative(WPrinterJob, drawDIBImage, printDC, image, destX, destY, destWidth, destHeight, srcX, srcY, srcWidth, srcHeight, bitCount, bmiColors);
	$finishNative();
}

$String* WPrinterJob::getPrinterAttrib() {
	$useLocalCurrentObjectStackCache();
	$var($PrintService, service, this->getPrintService());
	$var($String, name, (service != nullptr) ? $nc(service)->getName() : ($String*)nullptr);
	return name;
}

int32_t WPrinterJob::getCollateAttrib() {
	return this->mAttCollate;
}

void WPrinterJob::setCollateAttrib($Attribute* attr) {
	$init($SheetCollate);
	if ($equals(attr, $SheetCollate::COLLATED)) {
		this->mAttCollate = 1;
	} else {
		this->mAttCollate = 0;
	}
}

void WPrinterJob::setCollateAttrib($Attribute* attr, $PrintRequestAttributeSet* set) {
	setCollateAttrib(attr);
	$nc(set)->add(attr);
}

int32_t WPrinterJob::getOrientAttrib() {
	int32_t orient = $PageFormat::PORTRAIT;
	$load($OrientationRequested);
	$var($OrientationRequested, orientReq, (this->attributes == nullptr) ? ($OrientationRequested*)nullptr : $cast($OrientationRequested, $nc(this->attributes)->get($OrientationRequested::class$)));
	if (orientReq == nullptr) {
		$assign(orientReq, $cast($OrientationRequested, $nc(this->myService)->getDefaultAttributeValue($OrientationRequested::class$)));
	}
	if (orientReq != nullptr) {
		$init($OrientationRequested);
		if (orientReq == $OrientationRequested::REVERSE_LANDSCAPE) {
			orient = $PageFormat::REVERSE_LANDSCAPE;
		} else {
			if (orientReq == $OrientationRequested::LANDSCAPE) {
				orient = $PageFormat::LANDSCAPE;
			}
		}
	}
	return orient;
}

void WPrinterJob::setOrientAttrib($Attribute* attr, $PrintRequestAttributeSet* set) {
	if (set != nullptr) {
		set->add(attr);
	}
}

int32_t WPrinterJob::getCopiesAttrib() {
	if (this->defaultCopies) {
		return 0;
	} else {
		return getCopiesInt();
	}
}

void WPrinterJob::setRangeCopiesAttribute(int32_t from, int32_t to, bool isRangeSet, int32_t copies) {
	$useLocalCurrentObjectStackCache();
	if (this->attributes != nullptr) {
		if (isRangeSet) {
			$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($$new($PageRanges, from, to))));
			setPageRange(from, to);
		}
		this->defaultCopies = false;
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, copies))));
		$RasterPrinterJob::setCopies(copies);
		this->mAttCopies = copies;
	}
}

bool WPrinterJob::getDestAttrib() {
	return (this->mDestination != nullptr);
}

int32_t WPrinterJob::getQualityAttrib() {
	return this->mAttQuality;
}

void WPrinterJob::setQualityAttrib($Attribute* attr) {
	$init($PrintQuality);
	if ($equals(attr, $PrintQuality::HIGH)) {
		this->mAttQuality = -4;
	} else {
		if ($equals(attr, $PrintQuality::NORMAL)) {
			this->mAttQuality = -3;
		} else {
			this->mAttQuality = -2;
		}
	}
}

void WPrinterJob::setQualityAttrib($Attribute* attr, $PrintRequestAttributeSet* set) {
	setQualityAttrib(attr);
	$nc(set)->add(attr);
}

int32_t WPrinterJob::getColorAttrib() {
	return this->mAttChromaticity;
}

void WPrinterJob::setColorAttrib($Attribute* attr) {
	$init($Chromaticity);
	if ($equals(attr, $Chromaticity::COLOR)) {
		this->mAttChromaticity = 2;
	} else {
		this->mAttChromaticity = 1;
	}
}

void WPrinterJob::setColorAttrib($Attribute* attr, $PrintRequestAttributeSet* set) {
	setColorAttrib(attr);
	$nc(set)->add(attr);
}

int32_t WPrinterJob::getSidesAttrib() {
	return this->mAttSides;
}

void WPrinterJob::setSidesAttrib($Attribute* attr) {
	$init($Sides);
	if ($equals(attr, $Sides::TWO_SIDED_LONG_EDGE)) {
		this->mAttSides = 2;
	} else {
		if ($equals(attr, $Sides::TWO_SIDED_SHORT_EDGE)) {
			this->mAttSides = 3;
		} else {
			this->mAttSides = 1;
		}
	}
}

void WPrinterJob::setSidesAttrib($Attribute* attr, $PrintRequestAttributeSet* set) {
	setSidesAttrib(attr);
	$nc(set)->add(attr);
}

$ints* WPrinterJob::getWin32MediaAttrib() {
	$useLocalCurrentObjectStackCache();
	$var($ints, wid_ht, $new($ints, {
		0,
		0
	}));
	if (this->attributes != nullptr) {
		$load($Media);
		$var($Media, media, $cast($Media, $nc(this->attributes)->get($Media::class$)));
		if ($instanceOf($MediaSizeName, media)) {
			$var($MediaSizeName, msn, $cast($MediaSizeName, media));
			$var($MediaSize, ms, $MediaSize::getMediaSizeForName(msn));
			if (ms != nullptr) {
				wid_ht->set(0, $cast(int32_t, (ms->getX($MediaSize::INCH) * 72.0)));
				wid_ht->set(1, $cast(int32_t, (ms->getY($MediaSize::INCH) * 72.0)));
			}
		}
	}
	return wid_ht;
}

void WPrinterJob::setWin32MediaAttrib($Attribute* attr) {
	if (!($instanceOf($MediaSizeName, attr))) {
		return;
	}
	$var($MediaSizeName, msn, $cast($MediaSizeName, attr));
	this->mAttMediaSizeName = $nc(($cast($Win32PrintService, this->myService)))->findPaperID(msn);
}

void WPrinterJob::addPaperSize($PrintRequestAttributeSet* aset, int32_t dmIndex, int32_t width, int32_t length) {
	if (aset == nullptr) {
		return;
	}
	$var($MediaSizeName, msn, $nc(($cast($Win32PrintService, this->myService)))->findWin32Media(dmIndex));
	if (msn == nullptr) {
		$assign(msn, $nc(($cast($Win32PrintService, this->myService)))->findMatchingMediaSizeNameMM((float)width, (float)length));
	}
	if (msn != nullptr) {
		$nc(aset)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(static_cast<$Media*>(msn))));
	}
}

void WPrinterJob::setWin32MediaAttrib(int32_t dmIndex, int32_t width, int32_t length) {
	addPaperSize(this->attributes, dmIndex, width, length);
	this->mAttMediaSizeName = dmIndex;
}

void WPrinterJob::setMediaTrayAttrib($Attribute* attr) {
	$init($MediaTray);
	if ($equals(attr, $MediaTray::BOTTOM)) {
		this->mAttMediaTray = 2;
	} else {
		if ($equals(attr, $MediaTray::ENVELOPE)) {
			this->mAttMediaTray = 5;
		} else {
			if ($equals(attr, $MediaTray::LARGE_CAPACITY)) {
				this->mAttMediaTray = 11;
			} else {
				if ($equals(attr, $MediaTray::MAIN)) {
					this->mAttMediaTray = 1;
				} else {
					if ($equals(attr, $MediaTray::MANUAL)) {
						this->mAttMediaTray = 4;
					} else {
						if ($equals(attr, $MediaTray::MIDDLE)) {
							this->mAttMediaTray = 3;
						} else {
							if ($equals(attr, $MediaTray::SIDE)) {
								this->mAttMediaTray = 7;
							} else {
								if ($equals(attr, $MediaTray::TOP)) {
									this->mAttMediaTray = 1;
								} else if ($instanceOf($Win32MediaTray, attr)) {
									this->mAttMediaTray = $nc(($cast($Win32MediaTray, attr)))->winID;
								} else {
									this->mAttMediaTray = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

void WPrinterJob::setMediaTrayAttrib(int32_t dmBinID) {
	this->mAttMediaTray = dmBinID;
	$var($MediaTray, tray, $nc(($cast($Win32PrintService, this->myService)))->findMediaTray(dmBinID));
}

int32_t WPrinterJob::getMediaTrayAttrib() {
	return this->mAttMediaTray;
}

bool WPrinterJob::getPrintToFileEnabled() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$var($FilePermission, printToFilePermission, $new($FilePermission, "<<ALL FILES>>"_s, "read,write"_s));
		try {
			security->checkPermission(printToFilePermission);
		} catch ($SecurityException&) {
			$var($SecurityException, e, $catch());
			return false;
		}
	}
	return true;
}

void WPrinterJob::setNativeAttributes(int32_t flags, int32_t fields, int32_t values) {
	$useLocalCurrentObjectStackCache();
	if (this->attributes == nullptr) {
		return;
	}
	if (((int32_t)(flags & (uint32_t)WPrinterJob::PD_PRINTTOFILE)) != 0) {
		$load($Destination);
		$var($Destination, destPrn, $cast($Destination, $nc(this->attributes)->get($Destination::class$)));
		if (destPrn == nullptr) {
			try {
				$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>($$new($Destination, $($$new($File, "./out.prn"_s)->toURI())))));
			} catch ($SecurityException&) {
				$var($SecurityException, se, $catch());
				try {
					$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>($$new($Destination, $$new($URI, "file:out.prn"_s)))));
				} catch ($URISyntaxException&) {
					$catch();
				}
			}
		}
	} else {
		$load($Destination);
		$nc(this->attributes)->remove($Destination::class$);
	}
	if (((int32_t)(flags & (uint32_t)WPrinterJob::PD_COLLATE)) != 0) {
		$init($SheetCollate);
		setCollateAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::COLLATED)), this->attributes);
	} else {
		$init($SheetCollate);
		setCollateAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::UNCOLLATED)), this->attributes);
	}
	if (((int32_t)(flags & (uint32_t)$RasterPrinterJob::PD_NOSELECTION)) != $RasterPrinterJob::PD_NOSELECTION) {
		if (((int32_t)(flags & (uint32_t)$RasterPrinterJob::PD_PAGENUMS)) != 0) {
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::RANGE);
		} else if (((int32_t)(flags & (uint32_t)$RasterPrinterJob::PD_SELECTION)) != 0) {
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::SELECTION);
		} else {
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::ALL);
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_ORIENTATION)) != 0) {
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_ORIENTATION)) != 0) {
			$init($OrientationRequested);
			setOrientAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::LANDSCAPE)), this->attributes);
		} else {
			$init($OrientationRequested);
			setOrientAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::PORTRAIT)), this->attributes);
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_COLOR)) != 0) {
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_COLOR)) != 0) {
			$init($Chromaticity);
			setColorAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::COLOR)), this->attributes);
		} else {
			$init($Chromaticity);
			setColorAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::MONOCHROME)), this->attributes);
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_PRINTQUALITY)) != 0) {
		$var($PrintQuality, quality, nullptr);
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_RES_LOW)) != 0) {
			$init($PrintQuality);
			$assign(quality, $PrintQuality::DRAFT);
		} else if (((int32_t)(fields & (uint32_t)WPrinterJob::SET_RES_HIGH)) != 0) {
			$init($PrintQuality);
			$assign(quality, $PrintQuality::HIGH);
		} else {
			$init($PrintQuality);
			$assign(quality, $PrintQuality::NORMAL);
		}
		setQualityAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>(quality)), this->attributes);
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_DUPLEX)) != 0) {
		$var($Sides, sides, nullptr);
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_DUP_VERTICAL)) != 0) {
			$init($Sides);
			$assign(sides, $Sides::TWO_SIDED_LONG_EDGE);
		} else if (((int32_t)(values & (uint32_t)WPrinterJob::SET_DUP_HORIZONTAL)) != 0) {
			$init($Sides);
			$assign(sides, $Sides::TWO_SIDED_SHORT_EDGE);
		} else {
			$init($Sides);
			$assign(sides, $Sides::ONE_SIDED);
		}
		setSidesAttrib(static_cast<$Attribute*>(static_cast<$DocAttribute*>(sides)), this->attributes);
	}
}

void WPrinterJob::getDevModeValues($PrintRequestAttributeSet* aset, $WPrinterJob$DevModeValues* info) {
	$useLocalCurrentObjectStackCache();
	$load($Copies);
	$var($Copies, c, $cast($Copies, $nc(aset)->get($Copies::class$)));
	if (c != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_COPIES;
		info->copies = (int16_t)c->getValue();
	}
	$load($SheetCollate);
	$var($SheetCollate, sc, $cast($SheetCollate, aset->get($SheetCollate::class$)));
	if (sc != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_COLLATE;
		$init($SheetCollate);
		info->collate = (sc == $SheetCollate::COLLATED) ? WPrinterJob::DMCOLLATE_TRUE : WPrinterJob::DMCOLLATE_FALSE;
	}
	$load($Chromaticity);
	$var($Chromaticity, ch, $cast($Chromaticity, aset->get($Chromaticity::class$)));
	if (ch != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_COLOR;
		$init($Chromaticity);
		if (ch == $Chromaticity::COLOR) {
			info->color = WPrinterJob::DMCOLOR_COLOR;
		} else {
			info->color = WPrinterJob::DMCOLOR_MONOCHROME;
		}
	}
	$load($Sides);
	$var($Sides, s, $cast($Sides, aset->get($Sides::class$)));
	if (s != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_DUPLEX;
		$init($Sides);
		if (s == $Sides::TWO_SIDED_LONG_EDGE) {
			info->duplex = WPrinterJob::DMDUP_VERTICAL;
		} else {
			if (s == $Sides::TWO_SIDED_SHORT_EDGE) {
				info->duplex = WPrinterJob::DMDUP_HORIZONTAL;
			} else {
				info->duplex = WPrinterJob::DMDUP_SIMPLEX;
			}
		}
	}
	$load($OrientationRequested);
	$var($OrientationRequested, or$, $cast($OrientationRequested, aset->get($OrientationRequested::class$)));
	if (or$ != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_ORIENTATION;
		$init($OrientationRequested);
		info->orient = (or$ == $OrientationRequested::LANDSCAPE) ? WPrinterJob::DMORIENT_LANDSCAPE : WPrinterJob::DMORIENT_PORTRAIT;
	}
	$load($Media);
	$var($Media, m, $cast($Media, aset->get($Media::class$)));
	if ($instanceOf($MediaSizeName, m)) {
		$nc(info)->dmFields |= WPrinterJob::DM_PAPERSIZE;
		$var($MediaSizeName, msn, $cast($MediaSizeName, m));
		info->paper = (int16_t)$nc(($cast($Win32PrintService, this->myService)))->findPaperID(msn);
	}
	$var($MediaTray, mt, nullptr);
	if ($instanceOf($MediaTray, m)) {
		$assign(mt, $cast($MediaTray, m));
	}
	if (mt == nullptr) {
		$load($SunAlternateMedia);
		$var($SunAlternateMedia, sam, $cast($SunAlternateMedia, aset->get($SunAlternateMedia::class$)));
		if (sam != nullptr && ($instanceOf($MediaTray, $(sam->getMedia())))) {
			$assign(mt, $cast($MediaTray, sam->getMedia()));
		}
	}
	if (mt != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_DEFAULTSOURCE;
		info->bin = (int16_t)($nc(($cast($Win32PrintService, this->myService)))->findTrayID(mt));
	}
	$load($PrintQuality);
	$var($PrintQuality, q, $cast($PrintQuality, aset->get($PrintQuality::class$)));
	if (q != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_PRINTQUALITY;
		$init($PrintQuality);
		if (q == $PrintQuality::DRAFT) {
			info->xres_quality = WPrinterJob::DMRES_DRAFT;
		} else {
			if (q == $PrintQuality::HIGH) {
				info->xres_quality = WPrinterJob::DMRES_HIGH;
			} else {
				info->xres_quality = WPrinterJob::DMRES_MEDIUM;
			}
		}
	}
	$load($PrinterResolution);
	$var($PrinterResolution, r, $cast($PrinterResolution, aset->get($PrinterResolution::class$)));
	if (r != nullptr) {
		$nc(info)->dmFields |= WPrinterJob::DM_PRINTQUALITY | WPrinterJob::DM_YRESOLUTION;
		info->xres_quality = (int16_t)r->getCrossFeedResolution($PrinterResolution::DPI);
		info->yres = (int16_t)r->getFeedResolution($PrinterResolution::DPI);
	}
}

void WPrinterJob::setJobAttributes($PrintRequestAttributeSet* attributes, int32_t fields, int32_t values, int16_t copies, int16_t dmPaperSize, int16_t dmPaperWidth, int16_t dmPaperLength, int16_t dmDefaultSource, int16_t xRes, int16_t yRes) {
	$useLocalCurrentObjectStackCache();
	if (attributes == nullptr) {
		return;
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_COPIES)) != 0) {
		$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, copies))));
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_COLLATE)) != 0) {
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_COLLATED)) != 0) {
			$init($SheetCollate);
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::COLLATED)));
		} else {
			$init($SheetCollate);
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::UNCOLLATED)));
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_ORIENTATION)) != 0) {
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_ORIENTATION)) != 0) {
			$init($OrientationRequested);
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::LANDSCAPE)));
		} else {
			$init($OrientationRequested);
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::PORTRAIT)));
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_COLOR)) != 0) {
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_COLOR)) != 0) {
			$init($Chromaticity);
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::COLOR)));
		} else {
			$init($Chromaticity);
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::MONOCHROME)));
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_PRINTQUALITY)) != 0) {
		if (xRes < 0) {
			$var($PrintQuality, quality, nullptr);
			if (((int32_t)(values & (uint32_t)WPrinterJob::SET_RES_LOW)) != 0) {
				$init($PrintQuality);
				$assign(quality, $PrintQuality::DRAFT);
			} else if (((int32_t)(fields & (uint32_t)WPrinterJob::SET_RES_HIGH)) != 0) {
				$init($PrintQuality);
				$assign(quality, $PrintQuality::HIGH);
			} else {
				$init($PrintQuality);
				$assign(quality, $PrintQuality::NORMAL);
			}
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(quality)));
		} else if (xRes > 0 && yRes > 0) {
			$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($$new($PrinterResolution, xRes, yRes, $PrinterResolution::DPI))));
		}
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_DUPLEX)) != 0) {
		$var($Sides, sides, nullptr);
		if (((int32_t)(values & (uint32_t)WPrinterJob::SET_DUP_VERTICAL)) != 0) {
			$init($Sides);
			$assign(sides, $Sides::TWO_SIDED_LONG_EDGE);
		} else if (((int32_t)(values & (uint32_t)WPrinterJob::SET_DUP_HORIZONTAL)) != 0) {
			$init($Sides);
			$assign(sides, $Sides::TWO_SIDED_SHORT_EDGE);
		} else {
			$init($Sides);
			$assign(sides, $Sides::ONE_SIDED);
		}
		$nc(attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(sides)));
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_PAPERSIZE)) != 0) {
		addPaperSize(attributes, dmPaperSize, dmPaperWidth, dmPaperLength);
	}
	if (((int32_t)(fields & (uint32_t)WPrinterJob::DM_DEFAULTSOURCE)) != 0) {
		$var($MediaTray, tray, $nc(($cast($Win32PrintService, this->myService)))->findMediaTray(dmDefaultSource));
		$nc(attributes)->add($$new($SunAlternateMedia, tray));
	}
}

bool WPrinterJob::showDocProperties(int64_t hWnd, $PrintRequestAttributeSet* aset, int32_t dmFields, int16_t copies, int16_t collate, int16_t color, int16_t duplex, int16_t orient, int16_t paper, int16_t bin, int16_t xres_quality, int16_t yres) {
	bool $ret = false;
	$prepareNative(WPrinterJob, showDocProperties, bool, int64_t hWnd, $PrintRequestAttributeSet* aset, int32_t dmFields, int16_t copies, int16_t collate, int16_t color, int16_t duplex, int16_t orient, int16_t paper, int16_t bin, int16_t xres_quality, int16_t yres);
	$ret = $invokeNative(WPrinterJob, showDocProperties, hWnd, aset, dmFields, copies, collate, color, duplex, orient, paper, bin, xres_quality, yres);
	$finishNative();
	return $ret;
}

$PrintRequestAttributeSet* WPrinterJob::showDocumentProperties($Window* owner, $PrintService* service, $PrintRequestAttributeSet* aset) {
	$useLocalCurrentObjectStackCache();
	try {
		setNativePrintServiceIfNeeded($($nc(service)->getName()));
	} catch ($PrinterException&) {
		$catch();
	}
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	int64_t hWnd = $nc(($cast($WComponentPeer, $($nc(acc)->getPeer(owner)))))->getHWnd();
	$var($WPrinterJob$DevModeValues, info, $new($WPrinterJob$DevModeValues));
	getDevModeValues(aset, info);
	bool ok = showDocProperties(hWnd, aset, info->dmFields, info->copies, info->collate, info->color, info->duplex, info->orient, info->paper, info->bin, info->xres_quality, info->yres);
	if (ok) {
		return aset;
	} else {
		return nullptr;
	}
}

void WPrinterJob::setResolutionDPI(int32_t xres, int32_t yres) {
	if (this->attributes != nullptr) {
		$var($PrinterResolution, res, $new($PrinterResolution, xres, yres, $PrinterResolution::DPI));
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(res)));
	}
	this->mAttXRes = xres;
	this->mAttYRes = yres;
}

void WPrinterJob::setResolutionAttrib($Attribute* attr) {
	$var($PrinterResolution, pr, $cast($PrinterResolution, attr));
	this->mAttXRes = $nc(pr)->getCrossFeedResolution($PrinterResolution::DPI);
	this->mAttYRes = pr->getFeedResolution($PrinterResolution::DPI);
}

void WPrinterJob::setPrinterNameAttrib($String* printerName) {
	$useLocalCurrentObjectStackCache();
	$var($PrintService, service, this->getPrintService());
	if (printerName == nullptr) {
		return;
	}
	if (service != nullptr && $nc(printerName)->equals($(service->getName()))) {
		return;
	} else {
		$var($PrintServiceArray, services, $PrinterJob::lookupPrintServices());
		for (int32_t i = 0; i < $nc(services)->length; ++i) {
			if (printerName->equals($($nc(services->get(i))->getName()))) {
				try {
					this->setPrintService(services->get(i));
				} catch ($PrinterException&) {
					$catch();
				}
				return;
			}
		}
	}
}

void WPrinterJob::initIDs() {
	$init(WPrinterJob);
	$prepareNativeStatic(WPrinterJob, initIDs, void);
	$invokeNativeStatic(WPrinterJob, initIDs);
	$finishNativeStatic();
}

void clinit$WPrinterJob($Class* class$) {
	WPrinterJob::$assertionsDisabled = !WPrinterJob::class$->desiredAssertionStatus();
	{
		$Toolkit::getDefaultToolkit();
		WPrinterJob::initIDs();
		$Win32FontManager::registerJREFontsForPrinting();
	}
}

WPrinterJob::WPrinterJob() {
}

$Class* WPrinterJob::load$($String* name, bool initialize) {
	$loadClass(WPrinterJob, name, initialize, &_WPrinterJob_ClassInfo_, clinit$WPrinterJob, allocate$WPrinterJob);
	return class$;
}

$Class* WPrinterJob::class$ = nullptr;

		} // windows
	} // awt
} // sun