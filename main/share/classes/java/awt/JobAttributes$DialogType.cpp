#include <java/awt/JobAttributes$DialogType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/JobAttributes.h>
#include <jcpp.h>

#undef COMMON
#undef I_COMMON
#undef I_NATIVE
#undef I_NONE
#undef NAMES
#undef NATIVE
#undef NONE

using $AttributeValue = ::java::awt::AttributeValue;
using $JobAttributes = ::java::awt::JobAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _JobAttributes$DialogType_FieldInfo_[] = {
	{"I_COMMON", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DialogType, I_COMMON)},
	{"I_NATIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DialogType, I_NATIVE)},
	{"I_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DialogType, I_NONE)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobAttributes$DialogType, NAMES)},
	{"COMMON", "Ljava/awt/JobAttributes$DialogType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DialogType, COMMON)},
	{"NATIVE", "Ljava/awt/JobAttributes$DialogType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DialogType, NATIVE)},
	{"NONE", "Ljava/awt/JobAttributes$DialogType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DialogType, NONE)},
	{}
};

$MethodInfo _JobAttributes$DialogType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JobAttributes$DialogType::*)(int32_t)>(&JobAttributes$DialogType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JobAttributes$DialogType_InnerClassesInfo_[] = {
	{"java.awt.JobAttributes$DialogType", "java.awt.JobAttributes", "DialogType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JobAttributes$DialogType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.JobAttributes$DialogType",
	"java.awt.AttributeValue",
	nullptr,
	_JobAttributes$DialogType_FieldInfo_,
	_JobAttributes$DialogType_MethodInfo_,
	nullptr,
	nullptr,
	_JobAttributes$DialogType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.JobAttributes"
};

$Object* allocate$JobAttributes$DialogType($Class* clazz) {
	return $of($alloc(JobAttributes$DialogType));
}

$StringArray* JobAttributes$DialogType::NAMES = nullptr;
JobAttributes$DialogType* JobAttributes$DialogType::COMMON = nullptr;
JobAttributes$DialogType* JobAttributes$DialogType::NATIVE = nullptr;
JobAttributes$DialogType* JobAttributes$DialogType::NONE = nullptr;

void JobAttributes$DialogType::init$(int32_t type) {
	$AttributeValue::init$(type, JobAttributes$DialogType::NAMES);
}

$String* JobAttributes$DialogType::toString() {
	return $AttributeValue::toString();
}

int32_t JobAttributes$DialogType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$JobAttributes$DialogType($Class* class$) {
	$assignStatic(JobAttributes$DialogType::NAMES, $new($StringArray, {
		"common"_s,
		"native"_s,
		"none"_s
	}));
	$assignStatic(JobAttributes$DialogType::COMMON, $new(JobAttributes$DialogType, JobAttributes$DialogType::I_COMMON));
	$assignStatic(JobAttributes$DialogType::NATIVE, $new(JobAttributes$DialogType, JobAttributes$DialogType::I_NATIVE));
	$assignStatic(JobAttributes$DialogType::NONE, $new(JobAttributes$DialogType, JobAttributes$DialogType::I_NONE));
}

JobAttributes$DialogType::JobAttributes$DialogType() {
}

$Class* JobAttributes$DialogType::load$($String* name, bool initialize) {
	$loadClass(JobAttributes$DialogType, name, initialize, &_JobAttributes$DialogType_ClassInfo_, clinit$JobAttributes$DialogType, allocate$JobAttributes$DialogType);
	return class$;
}

$Class* JobAttributes$DialogType::class$ = nullptr;

	} // awt
} // java