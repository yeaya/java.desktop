#include <com/sun/media/sound/PortMixer$BoolCtrl$BCT.h>

#include <com/sun/media/sound/PortMixer$BoolCtrl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <jcpp.h>

using $PortMixer$BoolCtrl = ::com::sun::media::sound::PortMixer$BoolCtrl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanControl$Type = ::javax::sound::sampled::BooleanControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _PortMixer$BoolCtrl$BCT_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$BoolCtrl$BCT::*)($String*)>(&PortMixer$BoolCtrl$BCT::init$))},
	{}
};

$InnerClassInfo _PortMixer$BoolCtrl$BCT_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$BoolCtrl", "com.sun.media.sound.PortMixer", "BoolCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$BoolCtrl$BCT", "com.sun.media.sound.PortMixer$BoolCtrl", "BCT", $PRIVATE | $STATIC | $FINAL},
	{"javax.sound.sampled.BooleanControl$Type", "javax.sound.sampled.BooleanControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PortMixer$BoolCtrl$BCT_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$BoolCtrl$BCT",
	"javax.sound.sampled.BooleanControl$Type",
	nullptr,
	nullptr,
	_PortMixer$BoolCtrl$BCT_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$BoolCtrl$BCT_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$BoolCtrl$BCT($Class* clazz) {
	return $of($alloc(PortMixer$BoolCtrl$BCT));
}

void PortMixer$BoolCtrl$BCT::init$($String* name) {
	$BooleanControl$Type::init$(name);
}

PortMixer$BoolCtrl$BCT::PortMixer$BoolCtrl$BCT() {
}

$Class* PortMixer$BoolCtrl$BCT::load$($String* name, bool initialize) {
	$loadClass(PortMixer$BoolCtrl$BCT, name, initialize, &_PortMixer$BoolCtrl$BCT_ClassInfo_, allocate$PortMixer$BoolCtrl$BCT);
	return class$;
}

$Class* PortMixer$BoolCtrl$BCT::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com