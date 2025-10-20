#include <sun/font/FileFontStrike.h>

#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontScaler.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/NativeFont.h>
#include <sun/font/NativeStrike.h>
#include <sun/font/NullFontScaler.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/font/SunFontManager.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

#undef BOLD
#undef INTARRAY
#undef INTMASK
#undef INVISIBLE_GLYPHS
#undef ITALIC
#undef LONGARRAY
#undef MAX_VALUE
#undef SEGINTARRAY
#undef SEGLONGARRAY
#undef SEGSHIFT
#undef SEGSIZE
#undef TYPE_TRANSLATION
#undef UNINITIALISED

using $NativeFontArray = $Array<::sun::font::NativeFont>;
using $NativeStrikeArray = $Array<::sun::font::NativeStrike>;
using $floatArray2 = $Array<float, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Locale = ::java::util::Locale;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $FontScaler = ::sun::font::FontScaler;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $FontUtilities = ::sun::font::FontUtilities;
using $NativeFont = ::sun::font::NativeFont;
using $NativeStrike = ::sun::font::NativeStrike;
using $NullFontScaler = ::sun::font::NullFontScaler;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeCache = ::sun::font::StrikeCache;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $SunFontManager = ::sun::font::SunFontManager;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

$FieldInfo _FileFontStrike_FieldInfo_[] = {
	{"INVISIBLE_GLYPHS", "I", nullptr, $STATIC | $FINAL, $constField(FileFontStrike, INVISIBLE_GLYPHS)},
	{"fileFont", "Lsun/font/FileFont;", nullptr, $PRIVATE, $field(FileFontStrike, fileFont)},
	{"UNINITIALISED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, UNINITIALISED)},
	{"INTARRAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, INTARRAY)},
	{"LONGARRAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, LONGARRAY)},
	{"SEGINTARRAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, SEGINTARRAY)},
	{"SEGLONGARRAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, SEGLONGARRAY)},
	{"glyphCacheFormat", "I", nullptr, $PRIVATE | $VOLATILE, $field(FileFontStrike, glyphCacheFormat)},
	{"SEGSHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, SEGSHIFT)},
	{"SEGSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileFontStrike, SEGSIZE)},
	{"segmentedCache", "Z", nullptr, $PRIVATE, $field(FileFontStrike, segmentedCache)},
	{"segIntGlyphImages", "[[I", nullptr, $PRIVATE, $field(FileFontStrike, segIntGlyphImages)},
	{"segLongGlyphImages", "[[J", nullptr, $PRIVATE, $field(FileFontStrike, segLongGlyphImages)},
	{"horizontalAdvances", "[F", nullptr, $PRIVATE, $field(FileFontStrike, horizontalAdvances)},
	{"segHorizontalAdvances", "[[F", nullptr, $PRIVATE, $field(FileFontStrike, segHorizontalAdvances)},
	{"boundsMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Integer;Ljava/awt/geom/Rectangle2D$Float;>;", 0, $field(FileFontStrike, boundsMap)},
	{"glyphMetricsMapRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Integer;Ljava/awt/geom/Point2D$Float;>;>;", 0, $field(FileFontStrike, glyphMetricsMapRef)},
	{"invertDevTx", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(FileFontStrike, invertDevTx)},
	{"useNatives", "Z", nullptr, 0, $field(FileFontStrike, useNatives)},
	{"nativeStrikes", "[Lsun/font/NativeStrike;", nullptr, 0, $field(FileFontStrike, nativeStrikes)},
	{"intPtSize", "I", nullptr, $PRIVATE, $field(FileFontStrike, intPtSize)},
	{"isXPorLater", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileFontStrike, isXPorLater)},
	{"outlineMapRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Integer;Ljava/awt/geom/GeneralPath;>;>;", $PRIVATE, $field(FileFontStrike, outlineMapRef)},
	{}
};

$MethodInfo _FileFontStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/FileFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(FileFontStrike::*)($FileFont*,$FontStrikeDesc*)>(&FileFontStrike::init$))},
	{"_getGlyphImageFromWindows", "(Ljava/lang/String;IIIZI)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(FileFontStrike::*)($String*,int32_t,int32_t,int32_t,bool,int32_t)>(&FileFontStrike::_getGlyphImageFromWindows))},
	{"adjustPoint", "(Ljava/awt/geom/Point2D$Float;)V", nullptr, $PROTECTED},
	{"getCachedGlyphPtr", "(I)J", nullptr, 0},
	{"getCachedGlyphPtrInternal", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileFontStrike::*)(int32_t)>(&FileFontStrike::getCachedGlyphPtrInternal))},
	{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getCodePointAdvance", "(I)F", nullptr, 0},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(I)F", nullptr, 0},
	{"getGlyphAdvance", "(IZ)F", nullptr, $PRIVATE, $method(static_cast<float(FileFontStrike::*)(int32_t,bool)>(&FileFontStrike::getGlyphAdvance))},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0},
	{"getGlyphImageFromNative", "(I)J", nullptr, 0},
	{"getGlyphImageFromWindows", "(I)J", nullptr, 0},
	{"getGlyphImageFromX11", "(I)J", nullptr, 0},
	{"getGlyphImageMinX", "(JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FileFontStrike::*)(int64_t,int32_t)>(&FileFontStrike::getGlyphImageMinX))},
	{"getGlyphImagePtr", "(I)J", nullptr, 0},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getGlyphMetrics", "(IZ)Ljava/awt/geom/Point2D$Float;", nullptr, $PRIVATE, $method(static_cast<$Point2D$Float*(FileFontStrike::*)(int32_t,bool)>(&FileFontStrike::getGlyphMetrics))},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getSlot0GlyphImagePtrs", "([I[JI)I", nullptr, 0},
	{"initGlyphCache", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(FileFontStrike::*)()>(&FileFontStrike::initGlyphCache))},
	{"initNative", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&FileFontStrike::initNative))},
	{"setCachedGlyphPtr", "(IJ)J", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int64_t(FileFontStrike::*)(int32_t,int64_t)>(&FileFontStrike::setCachedGlyphPtr))},
	{"setCachedGlyphPtrInternal", "(IJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileFontStrike::*)(int32_t,int64_t)>(&FileFontStrike::setCachedGlyphPtrInternal))},
	{}
};

