#include <java/awt/font/LineMetrics.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _LineMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LineMetrics::*)()>(&LineMetrics::init$))},
	{"getAscent", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaselineIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaselineOffsets", "()[F", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescent", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getHeight", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getLeading", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getNumChars", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStrikethroughOffset", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getStrikethroughThickness", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnderlineOffset", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnderlineThickness", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LineMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.font.LineMetrics",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LineMetrics_MethodInfo_
};

$Object* allocate$LineMetrics($Class* clazz) {
	return $of($alloc(LineMetrics));
}

void LineMetrics::init$() {
}

LineMetrics::LineMetrics() {
}

$Class* LineMetrics::load$($String* name, bool initialize) {
	$loadClass(LineMetrics, name, initialize, &_LineMetrics_ClassInfo_, allocate$LineMetrics);
	return class$;
}

$Class* LineMetrics::class$ = nullptr;

		} // font
	} // awt
} // java