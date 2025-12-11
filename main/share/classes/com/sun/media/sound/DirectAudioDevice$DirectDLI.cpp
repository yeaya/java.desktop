#include <com/sun/media/sound/DirectAudioDevice$DirectDLI.h>

#include <com/sun/media/sound/DirectAudioDevice.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <jcpp.h>

using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DirectAudioDevice$DirectDLI_FieldInfo_[] = {
	{"hardwareFormats", "[Ljavax/sound/sampled/AudioFormat;", nullptr, $FINAL, $field(DirectAudioDevice$DirectDLI, hardwareFormats)},
	{}
};

$MethodInfo _DirectAudioDevice$DirectDLI_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljavax/sound/sampled/AudioFormat;[Ljavax/sound/sampled/AudioFormat;II)V", "(Ljava/lang/Class<*>;[Ljavax/sound/sampled/AudioFormat;[Ljavax/sound/sampled/AudioFormat;II)V", $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectDLI::*)($Class*,$AudioFormatArray*,$AudioFormatArray*,int32_t,int32_t)>(&DirectAudioDevice$DirectDLI::init$))},
	{"getHardwareFormats", "()[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFormatArray*(DirectAudioDevice$DirectDLI::*)()>(&DirectAudioDevice$DirectDLI::getHardwareFormats))},
	{"isFormatSupportedInHardware", "(Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC, $method(static_cast<bool(DirectAudioDevice$DirectDLI::*)($AudioFormat*)>(&DirectAudioDevice$DirectDLI::isFormatSupportedInHardware))},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectDLI_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectDLI", "com.sun.media.sound.DirectAudioDevice", "DirectDLI", $PRIVATE | $STATIC | $FINAL},
	{"javax.sound.sampled.DataLine$Info", "javax.sound.sampled.DataLine", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DirectAudioDevice$DirectDLI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectDLI",
	"javax.sound.sampled.DataLine$Info",
	nullptr,
	_DirectAudioDevice$DirectDLI_FieldInfo_,
	_DirectAudioDevice$DirectDLI_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectDLI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectDLI($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectDLI));
}

void DirectAudioDevice$DirectDLI::init$($Class* clazz, $AudioFormatArray* formatArray, $AudioFormatArray* hardwareFormatArray, int32_t minBuffer, int32_t maxBuffer) {
	$DataLine$Info::init$(clazz, formatArray, minBuffer, maxBuffer);
	$set(this, hardwareFormats, hardwareFormatArray);
}

bool DirectAudioDevice$DirectDLI::isFormatSupportedInHardware($AudioFormat* format) {
	if (format == nullptr) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->hardwareFormats)->length; ++i) {
		if ($nc(format)->matches($nc(this->hardwareFormats)->get(i))) {
			return true;
		}
	}
	return false;
}

$AudioFormatArray* DirectAudioDevice$DirectDLI::getHardwareFormats() {
	return this->hardwareFormats;
}

DirectAudioDevice$DirectDLI::DirectAudioDevice$DirectDLI() {
}

$Class* DirectAudioDevice$DirectDLI::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectDLI, name, initialize, &_DirectAudioDevice$DirectDLI_ClassInfo_, allocate$DirectAudioDevice$DirectDLI);
	return class$;
}

$Class* DirectAudioDevice$DirectDLI::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com