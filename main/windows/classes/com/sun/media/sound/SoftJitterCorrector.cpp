#include <com/sun/media/sound/SoftJitterCorrector.h>

#include <com/sun/media/sound/SoftJitterCorrector$JitterStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $SoftJitterCorrector$JitterStream = ::com::sun::media::sound::SoftJitterCorrector$JitterStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftJitterCorrector_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioInputStream;II)V", nullptr, $PUBLIC, $method(static_cast<void(SoftJitterCorrector::*)($AudioInputStream*,int32_t,int32_t)>(&SoftJitterCorrector::init$))},
	{}
};

$InnerClassInfo _SoftJitterCorrector_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftJitterCorrector$JitterStream", "com.sun.media.sound.SoftJitterCorrector", "JitterStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftJitterCorrector_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftJitterCorrector",
	"javax.sound.sampled.AudioInputStream",
	nullptr,
	nullptr,
	_SoftJitterCorrector_MethodInfo_,
	nullptr,
	nullptr,
	_SoftJitterCorrector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftJitterCorrector$JitterStream,com.sun.media.sound.SoftJitterCorrector$JitterStream$1"
};

$Object* allocate$SoftJitterCorrector($Class* clazz) {
	return $of($alloc(SoftJitterCorrector));
}

void SoftJitterCorrector::init$($AudioInputStream* stream, int32_t buffersize, int32_t smallbuffersize) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, var$0, static_cast<$InputStream*>($new($SoftJitterCorrector$JitterStream, stream, buffersize, smallbuffersize)));
	$var($AudioFormat, var$1, $nc(stream)->getFormat());
	$AudioInputStream::init$(var$0, var$1, stream->getFrameLength());
}

SoftJitterCorrector::SoftJitterCorrector() {
}

$Class* SoftJitterCorrector::load$($String* name, bool initialize) {
	$loadClass(SoftJitterCorrector, name, initialize, &_SoftJitterCorrector_ClassInfo_, allocate$SoftJitterCorrector);
	return class$;
}

$Class* SoftJitterCorrector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com