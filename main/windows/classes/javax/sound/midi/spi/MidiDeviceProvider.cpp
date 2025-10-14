#include <javax/sound/midi/spi/MidiDeviceProvider.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class MidiDeviceProvider$$Lambda$equals : public $Predicate {
	$class(MidiDeviceProvider$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($MidiDevice$Info* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MidiDeviceProvider$$Lambda$equals>());
	}
	$MidiDevice$Info* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MidiDeviceProvider$$Lambda$equals::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MidiDeviceProvider$$Lambda$equals, inst$)},
	{}
};
$MethodInfo MidiDeviceProvider$$Lambda$equals::methodInfos[3] = {
	{"<init>", "(Ljavax/sound/midi/MidiDevice$Info;)V", nullptr, $PUBLIC, $method(static_cast<void(MidiDeviceProvider$$Lambda$equals::*)($MidiDevice$Info*)>(&MidiDeviceProvider$$Lambda$equals::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MidiDeviceProvider$$Lambda$equals::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.sound.midi.spi.MidiDeviceProvider$$Lambda$equals",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* MidiDeviceProvider$$Lambda$equals::load$($String* name, bool initialize) {
	$loadClass(MidiDeviceProvider$$Lambda$equals, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MidiDeviceProvider$$Lambda$equals::class$ = nullptr;

$MethodInfo _MidiDeviceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MidiDeviceProvider::*)()>(&MidiDeviceProvider::init$))},
	{"getDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDeviceSupported", "(Ljavax/sound/midi/MidiDevice$Info;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MidiDeviceProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.spi.MidiDeviceProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MidiDeviceProvider_MethodInfo_
};

$Object* allocate$MidiDeviceProvider($Class* clazz) {
	return $of($alloc(MidiDeviceProvider));
}

void MidiDeviceProvider::init$() {
}

bool MidiDeviceProvider::isDeviceSupported($MidiDevice$Info* info) {
	return $nc($($Arrays::stream($(getDeviceInfo()))))->anyMatch(static_cast<$Predicate*>($$new(MidiDeviceProvider$$Lambda$equals, static_cast<$MidiDevice$Info*>($nc(info)))));
}

MidiDeviceProvider::MidiDeviceProvider() {
}

$Class* MidiDeviceProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MidiDeviceProvider$$Lambda$equals::classInfo$.name)) {
			return MidiDeviceProvider$$Lambda$equals::load$(name, initialize);
		}
	}
	$loadClass(MidiDeviceProvider, name, initialize, &_MidiDeviceProvider_ClassInfo_, allocate$MidiDeviceProvider);
	return class$;
}

$Class* MidiDeviceProvider::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax