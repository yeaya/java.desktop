#include <javax/accessibility/AccessibleAttributeSequence.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleAttributeSequence_FieldInfo_[] = {
	{"startIndex", "I", nullptr, $PUBLIC, $field(AccessibleAttributeSequence, startIndex)},
	{"endIndex", "I", nullptr, $PUBLIC, $field(AccessibleAttributeSequence, endIndex)},
	{"attributes", "Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $field(AccessibleAttributeSequence, attributes)},
	{}
};

$MethodInfo _AccessibleAttributeSequence_MethodInfo_[] = {
	{"<init>", "(IILjavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleAttributeSequence::*)(int32_t,int32_t,$AttributeSet*)>(&AccessibleAttributeSequence::init$))},
	{}
};

$ClassInfo _AccessibleAttributeSequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleAttributeSequence",
	"java.lang.Object",
	nullptr,
	_AccessibleAttributeSequence_FieldInfo_,
	_AccessibleAttributeSequence_MethodInfo_
};

$Object* allocate$AccessibleAttributeSequence($Class* clazz) {
	return $of($alloc(AccessibleAttributeSequence));
}

void AccessibleAttributeSequence::init$(int32_t start, int32_t end, $AttributeSet* attr) {
	this->startIndex = start;
	this->endIndex = end;
	$set(this, attributes, attr);
}

AccessibleAttributeSequence::AccessibleAttributeSequence() {
}

$Class* AccessibleAttributeSequence::load$($String* name, bool initialize) {
	$loadClass(AccessibleAttributeSequence, name, initialize, &_AccessibleAttributeSequence_ClassInfo_, allocate$AccessibleAttributeSequence);
	return class$;
}

$Class* AccessibleAttributeSequence::class$ = nullptr;

	} // accessibility
} // javax