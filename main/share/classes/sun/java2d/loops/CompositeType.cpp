#include <sun/java2d/loops/CompositeType.h>

#include <java/awt/AlphaComposite.h>
#include <java/lang/InternalError.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef CLEAR
#undef DESC_ALPHA_XOR
#undef DESC_ANY
#undef DESC_ANY_ALPHA
#undef DESC_CLEAR
#undef DESC_DST
#undef DESC_DST_ATOP
#undef DESC_DST_IN
#undef DESC_DST_OUT
#undef DESC_DST_OVER
#undef DESC_SRC
#undef DESC_SRC_ATOP
#undef DESC_SRC_IN
#undef DESC_SRC_NO_EA
#undef DESC_SRC_OUT
#undef DESC_SRC_OVER
#undef DESC_SRC_OVER_NO_EA
#undef DESC_XOR
#undef DST
#undef DST_ATOP
#undef DST_IN
#undef DST_OUT
#undef DST_OVER
#undef SRC
#undef SRC_ATOP
#undef SRC_IN
#undef SRC_OUT
#undef SRC_OVER
#undef XOR

using $AlphaComposite = ::java::awt::AlphaComposite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _CompositeType_FieldInfo_[] = {
	{"unusedUID", "I", nullptr, $PRIVATE | $STATIC, $staticField(CompositeType, unusedUID)},
	{"compositeUIDMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CompositeType, compositeUIDMap)},
	{"DESC_ANY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_ANY)},
	{"DESC_XOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_XOR)},
	{"DESC_CLEAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_CLEAR)},
	{"DESC_SRC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC)},
	{"DESC_DST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_DST)},
	{"DESC_SRC_OVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC_OVER)},
	{"DESC_DST_OVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_DST_OVER)},
	{"DESC_SRC_IN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC_IN)},
	{"DESC_DST_IN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_DST_IN)},
	{"DESC_SRC_OUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC_OUT)},
	{"DESC_DST_OUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_DST_OUT)},
	{"DESC_SRC_ATOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC_ATOP)},
	{"DESC_DST_ATOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_DST_ATOP)},
	{"DESC_ALPHA_XOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_ALPHA_XOR)},
	{"DESC_SRC_NO_EA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC_NO_EA)},
	{"DESC_SRC_OVER_NO_EA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_SRC_OVER_NO_EA)},
	{"DESC_ANY_ALPHA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DESC_ANY_ALPHA)},
	{"Any", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, Any)},
	{"General", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, General)},
	{"AnyAlpha", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, AnyAlpha)},
	{"Xor", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, Xor)},
	{"Clear", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, Clear)},
	{"Src", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, Src)},
	{"Dst", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, Dst)},
	{"SrcOver", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, SrcOver)},
	{"DstOver", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DstOver)},
	{"SrcIn", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, SrcIn)},
	{"DstIn", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DstIn)},
	{"SrcOut", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, SrcOut)},
	{"DstOut", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DstOut)},
	{"SrcAtop", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, SrcAtop)},
	{"DstAtop", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, DstAtop)},
	{"AlphaXor", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, AlphaXor)},
	{"SrcNoEa", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, SrcNoEa)},
	{"SrcOverNoEa", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, SrcOverNoEa)},
	{"OpaqueSrcOverNoEa", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompositeType, OpaqueSrcOverNoEa)},
	{"uniqueID", "I", nullptr, $PRIVATE, $field(CompositeType, uniqueID)},
	{"desc", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CompositeType, desc)},
	{"next", "Lsun/java2d/loops/CompositeType;", nullptr, $PRIVATE, $field(CompositeType, next)},
	{}
};

$MethodInfo _CompositeType_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/CompositeType;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CompositeType::*)(CompositeType*,$String*)>(&CompositeType::init$))},
	{"deriveSubType", "(Ljava/lang/String;)Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC, $method(static_cast<CompositeType*(CompositeType::*)($String*)>(&CompositeType::deriveSubType))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forAlphaComposite", "(Ljava/awt/AlphaComposite;)Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CompositeType*(*)($AlphaComposite*)>(&CompositeType::forAlphaComposite))},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(CompositeType::*)()>(&CompositeType::getDescriptor))},
	{"getSuperType", "()Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC, $method(static_cast<CompositeType*(CompositeType::*)()>(&CompositeType::getSuperType))},
	{"getUniqueID", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CompositeType::*)()>(&CompositeType::getUniqueID))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDerivedFrom", "(Lsun/java2d/loops/CompositeType;)Z", nullptr, $PUBLIC, $method(static_cast<bool(CompositeType::*)(CompositeType*)>(&CompositeType::isDerivedFrom))},
	{"makeUniqueID", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)($String*)>(&CompositeType::makeUniqueID))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositeType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.CompositeType",
	"java.lang.Object",
	nullptr,
	_CompositeType_FieldInfo_,
	_CompositeType_MethodInfo_
};

$Object* allocate$CompositeType($Class* clazz) {
	return $of($alloc(CompositeType));
}

