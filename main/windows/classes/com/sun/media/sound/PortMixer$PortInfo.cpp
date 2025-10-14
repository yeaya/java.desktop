#include <com/sun/media/sound/PortMixer$PortInfo.h>

#include <com/sun/media/sound/PortMixer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Port$Info.h>
#include <javax/sound/sampled/Port.h>
#include <jcpp.h>

using $PortMixer = ::com::sun::media::sound::PortMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Port = ::javax::sound::sampled::Port;
using $Port$Info = ::javax::sound::sampled::Port$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _PortMixer$PortInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$PortInfo::*)($String*,bool)>(&PortMixer$PortInfo::init$))},
	{}
};

$InnerClassInfo _PortMixer$PortInfo_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$PortInfo", "com.sun.media.sound.PortMixer", "PortInfo", $PRIVATE | $STATIC | $FINAL},
	{"javax.sound.sampled.Port$Info", "javax.sound.sampled.Port", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PortMixer$PortInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$PortInfo",
	"javax.sound.sampled.Port$Info",
	nullptr,
	nullptr,
	_PortMixer$PortInfo_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$PortInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$PortInfo($Class* clazz) {
	return $of($alloc(PortMixer$PortInfo));
}

void PortMixer$PortInfo::init$($String* name, bool isSource) {
	$load($Port);
	$Port$Info::init$($Port::class$, name, isSource);
}

PortMixer$PortInfo::PortMixer$PortInfo() {
}

$Class* PortMixer$PortInfo::load$($String* name, bool initialize) {
	$loadClass(PortMixer$PortInfo, name, initialize, &_PortMixer$PortInfo_ClassInfo_, allocate$PortMixer$PortInfo);
	return class$;
}

$Class* PortMixer$PortInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com