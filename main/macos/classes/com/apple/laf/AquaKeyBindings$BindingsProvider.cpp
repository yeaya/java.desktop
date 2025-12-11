#include <com/apple/laf/AquaKeyBindings$BindingsProvider.h>

#include <com/apple/laf/AquaKeyBindings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaKeyBindings$BindingsProvider_MethodInfo_[] = {
	{"getBindings", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaKeyBindings$BindingsProvider_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaKeyBindings$BindingsProvider", "com.apple.laf.AquaKeyBindings", "BindingsProvider", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaKeyBindings$BindingsProvider_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaKeyBindings$BindingsProvider",
	nullptr,
	nullptr,
	nullptr,
	_AquaKeyBindings$BindingsProvider_MethodInfo_,
	nullptr,
	nullptr,
	_AquaKeyBindings$BindingsProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaKeyBindings"
};

$Object* allocate$AquaKeyBindings$BindingsProvider($Class* clazz) {
	return $of($alloc(AquaKeyBindings$BindingsProvider));
}

$Class* AquaKeyBindings$BindingsProvider::load$($String* name, bool initialize) {
	$loadClass(AquaKeyBindings$BindingsProvider, name, initialize, &_AquaKeyBindings$BindingsProvider_ClassInfo_, allocate$AquaKeyBindings$BindingsProvider);
	return class$;
}

$Class* AquaKeyBindings$BindingsProvider::class$ = nullptr;

		} // laf
	} // apple
} // com