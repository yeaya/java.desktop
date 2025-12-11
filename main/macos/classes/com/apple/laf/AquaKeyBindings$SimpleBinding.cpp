#include <com/apple/laf/AquaKeyBindings$SimpleBinding.h>

#include <com/apple/laf/AquaKeyBindings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaKeyBindings$SimpleBinding_FieldInfo_[] = {
	{"bindings", "[Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings$SimpleBinding, bindings)},
	{}
};

$MethodInfo _AquaKeyBindings$SimpleBinding_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaKeyBindings$SimpleBinding::*)($StringArray*)>(&AquaKeyBindings$SimpleBinding::init$))},
	{"getBindings", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaKeyBindings$SimpleBinding_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaKeyBindings$SimpleBinding", "com.apple.laf.AquaKeyBindings", "SimpleBinding", $STATIC},
	{"com.apple.laf.AquaKeyBindings$BindingsProvider", "com.apple.laf.AquaKeyBindings", "BindingsProvider", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaKeyBindings$SimpleBinding_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaKeyBindings$SimpleBinding",
	"java.lang.Object",
	"com.apple.laf.AquaKeyBindings$BindingsProvider",
	_AquaKeyBindings$SimpleBinding_FieldInfo_,
	_AquaKeyBindings$SimpleBinding_MethodInfo_,
	nullptr,
	nullptr,
	_AquaKeyBindings$SimpleBinding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaKeyBindings"
};

$Object* allocate$AquaKeyBindings$SimpleBinding($Class* clazz) {
	return $of($alloc(AquaKeyBindings$SimpleBinding));
}

void AquaKeyBindings$SimpleBinding::init$($StringArray* bindings) {
	$set(this, bindings, bindings);
}

$StringArray* AquaKeyBindings$SimpleBinding::getBindings() {
	return this->bindings;
}

AquaKeyBindings$SimpleBinding::AquaKeyBindings$SimpleBinding() {
}

$Class* AquaKeyBindings$SimpleBinding::load$($String* name, bool initialize) {
	$loadClass(AquaKeyBindings$SimpleBinding, name, initialize, &_AquaKeyBindings$SimpleBinding_ClassInfo_, allocate$AquaKeyBindings$SimpleBinding);
	return class$;
}

$Class* AquaKeyBindings$SimpleBinding::class$ = nullptr;

		} // laf
	} // apple
} // com