#define _METHOD_INDEX__getGlyphImageFromWindows 1
#define _METHOD_INDEX_initNative 26

$ClassInfo _FileFontStrike_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FileFontStrike",
	"sun.font.PhysicalStrike",
	nullptr,
	_FileFontStrike_FieldInfo_,
	_FileFontStrike_MethodInfo_
};

$Object* allocate$FileFontStrike($Class* clazz) {
	return $of($alloc(FileFontStrike));
}

bool FileFontStrike::isXPorLater = false;

bool FileFontStrike::initNative() {
	$init(FileFontStrike);
	bool $ret = false;
	$prepareNativeStatic(FileFontStrike, initNative, bool);
	$ret = $invokeNativeStatic(FileFontStrike, initNative);
	$finishNativeStatic();
	return $ret;
}

void FileFontStrike::init$($FileFont* fileFont, $FontStrikeDesc* desc) {
	$useLocalCurrentObjectStackCache();
	$PhysicalStrike::init$(fileFont, desc);
	this->glyphCacheFormat = FileFontStrike::UNINITIALISED;
	$set(this, fileFont, fileFont);
	if ($nc(desc)->style != $nc(fileFont)->style) {
		if (((int32_t)(desc->style & (uint32_t)$Font::ITALIC)) == $Font::ITALIC && ((int32_t)(fileFont->style & (uint32_t)$Font::ITALIC)) == 0) {
			this->algoStyle = true;
			this->italic = 0.7f;
		}
		if (((int32_t)(desc->style & (uint32_t)$Font::BOLD)) == $Font::BOLD && (((int32_t)(fileFont->style & (uint32_t)$Font::BOLD)) == 0)) {
			this->algoStyle = true;
			this->boldness = 1.33f;
		}
	}
	$var($doubles, matrix, $new($doubles, 4));
	$var($AffineTransform, at, $nc(desc)->glyphTx);
	$nc(at)->getMatrix(matrix);
	bool var$0 = !$nc(desc->devTx)->isIdentity();
	if (var$0 && $nc(desc->devTx)->getType() != $AffineTransform::TYPE_TRANSLATION) {
		try {
			$set(this, invertDevTx, $nc(desc->devTx)->createInverse());
		} catch ($NoninvertibleTransformException&) {
			$catch();
		}
	}
	bool var$4 = $Double::isNaN(matrix->get(0));
	bool var$3 = var$4 || $Double::isNaN(matrix->get(1));
	bool var$2 = var$3 || $Double::isNaN(matrix->get(2));
	bool var$1 = var$2 || $Double::isNaN(matrix->get(3));
	if (var$1 || $nc(fileFont)->getScaler() == nullptr) {
		this->pScalerContext = $NullFontScaler::getNullScalerContext();
	} else {
		this->pScalerContext = $nc($(fileFont->getScaler()))->createScalerContext(matrix, desc->aaHint, desc->fmHint, this->boldness, this->italic);
	}
	$set(this, mapper, $nc(fileFont)->getMapper());
	int32_t numGlyphs = $nc(this->mapper)->getNumGlyphs();
	float ptSize = (float)matrix->get(3);
	int32_t iSize = this->intPtSize = $cast(int32_t, ptSize);
	bool isSimpleTx = ((int32_t)(at->getType() & (uint32_t)$PhysicalStrike::complexTX)) == 0;
	this->segmentedCache = (numGlyphs > FileFontStrike::SEGSIZE << 3) || ((numGlyphs > FileFontStrike::SEGSIZE << 1) && (!isSimpleTx || ptSize != iSize || iSize < 6 || iSize > 36));
	if (this->pScalerContext == (int64_t)0) {
		$set(this, disposer, $new($FontStrikeDisposer, fileFont, desc));
		initGlyphCache();
		this->pScalerContext = $NullFontScaler::getNullScalerContext();
		$nc($($SunFontManager::getInstance()))->deRegisterBadFont(fileFont);
		return;
	}
	$init($FontUtilities);
	bool var$5 = $FontUtilities::isWindows && FileFontStrike::isXPorLater && !$FontUtilities::useJDKScaler && !$GraphicsEnvironment::isHeadless() && !fileFont->useJavaRasterizer && (desc->aaHint == 4 || desc->aaHint == 5) && (matrix->get(1) == 0.0 && matrix->get(2) == 0.0 && matrix->get(0) == matrix->get(3) && matrix->get(0) >= 3.0 && matrix->get(0) <= 100.0);
	if (var$5 && !$nc(($cast($TrueTypeFont, fileFont)))->useEmbeddedBitmapsForSize(this->intPtSize)) {
		this->useNatives = true;
	}
	if ($FontUtilities::isLogging() && $FontUtilities::isWindows) {
		$var($String, var$6, $$str({"Strike for "_s, fileFont, " at size = "_s, $$str(this->intPtSize), " use natives = "_s, $$str(this->useNatives), " useJavaRasteriser = "_s, $$str(fileFont->useJavaRasterizer), " AAHint = "_s, $$str(desc->aaHint), " Has Embedded bitmaps = "_s}));
		$FontUtilities::logInfo($$concat(var$6, $$str($nc(($cast($TrueTypeFont, fileFont)))->useEmbeddedBitmapsForSize(this->intPtSize))));
	}
	$set(this, disposer, $new($FontStrikeDisposer, fileFont, desc, this->pScalerContext));
	double maxSz = 48.0;
	bool var$9 = $Math::abs(at->getScaleX()) <= maxSz;
	bool var$8 = var$9 && $Math::abs(at->getScaleY()) <= maxSz;
	bool var$7 = var$8 && $Math::abs(at->getShearX()) <= maxSz;
	this->getImageWithAdvance = var$7 && $Math::abs(at->getShearY()) <= maxSz;
	if (!this->getImageWithAdvance) {
		if (!this->segmentedCache) {
			$set(this, horizontalAdvances, $new($floats, numGlyphs));
			for (int32_t i = 0; i < numGlyphs; ++i) {
				$init($Float);
				$nc(this->horizontalAdvances)->set(i, $Float::MAX_VALUE);
			}
		} else {
			int32_t numSegments = $div((numGlyphs + FileFontStrike::SEGSIZE - 1), FileFontStrike::SEGSIZE);
			$set(this, segHorizontalAdvances, $new($floatArray2, numSegments));
		}
	}
}

int32_t FileFontStrike::getNumGlyphs() {
	return $nc(this->fileFont)->getNumGlyphs();
}

int64_t FileFontStrike::getGlyphImageFromNative(int32_t glyphCode) {
	$init($FontUtilities);
	if ($FontUtilities::isWindows) {
		return getGlyphImageFromWindows(glyphCode);
	} else {
		return getGlyphImageFromX11(glyphCode);
	}
}

int64_t FileFontStrike::_getGlyphImageFromWindows($String* family, int32_t style, int32_t size, int32_t glyphCode, bool fracMetrics, int32_t fontDataSize) {
	int64_t $ret = 0;
	$prepareNative(FileFontStrike, _getGlyphImageFromWindows, int64_t, $String* family, int32_t style, int32_t size, int32_t glyphCode, bool fracMetrics, int32_t fontDataSize);
	$ret = $invokeNative(FileFontStrike, _getGlyphImageFromWindows, family, style, size, glyphCode, fracMetrics, fontDataSize);
	$finishNative();
	return $ret;
}

int64_t FileFontStrike::getGlyphImageFromWindows(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	$var($String, family, $nc(this->fileFont)->getFamilyName(nullptr));
	int32_t style = (((int32_t)($nc(this->desc)->style & (uint32_t)$Font::BOLD)) | ((int32_t)($nc(this->desc)->style & (uint32_t)$Font::ITALIC))) | $nc(this->fileFont)->getStyle();
	int32_t size = this->intPtSize;
	int64_t ptr = _getGlyphImageFromWindows(family, style, size, glyphCode, $nc(this->desc)->fmHint == 2, $nc(($cast($TrueTypeFont, this->fileFont)))->fontDataSize);
	if (ptr != 0) {
		float advance = getGlyphAdvance(glyphCode, false);
		$init($StrikeCache);
		$nc($StrikeCache::unsafe)->putFloat(ptr + $StrikeCache::xAdvanceOffset, advance);
		return ptr;
	} else {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logWarning($$str({"Failed to render glyph using GDI: code="_s, $$str(glyphCode), ", fontFamily="_s, family, ", style="_s, $$str(style), ", size="_s, $$str(size)}));
		}
		return $nc(this->fileFont)->getGlyphImage(this->pScalerContext, glyphCode);
	}
}

