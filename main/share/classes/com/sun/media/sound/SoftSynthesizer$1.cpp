#include <com/sun/media/sound/SoftSynthesizer$1.h>

#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftSynthesizer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$1, this$0)},
	{}
};

$MethodInfo _SoftSynthesizer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(static_cast<void(SoftSynthesizer$1::*)($SoftSynthesizer*)>(&SoftSynthesizer$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftSynthesizer$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftSynthesizer",
	"getDefaultSoundbank",
	"()Ljavax/sound/midi/Soundbank;"
};

$InnerClassInfo _SoftSynthesizer$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftSynthesizer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SoftSynthesizer$1_FieldInfo_,
	_SoftSynthesizer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_SoftSynthesizer$1_EnclosingMethodInfo_,
	_SoftSynthesizer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer"
};

$Object* allocate$SoftSynthesizer$1($Class* clazz) {
	return $of($alloc(SoftSynthesizer$1));
}

void SoftSynthesizer$1::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($File, javahome, $new($File, $($nc($($System::getProperties()))->getProperty("java.home"_s))));
	$var($File, libaudio, $new($File, $$new($File, javahome, "lib"_s), "audio"_s));
	if (libaudio->isDirectory()) {
		$var($File, foundfile, nullptr);
		$var($FileArray, files, libaudio->listFiles());
		if (files != nullptr) {
			for (int32_t i = 0; i < files->length; ++i) {
				$var($File, file, files->get(i));
				if ($nc(file)->isFile()) {
					$var($String, lname, $nc($(file->getName()))->toLowerCase());
					bool var$0 = lname->endsWith(".sf2"_s);
					if (var$0 || lname->endsWith(".dls"_s)) {
						bool var$1 = foundfile == nullptr;
						if (!var$1) {
							int64_t var$2 = file->length();
							var$1 = (var$2 > $nc(foundfile)->length());
						}
						if (var$1) {
							$assign(foundfile, file);
						}
					}
				}
			}
		}
		if (foundfile != nullptr) {
			try {
				return $of($new($FileInputStream, foundfile));
			} catch ($IOException& e) {
			}
		}
	}
	return $of(nullptr);
}

SoftSynthesizer$1::SoftSynthesizer$1() {
}

$Class* SoftSynthesizer$1::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$1, name, initialize, &_SoftSynthesizer$1_ClassInfo_, allocate$SoftSynthesizer$1);
	return class$;
}

$Class* SoftSynthesizer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com