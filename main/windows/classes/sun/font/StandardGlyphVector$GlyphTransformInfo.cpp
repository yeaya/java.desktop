#include <sun/font/StandardGlyphVector$GlyphTransformInfo.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/font/FontStrike.h>
#include <sun/font/StandardGlyphVector$GlyphStrike.h>
#include <sun/font/StandardGlyphVector.h>
#include <jcpp.h>

using $StandardGlyphVector$GlyphStrikeArray = $Array<::sun::font::StandardGlyphVector$GlyphStrike>;
using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $FontStrike = ::sun::font::FontStrike;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;
using $StandardGlyphVector$GlyphStrike = ::sun::font::StandardGlyphVector$GlyphStrike;

namespace sun {
	namespace font {

$FieldInfo _StandardGlyphVector$GlyphTransformInfo_FieldInfo_[] = {
	{"sgv", "Lsun/font/StandardGlyphVector;", nullptr, 0, $field(StandardGlyphVector$GlyphTransformInfo, sgv)},
	{"indices", "[I", nullptr, 0, $field(StandardGlyphVector$GlyphTransformInfo, indices)},
	{"transforms", "[D", nullptr, 0, $field(StandardGlyphVector$GlyphTransformInfo, transforms)},
	{"strikesRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[Lsun/font/StandardGlyphVector$GlyphStrike;>;", 0, $field(StandardGlyphVector$GlyphTransformInfo, strikesRef)},
	{"haveAllStrikes", "Z", nullptr, 0, $field(StandardGlyphVector$GlyphTransformInfo, haveAllStrikes)},
	{}
};

$MethodInfo _StandardGlyphVector$GlyphTransformInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/font/StandardGlyphVector;)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphTransformInfo::*)($StandardGlyphVector*)>(&StandardGlyphVector$GlyphTransformInfo::init$))},
	{"<init>", "(Lsun/font/StandardGlyphVector;Lsun/font/StandardGlyphVector$GlyphTransformInfo;)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphTransformInfo::*)($StandardGlyphVector*,StandardGlyphVector$GlyphTransformInfo*)>(&StandardGlyphVector$GlyphTransformInfo::init$))},
	{"equals", "(Lsun/font/StandardGlyphVector$GlyphTransformInfo;)Z", nullptr, $PUBLIC, $method(static_cast<bool(StandardGlyphVector$GlyphTransformInfo::*)(StandardGlyphVector$GlyphTransformInfo*)>(&StandardGlyphVector$GlyphTransformInfo::equals))},
	{"getAllStrikes", "()[Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, $PRIVATE, $method(static_cast<$StandardGlyphVector$GlyphStrikeArray*(StandardGlyphVector$GlyphTransformInfo::*)()>(&StandardGlyphVector$GlyphTransformInfo::getAllStrikes))},
	{"getGlyphTransform", "(I)Ljava/awt/geom/AffineTransform;", nullptr, 0, $method(static_cast<$AffineTransform*(StandardGlyphVector$GlyphTransformInfo::*)(int32_t)>(&StandardGlyphVector$GlyphTransformInfo::getGlyphTransform))},
	{"getGlyphsPixelBounds", "(Ljava/awt/geom/AffineTransform;FFII)Ljava/awt/Rectangle;", nullptr, 0, $method(static_cast<$Rectangle*(StandardGlyphVector$GlyphTransformInfo::*)($AffineTransform*,float,float,int32_t,int32_t)>(&StandardGlyphVector$GlyphTransformInfo::getGlyphsPixelBounds))},
	{"getStrike", "(I)Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, 0, $method(static_cast<$StandardGlyphVector$GlyphStrike*(StandardGlyphVector$GlyphTransformInfo::*)(int32_t)>(&StandardGlyphVector$GlyphTransformInfo::getStrike))},
	{"getStrikeArray", "()[Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, $PRIVATE, $method(static_cast<$StandardGlyphVector$GlyphStrikeArray*(StandardGlyphVector$GlyphTransformInfo::*)()>(&StandardGlyphVector$GlyphTransformInfo::getStrikeArray))},
	{"getStrikeAtIndex", "([Lsun/font/StandardGlyphVector$GlyphStrike;I)Lsun/font/StandardGlyphVector$GlyphStrike;", nullptr, $PRIVATE, $method(static_cast<$StandardGlyphVector$GlyphStrike*(StandardGlyphVector$GlyphTransformInfo::*)($StandardGlyphVector$GlyphStrikeArray*,int32_t)>(&StandardGlyphVector$GlyphTransformInfo::getStrikeAtIndex))},
	{"setGlyphTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(StandardGlyphVector$GlyphTransformInfo::*)(int32_t,$AffineTransform*)>(&StandardGlyphVector$GlyphTransformInfo::setGlyphTransform))},
	{"setupGlyphImages", "([J[FLjava/awt/geom/AffineTransform;)Ljava/lang/Object;", nullptr, 0, $method(static_cast<$Object*(StandardGlyphVector$GlyphTransformInfo::*)($longs*,$floats*,$AffineTransform*)>(&StandardGlyphVector$GlyphTransformInfo::setupGlyphImages))},
	{"transformCount", "()I", nullptr, 0, $method(static_cast<int32_t(StandardGlyphVector$GlyphTransformInfo::*)()>(&StandardGlyphVector$GlyphTransformInfo::transformCount))},
	{}
};

$InnerClassInfo _StandardGlyphVector$GlyphTransformInfo_InnerClassesInfo_[] = {
	{"sun.font.StandardGlyphVector$GlyphTransformInfo", "sun.font.StandardGlyphVector", "GlyphTransformInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _StandardGlyphVector$GlyphTransformInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.StandardGlyphVector$GlyphTransformInfo",
	"java.lang.Object",
	nullptr,
	_StandardGlyphVector$GlyphTransformInfo_FieldInfo_,
	_StandardGlyphVector$GlyphTransformInfo_MethodInfo_,
	nullptr,
	nullptr,
	_StandardGlyphVector$GlyphTransformInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StandardGlyphVector"
};

$Object* allocate$StandardGlyphVector$GlyphTransformInfo($Class* clazz) {
	return $of($alloc(StandardGlyphVector$GlyphTransformInfo));
}

void StandardGlyphVector$GlyphTransformInfo::init$($StandardGlyphVector* sgv) {
	$set(this, sgv, sgv);
}

void StandardGlyphVector$GlyphTransformInfo::init$($StandardGlyphVector* sgv, StandardGlyphVector$GlyphTransformInfo* rhs) {
	$set(this, sgv, sgv);
	$set(this, indices, $nc(rhs)->indices == nullptr ? ($ints*)nullptr : $cast($ints, $nc($nc(rhs)->indices)->clone()));
	$set(this, transforms, rhs->transforms == nullptr ? ($doubles*)nullptr : $cast($doubles, $nc(rhs->transforms)->clone()));
	$set(this, strikesRef, nullptr);
}

bool StandardGlyphVector$GlyphTransformInfo::equals(StandardGlyphVector$GlyphTransformInfo* rhs) {
	if (rhs == nullptr) {
		return false;
	}
	if (rhs == this) {
		return true;
	}
	if ($nc(this->indices)->length != $nc($nc(rhs)->indices)->length) {
		return false;
	}
	if ($nc(this->transforms)->length != $nc($nc(rhs)->transforms)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->indices)->length; ++i) {
		int32_t tix = $nc(this->indices)->get(i);
		int32_t rix = $nc($nc(rhs)->indices)->get(i);
		if ((tix == 0) != (rix == 0)) {
			return false;
		}
		if (tix != 0) {
			tix *= 6;
			rix *= 6;
			for (int32_t j = 6; j > 0; --j) {
				if ($nc(this->indices)->get(--tix) != $nc(rhs->indices)->get(--rix)) {
					return false;
				}
			}
		}
	}
	return true;
}

void StandardGlyphVector$GlyphTransformInfo::setGlyphTransform(int32_t glyphIndex, $AffineTransform* newTX) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, temp, $new($doubles, 6));
	bool isIdentity = true;
	if (newTX == nullptr || $nc(newTX)->isIdentity()) {
		temp->set(0, temp->set(3, 1.0));
	} else {
		isIdentity = false;
		newTX->getMatrix(temp);
	}
	if (this->indices == nullptr) {
		if (isIdentity) {
			return;
		}
		$set(this, indices, $new($ints, $nc($nc(this->sgv)->glyphs)->length));
		$nc(this->indices)->set(glyphIndex, 1);
		$set(this, transforms, temp);
	} else {
		bool addSlot = false;
		int32_t newIndex = -1;
		if (isIdentity) {
			newIndex = 0;
		} else {
			addSlot = true;
			int32_t i = 0;
			bool loop$continue = false;
			for (i = 0; i < $nc(this->transforms)->length; i += 6) {
				for (int32_t j = 0; j < 6; ++j) {
					if ($nc(this->transforms)->get(i + j) != temp->get(j)) {
						loop$continue = true;
						break;
					}
				}
				if (loop$continue) {
					loop$continue = false;
					continue;
				}
				addSlot = false;
				break;
			}
			newIndex = i / 6 + 1;
		}
		int32_t oldIndex = $nc(this->indices)->get(glyphIndex);
		if (newIndex != oldIndex) {
			bool removeSlot = false;
			if (oldIndex != 0) {
				removeSlot = true;
				for (int32_t i = 0; i < $nc(this->indices)->length; ++i) {
					if ($nc(this->indices)->get(i) == oldIndex && i != glyphIndex) {
						removeSlot = false;
						break;
					}
				}
			}
			if (removeSlot && addSlot) {
				newIndex = oldIndex;
				$System::arraycopy(temp, 0, this->transforms, (newIndex - 1) * 6, 6);
			} else if (removeSlot) {
				if ($nc(this->transforms)->length == 6) {
					$set(this, indices, nullptr);
					$set(this, transforms, nullptr);
					$nc(this->sgv)->clearCaches(glyphIndex);
					$nc(this->sgv)->clearFlags(1);
					$set(this, strikesRef, nullptr);
					return;
				}
				$var($doubles, ttemp, $new($doubles, $nc(this->transforms)->length - 6));
				$System::arraycopy(this->transforms, 0, ttemp, 0, (oldIndex - 1) * 6);
				$System::arraycopy(this->transforms, oldIndex * 6, ttemp, (oldIndex - 1) * 6, $nc(this->transforms)->length - oldIndex * 6);
				$set(this, transforms, ttemp);
				for (int32_t i = 0; i < $nc(this->indices)->length; ++i) {
					if ($nc(this->indices)->get(i) > oldIndex) {
						(*$nc(this->indices))[i] -= 1;
					}
				}
				if (newIndex > oldIndex) {
					--newIndex;
				}
			} else if (addSlot) {
				$var($doubles, ttemp, $new($doubles, $nc(this->transforms)->length + 6));
				$System::arraycopy(this->transforms, 0, ttemp, 0, $nc(this->transforms)->length);
				$System::arraycopy(temp, 0, ttemp, $nc(this->transforms)->length, 6);
				$set(this, transforms, ttemp);
			}
			$nc(this->indices)->set(glyphIndex, newIndex);
		}
	}
	$nc(this->sgv)->clearCaches(glyphIndex);
	$nc(this->sgv)->addFlags(1);
	$set(this, strikesRef, nullptr);
}

$AffineTransform* StandardGlyphVector$GlyphTransformInfo::getGlyphTransform(int32_t ix) {
	int32_t index = $nc(this->indices)->get(ix);
	if (index == 0) {
		return nullptr;
	}
	int32_t x = (index - 1) * 6;
	return $new($AffineTransform, $nc(this->transforms)->get(x + 0), $nc(this->transforms)->get(x + 1), $nc(this->transforms)->get(x + 2), $nc(this->transforms)->get(x + 3), $nc(this->transforms)->get(x + 4), $nc(this->transforms)->get(x + 5));
}

int32_t StandardGlyphVector$GlyphTransformInfo::transformCount() {
	if (this->transforms == nullptr) {
		return 0;
	}
	return $nc(this->transforms)->length / 6;
}

$Object* StandardGlyphVector$GlyphTransformInfo::setupGlyphImages($longs* images, $floats* positions, $AffineTransform* tx) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc($nc(this->sgv)->glyphs)->length;
	$var($StandardGlyphVector$GlyphStrikeArray, sl, getAllStrikes());
	for (int32_t i = 0; i < len; ++i) {
		$var($StandardGlyphVector$GlyphStrike, gs, $nc(sl)->get($nc(this->indices)->get(i)));
		int32_t glyphID = $nc($nc(this->sgv)->glyphs)->get(i);
		$nc(images)->set(i, $nc($nc(gs)->strike)->getGlyphImagePtr(glyphID));
		gs->getGlyphPosition(glyphID, i * 2, $nc(this->sgv)->positions, positions);
	}
	$nc(tx)->transform(positions, 0, positions, 0, len);
	return $of(sl);
}

$Rectangle* StandardGlyphVector$GlyphTransformInfo::getGlyphsPixelBounds($AffineTransform* tx, float x, float y, int32_t start, int32_t count) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, result, nullptr);
	$var($Rectangle, r, $new($Rectangle));
	$var($Point2D$Float, pt, $new($Point2D$Float));
	int32_t n = start * 2;
	while (--count >= 0) {
		$var($StandardGlyphVector$GlyphStrike, gs, getStrike(start));
		pt->x = x + $nc($nc(this->sgv)->positions)->get(n++) + $nc(gs)->dx;
		pt->y = y + $nc($nc(this->sgv)->positions)->get(n++) + gs->dy;
		$nc(tx)->transform(pt, pt);
		$nc(gs->strike)->getGlyphImageBounds($nc($nc(this->sgv)->glyphs)->get(start++), pt, r);
		if (!r->isEmpty()) {
			if (result == nullptr) {
				$assign(result, $new($Rectangle, r));
			} else {
				$nc(result)->add(r);
			}
		}
	}
	return result != nullptr ? result : r;
}