int64_t FileFontStrike::getGlyphImageFromX11(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	int64_t glyphPtr = 0;
	char16_t charCode = $nc($nc(this->fileFont)->glyphToCharMap)->get(glyphCode);
	for (int32_t i = 0; i < $nc(this->nativeStrikes)->length; ++i) {
		$var($CharToGlyphMapper, mapper, $nc($nc($nc(this->fileFont)->nativeFonts)->get(i))->getMapper());
		int32_t gc = (int32_t)($nc(mapper)->charToGlyph(charCode) & (uint32_t)0x0000FFFF);
		if (gc != mapper->getMissingGlyphCode()) {
			glyphPtr = $nc($nc(this->nativeStrikes)->get(i))->getGlyphImagePtrNoCache(gc);
			if (glyphPtr != (int64_t)0) {
				return glyphPtr;
			}
		}
	}
	return $nc(this->fileFont)->getGlyphImage(this->pScalerContext, glyphCode);
}

int64_t FileFontStrike::getGlyphImagePtr(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	if (glyphCode >= FileFontStrike::INVISIBLE_GLYPHS) {
		$init($StrikeCache);
		return $StrikeCache::invisibleGlyphPtr;
	}
	int64_t glyphPtr = 0;
	if ((glyphPtr = getCachedGlyphPtr(glyphCode)) != (int64_t)0) {
		return glyphPtr;
	} else {
		if (this->useNatives) {
			glyphPtr = getGlyphImageFromNative(glyphCode);
			if (glyphPtr == (int64_t)0 && $FontUtilities::isLogging()) {
				$FontUtilities::logInfo($$str({"Strike for "_s, this->fileFont, " at size = "_s, $$str(this->intPtSize), " couldn\'t get native glyph for code = "_s, $$str(glyphCode)}));
			}
		}
		if (glyphPtr == (int64_t)0) {
			glyphPtr = $nc(this->fileFont)->getGlyphImage(this->pScalerContext, glyphCode);
		}
		return setCachedGlyphPtr(glyphCode, glyphPtr);
	}
}

void FileFontStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		int32_t glyphCode = $nc(glyphCodes)->get(i);
		if (glyphCode >= FileFontStrike::INVISIBLE_GLYPHS) {
			$init($StrikeCache);
			$nc(images)->set(i, $StrikeCache::invisibleGlyphPtr);
			continue;
		} else if (($nc(images)->set(i, getCachedGlyphPtr(glyphCode))) != (int64_t)0) {
			continue;
		} else {
			int64_t glyphPtr = 0;
			if (this->useNatives) {
				glyphPtr = getGlyphImageFromNative(glyphCode);
			}
			if (glyphPtr == (int64_t)0) {
				glyphPtr = $nc(this->fileFont)->getGlyphImage(this->pScalerContext, glyphCode);
			}
			images->set(i, setCachedGlyphPtr(glyphCode, glyphPtr));
		}
	}
}

int32_t FileFontStrike::getSlot0GlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	int32_t convertedCnt = 0;
	for (int32_t i = 0; i < len; ++i) {
		int32_t glyphCode = $nc(glyphCodes)->get(i);
		if ((int32_t)((uint32_t)glyphCode >> 24) != 0) {
			return convertedCnt;
		} else {
			++convertedCnt;
		}
		if (glyphCode >= FileFontStrike::INVISIBLE_GLYPHS) {
			$init($StrikeCache);
			$nc(images)->set(i, $StrikeCache::invisibleGlyphPtr);
			continue;
		} else if (($nc(images)->set(i, getCachedGlyphPtr(glyphCode))) != (int64_t)0) {
			continue;
		} else {
			int64_t glyphPtr = 0;
			if (this->useNatives) {
				glyphPtr = getGlyphImageFromNative(glyphCode);
			}
			if (glyphPtr == (int64_t)0) {
				glyphPtr = $nc(this->fileFont)->getGlyphImage(this->pScalerContext, glyphCode);
			}
			images->set(i, setCachedGlyphPtr(glyphCode, glyphPtr));
		}
	}
	return convertedCnt;
}

int64_t FileFontStrike::getCachedGlyphPtr(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	try {
		return getCachedGlyphPtrInternal(glyphCode);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($NullFontScaler, nullScaler, $cast($NullFontScaler, $FontScaler::getNullScaler()));
		int64_t nullSC = $NullFontScaler::getNullScalerContext();
		return $nc(nullScaler)->getGlyphImage(nullSC, glyphCode);
	}
	$shouldNotReachHere();
}

