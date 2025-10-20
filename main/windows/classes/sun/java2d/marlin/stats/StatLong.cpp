#include <sun/java2d/marlin/stats/StatLong.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

$FieldInfo _StatLong_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(StatLong, name)},
	{"count", "J", nullptr, $PUBLIC, $field(StatLong, count)},
	{"sum", "J", nullptr, $PUBLIC, $field(StatLong, sum)},
	{"min", "J", nullptr, $PUBLIC, $field(StatLong, min)},
	{"max", "J", nullptr, $PUBLIC, $field(StatLong, max)},
	{}
};

$MethodInfo _StatLong_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StatLong::*)($String*)>(&StatLong::init$))},
	{"add", "(I)V", nullptr, $PUBLIC},
	{"add", "(J)V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$StringBuilder*(StatLong::*)($StringBuilder*)>(&StatLong::toString))},
	{"trimTo3Digits", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StatLong::trimTo3Digits))},
	{}
};

$ClassInfo _StatLong_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.marlin.stats.StatLong",
	"java.lang.Object",
	nullptr,
	_StatLong_FieldInfo_,
	_StatLong_MethodInfo_
};

$Object* allocate$StatLong($Class* clazz) {
	return $of($alloc(StatLong));
}

void StatLong::init$($String* name) {
	this->count = 0;
	this->sum = 0;
	this->min = $Integer::MAX_VALUE;
	this->max = $Integer::MIN_VALUE;
	$set(this, name, name);
}

void StatLong::reset() {
	this->count = 0;
	this->sum = 0;
	this->min = $Integer::MAX_VALUE;
	this->max = $Integer::MIN_VALUE;
}

void StatLong::add(int32_t val) {
	++this->count;
	this->sum += val;
	if (val < this->min) {
		this->min = val;
	}
	if (val > this->max) {
		this->max = val;
	}
}

void StatLong::add(int64_t val) {
	++this->count;
	this->sum += val;
	if (val < this->min) {
		this->min = val;
	}
	if (val > this->max) {
		this->max = val;
	}
}

$String* StatLong::toString() {
	$useLocalCurrentObjectStackCache();
	return $nc($(toString($$new($StringBuilder, 128))))->toString();
}

$StringBuilder* StatLong::toString($StringBuilder* sb) {
	$nc(sb)->append(this->name)->append(u'[')->append(this->count);
	sb->append("] sum: "_s)->append(this->sum)->append(" avg: "_s);
	sb->append(trimTo3Digits(((double)this->sum) / this->count));
	sb->append(" ["_s)->append(this->min)->append(" | "_s)->append(this->max)->append("]"_s);
	return sb;
}

double StatLong::trimTo3Digits(double value) {
	return ($cast(int64_t, (1000.0 * value))) / 1000.0;
}

StatLong::StatLong() {
}

$Class* StatLong::load$($String* name, bool initialize) {
	$loadClass(StatLong, name, initialize, &_StatLong_ClassInfo_, allocate$StatLong);
	return class$;
}

$Class* StatLong::class$ = nullptr;

			} // stats
		} // marlin
	} // java2d
} // sun