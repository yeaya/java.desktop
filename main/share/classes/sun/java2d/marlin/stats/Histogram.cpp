#include <sun/java2d/marlin/stats/Histogram.h>

#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef BUCKET
#undef LAST
#undef MAX
#undef STEPS

using $StatLongArray = $Array<::sun::java2d::marlin::stats::StatLong>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

$FieldInfo _Histogram_FieldInfo_[] = {
	{"BUCKET", "I", nullptr, $STATIC | $FINAL, $constField(Histogram, BUCKET)},
	{"MAX", "I", nullptr, $STATIC | $FINAL, $constField(Histogram, MAX)},
	{"LAST", "I", nullptr, $STATIC | $FINAL, $constField(Histogram, LAST)},
	{"STEPS", "[I", nullptr, $STATIC | $FINAL, $staticField(Histogram, STEPS)},
	{"stats", "[Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Histogram, stats)},
	{}
};

$MethodInfo _Histogram_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Histogram::*)($String*)>(&Histogram::init$))},
	{"add", "(I)V", nullptr, $PUBLIC},
	{"add", "(J)V", nullptr, $PUBLIC},
	{"bucket", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Histogram::bucket))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Histogram_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.stats.Histogram",
	"sun.java2d.marlin.stats.StatLong",
	nullptr,
	_Histogram_FieldInfo_,
	_Histogram_MethodInfo_
};

$Object* allocate$Histogram($Class* clazz) {
	return $of($alloc(Histogram));
}

$ints* Histogram::STEPS = nullptr;

int32_t Histogram::bucket(int32_t val) {
	$init(Histogram);
	for (int32_t i = 1; i < Histogram::MAX; ++i) {
		if (val < $nc(Histogram::STEPS)->get(i)) {
			return i - 1;
		}
	}
	return Histogram::LAST;
}

void Histogram::init$($String* name) {
	$useLocalCurrentObjectStackCache();
	$StatLong::init$(name);
	$set(this, stats, $new($StatLongArray, Histogram::MAX));
	for (int32_t i = 0; i < Histogram::MAX; ++i) {
		$nc(this->stats)->set(i, $$new($StatLong, $($String::format("%5s .. %5s"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf($nc(Histogram::STEPS)->get(i)))),
			((i + 1 < Histogram::MAX) ? $($of($Integer::valueOf($nc(Histogram::STEPS)->get(i + 1)))) : $of("~"_s))
		})))));
	}
}

void Histogram::reset() {
	$StatLong::reset();
	for (int32_t i = 0; i < Histogram::MAX; ++i) {
		$nc($nc(this->stats)->get(i))->reset();
	}
}

void Histogram::add(int32_t val) {
	$StatLong::add(val);
	$nc($nc(this->stats)->get(bucket(val)))->add(val);
}

void Histogram::add(int64_t val) {
	add((int32_t)val);
}

$String* Histogram::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 2048));
	$nc($($StatLong::toString(sb)))->append(" { "_s);
	for (int32_t i = 0; i < Histogram::MAX; ++i) {
		if ($nc($nc(this->stats)->get(i))->count != (int64_t)0) {
			sb->append("\n        "_s)->append($($nc($nc(this->stats)->get(i))->toString()));
		}
	}
	return sb->append(" }"_s)->toString();
}

void clinit$Histogram($Class* class$) {
	$assignStatic(Histogram::STEPS, $new($ints, Histogram::MAX));
	{
		$nc(Histogram::STEPS)->set(0, 0);
		$nc(Histogram::STEPS)->set(1, 1);
		for (int32_t i = 2; i < Histogram::MAX; ++i) {
			$nc(Histogram::STEPS)->set(i, $nc(Histogram::STEPS)->get(i - 1) * Histogram::BUCKET);
		}
	}
}

Histogram::Histogram() {
}

$Class* Histogram::load$($String* name, bool initialize) {
	$loadClass(Histogram, name, initialize, &_Histogram_ClassInfo_, clinit$Histogram, allocate$Histogram);
	return class$;
}

$Class* Histogram::class$ = nullptr;

			} // stats
		} // marlin
	} // java2d
} // sun