int64_t FileFontStrike::getCachedGlyphPtrInternal(int32_t glyphCode) {
	{
		int32_t segIndex = 0;
		switch (this->glyphCacheFormat) {
		case FileFontStrike::INTARRAY:
			{
				return (int64_t)($nc(this->intGlyphImages)->get(glyphCode) & (uint64_t)$PhysicalStrike::INTMASK);
			}
		case FileFontStrike::SEGINTARRAY:
			{
				segIndex = $sr(glyphCode, FileFontStrike::SEGSHIFT);
				if ($nc(this->segIntGlyphImages)->get(segIndex) != nullptr) {
					int32_t subIndex = $mod(glyphCode, FileFontStrike::SEGSIZE);
					return (int64_t)($nc($nc(this->segIntGlyphImages)->get(segIndex))->get(subIndex) & (uint64_t)$PhysicalStrike::INTMASK);
				} else {
					return 0;
				}
			}
		case FileFontStrike::LONGARRAY:
			{
				return $nc(this->longGlyphImages)->get(glyphCode);
			}
		case FileFontStrike::SEGLONGARRAY:
			{
				segIndex = $sr(glyphCode, FileFontStrike::SEGSHIFT);
				if ($nc(this->segLongGlyphImages)->get(segIndex) != nullptr) {
					int32_t subIndex = $mod(glyphCode, FileFontStrike::SEGSIZE);
					return $nc($nc(this->segLongGlyphImages)->get(segIndex))->get(subIndex);
				} else {
					return 0;
				}
			}
		}
	}
	return 0;
}

int64_t FileFontStrike::setCachedGlyphPtr(int32_t glyphCode, int64_t glyphPtr) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		try {
			return setCachedGlyphPtrInternal(glyphCode, glyphPtr);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			switch (this->glyphCacheFormat) {
			case FileFontStrike::INTARRAY:
				{}
			case FileFontStrike::SEGINTARRAY:
				{
					$StrikeCache::freeIntPointer((int32_t)glyphPtr);
					break;
				}
			case FileFontStrike::LONGARRAY:
				{}
			case FileFontStrike::SEGLONGARRAY:
				{
					$StrikeCache::freeLongPointer(glyphPtr);
					break;
				}
			}
			$var($NullFontScaler, nullScaler, $cast($NullFontScaler, $FontScaler::getNullScaler()));
			int64_t nullSC = $NullFontScaler::getNullScalerContext();
			return $nc(nullScaler)->getGlyphImage(nullSC, glyphCode);
		}
	}
	$shouldNotReachHere();
}

int64_t FileFontStrike::setCachedGlyphPtrInternal(int32_t glyphCode, int64_t glyphPtr) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t segIndex = 0;
		int32_t subIndex = 0;
		switch (this->glyphCacheFormat) {
		case FileFontStrike::INTARRAY:
			{
				if ($nc(this->intGlyphImages)->get(glyphCode) == 0) {
					$nc(this->intGlyphImages)->set(glyphCode, (int32_t)glyphPtr);
					return glyphPtr;
				} else {
					$StrikeCache::freeIntPointer((int32_t)glyphPtr);
					return (int64_t)($nc(this->intGlyphImages)->get(glyphCode) & (uint64_t)$PhysicalStrike::INTMASK);
				}
			}
		case FileFontStrike::SEGINTARRAY:
			{
				segIndex = $sr(glyphCode, FileFontStrike::SEGSHIFT);
				subIndex = $mod(glyphCode, FileFontStrike::SEGSIZE);
				if ($nc(this->segIntGlyphImages)->get(segIndex) == nullptr) {
					$nc(this->segIntGlyphImages)->set(segIndex, $$new($ints, FileFontStrike::SEGSIZE));
				}
				if ($nc($nc(this->segIntGlyphImages)->get(segIndex))->get(subIndex) == 0) {
					$nc($nc(this->segIntGlyphImages)->get(segIndex))->set(subIndex, (int32_t)glyphPtr);
					return glyphPtr;
				} else {
					$StrikeCache::freeIntPointer((int32_t)glyphPtr);
					return (int64_t)($nc($nc(this->segIntGlyphImages)->get(segIndex))->get(subIndex) & (uint64_t)$PhysicalStrike::INTMASK);
				}
			}
		case FileFontStrike::LONGARRAY:
			{
				if ($nc(this->longGlyphImages)->get(glyphCode) == (int64_t)0) {
					$nc(this->longGlyphImages)->set(glyphCode, glyphPtr);
					return glyphPtr;
				} else {
					$StrikeCache::freeLongPointer(glyphPtr);
					return $nc(this->longGlyphImages)->get(glyphCode);
				}
			}
		case FileFontStrike::SEGLONGARRAY:
			{
				segIndex = $sr(glyphCode, FileFontStrike::SEGSHIFT);
				subIndex = $mod(glyphCode, FileFontStrike::SEGSIZE);
				if ($nc(this->segLongGlyphImages)->get(segIndex) == nullptr) {
					$nc(this->segLongGlyphImages)->set(segIndex, $$new($longs, FileFontStrike::SEGSIZE));
				}
				if ($nc($nc(this->segLongGlyphImages)->get(segIndex))->get(subIndex) == (int64_t)0) {
					$nc($nc(this->segLongGlyphImages)->get(segIndex))->set(subIndex, glyphPtr);
					return glyphPtr;
				} else {
					$StrikeCache::freeLongPointer(glyphPtr);
					return $nc($nc(this->segLongGlyphImages)->get(segIndex))->get(subIndex);
				}
			}
		}
	}
	initGlyphCache();
	return setCachedGlyphPtr(glyphCode, glyphPtr);
}

