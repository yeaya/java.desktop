#include <java/beans/BeanProperty.h>

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

namespace java {
	namespace beans {

$Attribute BeanProperty_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute BeanProperty_Attribute_var$0[] = {
	{"value", '[', BeanProperty_Attribute_var$1},
	{}
};

$NamedAttribute BeanProperty_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _BeanProperty_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", BeanProperty_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", BeanProperty_Attribute_var$2},
	{}
};
$Attribute _BeanProperty_DefaultValue_bound0 = {
'Z', "true"};
$Attribute _BeanProperty_DefaultValue_description1 = {
's', ""};

$Attribute BeanProperty_Attribute_var$3[] = {
	{'-'}
};
$Attribute _BeanProperty_DefaultValue_enumerationValues2 = {
'[', BeanProperty_Attribute_var$3};
$Attribute _BeanProperty_DefaultValue_expert3 = {
'Z', "false"};
$Attribute _BeanProperty_DefaultValue_hidden4 = {
'Z', "false"};
$Attribute _BeanProperty_DefaultValue_preferred5 = {
'Z', "false"};
$Attribute _BeanProperty_DefaultValue_required6 = {
'Z', "false"};
$Attribute _BeanProperty_DefaultValue_visualUpdate7 = {
'Z', "false"};


$MethodInfo _BeanProperty_MethodInfo_[] = {
	{"bound", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_bound0},
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_description1},
	{"enumerationValues", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_enumerationValues2},
	{"expert", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_expert3},
	{"hidden", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_hidden4},
	{"preferred", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_preferred5},
	{"required", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_required6},
	{"visualUpdate", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_BeanProperty_DefaultValue_visualUpdate7},
	{}
};

$ClassInfo _BeanProperty_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.beans.BeanProperty",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_BeanProperty_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BeanProperty_Annotations_
};

$Object* allocate$BeanProperty($Class* clazz) {
	return $of($alloc(BeanProperty));
}

$Class* BeanProperty::load$($String* name, bool initialize) {
	$loadClass(BeanProperty, name, initialize, &_BeanProperty_ClassInfo_, allocate$BeanProperty);
	return class$;
}

$Class* BeanProperty::class$ = nullptr;

	} // beans
} // java