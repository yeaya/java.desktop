#include <javax/swing/InputVerifier.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$NamedAttribute InputVerifier_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputVerifier_MethodAnnotations_shouldYieldFocus1[] = {
	{"Ljava/lang/Deprecated;", InputVerifier_Attribute_var$0},
	{}
};

$MethodInfo _InputVerifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(InputVerifier::*)()>(&InputVerifier::init$))},
	{"shouldYieldFocus", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _InputVerifier_MethodAnnotations_shouldYieldFocus1},
	{"shouldYieldFocus", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC},
	{"verify", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"verifyTarget", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputVerifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.InputVerifier",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InputVerifier_MethodInfo_
};

$Object* allocate$InputVerifier($Class* clazz) {
	return $of($alloc(InputVerifier));
}

void InputVerifier::init$() {
}

bool InputVerifier::shouldYieldFocus($JComponent* input) {
	return verify(input);
}

bool InputVerifier::verifyTarget($JComponent* target) {
	return true;
}

bool InputVerifier::shouldYieldFocus($JComponent* source, $JComponent* target) {
	bool var$0 = shouldYieldFocus(source);
	return var$0 && verifyTarget(target);
}

InputVerifier::InputVerifier() {
}

$Class* InputVerifier::load$($String* name, bool initialize) {
	$loadClass(InputVerifier, name, initialize, &_InputVerifier_ClassInfo_, allocate$InputVerifier);
	return class$;
}

$Class* InputVerifier::class$ = nullptr;

	} // swing
} // javax