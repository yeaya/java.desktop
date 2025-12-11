#include <javax/sound/sampled/spi/MixerProvider.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class MixerProvider$$Lambda$equals : public $Predicate {
	$class(MixerProvider$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Mixer$Info* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MixerProvider$$Lambda$equals>());
	}
	$Mixer$Info* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MixerProvider$$Lambda$equals::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MixerProvider$$Lambda$equals, inst$)},
	{}
};
$MethodInfo MixerProvider$$Lambda$equals::methodInfos[3] = {
	{"<init>", "(Ljavax/sound/sampled/Mixer$Info;)V", nullptr, $PUBLIC, $method(static_cast<void(MixerProvider$$Lambda$equals::*)($Mixer$Info*)>(&MixerProvider$$Lambda$equals::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MixerProvider$$Lambda$equals::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.sound.sampled.spi.MixerProvider$$Lambda$equals",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* MixerProvider$$Lambda$equals::load$($String* name, bool initialize) {
	$loadClass(MixerProvider$$Lambda$equals, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MixerProvider$$Lambda$equals::class$ = nullptr;

$MethodInfo _MixerProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MixerProvider::*)()>(&MixerProvider::init$))},
	{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC | $ABSTRACT},
	{"isMixerSupported", "(Ljavax/sound/sampled/Mixer$Info;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MixerProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.spi.MixerProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MixerProvider_MethodInfo_
};

$Object* allocate$MixerProvider($Class* clazz) {
	return $of($alloc(MixerProvider));
}

void MixerProvider::init$() {
}

bool MixerProvider::isMixerSupported($Mixer$Info* info) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getMixerInfo()))))->anyMatch(static_cast<$Predicate*>($$new(MixerProvider$$Lambda$equals, static_cast<$Mixer$Info*>($nc(info)))));
}

MixerProvider::MixerProvider() {
}

$Class* MixerProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MixerProvider$$Lambda$equals::classInfo$.name)) {
			return MixerProvider$$Lambda$equals::load$(name, initialize);
		}
	}
	$loadClass(MixerProvider, name, initialize, &_MixerProvider_ClassInfo_, allocate$MixerProvider);
	return class$;
}

$Class* MixerProvider::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax