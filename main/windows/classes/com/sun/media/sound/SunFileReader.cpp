#include <com/sun/media/sound/SunFileReader.h>

#include <com/sun/media/sound/StandardFileFormat.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <javax/sound/sampled/spi/AudioFileReader.h>
#include <jcpp.h>

using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URL = ::java::net::URL;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;
using $AudioFileReader = ::javax::sound::sampled::spi::AudioFileReader;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SunFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SunFileReader::*)()>(&SunFileReader::init$))},
	{"big2little", "(I)I", nullptr, $FINAL, $method(static_cast<int32_t(SunFileReader::*)(int32_t)>(&SunFileReader::big2little))},
	{"big2littleShort", "(S)S", nullptr, $FINAL, $method(static_cast<int16_t(SunFileReader::*)(int16_t)>(&SunFileReader::big2littleShort))},
	{"calculatePCMFrameSize", "(II)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&SunFileReader::calculatePCMFrameSize))},
	{"closeSilently", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($InputStream*)>(&SunFileReader::closeSilently))},
	{"getAudioFileFormat", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioFileFormat", "(Ljava/net/URL;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioFileFormat", "(Ljava/io/File;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, $ABSTRACT, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/net/URL;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/File;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"rllong", "(Ljava/io/DataInputStream;)I", nullptr, $FINAL, $method(static_cast<int32_t(SunFileReader::*)($DataInputStream*)>(&SunFileReader::rllong)), "java.io.IOException"},
	{"rlshort", "(Ljava/io/DataInputStream;)S", nullptr, $FINAL, $method(static_cast<int16_t(SunFileReader::*)($DataInputStream*)>(&SunFileReader::rlshort)), "java.io.IOException"},
	{}
};

$ClassInfo _SunFileReader_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.SunFileReader",
	"javax.sound.sampled.spi.AudioFileReader",
	nullptr,
	nullptr,
	_SunFileReader_MethodInfo_
};

$Object* allocate$SunFileReader($Class* clazz) {
	return $of($alloc(SunFileReader));
}

void SunFileReader::init$() {
	$AudioFileReader::init$();
}

$AudioFileFormat* SunFileReader::getAudioFileFormat($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$nc(stream)->mark(200);
	{
		$var($Throwable, var$0, nullptr);
		$var($AudioFileFormat, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, getAudioFileFormatImpl(stream));
				return$1 = true;
				goto $finally;
			} catch ($EOFException&) {
				$var($EOFException, ignored, $catch());
				$throwNew($UnsupportedAudioFileException);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			stream->reset();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$AudioFileFormat* SunFileReader::getAudioFileFormat($URL* url) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, $nc(url)->openStream());
		{
			$var($Throwable, var$0, nullptr);
			$var($AudioFileFormat, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, getAudioFileFormatImpl($$new($BufferedInputStream, is)));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($EOFException&) {
		$var($EOFException, ignored, $catch());
		$throwNew($UnsupportedAudioFileException);
	}
	$shouldNotReachHere();
}

$AudioFileFormat* SunFileReader::getAudioFileFormat($File* file) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			$var($AudioFileFormat, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, getAudioFileFormatImpl($$new($BufferedInputStream, is)));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						is->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				is->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($EOFException&) {
		$var($EOFException, ignored, $catch());
		$throwNew($UnsupportedAudioFileException);
	}
	$shouldNotReachHere();
}

$AudioInputStream* SunFileReader::getAudioInputStream($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$nc(stream)->mark(200);
	try {
		$var($StandardFileFormat, format, getAudioFileFormatImpl(stream));
		$var($InputStream, var$0, stream);
		$var($AudioFormat, var$1, $nc(format)->getFormat());
		return $new($AudioInputStream, var$0, var$1, format->getLongFrameLength());
	} catch ($UnsupportedAudioFileException&) {
		$var($Exception, ignored, $catch());
		stream->reset();
		$throwNew($UnsupportedAudioFileException);
	} catch ($EOFException&) {
		$var($Exception, ignored, $catch());
		stream->reset();
		$throwNew($UnsupportedAudioFileException);
	}
	$shouldNotReachHere();
}

$AudioInputStream* SunFileReader::getAudioInputStream($URL* url) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, urlStream, $nc(url)->openStream());
	try {
		return getAudioInputStream(static_cast<$InputStream*>($$new($BufferedInputStream, urlStream)));
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		closeSilently(urlStream);
		$throw(e);
	}
	$shouldNotReachHere();
}

$AudioInputStream* SunFileReader::getAudioInputStream($File* file) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, fileStream, $new($FileInputStream, file));
	try {
		return getAudioInputStream(static_cast<$InputStream*>($$new($BufferedInputStream, fileStream)));
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		closeSilently(fileStream);
		$throw(e);
	}
	$shouldNotReachHere();
}

void SunFileReader::closeSilently($InputStream* is) {
	$init(SunFileReader);
	try {
		$nc(is)->close();
	} catch ($IOException&) {
		$catch();
	}
}

int32_t SunFileReader::rllong($DataInputStream* dis) {
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	int32_t b4 = 0;
	int32_t i = 0;
	i = $nc(dis)->readInt();
	b1 = ((int32_t)(i & (uint32_t)255)) << 24;
	b2 = ((int32_t)(i & (uint32_t)0x0000FF00)) << 8;
	b3 = ((int32_t)(i & (uint32_t)0x00FF0000)) >> 8;
	b4 = (int32_t)((uint32_t)((int32_t)(i & (uint32_t)(int32_t)0xFF000000)) >> 24);
	i = (((b1 | b2) | b3) | b4);
	return i;
}

int32_t SunFileReader::big2little(int32_t i) {
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	int32_t b4 = 0;
	b1 = ((int32_t)(i & (uint32_t)255)) << 24;
	b2 = ((int32_t)(i & (uint32_t)0x0000FF00)) << 8;
	b3 = ((int32_t)(i & (uint32_t)0x00FF0000)) >> 8;
	b4 = (int32_t)((uint32_t)((int32_t)(i & (uint32_t)(int32_t)0xFF000000)) >> 24);
	i = (((b1 | b2) | b3) | b4);
	return i;
}

int16_t SunFileReader::rlshort($DataInputStream* dis) {
	int16_t s = (int16_t)0;
	int16_t high = 0;
	int16_t low = 0;
	s = $nc(dis)->readShort();
	high = (int16_t)(((int32_t)(s & (uint32_t)255)) << 8);
	low = (int16_t)((int32_t)((uint32_t)((int32_t)(s & (uint32_t)0x0000FF00)) >> 8));
	s = (int16_t)(high | low);
	return s;
}

int16_t SunFileReader::big2littleShort(int16_t i) {
	int16_t high = 0;
	int16_t low = 0;
	high = (int16_t)(((int32_t)(i & (uint32_t)255)) << 8);
	low = (int16_t)((int32_t)((uint32_t)((int32_t)(i & (uint32_t)0x0000FF00)) >> 8));
	i = (int16_t)(high | low);
	return i;
}

int32_t SunFileReader::calculatePCMFrameSize(int32_t sampleSizeInBits, int32_t channels) {
	$init(SunFileReader);
	try {
		return $Math::multiplyExact((sampleSizeInBits + 7) / 8, channels);
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ignored, $catch());
		return 0;
	}
	$shouldNotReachHere();
}

SunFileReader::SunFileReader() {
}

$Class* SunFileReader::load$($String* name, bool initialize) {
	$loadClass(SunFileReader, name, initialize, &_SunFileReader_ClassInfo_, allocate$SunFileReader);
	return class$;
}

$Class* SunFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com