#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>

#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/Platform.h>
#include <java/util/Objects.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$InfoArray = $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>;
using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $MidiDeviceArray = $Array<::javax::sound::midi::MidiDevice>;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $Platform = ::com::sun::media::sound::Platform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceProvider = ::javax::sound::midi::spi::MidiDeviceProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMidiDeviceProvider_FieldInfo_[] = {
	{"enabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractMidiDeviceProvider, enabled)},
	{}
};

$MethodInfo _AbstractMidiDeviceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractMidiDeviceProvider::*)()>(&AbstractMidiDeviceProvider::init$))},
	{"createDevice", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $ABSTRACT},
	{"createInfo", "(I)Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, $ABSTRACT},
	{"getDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $FINAL},
	{"getDeviceCache", "()[Ljavax/sound/midi/MidiDevice;", nullptr, $ABSTRACT},
	{"getDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $FINAL},
	{"getInfoCache", "()[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, $ABSTRACT},
	{"getNumDevices", "()I", nullptr, $ABSTRACT},
	{"readDeviceInfos", "()V", nullptr, $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractMidiDeviceProvider::*)()>(&AbstractMidiDeviceProvider::readDeviceInfos))},
	{"setDeviceCache", "([Ljavax/sound/midi/MidiDevice;)V", nullptr, $ABSTRACT},
	{"setInfoCache", "([Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _AbstractMidiDeviceProvider_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
	{}
};

$ClassInfo _AbstractMidiDeviceProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AbstractMidiDeviceProvider",
	"javax.sound.midi.spi.MidiDeviceProvider",
	nullptr,
	_AbstractMidiDeviceProvider_FieldInfo_,
	_AbstractMidiDeviceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDeviceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDeviceProvider$Info"
};

$Object* allocate$AbstractMidiDeviceProvider($Class* clazz) {
	return $of($alloc(AbstractMidiDeviceProvider));
}

bool AbstractMidiDeviceProvider::enabled = false;

void AbstractMidiDeviceProvider::init$() {
	$MidiDeviceProvider::init$();
}

void AbstractMidiDeviceProvider::readDeviceInfos() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($AbstractMidiDeviceProvider$InfoArray, infos, getInfoCache());
		$var($MidiDeviceArray, devices, getDeviceCache());
		if (!AbstractMidiDeviceProvider::enabled) {
			if (infos == nullptr || $nc(infos)->length != 0) {
				setInfoCache($$new($AbstractMidiDeviceProvider$InfoArray, 0));
			}
			if (devices == nullptr || $nc(devices)->length != 0) {
				setDeviceCache($$new($MidiDeviceArray, 0));
			}
			return;
		}
		int32_t oldNumDevices = (infos == nullptr) ? -1 : $nc(infos)->length;
		int32_t newNumDevices = getNumDevices();
		if (oldNumDevices != newNumDevices) {
			$var($AbstractMidiDeviceProvider$InfoArray, newInfos, $new($AbstractMidiDeviceProvider$InfoArray, newNumDevices));
			$var($MidiDeviceArray, newDevices, $new($MidiDeviceArray, newNumDevices));
			for (int32_t i = 0; i < newNumDevices; ++i) {
				$var($AbstractMidiDeviceProvider$Info, newInfo, createInfo(i));
				if (infos != nullptr) {
					for (int32_t ii = 0; ii < infos->length; ++ii) {
						$var($AbstractMidiDeviceProvider$Info, info, infos->get(ii));
						if (info != nullptr && info->equalStrings(newInfo)) {
							newInfos->set(i, info);
							info->setIndex(i);
							infos->set(ii, nullptr);
							newDevices->set(i, $nc(devices)->get(ii));
							devices->set(ii, nullptr);
							break;
						}
					}
				}
				if (newInfos->get(i) == nullptr) {
					newInfos->set(i, newInfo);
				}
			}
			if (infos != nullptr) {
				for (int32_t i = 0; i < infos->length; ++i) {
					if (infos->get(i) != nullptr) {
						$nc(infos->get(i))->setIndex(-1);
					}
				}
			}
			setInfoCache(newInfos);
			setDeviceCache(newDevices);
		}
	}
}

$MidiDevice$InfoArray* AbstractMidiDeviceProvider::getDeviceInfo() {
	$useLocalCurrentObjectStackCache();
	readDeviceInfos();
	$var($AbstractMidiDeviceProvider$InfoArray, infos, getInfoCache());
	$var($MidiDevice$InfoArray, localArray, $new($MidiDevice$InfoArray, $nc(infos)->length));
	$System::arraycopy(infos, 0, localArray, 0, infos->length);
	return localArray;
}

$MidiDevice* AbstractMidiDeviceProvider::getDevice($MidiDevice$Info* info) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(info);
	if ($instanceOf($AbstractMidiDeviceProvider$Info, info)) {
		readDeviceInfos();
		$var($MidiDeviceArray, devices, getDeviceCache());
		$var($AbstractMidiDeviceProvider$InfoArray, infos, getInfoCache());
		$var($AbstractMidiDeviceProvider$Info, thisInfo, $cast($AbstractMidiDeviceProvider$Info, info));
		int32_t index = thisInfo->getIndex();
		if (index >= 0 && index < $nc(devices)->length && $equals($nc(infos)->get(index), info)) {
			if (devices->get(index) == nullptr) {
				devices->set(index, $(createDevice(thisInfo)));
			}
			if (devices->get(index) != nullptr) {
				return devices->get(index);
			}
		}
	}
	$throw($($MidiUtils::unsupportedDevice(info)));
}

void clinit$AbstractMidiDeviceProvider($Class* class$) {
	{
		$Platform::initialize();
		AbstractMidiDeviceProvider::enabled = $Platform::isMidiIOEnabled();
	}
}

AbstractMidiDeviceProvider::AbstractMidiDeviceProvider() {
}

$Class* AbstractMidiDeviceProvider::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDeviceProvider, name, initialize, &_AbstractMidiDeviceProvider_ClassInfo_, clinit$AbstractMidiDeviceProvider, allocate$AbstractMidiDeviceProvider);
	return class$;
}

$Class* AbstractMidiDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com