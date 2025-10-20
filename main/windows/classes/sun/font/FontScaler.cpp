#include <sun/font/FontScaler.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FreetypeFontScaler.h>
#include <sun/font/NullFontScaler.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Font2D = ::sun::font::Font2D;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FreetypeFontScaler = ::sun::font::FreetypeFontScaler;
using $NullFontScaler = ::sun::font::NullFontScaler;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _FontScaler_FieldInfo_[] = {
	{"nullScaler", "Lsun/font/FontScaler;", nullptr, $PRIVATE | $STATIC, $staticField(FontScaler, nullScaler)},
	{"font", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/font/Font2D;>;", $PROTECTED, $field(FontScaler, font)},
	{"nativeScaler", "J", nullptr, $PROTECTED, $field(FontScaler, nativeScaler)},
	{"disposed", "Z", nullptr, $PROTECTED, $field(FontScaler, disposed)},
	{}
};

$MethodInfo _FontScaler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontScaler::*)()>(&FontScaler::init$))},
	{"createScalerContext", "([DIIFF)J", nullptr, $ABSTRACT},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeScaler", "()V", nullptr, $PUBLIC},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphAdvance", "(JI)F", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphCode", "(C)I", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphImage", "(JI)J", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getMissingGlyphCode", "()I", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getNullScaler", "()Lsun/font/FontScaler;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<FontScaler*(*)()>(&FontScaler::getNullScaler))},
	{"getNumGlyphs", "()I", nullptr, $ABSTRACT, nullptr, "sun.font.FontScalerException"},
	{"getScaler", "(Lsun/font/Font2D;IZI)Lsun/font/FontScaler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FontScaler*(*)($Font2D*,int32_t,bool,int32_t)>(&FontScaler::getScaler))},
	{"getUnitsPerEm", "()J", nullptr, $ABSTRACT},
	{"invalidateScalerContext", "(J)V", nullptr, $ABSTRACT},
	{}
};

$ClassInfo _FontScaler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.FontScaler",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_FontScaler_FieldInfo_,
	_FontScaler_MethodInfo_
};

$Object* allocate$FontScaler($Class* clazz) {
	return $of($alloc(FontScaler));
}

FontScaler* FontScaler::nullScaler = nullptr;

void FontScaler::init$() {
	$set(this, font, nullptr);
	this->nativeScaler = 0;
	this->disposed = false;
}

FontScaler* FontScaler::getScaler($Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize) {
	$init(FontScaler);
	$useLocalCurrentObjectStackCache();
	$var(FontScaler, scaler, nullptr);
	try {
		$assign(scaler, $new($FreetypeFontScaler, font, indexInCollection, supportsCJK, filesize));
		$Disposer::addObjectRecord(font, scaler);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$assign(scaler, getNullScaler());
		$var($FontManager, fm, $FontManagerFactory::getInstance());
		$nc(fm)->deRegisterBadFont(font);
	}
	return scaler;
}

FontScaler* FontScaler::getNullScaler() {
	$load(FontScaler);
	$synchronized(class$) {
		$init(FontScaler);
		if (FontScaler::nullScaler == nullptr) {
			$assignStatic(FontScaler::nullScaler, $new($NullFontScaler));
		}
		return FontScaler::nullScaler;
	}
}

void FontScaler::dispose() {
}

void FontScaler::disposeScaler() {
}

void clinit$FontScaler($Class* class$) {
	$assignStatic(FontScaler::nullScaler, nullptr);
}

FontScaler::FontScaler() {
}

$Class* FontScaler::load$($String* name, bool initialize) {
	$loadClass(FontScaler, name, initialize, &_FontScaler_ClassInfo_, clinit$FontScaler, allocate$FontScaler);
	return class$;
}

$Class* FontScaler::class$ = nullptr;

	} // font
} // sun