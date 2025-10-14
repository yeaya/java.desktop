#include <javax/swing/SizeRequirements.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _SizeRequirements_FieldInfo_[] = {
	{"minimum", "I", nullptr, $PUBLIC, $field(SizeRequirements, minimum)},
	{"preferred", "I", nullptr, $PUBLIC, $field(SizeRequirements, preferred)},
	{"maximum", "I", nullptr, $PUBLIC, $field(SizeRequirements, maximum)},
	{"alignment", "F", nullptr, $PUBLIC, $field(SizeRequirements, alignment)},
	{}
};

$MethodInfo _SizeRequirements_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SizeRequirements::*)()>(&SizeRequirements::init$))},
	{"<init>", "(IIIF)V", nullptr, $PUBLIC, $method(static_cast<void(SizeRequirements::*)(int32_t,int32_t,int32_t,float)>(&SizeRequirements::init$))},
	{"adjustSizes", "(I[Ljavax/swing/SizeRequirements;)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)(int32_t,$SizeRequirementsArray*)>(&SizeRequirements::adjustSizes))},
	{"calculateAlignedPositions", "(ILjavax/swing/SizeRequirements;[Ljavax/swing/SizeRequirements;[I[I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,SizeRequirements*,$SizeRequirementsArray*,$ints*,$ints*)>(&SizeRequirements::calculateAlignedPositions))},
	{"calculateAlignedPositions", "(ILjavax/swing/SizeRequirements;[Ljavax/swing/SizeRequirements;[I[IZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,SizeRequirements*,$SizeRequirementsArray*,$ints*,$ints*,bool)>(&SizeRequirements::calculateAlignedPositions))},
	{"calculateTiledPositions", "(ILjavax/swing/SizeRequirements;[Ljavax/swing/SizeRequirements;[I[I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,SizeRequirements*,$SizeRequirementsArray*,$ints*,$ints*)>(&SizeRequirements::calculateTiledPositions))},
	{"calculateTiledPositions", "(ILjavax/swing/SizeRequirements;[Ljavax/swing/SizeRequirements;[I[IZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,SizeRequirements*,$SizeRequirementsArray*,$ints*,$ints*,bool)>(&SizeRequirements::calculateTiledPositions))},
	{"compressedTile", "(IJJJ[Ljavax/swing/SizeRequirements;[I[IZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int64_t,int64_t,int64_t,$SizeRequirementsArray*,$ints*,$ints*,bool)>(&SizeRequirements::compressedTile))},
	{"expandedTile", "(IJJJ[Ljavax/swing/SizeRequirements;[I[IZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int64_t,int64_t,int64_t,$SizeRequirementsArray*,$ints*,$ints*,bool)>(&SizeRequirements::expandedTile))},
	{"getAlignedSizeRequirements", "([Ljavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SizeRequirements*(*)($SizeRequirementsArray*)>(&SizeRequirements::getAlignedSizeRequirements))},
	{"getTiledSizeRequirements", "([Ljavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SizeRequirements*(*)($SizeRequirementsArray*)>(&SizeRequirements::getTiledSizeRequirements))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SizeRequirements_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SizeRequirements",
	"java.lang.Object",
	"java.io.Serializable",
	_SizeRequirements_FieldInfo_,
	_SizeRequirements_MethodInfo_
};

$Object* allocate$SizeRequirements($Class* clazz) {
	return $of($alloc(SizeRequirements));
}

void SizeRequirements::init$() {
	this->minimum = 0;
	this->preferred = 0;
	this->maximum = 0;
	this->alignment = 0.5f;
}

void SizeRequirements::init$(int32_t min, int32_t pref, int32_t max, float a) {
	this->minimum = min;
	this->preferred = pref;
	this->maximum = max;
	this->alignment = a > 1.0f ? 1.0f : a < 0.0f ? 0.0f : a;
}

$String* SizeRequirements::toString() {
	return $str({"["_s, $$str(this->minimum), ","_s, $$str(this->preferred), ","_s, $$str(this->maximum), "]@"_s, $$str(this->alignment)});
}

SizeRequirements* SizeRequirements::getTiledSizeRequirements($SizeRequirementsArray* children) {
	$init(SizeRequirements);
	$var(SizeRequirements, total, $new(SizeRequirements));
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		$var(SizeRequirements, req, children->get(i));
		total->minimum = (int32_t)$Math::min((int64_t)total->minimum + (int64_t)$nc(req)->minimum, (int64_t)$Integer::MAX_VALUE);
		total->preferred = (int32_t)$Math::min((int64_t)total->preferred + (int64_t)$nc(req)->preferred, (int64_t)$Integer::MAX_VALUE);
		total->maximum = (int32_t)$Math::min((int64_t)total->maximum + (int64_t)$nc(req)->maximum, (int64_t)$Integer::MAX_VALUE);
	}
	return total;
}

SizeRequirements* SizeRequirements::getAlignedSizeRequirements($SizeRequirementsArray* children) {
	$init(SizeRequirements);
	$var(SizeRequirements, totalAscent, $new(SizeRequirements));
	$var(SizeRequirements, totalDescent, $new(SizeRequirements));
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		$var(SizeRequirements, req, children->get(i));
		int32_t ascent = $cast(int32_t, ($nc(req)->alignment * req->minimum));
		int32_t descent = req->minimum - ascent;
		totalAscent->minimum = $Math::max(ascent, totalAscent->minimum);
		totalDescent->minimum = $Math::max(descent, totalDescent->minimum);
		ascent = $cast(int32_t, (req->alignment * req->preferred));
		descent = req->preferred - ascent;
		totalAscent->preferred = $Math::max(ascent, totalAscent->preferred);
		totalDescent->preferred = $Math::max(descent, totalDescent->preferred);
		ascent = $cast(int32_t, (req->alignment * req->maximum));
		descent = req->maximum - ascent;
		totalAscent->maximum = $Math::max(ascent, totalAscent->maximum);
		totalDescent->maximum = $Math::max(descent, totalDescent->maximum);
	}
	int32_t min = (int32_t)$Math::min((int64_t)totalAscent->minimum + (int64_t)totalDescent->minimum, (int64_t)$Integer::MAX_VALUE);
	int32_t pref = (int32_t)$Math::min((int64_t)totalAscent->preferred + (int64_t)totalDescent->preferred, (int64_t)$Integer::MAX_VALUE);
	int32_t max = (int32_t)$Math::min((int64_t)totalAscent->maximum + (int64_t)totalDescent->maximum, (int64_t)$Integer::MAX_VALUE);
	float alignment = 0.0f;
	if (min > 0) {
		alignment = (float)totalAscent->minimum / min;
		alignment = alignment > 1.0f ? 1.0f : alignment < 0.0f ? 0.0f : alignment;
	}
	return $new(SizeRequirements, min, pref, max, alignment);
}

void SizeRequirements::calculateTiledPositions(int32_t allocated, SizeRequirements* total, $SizeRequirementsArray* children, $ints* offsets, $ints* spans) {
	$init(SizeRequirements);
	calculateTiledPositions(allocated, total, children, offsets, spans, true);
}

void SizeRequirements::calculateTiledPositions(int32_t allocated, SizeRequirements* total, $SizeRequirementsArray* children, $ints* offsets, $ints* spans, bool forward) {
	$init(SizeRequirements);
	int64_t min = 0;
	int64_t pref = 0;
	int64_t max = 0;
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		min += $nc(children->get(i))->minimum;
		pref += $nc(children->get(i))->preferred;
		max += $nc(children->get(i))->maximum;
	}
	if (allocated >= pref) {
		expandedTile(allocated, min, pref, max, children, offsets, spans, forward);
	} else {
		compressedTile(allocated, min, pref, max, children, offsets, spans, forward);
	}
}

void SizeRequirements::compressedTile(int32_t allocated, int64_t min, int64_t pref, int64_t max, $SizeRequirementsArray* request, $ints* offsets, $ints* spans, bool forward) {
	$init(SizeRequirements);
	float totalPlay = (float)$Math::min(pref - allocated, pref - min);
	float factor = (pref - min == 0) ? 0.0f : totalPlay / (pref - min);
	int32_t totalOffset = 0;
	if (forward) {
		totalOffset = 0;
		for (int32_t i = 0; i < $nc(spans)->length; ++i) {
			$nc(offsets)->set(i, totalOffset);
			$var(SizeRequirements, req, $nc(request)->get(i));
			float play = factor * ($nc(req)->preferred - req->minimum);
			spans->set(i, $cast(int32_t, (req->preferred - play)));
			totalOffset = (int32_t)$Math::min((int64_t)totalOffset + (int64_t)spans->get(i), (int64_t)$Integer::MAX_VALUE);
		}
	} else {
		totalOffset = allocated;
		for (int32_t i = 0; i < $nc(spans)->length; ++i) {
			$var(SizeRequirements, req, $nc(request)->get(i));
			float play = factor * ($nc(req)->preferred - req->minimum);
			spans->set(i, $cast(int32_t, (req->preferred - play)));
			$nc(offsets)->set(i, totalOffset - spans->get(i));
			totalOffset = (int32_t)$Math::max((int64_t)totalOffset - (int64_t)spans->get(i), (int64_t)0);
		}
	}
}

void SizeRequirements::expandedTile(int32_t allocated, int64_t min, int64_t pref, int64_t max, $SizeRequirementsArray* request, $ints* offsets, $ints* spans, bool forward) {
	$init(SizeRequirements);
	float totalPlay = (float)$Math::min(allocated - pref, max - pref);
	float factor = (max - pref == 0) ? 0.0f : totalPlay / (max - pref);
	int32_t totalOffset = 0;
	if (forward) {
		totalOffset = 0;
		for (int32_t i = 0; i < $nc(spans)->length; ++i) {
			$nc(offsets)->set(i, totalOffset);
			$var(SizeRequirements, req, $nc(request)->get(i));
			int32_t play = $cast(int32_t, (factor * ($nc(req)->maximum - req->preferred)));
			spans->set(i, (int32_t)$Math::min((int64_t)req->preferred + (int64_t)play, (int64_t)$Integer::MAX_VALUE));
			totalOffset = (int32_t)$Math::min((int64_t)totalOffset + (int64_t)spans->get(i), (int64_t)$Integer::MAX_VALUE);
		}
	} else {
		totalOffset = allocated;
		for (int32_t i = 0; i < $nc(spans)->length; ++i) {
			$var(SizeRequirements, req, $nc(request)->get(i));
			int32_t play = $cast(int32_t, (factor * ($nc(req)->maximum - req->preferred)));
			spans->set(i, (int32_t)$Math::min((int64_t)req->preferred + (int64_t)play, (int64_t)$Integer::MAX_VALUE));
			$nc(offsets)->set(i, totalOffset - spans->get(i));
			totalOffset = (int32_t)$Math::max((int64_t)totalOffset - (int64_t)spans->get(i), (int64_t)0);
		}
	}
}

void SizeRequirements::calculateAlignedPositions(int32_t allocated, SizeRequirements* total, $SizeRequirementsArray* children, $ints* offsets, $ints* spans) {
	$init(SizeRequirements);
	calculateAlignedPositions(allocated, total, children, offsets, spans, true);
}

void SizeRequirements::calculateAlignedPositions(int32_t allocated, SizeRequirements* total, $SizeRequirementsArray* children, $ints* offsets, $ints* spans, bool normal) {
	$init(SizeRequirements);
	float totalAlignment = normal ? $nc(total)->alignment : 1.0f - total->alignment;
	int32_t totalAscent = $cast(int32_t, (allocated * totalAlignment));
	int32_t totalDescent = allocated - totalAscent;
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		$var(SizeRequirements, req, children->get(i));
		float alignment = normal ? $nc(req)->alignment : 1.0f - req->alignment;
		int32_t maxAscent = $cast(int32_t, (req->maximum * alignment));
		int32_t maxDescent = req->maximum - maxAscent;
		int32_t ascent = $Math::min(totalAscent, maxAscent);
		int32_t descent = $Math::min(totalDescent, maxDescent);
		$nc(offsets)->set(i, totalAscent - ascent);
		$nc(spans)->set(i, (int32_t)$Math::min((int64_t)ascent + (int64_t)descent, (int64_t)$Integer::MAX_VALUE));
	}
}

$ints* SizeRequirements::adjustSizes(int32_t delta, $SizeRequirementsArray* children) {
	$init(SizeRequirements);
	return $new($ints, 0);
}

SizeRequirements::SizeRequirements() {
}

$Class* SizeRequirements::load$($String* name, bool initialize) {
	$loadClass(SizeRequirements, name, initialize, &_SizeRequirements_ClassInfo_, allocate$SizeRequirements);
	return class$;
}

$Class* SizeRequirements::class$ = nullptr;

	} // swing
} // javax