#include <sun/font/FontStrikeDesc.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef AA_LCD_H
#undef AA_LCD_V
#undef AA_ON
#undef FRAC_METRICS_ON
#undef FRAC_METRICS_SP
#undef VALUE_FRACTIONALMETRICS_DEFAULT
#undef VALUE_FRACTIONALMETRICS_OFF
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef VALUE_TEXT_ANTIALIAS_ON

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $Font2D = ::sun::font::Font2D;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

$FieldInfo _FontStrikeDesc_FieldInfo_[] = {
	{"AA_ON", "I", nullptr, $STATIC | $FINAL, $constField(FontStrikeDesc, AA_ON)},
	{"AA_LCD_H", "I", nullptr, $STATIC | $FINAL, $constField(FontStrikeDesc, AA_LCD_H)},
	{"AA_LCD_V", "I", nullptr, $STATIC | $FINAL, $constField(FontStrikeDesc, AA_LCD_V)},
	{"FRAC_METRICS_ON", "I", nullptr, $STATIC | $FINAL, $constField(FontStrikeDesc, FRAC_METRICS_ON)},
	{"FRAC_METRICS_SP", "I", nullptr, $STATIC | $FINAL, $constField(FontStrikeDesc, FRAC_METRICS_SP)},
	{"devTx", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(FontStrikeDesc, devTx)},
	{"glyphTx", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(FontStrikeDesc, glyphTx)},
	{"style", "I", nullptr, 0, $field(FontStrikeDesc, style)},
	{"aaHint", "I", nullptr, 0, $field(FontStrikeDesc, aaHint)},
	{"fmHint", "I", nullptr, 0, $field(FontStrikeDesc, fmHint)},
	{"hashCode", "I", nullptr, $PRIVATE, $field(FontStrikeDesc, hashCode$)},
	{"valuemask", "I", nullptr, $PRIVATE, $field(FontStrikeDesc, valuemask)},
	{}
};

$MethodInfo _FontStrikeDesc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontStrikeDesc::*)()>(&FontStrikeDesc::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;Ljava/awt/geom/AffineTransform;III)V", nullptr, $PUBLIC, $method(static_cast<void(FontStrikeDesc::*)($AffineTransform*,$AffineTransform*,int32_t,int32_t,int32_t)>(&FontStrikeDesc::init$))},
	{"<init>", "(Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(FontStrikeDesc::*)(FontStrikeDesc*)>(&FontStrikeDesc::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAAHintIntVal", "(Ljava/lang/Object;Lsun/font/Font2D;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*,$Font2D*,int32_t)>(&FontStrikeDesc::getAAHintIntVal))},
	{"getAAHintIntVal", "(Lsun/font/Font2D;Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Font2D*,$Font*,$FontRenderContext*)>(&FontStrikeDesc::getAAHintIntVal))},
	{"getFMHintIntVal", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*)>(&FontStrikeDesc::getFMHintIntVal))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontStrikeDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontStrikeDesc",
	"java.lang.Object",
	nullptr,
	_FontStrikeDesc_FieldInfo_,
	_FontStrikeDesc_MethodInfo_
};

$Object* allocate$FontStrikeDesc($Class* clazz) {
	return $of($alloc(FontStrikeDesc));
}

int32_t FontStrikeDesc::hashCode() {
	if (this->hashCode$ == 0) {
		int32_t var$0 = $nc(this->glyphTx)->hashCode();
		this->hashCode$ = var$0 + $nc(this->devTx)->hashCode() + this->valuemask;
	}
	return this->hashCode$;
}

bool FontStrikeDesc::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	try {
		$var(FontStrikeDesc, desc, $cast(FontStrikeDesc, obj));
		bool var$0 = $nc(desc)->valuemask == this->valuemask && $nc(desc->glyphTx)->equals(this->glyphTx);
		return (var$0 && $nc(desc->devTx)->equals(this->devTx));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

void FontStrikeDesc::init$() {
}

int32_t FontStrikeDesc::getAAHintIntVal(Object$* aa, $Font2D* font2D, int32_t ptSize) {
	$init($FontUtilities);
	$init($SunHints);
	if ($FontUtilities::isMacOSX14 && ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_OFF) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_ON) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_GASP))) {
		return 2;
	}
	if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_OFF) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT)) {
		return 1;
	} else {
		if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_ON)) {
			return 2;
		} else {
			if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_GASP)) {
				if ($nc(font2D)->useAAForPtSize(ptSize)) {
					return 2;
				} else {
					return 1;
				}
			} else {
				if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR)) {
					return 4;
				} else {
					if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR)) {
						return 6;
					} else {
						return 1;
					}
				}
			}
		}
	}
}

