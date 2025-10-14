#include <java/awt/JobAttributes$SidesType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/JobAttributes.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef I_ONE_SIDED
#undef I_TWO_SIDED_LONG_EDGE
#undef I_TWO_SIDED_SHORT_EDGE
#undef NAMES
#undef ONE_SIDED
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE

using $AttributeValue = ::java::awt::AttributeValue;
using $JobAttributes = ::java::awt::JobAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _JobAttributes$SidesType_FieldInfo_[] = {
	{"I_ONE_SIDED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$SidesType, I_ONE_SIDED)},
	{"I_TWO_SIDED_LONG_EDGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$SidesType, I_TWO_SIDED_LONG_EDGE)},
	{"I_TWO_SIDED_SHORT_EDGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$SidesType, I_TWO_SIDED_SHORT_EDGE)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobAttributes$SidesType, NAMES)},
	{"ONE_SIDED", "Ljava/awt/JobAttributes$SidesType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$SidesType, ONE_SIDED)},
	{"TWO_SIDED_LONG_EDGE", "Ljava/awt/JobAttributes$SidesType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$SidesType, TWO_SIDED_LONG_EDGE)},
	{"TWO_SIDED_SHORT_EDGE", "Ljava/awt/JobAttributes$SidesType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$SidesType, TWO_SIDED_SHORT_EDGE)},
	{}
};

$MethodInfo _JobAttributes$SidesType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JobAttributes$SidesType::*)(int32_t)>(&JobAttributes$SidesType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JobAttributes$SidesType_InnerClassesInfo_[] = {
	{"java.awt.JobAttributes$SidesType", "java.awt.JobAttributes", "SidesType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JobAttributes$SidesType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.JobAttributes$SidesType",
	"java.awt.AttributeValue",
	nullptr,
	_JobAttributes$SidesType_FieldInfo_,
	_JobAttributes$SidesType_MethodInfo_,
	nullptr,
	nullptr,
	_JobAttributes$SidesType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.JobAttributes"
};

$Object* allocate$JobAttributes$SidesType($Class* clazz) {
	return $of($alloc(JobAttributes$SidesType));
}

$StringArray* JobAttributes$SidesType::NAMES = nullptr;

JobAttributes$SidesType* JobAttributes$SidesType::ONE_SIDED = nullptr;

JobAttributes$SidesType* JobAttributes$SidesType::TWO_SIDED_LONG_EDGE = nullptr;

JobAttributes$SidesType* JobAttributes$SidesType::TWO_SIDED_SHORT_EDGE = nullptr;

void JobAttributes$SidesType::init$(int32_t type) {
	$AttributeValue::init$(type, JobAttributes$SidesType::NAMES);
}

$String* JobAttributes$SidesType::toString() {
	return $AttributeValue::toString();
}

int32_t JobAttributes$SidesType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$JobAttributes$SidesType($Class* class$) {
	$assignStatic(JobAttributes$SidesType::NAMES, $new($StringArray, {
		"one-sided"_s,
		"two-sided-long-edge"_s,
		"two-sided-short-edge"_s
	}));
	$assignStatic(JobAttributes$SidesType::ONE_SIDED, $new(JobAttributes$SidesType, JobAttributes$SidesType::I_ONE_SIDED));
	$assignStatic(JobAttributes$SidesType::TWO_SIDED_LONG_EDGE, $new(JobAttributes$SidesType, JobAttributes$SidesType::I_TWO_SIDED_LONG_EDGE));
	$assignStatic(JobAttributes$SidesType::TWO_SIDED_SHORT_EDGE, $new(JobAttributes$SidesType, JobAttributes$SidesType::I_TWO_SIDED_SHORT_EDGE));
}

JobAttributes$SidesType::JobAttributes$SidesType() {
}

$Class* JobAttributes$SidesType::load$($String* name, bool initialize) {
	$loadClass(JobAttributes$SidesType, name, initialize, &_JobAttributes$SidesType_ClassInfo_, clinit$JobAttributes$SidesType, allocate$JobAttributes$SidesType);
	return class$;
}

$Class* JobAttributes$SidesType::class$ = nullptr;

	} // awt
} // java