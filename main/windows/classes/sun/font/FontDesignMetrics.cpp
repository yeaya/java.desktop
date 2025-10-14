#include <sun/font/FontDesignMetrics.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontDesignMetrics$KeyReference.h>
#include <sun/font/FontDesignMetrics$MetricsKey.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef CURRENT_VERSION
#undef DEFAULT_FRC
#undef MAXRECENT
#undef UNKNOWN_WIDTH

using $FontDesignMetricsArray = $Array<::sun::font::FontDesignMetrics>;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $FontDesignMetrics$KeyReference = ::sun::font::FontDesignMetrics$KeyReference;
using $FontDesignMetrics$MetricsKey = ::sun::font::FontDesignMetrics$MetricsKey;
using $FontStrike = ::sun::font::FontStrike;
using $FontUtilities = ::sun::font::FontUtilities;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _FontDesignMetrics_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontDesignMetrics, serialVersionUID)},
	{"UNKNOWN_WIDTH", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontDesignMetrics, UNKNOWN_WIDTH)},
	{"CURRENT_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontDesignMetrics, CURRENT_VERSION)},
	{"roundingUpValue", "F", nullptr, $PRIVATE | $STATIC, $staticField(FontDesignMetrics, roundingUpValue)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(FontDesignMetrics, font)},
	{"ascent", "F", nullptr, $PRIVATE, $field(FontDesignMetrics, ascent)},
	{"descent", "F", nullptr, $PRIVATE, $field(FontDesignMetrics, descent)},
	{"leading", "F", nullptr, $PRIVATE, $field(FontDesignMetrics, leading)},
	{"maxAdvance", "F", nullptr, $PRIVATE, $field(FontDesignMetrics, maxAdvance)},
	{"matrix", "[D", nullptr, $PRIVATE, $field(FontDesignMetrics, matrix)},
	{"cache", "[I", nullptr, $PRIVATE, $field(FontDesignMetrics, cache)},
	{"serVersion", "I", nullptr, $PRIVATE, $field(FontDesignMetrics, serVersion)},
	{"isAntiAliased", "Z", nullptr, $PRIVATE, $field(FontDesignMetrics, isAntiAliased)},
	{"usesFractionalMetrics", "Z", nullptr, $PRIVATE, $field(FontDesignMetrics, usesFractionalMetrics)},
	{"frcTx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(FontDesignMetrics, frcTx)},
	{"advCache", "[F", nullptr, $PRIVATE | $TRANSIENT, $field(FontDesignMetrics, advCache)},
	{"height", "I", nullptr, $PRIVATE | $TRANSIENT, $field(FontDesignMetrics, height)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $TRANSIENT, $field(FontDesignMetrics, frc)},
	{"devmatrix", "[D", nullptr, $PRIVATE | $TRANSIENT, $field(FontDesignMetrics, devmatrix)},
	{"fontStrike", "Lsun/font/FontStrike;", nullptr, $PRIVATE | $TRANSIENT, $field(FontDesignMetrics, fontStrike)},
	{"DEFAULT_FRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC, $staticField(FontDesignMetrics, DEFAULT_FRC)},
	{"metricsCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Object;Lsun/font/FontDesignMetrics$KeyReference;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FontDesignMetrics, metricsCache)},
	{"MAXRECENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontDesignMetrics, MAXRECENT)},
	{"recentMetrics", "[Lsun/font/FontDesignMetrics;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontDesignMetrics, recentMetrics)},
	{"recentIndex", "I", nullptr, $PRIVATE | $STATIC, $staticField(FontDesignMetrics, recentIndex)},
	{}
};

$MethodInfo _FontDesignMetrics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Font;)V", nullptr, $PRIVATE, $method(static_cast<void(FontDesignMetrics::*)($Font*)>(&FontDesignMetrics::init$))},
	{"<init>", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, $PRIVATE, $method(static_cast<void(FontDesignMetrics::*)($Font*,$FontRenderContext*)>(&FontDesignMetrics::init$))},
	{"charWidth", "(C)I", nullptr, $PUBLIC},
	{"charWidth", "(I)I", nullptr, $PUBLIC},
	{"charsWidth", "([CII)I", nullptr, $PUBLIC},
	{"getAscent", "()I", nullptr, $PUBLIC},
	{"getDefaultFrc", "()Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FontRenderContext*(*)()>(&FontDesignMetrics::getDefaultFrc))},
	{"getDescent", "()I", nullptr, $PUBLIC},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getLatinCharWidth", "(C)F", nullptr, $PRIVATE, $method(static_cast<float(FontDesignMetrics::*)(char16_t)>(&FontDesignMetrics::getLatinCharWidth))},
	{"getLeading", "()I", nullptr, $PUBLIC},
	{"getMaxAdvance", "()I", nullptr, $PUBLIC},
	{"getMetrics", "(Ljava/awt/Font;)Lsun/font/FontDesignMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FontDesignMetrics*(*)($Font*)>(&FontDesignMetrics::getMetrics))},
	{"getMetrics", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)Lsun/font/FontDesignMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FontDesignMetrics*(*)($Font*,$FontRenderContext*)>(&FontDesignMetrics::getMetrics))},
	{"getSimpleBounds", "([CII)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $method(static_cast<$Rectangle2D*(FontDesignMetrics::*)($chars*,int32_t,int32_t)>(&FontDesignMetrics::getSimpleBounds))},
	{"getWidths", "()[I", nullptr, $PUBLIC},
	{"handleCharWidth", "(I)F", nullptr, $PRIVATE, $method(static_cast<float(FontDesignMetrics::*)(int32_t)>(&FontDesignMetrics::handleCharWidth))},
	{"initAdvCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontDesignMetrics::*)()>(&FontDesignMetrics::initAdvCache))},
	{"initMatrixAndMetrics", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontDesignMetrics::*)()>(&FontDesignMetrics::initMatrixAndMetrics))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FontDesignMetrics::*)($ObjectInputStream*)>(&FontDesignMetrics::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"stringWidth", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FontDesignMetrics::*)($ObjectOutputStream*)>(&FontDesignMetrics::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _FontDesignMetrics_InnerClassesInfo_[] = {
	{"sun.font.FontDesignMetrics$MetricsKey", "sun.font.FontDesignMetrics", "MetricsKey", $PRIVATE | $STATIC},
	{"sun.font.FontDesignMetrics$KeyReference", "sun.font.FontDesignMetrics", "KeyReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FontDesignMetrics_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.FontDesignMetrics",
	"java.awt.FontMetrics",
	nullptr,
	_FontDesignMetrics_FieldInfo_,
	_FontDesignMetrics_MethodInfo_,
	nullptr,
	nullptr,
	_FontDesignMetrics_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.FontDesignMetrics$MetricsKey,sun.font.FontDesignMetrics$KeyReference"
};

$Object* allocate$FontDesignMetrics($Class* clazz) {
	return $of($alloc(FontDesignMetrics));
}

float FontDesignMetrics::UNKNOWN_WIDTH = 0.0;
float FontDesignMetrics::roundingUpValue = 0.0;
$FontRenderContext* FontDesignMetrics::DEFAULT_FRC = nullptr;
$ConcurrentHashMap* FontDesignMetrics::metricsCache = nullptr;
$FontDesignMetricsArray* FontDesignMetrics::recentMetrics = nullptr;
int32_t FontDesignMetrics::recentIndex = 0;

$FontRenderContext* FontDesignMetrics::getDefaultFrc() {
	$init(FontDesignMetrics);
	if (FontDesignMetrics::DEFAULT_FRC == nullptr) {
		$var($AffineTransform, tx, nullptr);
		if ($GraphicsEnvironment::isHeadless()) {
			$assign(tx, $new($AffineTransform));
		} else {
			$assign(tx, $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getDefaultTransform());
		}
		$assignStatic(FontDesignMetrics::DEFAULT_FRC, $new($FontRenderContext, tx, false, false));
	}
	return FontDesignMetrics::DEFAULT_FRC;
}

FontDesignMetrics* FontDesignMetrics::getMetrics($Font* font) {
	$init(FontDesignMetrics);
	return getMetrics(font, $(getDefaultFrc()));
}

FontDesignMetrics* FontDesignMetrics::getMetrics($Font* font, $FontRenderContext* frc) {
	$init(FontDesignMetrics);
	$var($SunFontManager, fm, $SunFontManager::getInstance());
	bool var$0 = $nc(fm)->usingAlternateCompositeFonts();
	if (var$0 && $instanceOf($CompositeFont, $($FontUtilities::getFont2D(font)))) {
		return $new(FontDesignMetrics, font, frc);
	}
	$var(FontDesignMetrics, m, nullptr);
	$var($FontDesignMetrics$KeyReference, r, nullptr);
	bool usefontkey = $nc(frc)->equals($(getDefaultFrc()));
	if (usefontkey) {
		$assign(r, $cast($FontDesignMetrics$KeyReference, $nc(FontDesignMetrics::metricsCache)->get(font)));
	} else {
		$load($FontDesignMetrics$MetricsKey);
		$synchronized($FontDesignMetrics$MetricsKey::class$) {
			$init($FontDesignMetrics$MetricsKey);
			$nc($FontDesignMetrics$MetricsKey::key)->init(font, frc);
			$assign(r, $cast($FontDesignMetrics$KeyReference, $nc(FontDesignMetrics::metricsCache)->get($FontDesignMetrics$MetricsKey::key)));
		}
	}
	if (r != nullptr) {
		$assign(m, $cast(FontDesignMetrics, r->get()));
	}
	if (m == nullptr) {
		$assign(m, $new(FontDesignMetrics, font, frc));
		if (usefontkey) {
			$nc(FontDesignMetrics::metricsCache)->put(font, $$new($FontDesignMetrics$KeyReference, font, m));
		} else {
			$var($FontDesignMetrics$MetricsKey, newKey, $new($FontDesignMetrics$MetricsKey, font, frc));
			$nc(FontDesignMetrics::metricsCache)->put(newKey, $$new($FontDesignMetrics$KeyReference, newKey, m));
		}
	}
	for (int32_t i = 0; i < $nc(FontDesignMetrics::recentMetrics)->length; ++i) {
		if ($nc(FontDesignMetrics::recentMetrics)->get(i) == m) {
			return m;
		}
	}
	$synchronized(FontDesignMetrics::recentMetrics) {
		$nc(FontDesignMetrics::recentMetrics)->set(FontDesignMetrics::recentIndex++, m);
		if (FontDesignMetrics::recentIndex == FontDesignMetrics::MAXRECENT) {
			FontDesignMetrics::recentIndex = 0;
		}
	}
	return m;
}

void FontDesignMetrics::init$($Font* font) {
	FontDesignMetrics::init$(font, $(getDefaultFrc()));
}

void FontDesignMetrics::init$($Font* font, $FontRenderContext* frc) {
	$FontMetrics::init$(font);
	this->serVersion = 0;
	this->height = -1;
	$set(this, devmatrix, nullptr);
	$set(this, font, font);
	$set(this, frc, frc);
	this->isAntiAliased = $nc(frc)->isAntiAliased();
	this->usesFractionalMetrics = frc->usesFractionalMetrics();
	$set(this, frcTx, frc->getTransform());
	$set(this, matrix, $new($doubles, 4));
	initMatrixAndMetrics();
	initAdvCache();
}

void FontDesignMetrics::initMatrixAndMetrics() {
	$var($Font2D, font2D, $FontUtilities::getFont2D(this->font));
	$set(this, fontStrike, $nc(font2D)->getStrike(this->font, this->frc));
	$var($StrikeMetrics, metrics, $nc(this->fontStrike)->getFontMetrics());
	this->ascent = $nc(metrics)->getAscent();
	this->descent = metrics->getDescent();
	this->leading = metrics->getLeading();
	this->maxAdvance = metrics->getMaxAdvance();
	$set(this, devmatrix, $new($doubles, 4));
	$nc(this->frcTx)->getMatrix(this->devmatrix);
}

void FontDesignMetrics::initAdvCache() {
	$set(this, advCache, $new($floats, 256));
	for (int32_t i = 0; i < 256; ++i) {
		$nc(this->advCache)->set(i, FontDesignMetrics::UNKNOWN_WIDTH);
	}
}

void FontDesignMetrics::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
	if (this->serVersion != FontDesignMetrics::CURRENT_VERSION) {
		$set(this, frc, getDefaultFrc());
		this->isAntiAliased = $nc(this->frc)->isAntiAliased();
		this->usesFractionalMetrics = $nc(this->frc)->usesFractionalMetrics();
		$set(this, frcTx, $nc(this->frc)->getTransform());
	} else {
		$set(this, frc, $new($FontRenderContext, this->frcTx, this->isAntiAliased, this->usesFractionalMetrics));
	}
	this->height = -1;
	$set(this, cache, nullptr);
	initMatrixAndMetrics();
	initAdvCache();
}

void FontDesignMetrics::writeObject($ObjectOutputStream* out) {
	$set(this, cache, $new($ints, 256));
	for (int32_t i = 0; i < 256; ++i) {
		$nc(this->cache)->set(i, -1);
	}
	this->serVersion = FontDesignMetrics::CURRENT_VERSION;
	$nc(out)->defaultWriteObject();
	$set(this, cache, nullptr);
}

float FontDesignMetrics::handleCharWidth(int32_t ch) {
	return $nc(this->fontStrike)->getCodePointAdvance(ch);
}

float FontDesignMetrics::getLatinCharWidth(char16_t ch) {
	float w = $nc(this->advCache)->get(ch);
	if (w == FontDesignMetrics::UNKNOWN_WIDTH) {
		w = handleCharWidth(ch);
		$nc(this->advCache)->set(ch, w);
	}
	return w;
}

$FontRenderContext* FontDesignMetrics::getFontRenderContext() {
	return this->frc;
}

int32_t FontDesignMetrics::charWidth(char16_t ch) {
	float w = 0.0;
	if (ch < 256) {
		w = getLatinCharWidth(ch);
	} else {
		w = handleCharWidth(ch);
	}
	return $cast(int32_t, (0.5 + w));
}

int32_t FontDesignMetrics::charWidth(int32_t ch) {
	if (!$Character::isValidCodePoint(ch)) {
		ch = 0x0000FFFF;
	}
	float w = handleCharWidth(ch);
	return $cast(int32_t, (0.5 + w));
}

int32_t FontDesignMetrics::stringWidth($String* str) {
	float width = (float)0;
	if ($nc(this->font)->hasLayoutAttributes()) {
		if (str == nullptr) {
			$throwNew($NullPointerException, "str is null"_s);
		}
		if ($nc(str)->length() == 0) {
			return 0;
		}
		width = $$new($TextLayout, str, this->font, this->frc)->getAdvance();
	} else {
		int32_t length = $nc(str)->length();
		for (int32_t i = 0; i < length; ++i) {
			char16_t ch = str->charAt(i);
			if (ch < 256) {
				width += getLatinCharWidth(ch);
			} else if ($FontUtilities::isNonSimpleChar(ch)) {
				width = $$new($TextLayout, str, this->font, this->frc)->getAdvance();
				break;
			} else {
				width += handleCharWidth(ch);
			}
		}
	}
	return $cast(int32_t, (0.5 + width));
}

int32_t FontDesignMetrics::charsWidth($chars* data, int32_t off, int32_t len) {
	float width = (float)0;
	if ($nc(this->font)->hasLayoutAttributes()) {
		if (len == 0) {
			return 0;
		}
		$var($String, str, $new($String, data, off, len));
		width = $$new($TextLayout, str, this->font, this->frc)->getAdvance();
	} else {
		if (len < 0) {
			$throwNew($IndexOutOfBoundsException, $$str({"len="_s, $$str(len)}));
		}
		int32_t limit = off + len;
		for (int32_t i = off; i < limit; ++i) {
			char16_t ch = $nc(data)->get(i);
			if (ch < 256) {
				width += getLatinCharWidth(ch);
			} else if ($FontUtilities::isNonSimpleChar(ch)) {
				$var($String, str, $new($String, data, off, len));
				width = $$new($TextLayout, str, this->font, this->frc)->getAdvance();
				break;
			} else {
				width += handleCharWidth(ch);
			}
		}
	}
	return $cast(int32_t, (0.5 + width));
}

$Rectangle2D* FontDesignMetrics::getSimpleBounds($chars* data, int32_t off, int32_t len) {
	float width = (float)0;
	int32_t limit = off + len;
	for (int32_t i = off; i < limit; ++i) {
		char16_t ch = $nc(data)->get(i);
		if (ch < 256) {
			width += getLatinCharWidth(ch);
		} else {
			width += handleCharWidth(ch);
		}
	}
	float height = this->ascent + this->descent + this->leading;
	return $new($Rectangle2D$Float, 0.0f, -this->ascent, width, height);
}

$ints* FontDesignMetrics::getWidths() {
	$var($ints, widths, $new($ints, 256));
	for (char16_t ch = (char16_t)0; ch < 256; ++ch) {
		float w = $nc(this->advCache)->get(ch);
		if (w == FontDesignMetrics::UNKNOWN_WIDTH) {
			w = ($nc(this->advCache)->set(ch, handleCharWidth(ch)));
		}
		widths->set(ch, $cast(int32_t, (0.5 + w)));
	}
	return widths;
}

int32_t FontDesignMetrics::getMaxAdvance() {
	return $cast(int32_t, (0.99f + this->maxAdvance));
}

int32_t FontDesignMetrics::getAscent() {
	return $cast(int32_t, (FontDesignMetrics::roundingUpValue + this->ascent));
}

int32_t FontDesignMetrics::getDescent() {
	return $cast(int32_t, (FontDesignMetrics::roundingUpValue + this->descent));
}

int32_t FontDesignMetrics::getLeading() {
	return $cast(int32_t, (FontDesignMetrics::roundingUpValue + this->descent + this->leading)) - $cast(int32_t, (FontDesignMetrics::roundingUpValue + this->descent));
}

int32_t FontDesignMetrics::getHeight() {
	if (this->height < 0) {
		this->height = getAscent() + $cast(int32_t, (FontDesignMetrics::roundingUpValue + this->descent + this->leading));
	}
	return this->height;
}

void clinit$FontDesignMetrics($Class* class$) {
	FontDesignMetrics::UNKNOWN_WIDTH = (float)-1;
	FontDesignMetrics::roundingUpValue = 0.95f;
	$assignStatic(FontDesignMetrics::DEFAULT_FRC, nullptr);
	$assignStatic(FontDesignMetrics::metricsCache, $new($ConcurrentHashMap));
	$assignStatic(FontDesignMetrics::recentMetrics, $new($FontDesignMetricsArray, FontDesignMetrics::MAXRECENT));
	FontDesignMetrics::recentIndex = 0;
}

FontDesignMetrics::FontDesignMetrics() {
}

$Class* FontDesignMetrics::load$($String* name, bool initialize) {
	$loadClass(FontDesignMetrics, name, initialize, &_FontDesignMetrics_ClassInfo_, clinit$FontDesignMetrics, allocate$FontDesignMetrics);
	return class$;
}

$Class* FontDesignMetrics::class$ = nullptr;

	} // font
} // sun