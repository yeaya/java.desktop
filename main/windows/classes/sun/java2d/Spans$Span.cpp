#include <sun/java2d/Spans$Span.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/Spans.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spans = ::sun::java2d::Spans;

namespace sun {
	namespace java2d {

$FieldInfo _Spans$Span_FieldInfo_[] = {
	{"mStart", "F", nullptr, $PRIVATE, $field(Spans$Span, mStart)},
	{"mEnd", "F", nullptr, $PRIVATE, $field(Spans$Span, mEnd)},
	{}
};

$MethodInfo _Spans$Span_MethodInfo_[] = {
	{"<init>", "(FF)V", nullptr, 0, $method(static_cast<void(Spans$Span::*)(float,float)>(&Spans$Span::init$))},
	{"compareTo", "(Lsun/java2d/Spans$Span;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"contains", "(F)Z", nullptr, 0},
	{"getEnd", "()F", nullptr, $FINAL, $method(static_cast<float(Spans$Span::*)()>(&Spans$Span::getEnd))},
	{"getStart", "()F", nullptr, $FINAL, $method(static_cast<float(Spans$Span::*)()>(&Spans$Span::getStart))},
	{"setEnd", "(F)V", nullptr, $FINAL, $method(static_cast<void(Spans$Span::*)(float)>(&Spans$Span::setEnd))},
	{"setStart", "(F)V", nullptr, $FINAL, $method(static_cast<void(Spans$Span::*)(float)>(&Spans$Span::setStart))},
	{"subsume", "(Lsun/java2d/Spans$Span;)Z", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spans$Span_InnerClassesInfo_[] = {
	{"sun.java2d.Spans$Span", "sun.java2d.Spans", "Span", $STATIC},
	{}
};

$ClassInfo _Spans$Span_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.Spans$Span",
	"java.lang.Object",
	"java.lang.Comparable",
	_Spans$Span_FieldInfo_,
	_Spans$Span_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/java2d/Spans$Span;>;",
	nullptr,
	_Spans$Span_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.Spans"
};

$Object* allocate$Spans$Span($Class* clazz) {
	return $of($alloc(Spans$Span));
}

void Spans$Span::init$(float start, float end) {
	this->mStart = start;
	this->mEnd = end;
}

float Spans$Span::getStart() {
	return this->mStart;
}

float Spans$Span::getEnd() {
	return this->mEnd;
}

void Spans$Span::setStart(float start) {
	this->mStart = start;
}

void Spans$Span::setEnd(float end) {
	this->mEnd = end;
}

bool Spans$Span::subsume(Spans$Span* otherSpan) {
	bool isSubsumed = contains($nc(otherSpan)->mStart);
	if (isSubsumed && $nc(otherSpan)->mEnd > this->mEnd) {
		this->mEnd = otherSpan->mEnd;
	}
	return isSubsumed;
}

bool Spans$Span::contains(float pos) {
	return this->mStart <= pos && pos < this->mEnd;
}

int32_t Spans$Span::compareTo(Spans$Span* otherSpan) {
	float otherStart = $nc(otherSpan)->getStart();
	int32_t result = 0;
	if (this->mStart < otherStart) {
		result = -1;
	} else if (this->mStart > otherStart) {
		result = 1;
	} else {
		result = 0;
	}
	return result;
}

$String* Spans$Span::toString() {
	return $str({"Span: "_s, $$str(this->mStart), " to "_s, $$str(this->mEnd)});
}

int32_t Spans$Span::compareTo(Object$* otherSpan) {
	return this->compareTo($cast(Spans$Span, otherSpan));
}

Spans$Span::Spans$Span() {
}

$Class* Spans$Span::load$($String* name, bool initialize) {
	$loadClass(Spans$Span, name, initialize, &_Spans$Span_ClassInfo_, allocate$Spans$Span);
	return class$;
}

$Class* Spans$Span::class$ = nullptr;

	} // java2d
} // sun