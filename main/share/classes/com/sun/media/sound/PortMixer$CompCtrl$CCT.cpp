#include <com/sun/media/sound/PortMixer$CompCtrl$CCT.h>

#include <com/sun/media/sound/PortMixer$CompCtrl.h>
#include <javax/sound/sampled/CompoundControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompoundControl$Type = ::javax::sound::sampled::CompoundControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _PortMixer$CompCtrl$CCT_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$CompCtrl$CCT::*)($String*)>(&PortMixer$CompCtrl$CCT::init$))},
	{}
};

$InnerClassInfo _PortMixer$CompCtrl$CCT_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$CompCtrl", "com.sun.media.sound.PortMixer", "CompCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$CompCtrl$CCT", "com.sun.media.sound.PortMixer$CompCtrl", "CCT", $PRIVATE | $STATIC | $FINAL},
	{"javax.sound.sampled.CompoundControl$Type", "javax.sound.sampled.CompoundControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PortMixer$CompCtrl$CCT_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$CompCtrl$CCT",
	"javax.sound.sampled.CompoundControl$Type",
	nullptr,
	nullptr,
	_PortMixer$CompCtrl$CCT_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$CompCtrl$CCT_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$CompCtrl$CCT($Class* clazz) {
	return $of($alloc(PortMixer$CompCtrl$CCT));
}

void PortMixer$CompCtrl$CCT::init$($String* name) {
	$CompoundControl$Type::init$(name);
}

PortMixer$CompCtrl$CCT::PortMixer$CompCtrl$CCT() {
}

$Class* PortMixer$CompCtrl$CCT::load$($String* name, bool initialize) {
	$loadClass(PortMixer$CompCtrl$CCT, name, initialize, &_PortMixer$CompCtrl$CCT_ClassInfo_, allocate$PortMixer$CompCtrl$CCT);
	return class$;
}

$Class* PortMixer$CompCtrl$CCT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com