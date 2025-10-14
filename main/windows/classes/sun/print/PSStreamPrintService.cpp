#include <sun/print/PSStreamPrintService.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/print/CancelablePrintJob.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/ServiceUIFactory.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/standard/ColorSupported.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/CopiesSupported.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize$ISO.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/PSStreamPrintJob.h>
#include <sun/print/PSStreamPrinterFactory.h>
#include <jcpp.h>

#undef CANADA
#undef COLLATED
#undef COLOR
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
#undef ONE_SIDED
#undef PAGEABLE
#undef PNG
#undef PORTRAIT
#undef PRINTABLE
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT
#undef SUPPORTED
#undef TABLOID
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef UNCOLLATED
#undef US

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $FidelityArray = $Array<::javax::print::attribute::standard::Fidelity>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $OrientationRequestedArray = $Array<::javax::print::attribute::standard::OrientationRequested>;
using $PageRangesArray = $Array<::javax::print::attribute::standard::PageRanges>;
using $SheetCollateArray = $Array<::javax::print::attribute::standard::SheetCollate>;
using $SidesArray = $Array<::javax::print::attribute::standard::Sides>;
using $OutputStream = ::java::io::OutputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $CancelablePrintJob = ::javax::print::CancelablePrintJob;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $ColorSupported = ::javax::print::attribute::standard::ColorSupported;
using $Copies = ::javax::print::attribute::standard::Copies;
using $CopiesSupported = ::javax::print::attribute::standard::CopiesSupported;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSize$ISO = ::javax::print::attribute::standard::MediaSize$ISO;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PSStreamPrintJob = ::sun::print::PSStreamPrintJob;
using $PSStreamPrinterFactory = ::sun::print::PSStreamPrinterFactory;
using $SunPrinterJobService = ::sun::print::SunPrinterJobService;

namespace sun {
	namespace print {

$FieldInfo _PSStreamPrintService_FieldInfo_[] = {
	{"suppAttrCats", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(PSStreamPrintService, suppAttrCats)},
	{"MAXCOPIES", "I", nullptr, $PRIVATE | $STATIC, $staticField(PSStreamPrintService, MAXCOPIES)},
	{"mediaSizes", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSStreamPrintService, mediaSizes)},
	{}
};

$MethodInfo _PSStreamPrintService_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PSStreamPrintService::*)($OutputStream*)>(&PSStreamPrintService::init$))},
	{"addPrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"createPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Class;)Ljavax/print/attribute/PrintServiceAttribute;", "<T::Ljavax/print/attribute/PrintServiceAttribute;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC},
	{"getDefaultAttributeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Ljava/lang/Object;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOutputFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getServiceUIFactory", "()Ljavax/print/ServiceUIFactory;", nullptr, $PUBLIC},
	{"getSupportedAttributeCategories", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"getSupportedAttributeValues", "(Ljava/lang/Class;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", $PUBLIC},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{"getUnsupportedAttributes", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAttributeCategorySupported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Z", $PUBLIC},
	{"isAttributeValueSupported", "(Ljavax/print/attribute/Attribute;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"isDocFlavorSupported", "(Ljavax/print/DocFlavor;)Z", nullptr, $PUBLIC},
	{"isSupportedCopies", "(Ljavax/print/attribute/standard/Copies;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PSStreamPrintService::*)($Copies*)>(&PSStreamPrintService::isSupportedCopies))},
	{"isSupportedMedia", "(Ljavax/print/attribute/standard/MediaSizeName;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PSStreamPrintService::*)($MediaSizeName*)>(&PSStreamPrintService::isSupportedMedia))},
	{"removePrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usesClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{}
};

$ClassInfo _PSStreamPrintService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PSStreamPrintService",
	"javax.print.StreamPrintService",
	"sun.print.SunPrinterJobService",
	_PSStreamPrintService_FieldInfo_,
	_PSStreamPrintService_MethodInfo_
};

$Object* allocate$PSStreamPrintService($Class* clazz) {
	return $of($alloc(PSStreamPrintService));
}

$Object* PSStreamPrintService::clone() {
	 return this->$StreamPrintService::clone();
}

void PSStreamPrintService::finalize() {
	this->$StreamPrintService::finalize();
}

$ClassArray* PSStreamPrintService::suppAttrCats = nullptr;
int32_t PSStreamPrintService::MAXCOPIES = 0;
$MediaSizeNameArray* PSStreamPrintService::mediaSizes = nullptr;

void PSStreamPrintService::init$($OutputStream* out) {
	$StreamPrintService::init$(out);
}

$String* PSStreamPrintService::getOutputFormat() {
	$init($PSStreamPrinterFactory);
	return $PSStreamPrinterFactory::psMimeType;
}

$DocFlavorArray* PSStreamPrintService::getSupportedDocFlavors() {
	return $PSStreamPrinterFactory::getFlavors();
}

$DocPrintJob* PSStreamPrintService::createPrintJob() {
	return $new($PSStreamPrintJob, this);
}

bool PSStreamPrintService::usesClass($Class* c) {
	$load($PSPrinterJob);
	return (c == $PSPrinterJob::class$);
}

$String* PSStreamPrintService::getName() {
	return "Postscript output"_s;
}

void PSStreamPrintService::addPrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
	return;
}

void PSStreamPrintService::removePrintServiceAttributeListener($PrintServiceAttributeListener* listener) {
	return;
}

$PrintServiceAttribute* PSStreamPrintService::getAttribute($Class* category) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "category"_s);
	}
	$load($PrintServiceAttribute);
	if (!($PrintServiceAttribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, "Not a PrintServiceAttribute"_s);
	}
	$load($ColorSupported);
	if (category == $ColorSupported::class$) {
		$init($ColorSupported);
		$var($PrintServiceAttribute, tmp, static_cast<$PrintServiceAttribute*>($ColorSupported::SUPPORTED));
		return tmp;
	} else {
		return nullptr;
	}
}

$PrintServiceAttributeSet* PSStreamPrintService::getAttributes() {
	$var($PrintServiceAttributeSet, attrs, $new($HashPrintServiceAttributeSet));
	$init($ColorSupported);
	attrs->add($ColorSupported::SUPPORTED);
	return $AttributeSetUtilities::unmodifiableView(attrs);
}

bool PSStreamPrintService::isDocFlavorSupported($DocFlavor* flavor) {
	$var($DocFlavorArray, flavors, getSupportedDocFlavors());
	for (int32_t f = 0; f < $nc(flavors)->length; ++f) {
		if ($nc(flavor)->equals(flavors->get(f))) {
			return true;
		}
	}
	return false;
}

$ClassArray* PSStreamPrintService::getSupportedAttributeCategories() {
	$var($ClassArray, cats, $new($ClassArray, $nc(PSStreamPrintService::suppAttrCats)->length));
	$System::arraycopy(PSStreamPrintService::suppAttrCats, 0, cats, 0, cats->length);
	return cats;
}

bool PSStreamPrintService::isAttributeCategorySupported($Class* category) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!($Attribute::class$->isAssignableFrom(category))) {
		$throwNew($IllegalArgumentException, $$str({category, " is not an Attribute"_s}));
	}
	for (int32_t i = 0; i < $nc(PSStreamPrintService::suppAttrCats)->length; ++i) {
		if (category == $nc(PSStreamPrintService::suppAttrCats)->get(i)) {
			return true;
		}
	}
	return false;
}

