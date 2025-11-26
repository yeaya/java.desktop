#include <com/sun/media/sound/JARSoundbankReader.h>

#include <com/sun/media/sound/SimpleSoundbank.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/spi/SoundbankReader.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $SimpleSoundbank = ::com::sun::media::sound::SimpleSoundbank;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankReader = ::javax::sound::midi::spi::SoundbankReader;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _JARSoundbankReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JARSoundbankReader::*)()>(&JARSoundbankReader::init$))},
	{"getSoundbank", "(Ljava/net/URL;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/InputStream;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"getSoundbank", "(Ljava/io/File;)Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
	{"isZIP", "(Ljava/net/URL;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($URL*)>(&JARSoundbankReader::isZIP))},
	{}
};

$ClassInfo _JARSoundbankReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.JARSoundbankReader",
	"javax.sound.midi.spi.SoundbankReader",
	nullptr,
	nullptr,
	_JARSoundbankReader_MethodInfo_
};

$Object* allocate$JARSoundbankReader($Class* clazz) {
	return $of($alloc(JARSoundbankReader));
}

void JARSoundbankReader::init$() {
	$SoundbankReader::init$();
}

bool JARSoundbankReader::isZIP($URL* url) {
	$init(JARSoundbankReader);
	$useLocalCurrentObjectStackCache();
	bool ok = false;
	try {
		$var($InputStream, stream, $nc(url)->openStream());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($bytes, buff, $new($bytes, 4));
				ok = $nc(stream)->read(buff) == 4;
				if (ok) {
					ok = (buff->get(0) == 80 && buff->get(1) == 75 && buff->get(2) == 3 && buff->get(3) == 4);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(stream)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
	}
	return ok;
}

$Soundbank* JARSoundbankReader::getSoundbank($URL* url) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!isZIP(url)) {
		return nullptr;
	}
	$var($ArrayList, soundbanks, $new($ArrayList));
	$var($URLClassLoader, ucl, $URLClassLoader::newInstance($$new($URLArray, {url})));
	$var($InputStream, stream, $nc(ucl)->getResourceAsStream("META-INF/services/javax.sound.midi.Soundbank"_s));
	if (stream == nullptr) {
		return nullptr;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($BufferedReader, r, $new($BufferedReader, $$new($InputStreamReader, stream)));
			$var($String, line, r->readLine());
			while (line != nullptr) {
				if (!line->startsWith("#"_s)) {
					try {
						$Class* c = $Class::forName($(line->trim()), false, ucl);
						$load($Soundbank);
						if ($Soundbank::class$->isAssignableFrom(c)) {
							$ReflectUtil::checkPackageAccess(c);
							$var($Object, o, $nc(c)->newInstance());
							soundbanks->add($cast($Soundbank, o));
						}
					} catch ($ReflectiveOperationException& ignored) {
					}
				}
				$assign(line, r->readLine());
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(stream)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (soundbanks->size() == 0) {
		return nullptr;
	}
	if (soundbanks->size() == 1) {
		return $cast($Soundbank, soundbanks->get(0));
	}
	$var($SimpleSoundbank, sbk, $new($SimpleSoundbank));
	{
		$var($Iterator, i$, soundbanks->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Soundbank, soundbank, $cast($Soundbank, i$->next()));
			sbk->addAllInstruments(soundbank);
		}
	}
	return sbk;
}

$Soundbank* JARSoundbankReader::getSoundbank($InputStream* stream) {
	$Objects::requireNonNull(stream);
	return nullptr;
}

$Soundbank* JARSoundbankReader::getSoundbank($File* file) {
	$useLocalCurrentObjectStackCache();
	return getSoundbank($($nc($($nc(file)->toURI()))->toURL()));
}

JARSoundbankReader::JARSoundbankReader() {
}

$Class* JARSoundbankReader::load$($String* name, bool initialize) {
	$loadClass(JARSoundbankReader, name, initialize, &_JARSoundbankReader_ClassInfo_, allocate$JARSoundbankReader);
	return class$;
}

$Class* JARSoundbankReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com