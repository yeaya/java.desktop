#include <com/sun/media/sound/WaveFloatFileWriter.h>

#include <com/sun/media/sound/RIFFWriter.h>
#include <com/sun/media/sound/WaveFloatFileWriter$NoCloseOutputStream.h>
#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>
#include <jcpp.h>

#undef PCM_FLOAT
#undef WAVE

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $RIFFWriter = ::com::sun::media::sound::RIFFWriter;
using $WaveFloatFileWriter$NoCloseOutputStream = ::com::sun::media::sound::WaveFloatFileWriter$NoCloseOutputStream;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Objects = ::java::util::Objects;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $AudioFileWriter = ::javax::sound::sampled::spi::AudioFileWriter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _WaveFloatFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaveFloatFileWriter::*)()>(&WaveFloatFileWriter::init$))},
	{"checkFormat", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(WaveFloatFileWriter::*)($AudioFileFormat$Type*,$AudioInputStream*)>(&WaveFloatFileWriter::checkFormat))},
	{"getAudioFileTypes", "()[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC},
	{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC},
	{"toLittleEndian", "(Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(static_cast<$AudioInputStream*(WaveFloatFileWriter::*)($AudioInputStream*)>(&WaveFloatFileWriter::toLittleEndian))},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Lcom/sun/media/sound/RIFFWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(WaveFloatFileWriter::*)($AudioInputStream*,$RIFFWriter*)>(&WaveFloatFileWriter::write)), "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _WaveFloatFileWriter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream", "com.sun.media.sound.WaveFloatFileWriter", "NoCloseOutputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WaveFloatFileWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveFloatFileWriter",
	"javax.sound.sampled.spi.AudioFileWriter",
	nullptr,
	nullptr,
	_WaveFloatFileWriter_MethodInfo_,
	nullptr,
	nullptr,
	_WaveFloatFileWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream"
};

$Object* allocate$WaveFloatFileWriter($Class* clazz) {
	return $of($alloc(WaveFloatFileWriter));
}

void WaveFloatFileWriter::init$() {
	$AudioFileWriter::init$();
}

$AudioFileFormat$TypeArray* WaveFloatFileWriter::getAudioFileTypes() {
	$init($AudioFileFormat$Type);
	return $new($AudioFileFormat$TypeArray, {$AudioFileFormat$Type::WAVE});
}

$AudioFileFormat$TypeArray* WaveFloatFileWriter::getAudioFileTypes($AudioInputStream* stream) {
	$init($AudioFormat$Encoding);
	if (!$nc($($nc($($nc(stream)->getFormat()))->getEncoding()))->equals($AudioFormat$Encoding::PCM_FLOAT)) {
		return $new($AudioFileFormat$TypeArray, 0);
	}
	$init($AudioFileFormat$Type);
	return $new($AudioFileFormat$TypeArray, {$AudioFileFormat$Type::WAVE});
}

void WaveFloatFileWriter::checkFormat($AudioFileFormat$Type* type, $AudioInputStream* stream) {
	$init($AudioFileFormat$Type);
	if (!$nc($AudioFileFormat$Type::WAVE)->equals(type)) {
		$throwNew($IllegalArgumentException, $$str({"File type "_s, type, " not supported."_s}));
	}
	$init($AudioFormat$Encoding);
	if (!$nc($($nc($($nc(stream)->getFormat()))->getEncoding()))->equals($AudioFormat$Encoding::PCM_FLOAT)) {
		$throwNew($IllegalArgumentException, $$str({"File format "_s, $(stream->getFormat()), " not supported."_s}));
	}
}

void WaveFloatFileWriter::write($AudioInputStream* stream, $RIFFWriter* writer) {
	{
		$var($RIFFWriter, fmt_chunk, $nc(writer)->writeChunk("fmt "_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($AudioFormat, format, $nc(stream)->getFormat());
					$nc(fmt_chunk)->writeUnsignedShort(3);
					fmt_chunk->writeUnsignedShort($nc(format)->getChannels());
					fmt_chunk->writeUnsignedInt($cast(int32_t, $nc(format)->getSampleRate()));
					int32_t var$1 = ($cast(int32_t, $nc(format)->getFrameRate()));
					fmt_chunk->writeUnsignedInt(var$1 * format->getFrameSize());
					fmt_chunk->writeUnsignedShort($nc(format)->getFrameSize());
					fmt_chunk->writeUnsignedShort($nc(format)->getSampleSizeInBits());
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (fmt_chunk != nullptr) {
						try {
							fmt_chunk->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (fmt_chunk != nullptr) {
					fmt_chunk->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($RIFFWriter, data_chunk, $nc(writer)->writeChunk("data"_s));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$nc(stream)->transferTo(data_chunk);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (data_chunk != nullptr) {
						try {
							data_chunk->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				if (data_chunk != nullptr) {
					data_chunk->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

$AudioInputStream* WaveFloatFileWriter::toLittleEndian($AudioInputStream* ais) {
	$var($AudioFormat, format, $nc(ais)->getFormat());
	$var($AudioFormat$Encoding, var$0, $nc(format)->getEncoding());
	float var$1 = format->getSampleRate();
	int32_t var$2 = format->getSampleSizeInBits();
	int32_t var$3 = format->getChannels();
	int32_t var$4 = format->getFrameSize();
	$var($AudioFormat, targetFormat, $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, format->getFrameRate(), false));
	return $AudioSystem::getAudioInputStream(targetFormat, ais);
}

int32_t WaveFloatFileWriter::write($AudioInputStream* stream$renamed, $AudioFileFormat$Type* fileType, $OutputStream* out) {
	$var($AudioInputStream, stream, stream$renamed);
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	checkFormat(fileType, stream);
	if ($nc($(stream->getFormat()))->isBigEndian()) {
		$assign(stream, toLittleEndian(stream));
	}
	{
		$var($RIFFWriter, writer, $new($RIFFWriter, static_cast<$OutputStream*>($$new($WaveFloatFileWriter$NoCloseOutputStream, out)), "WAVE"_s));
		{
			$var($Throwable, var$0, nullptr);
			int32_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					write(stream, writer);
					var$2 = (int32_t)writer->getFilePointer();
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						writer->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				writer->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

int32_t WaveFloatFileWriter::write($AudioInputStream* stream$renamed, $AudioFileFormat$Type* fileType, $File* out) {
	$var($AudioInputStream, stream, stream$renamed);
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	checkFormat(fileType, stream);
	if ($nc($(stream->getFormat()))->isBigEndian()) {
		$assign(stream, toLittleEndian(stream));
	}
	{
		$var($RIFFWriter, writer, $new($RIFFWriter, out, "WAVE"_s));
		{
			$var($Throwable, var$0, nullptr);
			int32_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					write(stream, writer);
					var$2 = (int32_t)writer->getFilePointer();
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						writer->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				writer->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

WaveFloatFileWriter::WaveFloatFileWriter() {
}

$Class* WaveFloatFileWriter::load$($String* name, bool initialize) {
	$loadClass(WaveFloatFileWriter, name, initialize, &_WaveFloatFileWriter_ClassInfo_, allocate$WaveFloatFileWriter);
	return class$;
}

$Class* WaveFloatFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com