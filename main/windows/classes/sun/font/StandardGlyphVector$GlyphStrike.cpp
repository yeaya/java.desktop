#include <sun/font/StandardGlyphVector$GlyphStrike.h>

#include <java/awt/Font.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontSubstitution.h>
#include <sun/font/StandardGlyphVector$ADL.h>
#include <sun/font/StandardGlyphVector.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

#undef TYPE_TRANSLATION
#undef VALUE_TEXT_ANTIALIAS_GASP

using $Font = ::java::awt::Font;
using $RenderingHints = ::java::awt::RenderingHints;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontSubstitution = ::sun::font::FontSubstitution;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;
using $StandardGlyphVector$ADL = ::sun::font::StandardGlyphVector$ADL;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _StandardGlyphVector$GlyphStrike_FieldInfo_[] = {
	{"sgv", "Lsun/font/StandardGlyphVector;", nullptr, 0, $field(StandardGlyphVector$GlyphStrike, sgv)},
	{"strike", "Lsun/font/FontStrike;", nullptr, 0, $field(StandardGlyphVector$GlyphStrike, strike)},
	{"dx", "F", nullptr, 0, $field(StandardGlyphVector$GlyphStrike, dx)},
	{"dy", "F", nullptr, 0, $field(StandardGlyphVector$GlyphStrike, dy)},
	{}
};

