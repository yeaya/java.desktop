#include <com/sun/media/sound/SoftSynthesizer$2.h>

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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftSynthesizer$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$2, this$0)},
	{}
};

$MethodInfo _SoftSynthesizer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(static_cast<void(SoftSynthesizer$2::*)($SoftSynthesizer*)>(&SoftSynthesizer$2::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftSynthesizer$2_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftSynthesizer",
	"getDefaultSoundbank",
	"()Ljavax/sound/midi/Soundbank;"
};

$InnerClassInfo _SoftSynthesizer$2_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftSynthesizer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SoftSynthesizer$2_FieldInfo_,
	_SoftSynthesizer$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_SoftSynthesizer$2_EnclosingMethodInfo_,
	_SoftSynthesizer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer"
};

$Object* allocate$SoftSynthesizer$2($Class* clazz) {
	return $of($alloc(SoftSynthesizer$2));
}

void SoftSynthesizer$2::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$2::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($System::getProperties()))->getProperty("os.name"_s)))->startsWith("Linux"_s)) {
		$var($FileArray, systemSoundFontsDir, $new($FileArray, {
			$$new($File, "/usr/share/soundfonts/"_s),
			$$new($File, "/usr/local/share/soundfonts/"_s),
			$$new($File, "/usr/share/sounds/sf2/"_s),
			$$new($File, "/usr/local/share/sounds/sf2/"_s)
		}));
		{
			$var($FileArray, arr$, systemSoundFontsDir);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($File, systemSoundFontDir, arr$->get(i$));
				{
					if ($nc(systemSoundFontDir)->isDirectory()) {
						$var($File, defaultSoundFont, $new($File, systemSoundFontDir, "default.sf2"_s));
						if (defaultSoundFont->isFile()) {
							try {
								return $of($new($FileInputStream, defaultSoundFont));
							} catch ($IOException& e) {
							}
						}
					}
				}
			}
		}
	}
	return $of(nullptr);
}

SoftSynthesizer$2::SoftSynthesizer$2() {
}

$Class* SoftSynthesizer$2::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$2, name, initialize, &_SoftSynthesizer$2_ClassInfo_, allocate$SoftSynthesizer$2);
	return class$;
}

$Class* SoftSynthesizer$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com