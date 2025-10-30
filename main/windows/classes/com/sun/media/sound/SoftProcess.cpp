#include <com/sun/media/sound/SoftProcess.h>

#include <com/sun/media/sound/SoftSynthesizer.h>
#include <jcpp.h>

using $SoftControl = ::com::sun::media::sound::SoftControl;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftProcess_MethodInfo_[] = {
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC | $ABSTRACT},
	{"init", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"processControlLogic", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SoftProcess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.SoftProcess",
	nullptr,
	"com.sun.media.sound.SoftControl",
	nullptr,
	_SoftProcess_MethodInfo_
};

$Object* allocate$SoftProcess($Class* clazz) {
	return $of($alloc(SoftProcess));
}

$Class* SoftProcess::load$($String* name, bool initialize) {
	$loadClass(SoftProcess, name, initialize, &_SoftProcess_ClassInfo_, allocate$SoftProcess);
	return class$;
}

$Class* SoftProcess::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com