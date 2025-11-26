#include <java/awt/JobAttributes$MultipleDocumentHandlingType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/JobAttributes.h>
#include <jcpp.h>

#undef I_SEPARATE_DOCUMENTS_COLLATED_COPIES
#undef I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES
#undef NAMES
#undef SEPARATE_DOCUMENTS_COLLATED_COPIES
#undef SEPARATE_DOCUMENTS_UNCOLLATED_COPIES

using $AttributeValue = ::java::awt::AttributeValue;
using $JobAttributes = ::java::awt::JobAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _JobAttributes$MultipleDocumentHandlingType_FieldInfo_[] = {
	{"I_SEPARATE_DOCUMENTS_COLLATED_COPIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$MultipleDocumentHandlingType, I_SEPARATE_DOCUMENTS_COLLATED_COPIES)},
	{"I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobAttributes$MultipleDocumentHandlingType, I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JobAttributes$MultipleDocumentHandlingType, NAMES)},
	{"SEPARATE_DOCUMENTS_COLLATED_COPIES", "Ljava/awt/JobAttributes$MultipleDocumentHandlingType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$MultipleDocumentHandlingType, SEPARATE_DOCUMENTS_COLLATED_COPIES)},
	{"SEPARATE_DOCUMENTS_UNCOLLATED_COPIES", "Ljava/awt/JobAttributes$MultipleDocumentHandlingType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JobAttributes$MultipleDocumentHandlingType, SEPARATE_DOCUMENTS_UNCOLLATED_COPIES)},
	{}
};

$MethodInfo _JobAttributes$MultipleDocumentHandlingType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JobAttributes$MultipleDocumentHandlingType::*)(int32_t)>(&JobAttributes$MultipleDocumentHandlingType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JobAttributes$MultipleDocumentHandlingType_InnerClassesInfo_[] = {
	{"java.awt.JobAttributes$MultipleDocumentHandlingType", "java.awt.JobAttributes", "MultipleDocumentHandlingType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JobAttributes$MultipleDocumentHandlingType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.JobAttributes$MultipleDocumentHandlingType",
	"java.awt.AttributeValue",
	nullptr,
	_JobAttributes$MultipleDocumentHandlingType_FieldInfo_,
	_JobAttributes$MultipleDocumentHandlingType_MethodInfo_,
	nullptr,
	nullptr,
	_JobAttributes$MultipleDocumentHandlingType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.JobAttributes"
};

$Object* allocate$JobAttributes$MultipleDocumentHandlingType($Class* clazz) {
	return $of($alloc(JobAttributes$MultipleDocumentHandlingType));
}

$StringArray* JobAttributes$MultipleDocumentHandlingType::NAMES = nullptr;
JobAttributes$MultipleDocumentHandlingType* JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_COLLATED_COPIES = nullptr;
JobAttributes$MultipleDocumentHandlingType* JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES = nullptr;

void JobAttributes$MultipleDocumentHandlingType::init$(int32_t type) {
	$AttributeValue::init$(type, JobAttributes$MultipleDocumentHandlingType::NAMES);
}

$String* JobAttributes$MultipleDocumentHandlingType::toString() {
	return $AttributeValue::toString();
}

int32_t JobAttributes$MultipleDocumentHandlingType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$JobAttributes$MultipleDocumentHandlingType($Class* class$) {
	$assignStatic(JobAttributes$MultipleDocumentHandlingType::NAMES, $new($StringArray, {
		"separate-documents-collated-copies"_s,
		"separate-documents-uncollated-copies"_s
	}));
	$assignStatic(JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_COLLATED_COPIES, $new(JobAttributes$MultipleDocumentHandlingType, JobAttributes$MultipleDocumentHandlingType::I_SEPARATE_DOCUMENTS_COLLATED_COPIES));
	$assignStatic(JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES, $new(JobAttributes$MultipleDocumentHandlingType, JobAttributes$MultipleDocumentHandlingType::I_SEPARATE_DOCUMENTS_UNCOLLATED_COPIES));
}

JobAttributes$MultipleDocumentHandlingType::JobAttributes$MultipleDocumentHandlingType() {
}

$Class* JobAttributes$MultipleDocumentHandlingType::load$($String* name, bool initialize) {
	$loadClass(JobAttributes$MultipleDocumentHandlingType, name, initialize, &_JobAttributes$MultipleDocumentHandlingType_ClassInfo_, clinit$JobAttributes$MultipleDocumentHandlingType, allocate$JobAttributes$MultipleDocumentHandlingType);
	return class$;
}

$Class* JobAttributes$MultipleDocumentHandlingType::class$ = nullptr;

	} // awt
} // java