#include <Test.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Test_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Test_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute Test_Attribute_var$1[] = {
	{"value", '[', Test_Attribute_var$2},
	{}
};

$CompoundAttribute _Test_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Test_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Test_Attribute_var$1},
	{}
};

$Attribute _Test_DefaultValue_onEDT0 = {
	'Z', "true"
};

$MethodInfo _Test_MethodInfo_[] = {
	{"onEDT", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Test_DefaultValue_onEDT0},
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Test_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Test",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Test_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Test_Annotations_
};

$Object* allocate$Test($Class* clazz) {
	return $of($alloc(Test));
}

$Class* Test::load$($String* name, bool initialize) {
	$loadClass(Test, name, initialize, &_Test_ClassInfo_, allocate$Test);
	return class$;
}

$Class* Test::class$ = nullptr;