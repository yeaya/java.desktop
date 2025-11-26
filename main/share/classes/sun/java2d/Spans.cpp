#include <sun/java2d/Spans.h>

#include <java/util/AbstractList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/java2d/Spans$Span.h>
#include <sun/java2d/Spans$SpanIntersection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Spans$Span = ::sun::java2d::Spans$Span;
using $Spans$SpanIntersection = ::sun::java2d::Spans$SpanIntersection;

namespace sun {
	namespace java2d {

$FieldInfo _Spans_FieldInfo_[] = {
	{"kMaxAddsSinceSort", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Spans, kMaxAddsSinceSort)},
	{"mSpans", "Ljava/util/List;", "Ljava/util/List<Lsun/java2d/Spans$Span;>;", $PRIVATE, $field(Spans, mSpans)},
	{"mAddsSinceSort", "I", nullptr, $PRIVATE, $field(Spans, mAddsSinceSort)},
	{}
};

$MethodInfo _Spans_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Spans::*)()>(&Spans::init$))},
	{"add", "(FF)V", nullptr, $PUBLIC},
	{"addInfinite", "()V", nullptr, $PUBLIC},
	{"intersects", "(FF)Z", nullptr, $PUBLIC},
	{"sortAndCollapse", "()V", nullptr, $PRIVATE, $method(static_cast<void(Spans::*)()>(&Spans::sortAndCollapse))},
	{}
};

$InnerClassInfo _Spans_InnerClassesInfo_[] = {
	{"sun.java2d.Spans$SpanIntersection", "sun.java2d.Spans", "SpanIntersection", $STATIC},
	{"sun.java2d.Spans$Span", "sun.java2d.Spans", "Span", $STATIC},
	{}
};

$ClassInfo _Spans_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.Spans",
	"java.lang.Object",
	nullptr,
	_Spans_FieldInfo_,
	_Spans_MethodInfo_,
	nullptr,
	nullptr,
	_Spans_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.Spans$SpanIntersection,sun.java2d.Spans$Span"
};

$Object* allocate$Spans($Class* clazz) {
	return $of($alloc(Spans));
}

void Spans::init$() {
	$set(this, mSpans, $new($Vector, Spans::kMaxAddsSinceSort));
	this->mAddsSinceSort = 0;
}

void Spans::add(float start, float end) {
	if (this->mSpans != nullptr) {
		$nc(this->mSpans)->add($$new($Spans$Span, start, end));
		if (++this->mAddsSinceSort >= Spans::kMaxAddsSinceSort) {
			sortAndCollapse();
		}
	}
}

void Spans::addInfinite() {
	$set(this, mSpans, nullptr);
}

bool Spans::intersects(float start, float end) {
	bool doesIntersect = false;
	if (this->mSpans != nullptr) {
		if (this->mAddsSinceSort > 0) {
			sortAndCollapse();
		}
		$init($Spans$SpanIntersection);
		int32_t found = $Collections::binarySearch(this->mSpans, $$new($Spans$Span, start, end), $Spans$SpanIntersection::instance);
		doesIntersect = found >= 0;
	} else {
		doesIntersect = true;
	}
	return doesIntersect;
}

void Spans::sortAndCollapse() {
	$useLocalCurrentObjectStackCache();
	$Collections::sort(this->mSpans);
	this->mAddsSinceSort = 0;
	$var($Iterator, iter, $nc(this->mSpans)->iterator());
	$var($Spans$Span, span, nullptr);
	if ($nc(iter)->hasNext()) {
		$assign(span, $cast($Spans$Span, iter->next()));
	}
	while ($nc(iter)->hasNext()) {
		$var($Spans$Span, nextSpan, $cast($Spans$Span, iter->next()));
		if ($nc(span)->subsume(nextSpan)) {
			iter->remove();
		} else {
			$assign(span, nextSpan);
		}
	}
}

Spans::Spans() {
}

$Class* Spans::load$($String* name, bool initialize) {
	$loadClass(Spans, name, initialize, &_Spans_ClassInfo_, allocate$Spans);
	return class$;
}

$Class* Spans::class$ = nullptr;

	} // java2d
} // sun