#include <com/sun/media/sound/PortMixer$FloatCtrl$FCT.h>

#include <com/sun/media/sound/PortMixer$FloatCtrl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <jcpp.h>

using $PortMixer$FloatCtrl = ::com::sun::media::sound::PortMixer$FloatCtrl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _PortMixer$FloatCtrl$FCT_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$FloatCtrl$FCT::*)($String*)>(&PortMixer$FloatCtrl$FCT::init$))},
	{}
};

$InnerClassInfo _PortMixer$FloatCtrl$FCT_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$FloatCtrl", "com.sun.media.sound.PortMixer", "FloatCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$FloatCtrl$FCT", "com.sun.media.sound.PortMixer$FloatCtrl", "FCT", $PRIVATE | $STATIC | $FINAL},
	{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PortMixer$FloatCtrl$FCT_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$FloatCtrl$FCT",
	"javax.sound.sampled.FloatControl$Type",
	nullptr,
	nullptr,
	_PortMixer$FloatCtrl$FCT_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$FloatCtrl$FCT_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$FloatCtrl$FCT($Class* clazz) {
	return $of($alloc(PortMixer$FloatCtrl$FCT));
}

void PortMixer$FloatCtrl$FCT::init$($String* name) {
	$FloatControl$Type::init$(name);
}

PortMixer$FloatCtrl$FCT::PortMixer$FloatCtrl$FCT() {
}

$Class* PortMixer$FloatCtrl$FCT::load$($String* name, bool initialize) {
	$loadClass(PortMixer$FloatCtrl$FCT, name, initialize, &_PortMixer$FloatCtrl$FCT_ClassInfo_, allocate$PortMixer$FloatCtrl$FCT);
	return class$;
}

$Class* PortMixer$FloatCtrl$FCT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com