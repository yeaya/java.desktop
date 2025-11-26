#include <java/beans/ConstructorProperties.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace beans {

$Attribute ConstructorProperties_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute ConstructorProperties_Attribute_var$0[] = {
	{"value", '[', ConstructorProperties_Attribute_var$1},
	{}
};

$NamedAttribute ConstructorProperties_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ConstructorProperties_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", ConstructorProperties_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", ConstructorProperties_Attribute_var$2},
	{}
};

$MethodInfo _ConstructorProperties_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConstructorProperties_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.beans.ConstructorProperties",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ConstructorProperties_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ConstructorProperties_Annotations_
};

$Object* allocate$ConstructorProperties($Class* clazz) {
	return $of($alloc(ConstructorProperties));
}

$Class* ConstructorProperties::load$($String* name, bool initialize) {
	$loadClass(ConstructorProperties, name, initialize, &_ConstructorProperties_ClassInfo_, allocate$ConstructorProperties);
	return class$;
}

$Class* ConstructorProperties::class$ = nullptr;

	} // beans
} // java