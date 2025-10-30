#include <java/beans/Transient.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace beans {

$Attribute Transient_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute Transient_Attribute_var$0[] = {
	{"value", '[', Transient_Attribute_var$1},
	{}
};

$NamedAttribute Transient_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Transient_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", Transient_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", Transient_Attribute_var$2},
	{}
};

$Attribute _Transient_DefaultValue_value0 = {
	'Z', "true"
};

$MethodInfo _Transient_MethodInfo_[] = {
	{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Transient_DefaultValue_value0},
	{}
};

$ClassInfo _Transient_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.beans.Transient",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Transient_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Transient_Annotations_
};

$Object* allocate$Transient($Class* clazz) {
	return $of($alloc(Transient));
}

$Class* Transient::load$($String* name, bool initialize) {
	$loadClass(Transient, name, initialize, &_Transient_ClassInfo_, allocate$Transient);
	return class$;
}

$Class* Transient::class$ = nullptr;

	} // beans
} // java