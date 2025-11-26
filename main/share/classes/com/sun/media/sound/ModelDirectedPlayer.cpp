#include <com/sun/media/sound/ModelDirectedPlayer.h>

#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <jcpp.h>

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelDirectedPlayer_MethodInfo_[] = {
	{"play", "(I[Lcom/sun/media/sound/ModelConnectionBlock;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelDirectedPlayer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelDirectedPlayer",
	nullptr,
	nullptr,
	nullptr,
	_ModelDirectedPlayer_MethodInfo_
};

$Object* allocate$ModelDirectedPlayer($Class* clazz) {
	return $of($alloc(ModelDirectedPlayer));
}

$Class* ModelDirectedPlayer::load$($String* name, bool initialize) {
	$loadClass(ModelDirectedPlayer, name, initialize, &_ModelDirectedPlayer_ClassInfo_, allocate$ModelDirectedPlayer);
	return class$;
}

$Class* ModelDirectedPlayer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com