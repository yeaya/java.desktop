#include <java/awt/AlphaComposite.h>

#include <java/awt/CompositeContext.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SunCompositeContext.h>
#include <jcpp.h>

#undef CLEAR
#undef DST
#undef DST_ATOP
#undef DST_IN
#undef DST_OUT
#undef DST_OVER
#undef MAX_RULE
#undef MIN_RULE
#undef SRC
#undef SRC_ATOP
#undef SRC_IN
#undef SRC_OUT
#undef SRC_OVER
#undef XOR

using $CompositeContext = ::java::awt::CompositeContext;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunCompositeContext = ::sun::java2d::SunCompositeContext;

namespace java {
	namespace awt {

$FieldInfo _AlphaComposite_FieldInfo_[] = {
	{"CLEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, CLEAR)},
	{"SRC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, SRC)},
	{"DST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, DST)},
	{"SRC_OVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, SRC_OVER)},
	{"DST_OVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, DST_OVER)},
	{"SRC_IN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, SRC_IN)},
	{"DST_IN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, DST_IN)},
	{"SRC_OUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, SRC_OUT)},
	{"DST_OUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, DST_OUT)},
	{"SRC_ATOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, SRC_ATOP)},
	{"DST_ATOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, DST_ATOP)},
	{"XOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AlphaComposite, XOR)},
	{"Clear", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, Clear)},
	{"Src", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, Src)},
	{"Dst", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, Dst)},
	{"SrcOver", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, SrcOver)},
	{"DstOver", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, DstOver)},
	{"SrcIn", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, SrcIn)},
	{"DstIn", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, DstIn)},
	{"SrcOut", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, SrcOut)},
	{"DstOut", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, DstOut)},
	{"SrcAtop", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, SrcAtop)},
	{"DstAtop", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, DstAtop)},
	{"Xor", "Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AlphaComposite, Xor)},
	{"MIN_RULE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlphaComposite, MIN_RULE)},
	{"MAX_RULE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlphaComposite, MAX_RULE)},
	{"extraAlpha", "F", nullptr, 0, $field(AlphaComposite, extraAlpha)},
	{"rule", "I", nullptr, 0, $field(AlphaComposite, rule)},
	{}
};

$MethodInfo _AlphaComposite_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AlphaComposite::*)(int32_t)>(&AlphaComposite::init$))},
	{"<init>", "(IF)V", nullptr, $PRIVATE, $method(static_cast<void(AlphaComposite::*)(int32_t,float)>(&AlphaComposite::init$))},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;Ljava/awt/RenderingHints;)Ljava/awt/CompositeContext;", nullptr, $PUBLIC},
	{"derive", "(I)Ljava/awt/AlphaComposite;", nullptr, $PUBLIC, $method(static_cast<AlphaComposite*(AlphaComposite::*)(int32_t)>(&AlphaComposite::derive))},
	{"derive", "(F)Ljava/awt/AlphaComposite;", nullptr, $PUBLIC, $method(static_cast<AlphaComposite*(AlphaComposite::*)(float)>(&AlphaComposite::derive))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlpha", "()F", nullptr, $PUBLIC, $method(static_cast<float(AlphaComposite::*)()>(&AlphaComposite::getAlpha))},
	{"getInstance", "(I)Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AlphaComposite*(*)(int32_t)>(&AlphaComposite::getInstance))},
	{"getInstance", "(IF)Ljava/awt/AlphaComposite;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AlphaComposite*(*)(int32_t,float)>(&AlphaComposite::getInstance))},
	{"getRule", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AlphaComposite::*)()>(&AlphaComposite::getRule))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AlphaComposite_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.AlphaComposite",
	"java.lang.Object",
	"java.awt.Composite",
	_AlphaComposite_FieldInfo_,
	_AlphaComposite_MethodInfo_
};

$Object* allocate$AlphaComposite($Class* clazz) {
	return $of($alloc(AlphaComposite));
}

AlphaComposite* AlphaComposite::Clear = nullptr;
AlphaComposite* AlphaComposite::Src = nullptr;
AlphaComposite* AlphaComposite::Dst = nullptr;
AlphaComposite* AlphaComposite::SrcOver = nullptr;
AlphaComposite* AlphaComposite::DstOver = nullptr;
AlphaComposite* AlphaComposite::SrcIn = nullptr;
AlphaComposite* AlphaComposite::DstIn = nullptr;
AlphaComposite* AlphaComposite::SrcOut = nullptr;
AlphaComposite* AlphaComposite::DstOut = nullptr;
AlphaComposite* AlphaComposite::SrcAtop = nullptr;
AlphaComposite* AlphaComposite::DstAtop = nullptr;
AlphaComposite* AlphaComposite::Xor = nullptr;

void AlphaComposite::init$(int32_t rule) {
	AlphaComposite::init$(rule, 1.0f);
}

void AlphaComposite::init$(int32_t rule, float alpha) {
	if (rule < AlphaComposite::MIN_RULE || rule > AlphaComposite::MAX_RULE) {
		$throwNew($IllegalArgumentException, "unknown composite rule"_s);
	}
	if (alpha >= 0.0f && alpha <= 1.0f) {
		this->rule = rule;
		this->extraAlpha = alpha;
	} else {
		$throwNew($IllegalArgumentException, "alpha value out of range"_s);
	}
}

AlphaComposite* AlphaComposite::getInstance(int32_t rule) {
	$init(AlphaComposite);
	switch (rule) {
	case AlphaComposite::CLEAR:
		{
			return AlphaComposite::Clear;
		}
	case AlphaComposite::SRC:
		{
			return AlphaComposite::Src;
		}
	case AlphaComposite::DST:
		{
			return AlphaComposite::Dst;
		}
	case AlphaComposite::SRC_OVER:
		{
			return AlphaComposite::SrcOver;
		}
	case AlphaComposite::DST_OVER:
		{
			return AlphaComposite::DstOver;
		}
	case AlphaComposite::SRC_IN:
		{
			return AlphaComposite::SrcIn;
		}
	case AlphaComposite::DST_IN:
		{
			return AlphaComposite::DstIn;
		}
	case AlphaComposite::SRC_OUT:
		{
			return AlphaComposite::SrcOut;
		}
	case AlphaComposite::DST_OUT:
		{
			return AlphaComposite::DstOut;
		}
	case AlphaComposite::SRC_ATOP:
		{
			return AlphaComposite::SrcAtop;
		}
	case AlphaComposite::DST_ATOP:
		{
			return AlphaComposite::DstAtop;
		}
	case AlphaComposite::XOR:
		{
			return AlphaComposite::Xor;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "unknown composite rule"_s);
		}
	}
}

AlphaComposite* AlphaComposite::getInstance(int32_t rule, float alpha) {
	$init(AlphaComposite);
	if (alpha == 1.0f) {
		return getInstance(rule);
	}
	return $new(AlphaComposite, rule, alpha);
}

$CompositeContext* AlphaComposite::createContext($ColorModel* srcColorModel, $ColorModel* dstColorModel, $RenderingHints* hints) {
	return $new($SunCompositeContext, this, srcColorModel, dstColorModel);
}

float AlphaComposite::getAlpha() {
	return this->extraAlpha;
}

int32_t AlphaComposite::getRule() {
	return this->rule;
}

AlphaComposite* AlphaComposite::derive(int32_t rule) {
	return (this->rule == rule) ? this : getInstance(rule, this->extraAlpha);
}

AlphaComposite* AlphaComposite::derive(float alpha) {
	return (this->extraAlpha == alpha) ? this : getInstance(this->rule, alpha);
}

int32_t AlphaComposite::hashCode() {
	return ($Float::floatToIntBits(this->extraAlpha) * 31 + this->rule);
}

bool AlphaComposite::equals(Object$* obj) {
	if (!($instanceOf(AlphaComposite, obj))) {
		return false;
	}
	$var(AlphaComposite, ac, $cast(AlphaComposite, obj));
	if (this->rule != $nc(ac)->rule) {
		return false;
	}
	if (this->extraAlpha != $nc(ac)->extraAlpha) {
		return false;
	}
	return true;
}

void clinit$AlphaComposite($Class* class$) {
	$assignStatic(AlphaComposite::Clear, $new(AlphaComposite, AlphaComposite::CLEAR));
	$assignStatic(AlphaComposite::Src, $new(AlphaComposite, AlphaComposite::SRC));
	$assignStatic(AlphaComposite::Dst, $new(AlphaComposite, AlphaComposite::DST));
	$assignStatic(AlphaComposite::SrcOver, $new(AlphaComposite, AlphaComposite::SRC_OVER));
	$assignStatic(AlphaComposite::DstOver, $new(AlphaComposite, AlphaComposite::DST_OVER));
	$assignStatic(AlphaComposite::SrcIn, $new(AlphaComposite, AlphaComposite::SRC_IN));
	$assignStatic(AlphaComposite::DstIn, $new(AlphaComposite, AlphaComposite::DST_IN));
	$assignStatic(AlphaComposite::SrcOut, $new(AlphaComposite, AlphaComposite::SRC_OUT));
	$assignStatic(AlphaComposite::DstOut, $new(AlphaComposite, AlphaComposite::DST_OUT));
	$assignStatic(AlphaComposite::SrcAtop, $new(AlphaComposite, AlphaComposite::SRC_ATOP));
	$assignStatic(AlphaComposite::DstAtop, $new(AlphaComposite, AlphaComposite::DST_ATOP));
	$assignStatic(AlphaComposite::Xor, $new(AlphaComposite, AlphaComposite::XOR));
}

AlphaComposite::AlphaComposite() {
}

$Class* AlphaComposite::load$($String* name, bool initialize) {
	$loadClass(AlphaComposite, name, initialize, &_AlphaComposite_ClassInfo_, clinit$AlphaComposite, allocate$AlphaComposite);
	return class$;
}

$Class* AlphaComposite::class$ = nullptr;

	} // awt
} // java