void FileFontStrike::initGlyphCache() {
	$synchronized(this) {
		int32_t numGlyphs = $nc(this->mapper)->getNumGlyphs();
		int32_t tmpFormat = FileFontStrike::UNINITIALISED;
		if (this->segmentedCache) {
			int32_t numSegments = $div((numGlyphs + FileFontStrike::SEGSIZE - 1), FileFontStrike::SEGSIZE);
			$init($PhysicalStrike);
			if ($PhysicalStrike::longAddresses) {
				tmpFormat = FileFontStrike::SEGLONGARRAY;
				$set(this, segLongGlyphImages, $new($longArray2, numSegments));
				$set($nc(this->disposer), segLongGlyphImages, this->segLongGlyphImages);
			} else {
				tmpFormat = FileFontStrike::SEGINTARRAY;
				$set(this, segIntGlyphImages, $new($intArray2, numSegments));
				$set($nc(this->disposer), segIntGlyphImages, this->segIntGlyphImages);
			}
		} else {
			$init($PhysicalStrike);
			if ($PhysicalStrike::longAddresses) {
				tmpFormat = FileFontStrike::LONGARRAY;
				$set(this, longGlyphImages, $new($longs, numGlyphs));
				$set($nc(this->disposer), longGlyphImages, this->longGlyphImages);
			} else {
				tmpFormat = FileFontStrike::INTARRAY;
				$set(this, intGlyphImages, $new($ints, numGlyphs));
				$set($nc(this->disposer), intGlyphImages, this->intGlyphImages);
			}
		}
		this->glyphCacheFormat = tmpFormat;
	}
}

float FileFontStrike::getGlyphAdvance(int32_t glyphCode) {
	return getGlyphAdvance(glyphCode, true);
}

float FileFontStrike::getGlyphAdvance(int32_t glyphCode, bool getUserAdv) {
	$useLocalCurrentObjectStackCache();
	float advance = 0.0;
	if (glyphCode >= FileFontStrike::INVISIBLE_GLYPHS) {
		return 0.0f;
	}
	if (this->horizontalAdvances != nullptr) {
		advance = $nc(this->horizontalAdvances)->get(glyphCode);
		$init($Float);
		if (advance != $Float::MAX_VALUE) {
			if (!getUserAdv && this->invertDevTx != nullptr) {
				$var($Point2D$Float, metrics, $new($Point2D$Float, advance, 0.0f));
				$nc($nc(this->desc)->devTx)->deltaTransform(metrics, metrics);
				return metrics->x;
			} else {
				return advance;
			}
		}
	} else if (this->segmentedCache && this->segHorizontalAdvances != nullptr) {
		int32_t segIndex = $sr(glyphCode, FileFontStrike::SEGSHIFT);
		$var($floats, subArray, $nc(this->segHorizontalAdvances)->get(segIndex));
		if (subArray != nullptr) {
			advance = subArray->get($mod(glyphCode, FileFontStrike::SEGSIZE));
			$init($Float);
			if (advance != $Float::MAX_VALUE) {
				if (!getUserAdv && this->invertDevTx != nullptr) {
					$var($Point2D$Float, metrics, $new($Point2D$Float, advance, 0.0f));
					$nc($nc(this->desc)->devTx)->deltaTransform(metrics, metrics);
					return metrics->x;
				} else {
					return advance;
				}
			}
		}
	}
	if (!getUserAdv && this->invertDevTx != nullptr) {
		$var($Point2D$Float, metrics, $new($Point2D$Float));
		$nc(this->fileFont)->getGlyphMetrics(this->pScalerContext, glyphCode, metrics);
		return metrics->x;
	}
	if (this->invertDevTx != nullptr || !getUserAdv) {
		advance = $nc($(getGlyphMetrics(glyphCode, getUserAdv)))->x;
	} else {
		int64_t glyphPtr = 0;
		if (this->getImageWithAdvance) {
			glyphPtr = getGlyphImagePtr(glyphCode);
		} else {
			glyphPtr = getCachedGlyphPtr(glyphCode);
		}
		if (glyphPtr != (int64_t)0) {
			$init($StrikeCache);
			advance = $nc($StrikeCache::unsafe)->getFloat(glyphPtr + $StrikeCache::xAdvanceOffset);
		} else {
			advance = $nc(this->fileFont)->getGlyphAdvance(this->pScalerContext, glyphCode);
		}
	}
	if (this->horizontalAdvances != nullptr) {
		$nc(this->horizontalAdvances)->set(glyphCode, advance);
	} else if (this->segmentedCache && this->segHorizontalAdvances != nullptr) {
		int32_t segIndex = $sr(glyphCode, FileFontStrike::SEGSHIFT);
		int32_t subIndex = $mod(glyphCode, FileFontStrike::SEGSIZE);
		if ($nc(this->segHorizontalAdvances)->get(segIndex) == nullptr) {
			$nc(this->segHorizontalAdvances)->set(segIndex, $$new($floats, FileFontStrike::SEGSIZE));
			for (int32_t i = 0; i < FileFontStrike::SEGSIZE; ++i) {
				$init($Float);
				$nc($nc(this->segHorizontalAdvances)->get(segIndex))->set(i, $Float::MAX_VALUE);
			}
		}
		$nc($nc(this->segHorizontalAdvances)->get(segIndex))->set(subIndex, advance);
	}
	return advance;
}

