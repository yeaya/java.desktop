#include <javax/swing/SwingContainer.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace javax {
	namespace swing {

$Attribute SwingContainer_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute SwingContainer_Attribute_var$0[] = {
	{"value", '[', SwingContainer_Attribute_var$1},
	{}
};

$NamedAttribute SwingContainer_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SwingContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", SwingContainer_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", SwingContainer_Attribute_var$2},
	{}
};
$Attribute _SwingContainer_DefaultValue_delegate0 = {
's', ""};
$Attribute _SwingContainer_DefaultValue_value1 = {
'Z', "true"};


$MethodInfo _SwingContainer_MethodInfo_[] = {
	{"delegate", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SwingContainer_DefaultValue_delegate0},
	{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_SwingContainer_DefaultValue_value1},
	{}
};

$ClassInfo _SwingContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"javax.swing.SwingContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SwingContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SwingContainer_Annotations_
};

$Object* allocate$SwingContainer($Class* clazz) {
	return $of($alloc(SwingContainer));
}

$Class* SwingContainer::load$($String* name, bool initialize) {
	$loadClass(SwingContainer, name, initialize, &_SwingContainer_ClassInfo_, allocate$SwingContainer);
	return class$;
}

$Class* SwingContainer::class$ = nullptr;

	} // swing
} // javax