int32_t CompositeType::unusedUID = 0;
$HashMap* CompositeType::compositeUIDMap = nullptr;
$String* CompositeType::DESC_ANY = nullptr;
$String* CompositeType::DESC_XOR = nullptr;
$String* CompositeType::DESC_CLEAR = nullptr;
$String* CompositeType::DESC_SRC = nullptr;
$String* CompositeType::DESC_DST = nullptr;
$String* CompositeType::DESC_SRC_OVER = nullptr;
$String* CompositeType::DESC_DST_OVER = nullptr;
$String* CompositeType::DESC_SRC_IN = nullptr;
$String* CompositeType::DESC_DST_IN = nullptr;
$String* CompositeType::DESC_SRC_OUT = nullptr;
$String* CompositeType::DESC_DST_OUT = nullptr;
$String* CompositeType::DESC_SRC_ATOP = nullptr;
$String* CompositeType::DESC_DST_ATOP = nullptr;
$String* CompositeType::DESC_ALPHA_XOR = nullptr;
$String* CompositeType::DESC_SRC_NO_EA = nullptr;
$String* CompositeType::DESC_SRC_OVER_NO_EA = nullptr;
$String* CompositeType::DESC_ANY_ALPHA = nullptr;
CompositeType* CompositeType::Any = nullptr;
CompositeType* CompositeType::General = nullptr;
CompositeType* CompositeType::AnyAlpha = nullptr;
CompositeType* CompositeType::Xor = nullptr;
CompositeType* CompositeType::Clear = nullptr;
CompositeType* CompositeType::Src = nullptr;
CompositeType* CompositeType::Dst = nullptr;
CompositeType* CompositeType::SrcOver = nullptr;
CompositeType* CompositeType::DstOver = nullptr;
CompositeType* CompositeType::SrcIn = nullptr;
CompositeType* CompositeType::DstIn = nullptr;
CompositeType* CompositeType::SrcOut = nullptr;
CompositeType* CompositeType::DstOut = nullptr;
CompositeType* CompositeType::SrcAtop = nullptr;
CompositeType* CompositeType::DstAtop = nullptr;
CompositeType* CompositeType::AlphaXor = nullptr;
CompositeType* CompositeType::SrcNoEa = nullptr;
CompositeType* CompositeType::SrcOverNoEa = nullptr;
CompositeType* CompositeType::OpaqueSrcOverNoEa = nullptr;

CompositeType* CompositeType::deriveSubType($String* desc) {
	return $new(CompositeType, this, desc);
}

CompositeType* CompositeType::forAlphaComposite($AlphaComposite* ac) {
	$init(CompositeType);
	switch ($nc(ac)->getRule()) {
	case $AlphaComposite::CLEAR:
		{
			return CompositeType::Clear;
		}
	case $AlphaComposite::SRC:
		{
			if (ac->getAlpha() >= 1.0f) {
				return CompositeType::SrcNoEa;
			} else {
				return CompositeType::Src;
			}
		}
	case $AlphaComposite::DST:
		{
			return CompositeType::Dst;
		}
	case $AlphaComposite::SRC_OVER:
		{
			if (ac->getAlpha() >= 1.0f) {
				return CompositeType::SrcOverNoEa;
			} else {
				return CompositeType::SrcOver;
			}
		}
	case $AlphaComposite::DST_OVER:
		{
			return CompositeType::DstOver;
		}
	case $AlphaComposite::SRC_IN:
		{
			return CompositeType::SrcIn;
		}
	case $AlphaComposite::DST_IN:
		{
			return CompositeType::DstIn;
		}
	case $AlphaComposite::SRC_OUT:
		{
			return CompositeType::SrcOut;
		}
	case $AlphaComposite::DST_OUT:
		{
			return CompositeType::DstOut;
		}
	case $AlphaComposite::SRC_ATOP:
		{
			return CompositeType::SrcAtop;
		}
	case $AlphaComposite::DST_ATOP:
		{
			return CompositeType::DstAtop;
		}
	case $AlphaComposite::XOR:
		{
			return CompositeType::AlphaXor;
		}
	default:
		{
			$throwNew($InternalError, "Unrecognized alpha rule"_s);
		}
	}
}

void CompositeType::init$(CompositeType* parent, $String* desc) {
	$set(this, next, parent);
	$set(this, desc, desc);
	this->uniqueID = makeUniqueID(desc);
}

int32_t CompositeType::makeUniqueID($String* desc) {
	$load(CompositeType);
	$synchronized(class$) {
		$init(CompositeType);
		$var($Integer, i, $cast($Integer, $nc(CompositeType::compositeUIDMap)->get(desc)));
		if (i == nullptr) {
			if (CompositeType::unusedUID > 255) {
				$throwNew($InternalError, "composite type id overflow"_s);
			}
			$assign(i, $Integer::valueOf(CompositeType::unusedUID++));
			$nc(CompositeType::compositeUIDMap)->put(desc, i);
		}
		return $nc(i)->intValue();
	}
}

int32_t CompositeType::getUniqueID() {
	return this->uniqueID;
}

$String* CompositeType::getDescriptor() {
	return this->desc;
}

CompositeType* CompositeType::getSuperType() {
	return this->next;
}