$Object* PSStreamPrintService::getDefaultAttributeValue($Class* category) {
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
			$load($Fidelity);
			if (category == $Fidelity::class$) {
				$init($Fidelity);
				return $of($Fidelity::FIDELITY_FALSE);
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
						float margin = 0.5f;
						bool var$3 = defaultCountry != nullptr;
						if (var$3) {
							bool var$5 = defaultCountry->isEmpty();
							bool var$4 = var$5 || $nc(defaultCountry)->equals($($nc($Locale::US)->getCountry()));
							var$3 = (var$4 || defaultCountry->equals($($nc($Locale::CANADA)->getCountry())));
						}
						if (var$3) {
							$init($MediaSize$NA);
							iw = $nc($MediaSize$NA::LETTER)->getX($Size2DSyntax::INCH) - 2 * margin;
							ih = $nc($MediaSize$NA::LETTER)->getY($Size2DSyntax::INCH) - 2 * margin;
						} else {
							$init($MediaSize$ISO);
							iw = $nc($MediaSize$ISO::A4)->getX($Size2DSyntax::INCH) - 2 * margin;
							ih = $nc($MediaSize$ISO::A4)->getY($Size2DSyntax::INCH) - 2 * margin;
						}
						return $of($new($MediaPrintableArea, margin, margin, iw, ih, $MediaPrintableArea::INCH));
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

$Object* PSStreamPrintService::getSupportedAttributeValues($Class* category, $DocFlavor* flavor, $AttributeSet* attributes) {
	if (category == nullptr) {
		$throwNew($NullPointerException, "null category"_s);
	}
	$load($Attribute);
	if (!$Attribute::class$->isAssignableFrom(category)) {
		$throwNew($IllegalArgumentException, $$str({category, " does not implement Attribute"_s}));
	}
	if (flavor != nullptr && !isDocFlavorSupported(flavor)) {
		$throwNew($IllegalArgumentException, $$str({flavor, " is an unsupported flavor"_s}));
	}
	if (!isAttributeCategorySupported(category)) {
		return $of(nullptr);
	}
	$load($Chromaticity);
	if (category == $Chromaticity::class$) {
		$var($ChromaticityArray, arr, $new($ChromaticityArray, 1));
		$init($Chromaticity);
		arr->set(0, $Chromaticity::COLOR);
		return $of((arr));
	} else {
		$load($JobName);
		if (category == $JobName::class$) {
			return $of($new($JobName, ""_s, nullptr));
		} else {
			$load($RequestingUserName);
			if (category == $RequestingUserName::class$) {
				return $of($new($RequestingUserName, ""_s, nullptr));
			} else {
				$load($OrientationRequested);
				if (category == $OrientationRequested::class$) {
					$init($DocFlavor$SERVICE_FORMATTED);
					bool var$9 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
					bool var$8 = var$9 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE);
					$init($DocFlavor$INPUT_STREAM);
					bool var$7 = var$8 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::GIF);
					bool var$6 = var$7 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::JPEG);
					bool var$5 = var$6 || $nc(flavor)->equals($DocFlavor$INPUT_STREAM::PNG);
					$init($DocFlavor$BYTE_ARRAY);
					bool var$4 = var$5 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::GIF);
					bool var$3 = var$4 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::JPEG);
					bool var$2 = var$3 || $nc(flavor)->equals($DocFlavor$BYTE_ARRAY::PNG);
					$init($DocFlavor$URL);
					bool var$1 = var$2 || $nc(flavor)->equals($DocFlavor$URL::GIF);
					bool var$0 = var$1 || $nc(flavor)->equals($DocFlavor$URL::JPEG);
					if (var$0 || $nc(flavor)->equals($DocFlavor$URL::PNG)) {
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
						return $of($new($CopiesSupported, 1, PSStreamPrintService::MAXCOPIES));
					} else {
						$load($Media);
						if (category == $Media::class$) {
							$var($MediaArray, arr, $new($MediaArray, $nc(PSStreamPrintService::mediaSizes)->length));
							$System::arraycopy(PSStreamPrintService::mediaSizes, 0, arr, 0, $nc(PSStreamPrintService::mediaSizes)->length);
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
										return $of(nullptr);
									}
									$load($MediaSize);
									$var($MediaSize, mediaSize, $cast($MediaSize, $nc(attributes)->get($MediaSize::class$)));
									if (mediaSize == nullptr) {
										$var($Media, media, $cast($Media, attributes->get($Media::class$)));
										if (media != nullptr && $instanceOf($MediaSizeName, media)) {
											$var($MediaSizeName, msn, $cast($MediaSizeName, media));
											$assign(mediaSize, $MediaSize::getMediaSizeForName(msn));
										}
									}
									if (mediaSize == nullptr) {
										return $of(nullptr);
									} else {
										$var($MediaPrintableAreaArray, arr, $new($MediaPrintableAreaArray, 1));
										float w = $nc(mediaSize)->getX($MediaSize::INCH);
										float h = mediaSize->getY($MediaSize::INCH);
										float xmargin = 0.5f;
										float ymargin = 0.5f;
										if (w < 5.0f) {
											xmargin = w / 10;
										}
										if (h < 5.0f) {
											ymargin = h / 10;
										}
										arr->set(0, $$new($MediaPrintableArea, xmargin, ymargin, w - 2 * xmargin, h - 2 * ymargin, $MediaSize::INCH));
										return $of(arr);
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
										$load($SheetCollate);
										if (category == $SheetCollate::class$) {
											$init($DocFlavor$SERVICE_FORMATTED);
											bool var$11 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
											if (var$11 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
												$var($SheetCollateArray, arr, $new($SheetCollateArray, 2));
												$init($SheetCollate);
												arr->set(0, $SheetCollate::UNCOLLATED);
												arr->set(1, $SheetCollate::COLLATED);
												return $of(arr);
											} else {
												$var($SheetCollateArray, arr, $new($SheetCollateArray, 1));
												$init($SheetCollate);
												arr->set(0, $SheetCollate::UNCOLLATED);
												return $of(arr);
											}
										} else {
											$load($Sides);
											if (category == $Sides::class$) {
												$init($DocFlavor$SERVICE_FORMATTED);
												bool var$12 = flavor == nullptr || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
												if (var$12 || $nc(flavor)->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE)) {
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

bool PSStreamPrintService::isSupportedCopies($Copies* copies) {
	int32_t numCopies = $nc(copies)->getValue();
	return (numCopies > 0 && numCopies < PSStreamPrintService::MAXCOPIES);
}

bool PSStreamPrintService::isSupportedMedia($MediaSizeName* msn) {
	for (int32_t i = 0; i < $nc(PSStreamPrintService::mediaSizes)->length; ++i) {
		if ($nc(msn)->equals($nc(PSStreamPrintService::mediaSizes)->get(i))) {
			return true;
		}
	}
	return false;
}

bool PSStreamPrintService::isAttributeValueSupported($Attribute* attr, $DocFlavor* flavor, $AttributeSet* attributes) {
	if (attr == nullptr) {
		$throwNew($NullPointerException, "null attribute"_s);
	}
	if (flavor != nullptr && !isDocFlavorSupported(flavor)) {
		$throwNew($IllegalArgumentException, $$str({flavor, " is an unsupported flavor"_s}));
	}
	$Class* category = $nc(attr)->getCategory();
	if (!isAttributeCategorySupported(category)) {
		return false;
	} else {
		$load($Chromaticity);
		if (attr->getCategory() == $Chromaticity::class$) {
			$init($Chromaticity);
			return $equals(attr, $Chromaticity::COLOR);
		} else {
			$load($Copies);
			if (attr->getCategory() == $Copies::class$) {
				return isSupportedCopies($cast($Copies, attr));
			} else {
				$load($Media);
				if (attr->getCategory() == $Media::class$ && $instanceOf($MediaSizeName, attr)) {
					return isSupportedMedia($cast($MediaSizeName, attr));
				} else {
					$load($OrientationRequested);
					if (attr->getCategory() == $OrientationRequested::class$) {
						$init($OrientationRequested);
						bool var$0 = $equals(attr, $OrientationRequested::REVERSE_PORTRAIT);
						if (!var$0) {
							bool var$1 = (flavor != nullptr);
							if (var$1) {
								$init($DocFlavor$SERVICE_FORMATTED);
								bool var$2 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
								var$1 = !(var$2 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
							}
							var$0 = var$1;
						}
						if (var$0) {
							return false;
						}
					} else {
						$load($PageRanges);
						if (attr->getCategory() == $PageRanges::class$) {
							bool var$3 = flavor != nullptr;
							if (var$3) {
								$init($DocFlavor$SERVICE_FORMATTED);
								bool var$4 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
								var$3 = !(var$4 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
							}
							if (var$3) {
								return false;
							}
						} else {
							$load($SheetCollate);
							if (attr->getCategory() == $SheetCollate::class$) {
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
								$load($Sides);
								if (attr->getCategory() == $Sides::class$) {
									bool var$7 = flavor != nullptr;
									if (var$7) {
										$init($DocFlavor$SERVICE_FORMATTED);
										bool var$8 = flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE);
										var$7 = !(var$8 || flavor->equals($DocFlavor$SERVICE_FORMATTED::PRINTABLE));
									}
									if (var$7) {
										return false;
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

$AttributeSet* PSStreamPrintService::getUnsupportedAttributes($DocFlavor* flavor, $AttributeSet* attributes) {
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

$ServiceUIFactory* PSStreamPrintService::getServiceUIFactory() {
	return nullptr;
}

$String* PSStreamPrintService::toString() {
	return $str({"PSStreamPrintService: "_s, $(getName())});
}

bool PSStreamPrintService::equals(Object$* obj) {
	return ($equals(obj, this) || ($instanceOf(PSStreamPrintService, obj) && $nc($($nc(($cast(PSStreamPrintService, obj)))->getName()))->equals($(getName()))));
}

int32_t PSStreamPrintService::hashCode() {
	int32_t var$0 = $of($of(this)->getClass())->hashCode();
	return var$0 + $nc($(getName()))->hashCode();
}

void clinit$PSStreamPrintService($Class* class$) {
		$load($Chromaticity);
		$load($Copies);
		$load($Fidelity);
		$load($JobName);
		$load($Media);
		$load($MediaPrintableArea);
		$load($OrientationRequested);
		$load($PageRanges);
		$load($RequestingUserName);
		$load($SheetCollate);
		$load($Sides);
	$assignStatic(PSStreamPrintService::suppAttrCats, $new($ClassArray, {
		$Chromaticity::class$,
		$Copies::class$,
		$Fidelity::class$,
		$JobName::class$,
		$Media::class$,
		$MediaPrintableArea::class$,
		$OrientationRequested::class$,
		$PageRanges::class$,
		$RequestingUserName::class$,
		$SheetCollate::class$,
		$Sides::class$
	}));
	PSStreamPrintService::MAXCOPIES = 1000;
		$init($MediaSizeName);
	$assignStatic(PSStreamPrintService::mediaSizes, $new($MediaSizeNameArray, {
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
}

PSStreamPrintService::PSStreamPrintService() {
}

$Class* PSStreamPrintService::load$($String* name, bool initialize) {
	$loadClass(PSStreamPrintService, name, initialize, &_PSStreamPrintService_ClassInfo_, clinit$PSStreamPrintService, allocate$PSStreamPrintService);
	return class$;
}

$Class* PSStreamPrintService::class$ = nullptr;

	} // print
} // sun