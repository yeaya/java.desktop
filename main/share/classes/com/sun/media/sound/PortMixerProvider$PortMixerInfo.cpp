#include <com/sun/media/sound/PortMixerProvider$PortMixerInfo.h>

#include <com/sun/media/sound/PortMixerProvider.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <jcpp.h>

using $PortMixerProvider = ::com::sun::media::sound::PortMixerProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _PortMixerProvider$PortMixerInfo_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(PortMixerProvider$PortMixerInfo, index)},
	{}
};

$MethodInfo _PortMixerProvider$PortMixerInfo_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixerProvider$PortMixerInfo::*)(int32_t,$String*,$String*,$String*,$String*)>(&PortMixerProvider$PortMixerInfo::init$))},
	{"getIndex", "()I", nullptr, 0, $method(static_cast<int32_t(PortMixerProvider$PortMixerInfo::*)()>(&PortMixerProvider$PortMixerInfo::getIndex))},
	{}
};

$InnerClassInfo _PortMixerProvider$PortMixerInfo_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixerProvider$PortMixerInfo", "com.sun.media.sound.PortMixerProvider", "PortMixerInfo", $STATIC | $FINAL},
	{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PortMixerProvider$PortMixerInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixerProvider$PortMixerInfo",
	"javax.sound.sampled.Mixer$Info",
	nullptr,
	_PortMixerProvider$PortMixerInfo_FieldInfo_,
	_PortMixerProvider$PortMixerInfo_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixerProvider$PortMixerInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixerProvider"
};

$Object* allocate$PortMixerProvider$PortMixerInfo($Class* clazz) {
	return $of($alloc(PortMixerProvider$PortMixerInfo));
}

void PortMixerProvider$PortMixerInfo::init$(int32_t index, $String* name, $String* vendor, $String* description, $String* version) {
	$Mixer$Info::init$($$str({"Port "_s, name}), vendor, description, version);
	this->index = index;
}

int32_t PortMixerProvider$PortMixerInfo::getIndex() {
	return this->index;
}

PortMixerProvider$PortMixerInfo::PortMixerProvider$PortMixerInfo() {
}

$Class* PortMixerProvider$PortMixerInfo::load$($String* name, bool initialize) {
	$loadClass(PortMixerProvider$PortMixerInfo, name, initialize, &_PortMixerProvider$PortMixerInfo_ClassInfo_, allocate$PortMixerProvider$PortMixerInfo);
	return class$;
}

$Class* PortMixerProvider$PortMixerInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com