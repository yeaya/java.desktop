#include <com/sun/media/sound/SoftSynthesizer$3.h>

#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <jcpp.h>

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

$FieldInfo _SoftSynthesizer$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$3, this$0)},
	{}
};

$MethodInfo _SoftSynthesizer$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(static_cast<void(SoftSynthesizer$3::*)($SoftSynthesizer*)>(&SoftSynthesizer$3::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftSynthesizer$3_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftSynthesizer",
	"getDefaultSoundbank",
	"()Ljavax/sound/midi/Soundbank;"
};

$InnerClassInfo _SoftSynthesizer$3_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftSynthesizer$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SoftSynthesizer$3_FieldInfo_,
	_SoftSynthesizer$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_SoftSynthesizer$3_EnclosingMethodInfo_,
	_SoftSynthesizer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer"
};

$Object* allocate$SoftSynthesizer$3($Class* clazz) {
	return $of($alloc(SoftSynthesizer$3));
}

void SoftSynthesizer$3::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$3::run() {
	if ($nc($($nc($($System::getProperties()))->getProperty("os.name"_s)))->startsWith("Windows"_s)) {
		$var($File, gm_dls, $new($File, $$str({$($System::getenv("SystemRoot"_s)), "\\system32\\drivers\\gm.dls"_s})));
		if (gm_dls->isFile()) {
			try {
				return $of($new($FileInputStream, gm_dls));
			} catch ($IOException&) {
				$catch();
			}
		}
	}
	return $of(nullptr);
}

SoftSynthesizer$3::SoftSynthesizer$3() {
}

$Class* SoftSynthesizer$3::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$3, name, initialize, &_SoftSynthesizer$3_ClassInfo_, allocate$SoftSynthesizer$3);
	return class$;
}

$Class* SoftSynthesizer$3::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com