float FileFontStrike::getCodePointAdvance(int32_t cp) {
	return getGlyphAdvance($nc(this->mapper)->charToGlyph(cp));
}

void FileFontStrike::getGlyphImageBounds(int32_t glyphCode, $Point2D$Float* pt, $Rectangle* result) {
	int64_t ptr = getGlyphImagePtr(glyphCode);
	float topLeftX = 0.0;
	float topLeftY = 0.0;
	if (ptr == (int64_t)0) {
		$nc(result)->x = $cast(int32_t, $Math::floor($nc(pt)->x + 0.5f));
		result->y = $cast(int32_t, $Math::floor($nc(pt)->y + 0.5f));
		result->width = (result->height = 0);
		return;
	}
	$init($StrikeCache);
	topLeftX = $nc($StrikeCache::unsafe)->getFloat(ptr + $StrikeCache::topLeftXOffset);
	topLeftY = $nc($StrikeCache::unsafe)->getFloat(ptr + $StrikeCache::topLeftYOffset);
	$nc(result)->x = $cast(int32_t, $Math::floor($nc(pt)->x + topLeftX + 0.5f));
	result->y = $cast(int32_t, $Math::floor($nc(pt)->y + topLeftY + 0.5f));
	result->width = (int32_t)($nc($StrikeCache::unsafe)->getShort(ptr + $StrikeCache::widthOffset) & (uint32_t)0x0000FFFF);
	result->height = (int32_t)($nc($StrikeCache::unsafe)->getShort(ptr + $StrikeCache::heightOffset) & (uint32_t)0x0000FFFF);
	if (($nc(this->desc)->aaHint == 4 || $nc(this->desc)->aaHint == 5) && topLeftX <= -2.0f) {
		int32_t minx = getGlyphImageMinX(ptr, result->x);
		if (minx > result->x) {
			result->x += 1;
			result->width -= 1;
		}
	}
}

int32_t FileFontStrike::getGlyphImageMinX(int64_t ptr, int32_t origMinX) {
	$init($StrikeCache);
	int32_t width = $nc($StrikeCache::unsafe)->getChar(ptr + $StrikeCache::widthOffset);
	int32_t height = $nc($StrikeCache::unsafe)->getChar(ptr + $StrikeCache::heightOffset);
	int32_t rowBytes = $nc($StrikeCache::unsafe)->getChar(ptr + $StrikeCache::rowBytesOffset);
	if (rowBytes == width) {
		return origMinX;
	}
	int64_t pixelData = $nc($StrikeCache::unsafe)->getAddress(ptr + $StrikeCache::pixelDataOffset);
	if (pixelData == (int64_t)0) {
		return origMinX;
	}
	for (int32_t y = 0; y < height; ++y) {
		for (int32_t x = 0; x < 3; ++x) {
			if ($nc($StrikeCache::unsafe)->getByte(pixelData + y * rowBytes + x) != 0) {
				return origMinX;
			}
		}
	}
	return origMinX + 1;
}

$StrikeMetrics* FileFontStrike::getFontMetrics() {
	if (this->strikeMetrics == nullptr) {
		$set(this, strikeMetrics, $nc(this->fileFont)->getFontMetrics(this->pScalerContext));
		if (this->invertDevTx != nullptr) {
			$nc(this->strikeMetrics)->convertToUserSpace(this->invertDevTx);
		}
	}
	return this->strikeMetrics;
}

$Point2D$Float* FileFontStrike::getGlyphMetrics(int32_t glyphCode) {
	return getGlyphMetrics(glyphCode, true);
}