int32_t FontStrikeDesc::getAAHintIntVal($Font2D* font2D, $Font* font, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	$var($Object, aa, $nc(frc)->getAntiAliasingHint());
	$init($FontUtilities);
	$init($SunHints);
	if ($FontUtilities::isMacOSX14 && ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_OFF) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_ON) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_GASP))) {
		return 2;
	}
	if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_OFF) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT)) {
		return 1;
	} else {
		if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_ON)) {
			return 2;
		} else {
			if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_GASP)) {
				int32_t ptSize = 0;
				$var($AffineTransform, tx, frc->getTransform());
				bool var$0 = $nc(tx)->isIdentity();
				if (var$0 && !$nc(font)->isTransformed()) {
					ptSize = font->getSize();
				} else {
					float size = font->getSize2D();
					if (tx->isIdentity()) {
						$assign(tx, font->getTransform());
						$nc(tx)->scale(size, size);
					} else {
						tx->scale(size, size);
						if (font->isTransformed()) {
							tx->concatenate($(font->getTransform()));
						}
					}
					double shearx = tx->getShearX();
					double scaley = tx->getScaleY();
					if (shearx != 0) {
						scaley = $Math::sqrt(shearx * shearx + scaley * scaley);
					}
					ptSize = $cast(int32_t, ($Math::abs(scaley) + 0.5));
				}
				if ($nc(font2D)->useAAForPtSize(ptSize)) {
					return 2;
				} else {
					return 1;
				}
			} else {
				if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR)) {
					return 4;
				} else {
					if ($equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB) || $equals(aa, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR)) {
						return 6;
					} else {
						return 1;
					}
				}
			}
		}
	}
}

int32_t FontStrikeDesc::getFMHintIntVal(Object$* fm) {
	$init($SunHints);
	if ($equals(fm, $SunHints::VALUE_FRACTIONALMETRICS_OFF) || $equals(fm, $SunHints::VALUE_FRACTIONALMETRICS_DEFAULT)) {
		return 1;
	} else {
		return 2;
	}
}

void FontStrikeDesc::init$($AffineTransform* devAt, $AffineTransform* at, int32_t fStyle, int32_t aa, int32_t fm) {
	$set(this, devTx, devAt);
	$set(this, glyphTx, at);
	this->style = fStyle;
	this->aaHint = aa;
	this->fmHint = fm;
	this->valuemask = fStyle;
	switch (aa) {
	case 1:
		{
			break;
		}
	case 2:
		{
			this->valuemask |= FontStrikeDesc::AA_ON;
			break;
		}
	case 4:
		{}
	case 5:
		{
			this->valuemask |= FontStrikeDesc::AA_LCD_H;
			break;
		}
	case 6:
		{}
	case 7:
		{
			this->valuemask |= FontStrikeDesc::AA_LCD_V;
			break;
		}
	default:
		{
			break;
		}
	}
	if (fm == 2) {
		this->valuemask |= FontStrikeDesc::FRAC_METRICS_ON;
	}
}

void FontStrikeDesc::init$(FontStrikeDesc* desc) {
	$set(this, devTx, $nc(desc)->devTx);
	$set(this, glyphTx, $cast($AffineTransform, $nc(desc->glyphTx)->clone()));
	this->style = desc->style;
	this->aaHint = desc->aaHint;
	this->fmHint = desc->fmHint;
	this->hashCode$ = desc->hashCode$;
	this->valuemask = desc->valuemask;
}

$String* FontStrikeDesc::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"FontStrikeDesc: Style="_s, $$str(this->style), " AA="_s, $$str(this->aaHint), " FM="_s, $$str(this->fmHint), " devTx="_s, this->devTx, " devTx.FontTx.ptSize="_s, this->glyphTx});
}

FontStrikeDesc::FontStrikeDesc() {
}

$Class* FontStrikeDesc::load$($String* name, bool initialize) {
	$loadClass(FontStrikeDesc, name, initialize, &_FontStrikeDesc_ClassInfo_, allocate$FontStrikeDesc);
	return class$;
}

$Class* FontStrikeDesc::class$ = nullptr;

	} // font
} // sun