$MethodInfo _StandardGlyphVector$GlyphStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/StandardGlyphVector;Lsun/font/FontStrike;FF)V", nullptr, $PRIVATE, $method(static_cast<void(StandardGlyphVector$GlyphStrike::*)($StandardGlyphVector*,$FontStrike*,float,float)>(&StandardGlyphVector$GlyphStrike::init$))},
	{"addDefaultGlyphAdvance", "(ILjava/awt/geom/Point2D$Float;)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphStrike::*)(int32_t,$Point2D$Float*)>(&StandardGlyphVector$GlyphStrike::addDefaultGlyphAdvance))},
	{"appendGlyphOutline", "(ILjava/awt/geom/GeneralPath;FF)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphStrike::*)(int32_t,$GeneralPath*,float,float)>(&StandardGlyphVector$GlyphStrike::appendGlyphOutline))},
	{"create", "(Lsun/font/StandardGlyphVector;Ljava/awt/geom/AffineTransform;Ljava/awt/geom/AffineTransform;)Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, $STATIC, $method(static_cast<StandardGlyphVector$GlyphStrike*(*)($StandardGlyphVector*,$AffineTransform*,$AffineTransform*)>(&StandardGlyphVector$GlyphStrike::create))},
	{"getADL", "(Lsun/font/StandardGlyphVector$ADL;)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphStrike::*)($StandardGlyphVector$ADL*)>(&StandardGlyphVector$GlyphStrike::getADL))},
	{"getGlyphOutlineBounds", "(IFF)Ljava/awt/geom/Rectangle2D;", nullptr, 0, $method(static_cast<$Rectangle2D*(StandardGlyphVector$GlyphStrike::*)(int32_t,float,float)>(&StandardGlyphVector$GlyphStrike::getGlyphOutlineBounds))},
	{"getGlyphPosition", "(II[F[F)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphStrike::*)(int32_t,int32_t,$floats*,$floats*)>(&StandardGlyphVector$GlyphStrike::getGlyphPosition))},
	{}
};

$InnerClassInfo _StandardGlyphVector$GlyphStrike_InnerClassesInfo_[] = {
	{"sun.font.StandardGlyphVector$GlyphStrike", "sun.font.StandardGlyphVector", "GlyphStrike", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _StandardGlyphVector$GlyphStrike_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.StandardGlyphVector$GlyphStrike",
	"java.lang.Object",
	nullptr,
	_StandardGlyphVector$GlyphStrike_FieldInfo_,
	_StandardGlyphVector$GlyphStrike_MethodInfo_,
	nullptr,
	nullptr,
	_StandardGlyphVector$GlyphStrike_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StandardGlyphVector"
};

$Object* allocate$StandardGlyphVector$GlyphStrike($Class* clazz) {
	return $of($alloc(StandardGlyphVector$GlyphStrike));
}

StandardGlyphVector$GlyphStrike* StandardGlyphVector$GlyphStrike::create($StandardGlyphVector* sgv, $AffineTransform* dtx, $AffineTransform* gtx) {
	float dx = (float)0;
	float dy = (float)0;
	$var($AffineTransform, tx, $nc(sgv)->ftx);
	if (!$nc(dtx)->isIdentity() || gtx != nullptr) {
		$assign(tx, $new($AffineTransform, sgv->ftx));
		if (gtx != nullptr) {
			tx->preConcatenate(gtx);
			dx = (float)tx->getTranslateX();
			dy = (float)tx->getTranslateY();
		}
		if (!$nc(dtx)->isIdentity()) {
			tx->preConcatenate(dtx);
		}
	}
	int32_t ptSize = 1;
	$var($Object, aaHint, $nc(sgv->frc)->getAntiAliasingHint());
	$init($RenderingHints);
	if ($equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_GASP)) {
		bool var$0 = !$nc(tx)->isIdentity();
		if (var$0 && ((int32_t)(tx->getType() & (uint32_t)~$AffineTransform::TYPE_TRANSLATION)) != 0) {
			double shearx = tx->getShearX();
			if (shearx != 0) {
				double scaley = tx->getScaleY();
				ptSize = $cast(int32_t, $Math::sqrt(shearx * shearx + scaley * scaley));
			} else {
				ptSize = $cast(int32_t, ($Math::abs(tx->getScaleY())));
			}
		}
	}
	int32_t aa = $FontStrikeDesc::getAAHintIntVal(aaHint, sgv->font2D, ptSize);
	int32_t fm = $FontStrikeDesc::getFMHintIntVal($($nc(sgv->frc)->getFractionalMetricsHint()));
	$var($FontStrikeDesc, desc, $new($FontStrikeDesc, dtx, tx, $nc(sgv->font)->getStyle(), aa, fm));
	$var($Font2D, f2d, sgv->font2D);
	if ($instanceOf($FontSubstitution, f2d)) {
		$assign(f2d, $nc(($cast($FontSubstitution, f2d)))->getCompositeFont2D());
	}
	$var($FontStrike, strike, $nc($nc($nc(f2d)->handle)->font2D)->getStrike(desc));
	return $new(StandardGlyphVector$GlyphStrike, sgv, strike, dx, dy);
}

void StandardGlyphVector$GlyphStrike::init$($StandardGlyphVector* sgv, $FontStrike* strike, float dx, float dy) {
	$set(this, sgv, sgv);
	$set(this, strike, strike);
	this->dx = dx;
	this->dy = dy;
}

void StandardGlyphVector$GlyphStrike::getADL($StandardGlyphVector$ADL* result) {
	$var($StrikeMetrics, sm, $nc(this->strike)->getFontMetrics());
	$var($Point2D$Float, delta, nullptr);
	if ($nc($nc(this->sgv)->font)->isTransformed()) {
		$assign(delta, $new($Point2D$Float));
		delta->x = (float)$nc($($nc($nc(this->sgv)->font)->getTransform()))->getTranslateX();
		delta->y = (float)$nc($($nc($nc(this->sgv)->font)->getTransform()))->getTranslateY();
	}
	$nc(result)->ascentX = -$nc(sm)->ascentX;
	result->ascentY = -sm->ascentY;
	result->descentX = sm->descentX;
	result->descentY = sm->descentY;
	result->leadingX = sm->leadingX;
	result->leadingY = sm->leadingY;
}

void StandardGlyphVector$GlyphStrike::getGlyphPosition(int32_t glyphID, int32_t ix, $floats* positions, $floats* result) {
	$nc(result)->set(ix, $nc(positions)->get(ix) + this->dx);
	++ix;
	result->set(ix, positions->get(ix) + this->dy);
}

void StandardGlyphVector$GlyphStrike::addDefaultGlyphAdvance(int32_t glyphID, $Point2D$Float* result) {
	$var($Point2D$Float, adv, $nc(this->strike)->getGlyphMetrics(glyphID));
	$nc(result)->x += $nc(adv)->x + this->dx;
	result->y += adv->y + this->dy;
}

$Rectangle2D* StandardGlyphVector$GlyphStrike::getGlyphOutlineBounds(int32_t glyphID, float x, float y) {
	$var($Rectangle2D, result, nullptr);
	if ($nc(this->sgv)->invdtx == nullptr) {
		$assign(result, $new($Rectangle2D$Float));
		result->setRect($($nc(this->strike)->getGlyphOutlineBounds(glyphID)));
	} else {
		$var($GeneralPath, gp, $nc(this->strike)->getGlyphOutline(glyphID, (float)0, (float)0));
		$nc(gp)->transform($nc(this->sgv)->invdtx);
		$assign(result, gp->getBounds2D());
	}
	if (!$nc(result)->isEmpty()) {
		double var$0 = result->getMinX() + x + this->dx;
		double var$1 = result->getMinY() + y + this->dy;
		double var$2 = result->getWidth();
		result->setRect(var$0, var$1, var$2, result->getHeight());
	}
	return result;
}

void StandardGlyphVector$GlyphStrike::appendGlyphOutline(int32_t glyphID, $GeneralPath* result, float x, float y) {
	$var($GeneralPath, gp, nullptr);
	if ($nc(this->sgv)->invdtx == nullptr) {
		$assign(gp, $nc(this->strike)->getGlyphOutline(glyphID, x + this->dx, y + this->dy));
	} else {
		$assign(gp, $nc(this->strike)->getGlyphOutline(glyphID, (float)0, (float)0));
		$nc(gp)->transform($nc(this->sgv)->invdtx);
		gp->transform($($AffineTransform::getTranslateInstance(x + this->dx, y + this->dy)));
	}
	$var($PathIterator, iterator, $nc(gp)->getPathIterator(nullptr));
	$nc(result)->append(iterator, false);
}

StandardGlyphVector$GlyphStrike::StandardGlyphVector$GlyphStrike() {
}

$Class* StandardGlyphVector$GlyphStrike::load$($String* name, bool initialize) {
	$loadClass(StandardGlyphVector$GlyphStrike, name, initialize, &_StandardGlyphVector$GlyphStrike_ClassInfo_, allocate$StandardGlyphVector$GlyphStrike);
	return class$;
}

$Class* StandardGlyphVector$GlyphStrike::class$ = nullptr;

	} // font
} // sun