$StandardGlyphVector$GlyphStrike* StandardGlyphVector$GlyphTransformInfo::getStrike(int32_t glyphIndex) {
	if (this->indices != nullptr) {
		$var($StandardGlyphVector$GlyphStrikeArray, strikes, getStrikeArray());
		return getStrikeAtIndex(strikes, $nc(this->indices)->get(glyphIndex));
	}
	return $nc(this->sgv)->getDefaultStrike();
}

$StandardGlyphVector$GlyphStrikeArray* StandardGlyphVector$GlyphTransformInfo::getAllStrikes() {
	if (this->indices == nullptr) {
		return nullptr;
	}
	$var($StandardGlyphVector$GlyphStrikeArray, strikes, getStrikeArray());
	if (!this->haveAllStrikes) {
		for (int32_t i = 0; i < $nc(strikes)->length; ++i) {
			getStrikeAtIndex(strikes, i);
		}
		this->haveAllStrikes = true;
	}
	return strikes;
}

$StandardGlyphVector$GlyphStrikeArray* StandardGlyphVector$GlyphTransformInfo::getStrikeArray() {
	$var($StandardGlyphVector$GlyphStrikeArray, strikes, nullptr);
	if (this->strikesRef != nullptr) {
		$assign(strikes, $cast($StandardGlyphVector$GlyphStrikeArray, $nc(this->strikesRef)->get()));
	}
	if (strikes == nullptr) {
		this->haveAllStrikes = false;
		$assign(strikes, $new($StandardGlyphVector$GlyphStrikeArray, transformCount() + 1));
		$set(this, strikesRef, $new($SoftReference, strikes));
	}
	return strikes;
}

