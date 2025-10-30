#include <sun/java2d/Spans$SpanIntersection.h>

#include <sun/java2d/Spans$Span.h>
#include <sun/java2d/Spans.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spans = ::sun::java2d::Spans;
using $Spans$Span = ::sun::java2d::Spans$Span;

namespace sun {
	namespace java2d {

$FieldInfo _Spans$SpanIntersection_FieldInfo_[] = {
	{"instance", "Lsun/java2d/Spans$SpanIntersection;", nullptr, $STATIC | $FINAL, $staticField(Spans$SpanIntersection, instance)},
	{}
};

$MethodInfo _Spans$SpanIntersection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Spans$SpanIntersection::*)()>(&Spans$SpanIntersection::init$))},
	{"compare", "(Lsun/java2d/Spans$Span;Lsun/java2d/Spans$Span;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Spans$SpanIntersection_InnerClassesInfo_[] = {
	{"sun.java2d.Spans$SpanIntersection", "sun.java2d.Spans", "SpanIntersection", $STATIC},
	{"sun.java2d.Spans$Span", "sun.java2d.Spans", "Span", $STATIC},
	{}
};

$ClassInfo _Spans$SpanIntersection_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.Spans$SpanIntersection",
	"java.lang.Object",
	"java.util.Comparator",
	_Spans$SpanIntersection_FieldInfo_,
	_Spans$SpanIntersection_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/java2d/Spans$Span;>;",
	nullptr,
	_Spans$SpanIntersection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.Spans"
};

$Object* allocate$Spans$SpanIntersection($Class* clazz) {
	return $of($alloc(Spans$SpanIntersection));
}

Spans$SpanIntersection* Spans$SpanIntersection::instance = nullptr;

void Spans$SpanIntersection::init$() {
}

int32_t Spans$SpanIntersection::compare($Spans$Span* span1, $Spans$Span* span2) {
	int32_t result = 0;
	float var$0 = $nc(span1)->getEnd();
	if (var$0 <= $nc(span2)->getStart()) {
		result = -1;
	} else {
		float var$2 = span1->getStart();
		if (var$2 >= span2->getEnd()) {
			result = 1;
		} else {
			result = 0;
		}
	}
	return result;
}

int32_t Spans$SpanIntersection::compare(Object$* span1, Object$* span2) {
	return this->compare($cast($Spans$Span, span1), $cast($Spans$Span, span2));
}

void clinit$Spans$SpanIntersection($Class* class$) {
	$assignStatic(Spans$SpanIntersection::instance, $new(Spans$SpanIntersection));
}

Spans$SpanIntersection::Spans$SpanIntersection() {
}

$Class* Spans$SpanIntersection::load$($String* name, bool initialize) {
	$loadClass(Spans$SpanIntersection, name, initialize, &_Spans$SpanIntersection_ClassInfo_, clinit$Spans$SpanIntersection, allocate$Spans$SpanIntersection);
	return class$;
}

$Class* Spans$SpanIntersection::class$ = nullptr;

	} // java2d
} // sun