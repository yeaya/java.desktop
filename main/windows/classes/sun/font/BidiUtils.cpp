#include <sun/font/BidiUtils.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Bidi.h>
#include <jcpp.h>

#undef NUMLEVELS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bidi = ::java::text::Bidi;

namespace sun {
	namespace font {

$FieldInfo _BidiUtils_FieldInfo_[] = {
	{"NUMLEVELS", "C", nullptr, $STATIC | $FINAL, $constField(BidiUtils, NUMLEVELS)},
	{}
};

$MethodInfo _BidiUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BidiUtils::*)()>(&BidiUtils::init$))},
	{"computeContiguousOrder", "([III)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,int32_t)>(&BidiUtils::computeContiguousOrder))},
	{"createContiguousOrder", "([I)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ints*)>(&BidiUtils::createContiguousOrder))},
	{"createInverseMap", "([I)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ints*)>(&BidiUtils::createInverseMap))},
	{"createNormalizedMap", "([I[BII)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ints*,$bytes*,int32_t,int32_t)>(&BidiUtils::createNormalizedMap))},
	{"createVisualToLogicalMap", "([B)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($bytes*)>(&BidiUtils::createVisualToLogicalMap))},
	{"getLevels", "(Ljava/text/Bidi;[BI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Bidi*,$bytes*,int32_t)>(&BidiUtils::getLevels))},
	{"getLevels", "(Ljava/text/Bidi;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Bidi*)>(&BidiUtils::getLevels))},
	{"reorderVisually", "([B[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,$ObjectArray*)>(&BidiUtils::reorderVisually))},
	{}
};

$ClassInfo _BidiUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.BidiUtils",
	"java.lang.Object",
	nullptr,
	_BidiUtils_FieldInfo_,
	_BidiUtils_MethodInfo_
};

$Object* allocate$BidiUtils($Class* clazz) {
	return $of($alloc(BidiUtils));
}

void BidiUtils::init$() {
}

void BidiUtils::getLevels($Bidi* bidi, $bytes* levels, int32_t start) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = start + $nc(bidi)->getLength();
	if (start < 0 || limit > $nc(levels)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"levels.length = "_s, $$str(levels->length), " start: "_s, $$str(start), " limit: "_s, $$str(limit)}));
	}
	int32_t runCount = bidi->getRunCount();
	int32_t p = start;
	for (int32_t i = 0; i < runCount; ++i) {
		int32_t rlimit = start + bidi->getRunLimit(i);
		int8_t rlevel = (int8_t)bidi->getRunLevel(i);
		while (p < rlimit) {
			$nc(levels)->set(p++, rlevel);
		}
	}
}

$bytes* BidiUtils::getLevels($Bidi* bidi) {
	$var($bytes, levels, $new($bytes, $nc(bidi)->getLength()));
	getLevels(bidi, levels, 0);
	return levels;
}

$ints* BidiUtils::createVisualToLogicalMap($bytes* levels) {
	int32_t len = $nc(levels)->length;
	$var($ints, mapping, $new($ints, len));
	int8_t lowestOddLevel = (int8_t)(BidiUtils::NUMLEVELS + 1);
	int8_t highestLevel = (int8_t)0;
	for (int32_t i = 0; i < len; ++i) {
		mapping->set(i, i);
		int8_t level = levels->get(i);
		if (level > highestLevel) {
			highestLevel = level;
		}
		if (((int32_t)(level & (uint32_t)1)) != 0 && level < lowestOddLevel) {
			lowestOddLevel = level;
		}
	}
	while (highestLevel >= lowestOddLevel) {
		int32_t i = 0;
		for (;;) {
			while (i < len && levels->get(i) < highestLevel) {
				++i;
			}
			int32_t begin = i++;
			if (begin == levels->length) {
				break;
			}
			while (i < len && levels->get(i) >= highestLevel) {
				++i;
			}
			int32_t end = i - 1;
			while (begin < end) {
				int32_t temp = mapping->get(begin);
				mapping->set(begin, mapping->get(end));
				mapping->set(end, temp);
				++begin;
				--end;
			}
		}
		--highestLevel;
	}
	return mapping;
}

$ints* BidiUtils::createInverseMap($ints* values) {
	if (values == nullptr) {
		return nullptr;
	}
	$var($ints, result, $new($ints, $nc(values)->length));
	for (int32_t i = 0; i < values->length; ++i) {
		result->set(values->get(i), i);
	}
	return result;
}

$ints* BidiUtils::createContiguousOrder($ints* values) {
	if (values != nullptr) {
		return computeContiguousOrder(values, 0, values->length);
	}
	return nullptr;
}

$ints* BidiUtils::computeContiguousOrder($ints* values, int32_t start, int32_t limit) {
	$var($ints, result, $new($ints, limit - start));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(i, i + start);
	}
	for (int32_t i = 0; i < result->length - 1; ++i) {
		int32_t minIndex = i;
		int32_t currentValue = $nc(values)->get(result->get(minIndex));
		for (int32_t j = i; j < result->length; ++j) {
			if (values->get(result->get(j)) < currentValue) {
				minIndex = j;
				currentValue = values->get(result->get(minIndex));
			}
		}
		int32_t temp = result->get(i);
		result->set(i, result->get(minIndex));
		result->set(minIndex, temp);
	}
	if (start != 0) {
		for (int32_t i = 0; i < result->length; ++i) {
			(*result)[i] -= start;
		}
	}
	int32_t k = 0;
	for (k = 0; k < result->length; ++k) {
		if (result->get(k) != k) {
			break;
		}
	}
	if (k == result->length) {
		return nullptr;
	}
	return createInverseMap(result);
}

$ints* BidiUtils::createNormalizedMap($ints* values, $bytes* levels, int32_t start, int32_t limit) {
	if (values != nullptr) {
		if (start != 0 || limit != values->length) {
			bool copyRange = false;
			bool canonical = false;
			int8_t primaryLevel = 0;
			if (levels == nullptr) {
				primaryLevel = (int8_t)0;
				copyRange = true;
				canonical = true;
			} else if ($nc(levels)->get(start) == levels->get(limit - 1)) {
				primaryLevel = levels->get(start);
				canonical = ((int32_t)(primaryLevel & (uint32_t)(int32_t)(int8_t)1)) == 0;
				int32_t i = 0;
				for (i = start; i < limit; ++i) {
					if (levels->get(i) < primaryLevel) {
						break;
					}
					if (canonical) {
						canonical = levels->get(i) == primaryLevel;
					}
				}
				copyRange = (i == limit);
			} else {
				copyRange = false;
				primaryLevel = (int8_t)0;
				canonical = false;
			}
			if (copyRange) {
				if (canonical) {
					return nullptr;
				}
				$var($ints, result, $new($ints, limit - start));
				int32_t baseValue = 0;
				if (((int32_t)(primaryLevel & (uint32_t)(int32_t)(int8_t)1)) != 0) {
					baseValue = values->get(limit - 1);
				} else {
					baseValue = values->get(start);
				}
				if (baseValue == 0) {
					$System::arraycopy(values, start, result, 0, limit - start);
				} else {
					for (int32_t j = 0; j < result->length; ++j) {
						result->set(j, values->get(j + start) - baseValue);
					}
				}
				return result;
			} else {
				return computeContiguousOrder(values, start, limit);
			}
		} else {
			return values;
		}
	}
	return nullptr;
}

void BidiUtils::reorderVisually($bytes* levels, $ObjectArray* objects) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(levels)->length;
	int8_t lowestOddLevel = (int8_t)(BidiUtils::NUMLEVELS + 1);
	int8_t highestLevel = (int8_t)0;
	for (int32_t i = 0; i < len; ++i) {
		int8_t level = levels->get(i);
		if (level > highestLevel) {
			highestLevel = level;
		}
		if (((int32_t)(level & (uint32_t)1)) != 0 && level < lowestOddLevel) {
			lowestOddLevel = level;
		}
	}
	while (highestLevel >= lowestOddLevel) {
		int32_t i = 0;
		for (;;) {
			while (i < len && levels->get(i) < highestLevel) {
				++i;
			}
			int32_t begin = i++;
			if (begin == levels->length) {
				break;
			}
			while (i < len && levels->get(i) >= highestLevel) {
				++i;
			}
			int32_t end = i - 1;
			while (begin < end) {
				$var($Object0, temp, $nc(objects)->get(begin));
				objects->set(begin, objects->get(end));
				objects->set(end, temp);
				++begin;
				--end;
			}
		}
		--highestLevel;
	}
}

BidiUtils::BidiUtils() {
}

$Class* BidiUtils::load$($String* name, bool initialize) {
	$loadClass(BidiUtils, name, initialize, &_BidiUtils_ClassInfo_, allocate$BidiUtils);
	return class$;
}

$Class* BidiUtils::class$ = nullptr;

	} // font
} // sun