int32_t CompositeType::hashCode() {
	return $nc(this->desc)->hashCode();
}

bool CompositeType::isDerivedFrom(CompositeType* other) {
	$var(CompositeType, comptype, this);
	do {
		if (comptype->desc == $nc(other)->desc) {
			return true;
		}
		$assign(comptype, comptype->next);
	} while (comptype != nullptr);
	return false;
}

bool CompositeType::equals(Object$* o) {
	if ($instanceOf(CompositeType, o)) {
		return ($nc(($cast(CompositeType, o)))->uniqueID == this->uniqueID);
	}
	return false;
}

$String* CompositeType::toString() {
	return this->desc;
}

void clinit$CompositeType($Class* class$) {
	$assignStatic(CompositeType::DESC_ANY, "Any CompositeContext"_s);
	$assignStatic(CompositeType::DESC_XOR, "XOR mode"_s);
	$assignStatic(CompositeType::DESC_CLEAR, "Porter-Duff Clear"_s);
	$assignStatic(CompositeType::DESC_SRC, "Porter-Duff Src"_s);
	$assignStatic(CompositeType::DESC_DST, "Porter-Duff Dst"_s);
	$assignStatic(CompositeType::DESC_SRC_OVER, "Porter-Duff Src Over Dst"_s);
	$assignStatic(CompositeType::DESC_DST_OVER, "Porter-Duff Dst Over Src"_s);
	$assignStatic(CompositeType::DESC_SRC_IN, "Porter-Duff Src In Dst"_s);
	$assignStatic(CompositeType::DESC_DST_IN, "Porter-Duff Dst In Src"_s);
	$assignStatic(CompositeType::DESC_SRC_OUT, "Porter-Duff Src HeldOutBy Dst"_s);
	$assignStatic(CompositeType::DESC_DST_OUT, "Porter-Duff Dst HeldOutBy Src"_s);
	$assignStatic(CompositeType::DESC_SRC_ATOP, "Porter-Duff Src Atop Dst"_s);
	$assignStatic(CompositeType::DESC_DST_ATOP, "Porter-Duff Dst Atop Src"_s);
	$assignStatic(CompositeType::DESC_ALPHA_XOR, "Porter-Duff Xor"_s);
	$assignStatic(CompositeType::DESC_SRC_NO_EA, "Porter-Duff Src, No Extra Alpha"_s);
	$assignStatic(CompositeType::DESC_SRC_OVER_NO_EA, "Porter-Duff SrcOverDst, No Extra Alpha"_s);
	$assignStatic(CompositeType::DESC_ANY_ALPHA, "Any AlphaComposite Rule"_s);
	CompositeType::unusedUID = 1;
	$assignStatic(CompositeType::compositeUIDMap, $new($HashMap, 100));
	$assignStatic(CompositeType::Any, $new(CompositeType, nullptr, CompositeType::DESC_ANY));
	$assignStatic(CompositeType::General, CompositeType::Any);
	$assignStatic(CompositeType::AnyAlpha, $nc(CompositeType::General)->deriveSubType(CompositeType::DESC_ANY_ALPHA));
	$assignStatic(CompositeType::Xor, $nc(CompositeType::General)->deriveSubType(CompositeType::DESC_XOR));
	$assignStatic(CompositeType::Clear, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_CLEAR));
	$assignStatic(CompositeType::Src, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_SRC));
	$assignStatic(CompositeType::Dst, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_DST));
	$assignStatic(CompositeType::SrcOver, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_SRC_OVER));
	$assignStatic(CompositeType::DstOver, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_DST_OVER));
	$assignStatic(CompositeType::SrcIn, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_SRC_IN));
	$assignStatic(CompositeType::DstIn, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_DST_IN));
	$assignStatic(CompositeType::SrcOut, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_SRC_OUT));
	$assignStatic(CompositeType::DstOut, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_DST_OUT));
	$assignStatic(CompositeType::SrcAtop, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_SRC_ATOP));
	$assignStatic(CompositeType::DstAtop, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_DST_ATOP));
	$assignStatic(CompositeType::AlphaXor, $nc(CompositeType::AnyAlpha)->deriveSubType(CompositeType::DESC_ALPHA_XOR));
	$assignStatic(CompositeType::SrcNoEa, $nc(CompositeType::Src)->deriveSubType(CompositeType::DESC_SRC_NO_EA));
	$assignStatic(CompositeType::SrcOverNoEa, $nc(CompositeType::SrcOver)->deriveSubType(CompositeType::DESC_SRC_OVER_NO_EA));
	$assignStatic(CompositeType::OpaqueSrcOverNoEa, $nc($($nc(CompositeType::SrcOverNoEa)->deriveSubType(CompositeType::DESC_SRC)))->deriveSubType(CompositeType::DESC_SRC_NO_EA));
}

CompositeType::CompositeType() {
}

$Class* CompositeType::load$($String* name, bool initialize) {
	$loadClass(CompositeType, name, initialize, &_CompositeType_ClassInfo_, clinit$CompositeType, allocate$CompositeType);
	return class$;
}

$Class* CompositeType::class$ = nullptr;

		} // loops
	} // java2d
} // sun