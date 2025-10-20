#include <com/sun/media/sound/ModelStandardDirector.h>

#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelStandardDirector_FieldInfo_[] = {
	{"performers", "[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PRIVATE | $FINAL, $field(ModelStandardDirector, performers)},
	{"player", "Lcom/sun/media/sound/ModelDirectedPlayer;", nullptr, $PRIVATE | $FINAL, $field(ModelStandardDirector, player)},
	{"noteOnUsed", "Z", nullptr, $PRIVATE, $field(ModelStandardDirector, noteOnUsed)},
	{"noteOffUsed", "Z", nullptr, $PRIVATE, $field(ModelStandardDirector, noteOffUsed)},
	{}
};

$MethodInfo _ModelStandardDirector_MethodInfo_[] = {
	{"<init>", "([Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/ModelDirectedPlayer;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelStandardDirector::*)($ModelPerformerArray*,$ModelDirectedPlayer*)>(&ModelStandardDirector::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"noteOff", "(II)V", nullptr, $PUBLIC},
	{"noteOn", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelStandardDirector_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelStandardDirector",
	"java.lang.Object",
	"com.sun.media.sound.ModelDirector",
	_ModelStandardDirector_FieldInfo_,
	_ModelStandardDirector_MethodInfo_
};

$Object* allocate$ModelStandardDirector($Class* clazz) {
	return $of($alloc(ModelStandardDirector));
}

void ModelStandardDirector::init$($ModelPerformerArray* performers, $ModelDirectedPlayer* player) {
	$useLocalCurrentObjectStackCache();
	this->noteOnUsed = false;
	this->noteOffUsed = false;
	$set(this, performers, $fcast($ModelPerformerArray, $Arrays::copyOf(performers, $nc(performers)->length)));
	$set(this, player, player);
	{
		$var($ModelPerformerArray, arr$, this->performers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModelPerformer, p, arr$->get(i$));
			{
				if ($nc(p)->isReleaseTriggered()) {
					this->noteOffUsed = true;
				} else {
					this->noteOnUsed = true;
				}
			}
		}
	}
}

void ModelStandardDirector::close() {
}

void ModelStandardDirector::noteOff(int32_t noteNumber, int32_t velocity) {
	$useLocalCurrentObjectStackCache();
	if (!this->noteOffUsed) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->performers)->length; ++i) {
		$var($ModelPerformer, p, $nc(this->performers)->get(i));
		bool var$0 = $nc(p)->getKeyFrom() <= noteNumber;
		if (var$0 && p->getKeyTo() >= noteNumber) {
			bool var$1 = p->getVelFrom() <= velocity;
			if (var$1 && p->getVelTo() >= velocity) {
				if (p->isReleaseTriggered()) {
					$nc(this->player)->play(i, nullptr);
				}
			}
		}
	}
}

void ModelStandardDirector::noteOn(int32_t noteNumber, int32_t velocity) {
	$useLocalCurrentObjectStackCache();
	if (!this->noteOnUsed) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->performers)->length; ++i) {
		$var($ModelPerformer, p, $nc(this->performers)->get(i));
		bool var$0 = $nc(p)->getKeyFrom() <= noteNumber;
		if (var$0 && p->getKeyTo() >= noteNumber) {
			bool var$1 = p->getVelFrom() <= velocity;
			if (var$1 && p->getVelTo() >= velocity) {
				if (!p->isReleaseTriggered()) {
					$nc(this->player)->play(i, nullptr);
				}
			}
		}
	}
}

ModelStandardDirector::ModelStandardDirector() {
}

$Class* ModelStandardDirector::load$($String* name, bool initialize) {
	$loadClass(ModelStandardDirector, name, initialize, &_ModelStandardDirector_ClassInfo_, allocate$ModelStandardDirector);
	return class$;
}

$Class* ModelStandardDirector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com