$StandardGlyphVector$GlyphStrike* StandardGlyphVector$GlyphTransformInfo::getStrikeAtIndex($StandardGlyphVector$GlyphStrikeArray* strikes, int32_t strikeIndex) {
	$useLocalCurrentObjectStackCache();
	$var($StandardGlyphVector$GlyphStrike, strike, $nc(strikes)->get(strikeIndex));
	if (strike == nullptr) {
		if (strikeIndex == 0) {
			$assign(strike, $nc(this->sgv)->getDefaultStrike());
		} else {
			int32_t ix = (strikeIndex - 1) * 6;
			$var($AffineTransform, gtx, $new($AffineTransform, $nc(this->transforms)->get(ix), $nc(this->transforms)->get(ix + 1), $nc(this->transforms)->get(ix + 2), $nc(this->transforms)->get(ix + 3), $nc(this->transforms)->get(ix + 4), $nc(this->transforms)->get(ix + 5)));
			$assign(strike, $StandardGlyphVector$GlyphStrike::create(this->sgv, $nc(this->sgv)->dtx, gtx));
		}
		strikes->set(strikeIndex, strike);
	}
	return strike;
}

StandardGlyphVector$GlyphTransformInfo::StandardGlyphVector$GlyphTransformInfo() {
}

$Class* StandardGlyphVector$GlyphTransformInfo::load$($String* name, bool initialize) {
	$loadClass(StandardGlyphVector$GlyphTransformInfo, name, initialize, &_StandardGlyphVector$GlyphTransformInfo_ClassInfo_, allocate$StandardGlyphVector$GlyphTransformInfo);
	return class$;
}

$Class* StandardGlyphVector$GlyphTransformInfo::class$ = nullptr;

	} // font
} // sun