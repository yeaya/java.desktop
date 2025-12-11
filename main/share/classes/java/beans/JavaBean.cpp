#include <java/beans/JavaBean.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Attribute JavaBean_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute JavaBean_Attribute_var$0[] = {
	{"value", '[', JavaBean_Attribute_var$1},
	{}
};

$NamedAttribute JavaBean_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _JavaBean_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", JavaBean_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", JavaBean_Attribute_var$2},
	{}
};

$Attribute _JavaBean_DefaultValue_defaultEventSet0 = {
	's', ""
};

$Attribute _JavaBean_DefaultValue_defaultProperty1 = {
	's', ""
};

$Attribute _JavaBean_DefaultValue_description2 = {
	's', ""
};

$MethodInfo _JavaBean_MethodInfo_[] = {
	{"defaultEventSet", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_JavaBean_DefaultValue_defaultEventSet0},
	{"defaultProperty", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_JavaBean_DefaultValue_defaultProperty1},
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_JavaBean_DefaultValue_description2},
	{}
};

$ClassInfo _JavaBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.beans.JavaBean",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_JavaBean_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_JavaBean_Annotations_
};

$Object* allocate$JavaBean($Class* clazz) {
	return $of($alloc(JavaBean));
}

$Class* JavaBean::load$($String* name, bool initialize) {
	$loadClass(JavaBean, name, initialize, &_JavaBean_ClassInfo_, allocate$JavaBean);
	return class$;
}

$Class* JavaBean::class$ = nullptr;

	} // beans
} // java