#include <javax/swing/plaf/synth/SynthStyleFactory.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthStyleFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthStyleFactory::*)()>(&SynthStyleFactory::init$))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SynthStyleFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.synth.SynthStyleFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SynthStyleFactory_MethodInfo_
};

$Object* allocate$SynthStyleFactory($Class* clazz) {
	return $of($alloc(SynthStyleFactory));
}

void SynthStyleFactory::init$() {
}

SynthStyleFactory::SynthStyleFactory() {
}

$Class* SynthStyleFactory::load$($String* name, bool initialize) {
	$loadClass(SynthStyleFactory, name, initialize, &_SynthStyleFactory_ClassInfo_, allocate$SynthStyleFactory);
	return class$;
}

$Class* SynthStyleFactory::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax