#include <java/awt/JobAttributes$DestinationType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/JobAttributes.h>
#include <jcpp.h>

#undef FILE
#undef I_FILE
#undef I_PRINTER
#undef NAMES
#undef PRINTER

using $AttributeValue = ::java::awt::AttributeValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _JobAttributes$DestinationType_FieldInfo_[] = {
	{"I_FILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DestinationType, I_FILE)},
	{"I_PRINTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$DestinationType, I_PRINTER)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobAttributes$DestinationType, NAMES)},
	{"FILE", "Ljava/awt/JobAttributes$DestinationType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DestinationType, FILE)},
	{"PRINTER", "Ljava/awt/JobAttributes$DestinationType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$DestinationType, PRINTER)},
	{}
};

$MethodInfo _JobAttributes$DestinationType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JobAttributes$DestinationType::*)(int32_t)>(&JobAttributes$DestinationType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JobAttributes$DestinationType_InnerClassesInfo_[] = {
	{"java.awt.JobAttributes$DestinationType", "java.awt.JobAttributes", "DestinationType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JobAttributes$DestinationType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.JobAttributes$DestinationType",
	"java.awt.AttributeValue",
	nullptr,
	_JobAttributes$DestinationType_FieldInfo_,
	_JobAttributes$DestinationType_MethodInfo_,
	nullptr,
	nullptr,
	_JobAttributes$DestinationType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.JobAttributes"
};

$Object* allocate$JobAttributes$DestinationType($Class* clazz) {
	return $of($alloc(JobAttributes$DestinationType));
}

$StringArray* JobAttributes$DestinationType::NAMES = nullptr;
JobAttributes$DestinationType* JobAttributes$DestinationType::FILE = nullptr;
JobAttributes$DestinationType* JobAttributes$DestinationType::PRINTER = nullptr;

void JobAttributes$DestinationType::init$(int32_t type) {
	$AttributeValue::init$(type, JobAttributes$DestinationType::NAMES);
}

$String* JobAttributes$DestinationType::toString() {
	return $AttributeValue::toString();
}

int32_t JobAttributes$DestinationType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$JobAttributes$DestinationType($Class* class$) {
	$assignStatic(JobAttributes$DestinationType::NAMES, $new($StringArray, {
		"file"_s,
		"printer"_s
	}));
	$assignStatic(JobAttributes$DestinationType::FILE, $new(JobAttributes$DestinationType, JobAttributes$DestinationType::I_FILE));
	$assignStatic(JobAttributes$DestinationType::PRINTER, $new(JobAttributes$DestinationType, JobAttributes$DestinationType::I_PRINTER));
}

JobAttributes$DestinationType::JobAttributes$DestinationType() {
}

$Class* JobAttributes$DestinationType::load$($String* name, bool initialize) {
	$loadClass(JobAttributes$DestinationType, name, initialize, &_JobAttributes$DestinationType_ClassInfo_, clinit$JobAttributes$DestinationType, allocate$JobAttributes$DestinationType);
	return class$;
}

$Class* JobAttributes$DestinationType::class$ = nullptr;

	} // awt
} // java