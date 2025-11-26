#include <com/sun/media/sound/RIFFWriter$RandomAccessWriter.h>

#include <com/sun/media/sound/RIFFWriter.h>
#include <jcpp.h>

using $RIFFWriter = ::com::sun::media::sound::RIFFWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _RIFFWriter$RandomAccessWriter_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getPointer", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setLength", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RIFFWriter$RandomAccessWriter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RIFFWriter$RandomAccessWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessWriter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RIFFWriter$RandomAccessWriter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.media.sound.RIFFWriter$RandomAccessWriter",
	nullptr,
	nullptr,
	nullptr,
	_RIFFWriter$RandomAccessWriter_MethodInfo_,
	nullptr,
	nullptr,
	_RIFFWriter$RandomAccessWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RIFFWriter"
};

$Object* allocate$RIFFWriter$RandomAccessWriter($Class* clazz) {
	return $of($alloc(RIFFWriter$RandomAccessWriter));
}

$Class* RIFFWriter$RandomAccessWriter::load$($String* name, bool initialize) {
	$loadClass(RIFFWriter$RandomAccessWriter, name, initialize, &_RIFFWriter$RandomAccessWriter_ClassInfo_, allocate$RIFFWriter$RandomAccessWriter);
	return class$;
}

$Class* RIFFWriter$RandomAccessWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com