$Point2D$Float* FileFontStrike::getGlyphMetrics(int32_t glyphCode, bool getImage) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D$Float, metrics, $new($Point2D$Float));
	if (glyphCode >= FileFontStrike::INVISIBLE_GLYPHS) {
		return metrics;
	}
	int64_t glyphPtr = 0;
	if (this->getImageWithAdvance && getImage) {
		glyphPtr = getGlyphImagePtr(glyphCode);
	} else {
		glyphPtr = getCachedGlyphPtr(glyphCode);
	}
	if (glyphPtr != (int64_t)0) {
		$assign(metrics, $new($Point2D$Float));
		$init($StrikeCache);
		metrics->x = $nc($StrikeCache::unsafe)->getFloat(glyphPtr + $StrikeCache::xAdvanceOffset);
		metrics->y = $nc($StrikeCache::unsafe)->getFloat(glyphPtr + $StrikeCache::yAdvanceOffset);
		if (this->invertDevTx != nullptr) {
			$nc(this->invertDevTx)->deltaTransform(metrics, metrics);
		}
	} else {
		$var($Integer, key, $Integer::valueOf(glyphCode));
		$var($Point2D$Float, value, nullptr);
		$var($ConcurrentHashMap, glyphMetricsMap, nullptr);
		if (this->glyphMetricsMapRef != nullptr) {
			$assign(glyphMetricsMap, $cast($ConcurrentHashMap, $nc(this->glyphMetricsMapRef)->get()));
		}
		if (glyphMetricsMap != nullptr) {
			$assign(value, $cast($Point2D$Float, glyphMetricsMap->get(key)));
			if (value != nullptr) {
				metrics->x = value->x;
				metrics->y = value->y;
				return metrics;
			}
		}
		if (value == nullptr) {
			$nc(this->fileFont)->getGlyphMetrics(this->pScalerContext, glyphCode, metrics);
			if (this->invertDevTx != nullptr) {
				$nc(this->invertDevTx)->deltaTransform(metrics, metrics);
			}
			$assign(value, $new($Point2D$Float, metrics->x, metrics->y));
			if (glyphMetricsMap == nullptr) {
				$assign(glyphMetricsMap, $new($ConcurrentHashMap));
				$set(this, glyphMetricsMapRef, $new($SoftReference, glyphMetricsMap));
			}
			$nc(glyphMetricsMap)->put(key, value);
		}
	}
	return metrics;
}

$Point2D$Float* FileFontStrike::getCharMetrics(char16_t ch) {
	return getGlyphMetrics($nc(this->mapper)->charToGlyph(ch));
}

$Rectangle2D$Float* FileFontStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	if (this->boundsMap == nullptr) {
		$set(this, boundsMap, $new($ConcurrentHashMap));
	}
	$var($Integer, key, $Integer::valueOf(glyphCode));
	$var($Rectangle2D$Float, bounds, $cast($Rectangle2D$Float, $nc(this->boundsMap)->get(key)));
	if (bounds == nullptr) {
		$assign(bounds, $nc(this->fileFont)->getGlyphOutlineBounds(this->pScalerContext, glyphCode));
		$nc(this->boundsMap)->put(key, bounds);
	}
	return bounds;
}

$Rectangle2D* FileFontStrike::getOutlineBounds(int32_t glyphCode) {
	return $nc(this->fileFont)->getGlyphOutlineBounds(this->pScalerContext, glyphCode);
}

$GeneralPath* FileFontStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($GeneralPath, gp, nullptr);
	$var($ConcurrentHashMap, outlineMap, nullptr);
	if (this->outlineMapRef != nullptr) {
		$assign(outlineMap, $cast($ConcurrentHashMap, $nc(this->outlineMapRef)->get()));
		if (outlineMap != nullptr) {
			$assign(gp, $cast($GeneralPath, outlineMap->get($($Integer::valueOf(glyphCode)))));
		}
	}
	if (gp == nullptr) {
		$assign(gp, $nc(this->fileFont)->getGlyphOutline(this->pScalerContext, glyphCode, (float)0, (float)0));
		if (outlineMap == nullptr) {
			$assign(outlineMap, $new($ConcurrentHashMap));
			$set(this, outlineMapRef, $new($WeakReference, outlineMap));
		}
		$nc(outlineMap)->put($($Integer::valueOf(glyphCode)), gp);
	}
	$assign(gp, $cast($GeneralPath, $nc(gp)->clone()));
	if (x != 0.0f || y != 0.0f) {
		gp->transform($($AffineTransform::getTranslateInstance(x, y)));
	}
	return gp;
}

$GeneralPath* FileFontStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	return $nc(this->fileFont)->getGlyphVectorOutline(this->pScalerContext, glyphs, $nc(glyphs)->length, x, y);
}

void FileFontStrike::adjustPoint($Point2D$Float* pt) {
	if (this->invertDevTx != nullptr) {
		$nc(this->invertDevTx)->deltaTransform(pt, pt);
	}
}

void clinit$FileFontStrike($Class* class$) {
	FileFontStrike::isXPorLater = false;
	{
		$init($FontUtilities);
		if ($FontUtilities::isWindows && !$FontUtilities::useJDKScaler && !$GraphicsEnvironment::isHeadless()) {
			FileFontStrike::isXPorLater = FileFontStrike::initNative();
		}
	}
}

FileFontStrike::FileFontStrike() {
}

$Class* FileFontStrike::load$($String* name, bool initialize) {
	$loadClass(FileFontStrike, name, initialize, &_FileFontStrike_ClassInfo_, clinit$FileFontStrike, allocate$FileFontStrike);
	return class$;
}

$Class* FileFontStrike::class$ = nullptr;

	} // font
} // sun