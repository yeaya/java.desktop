#include <com/sun/media/sound/SoftSynthesizer$4.h>

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

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftSynthesizer$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$4, this$0)},
	{}
};

$MethodInfo _SoftSynthesizer$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(static_cast<void(SoftSynthesizer$4::*)($SoftSynthesizer*)>(&SoftSynthesizer$4::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftSynthesizer$4_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftSynthesizer",
	"getDefaultSoundbank",
	"()Ljavax/sound/midi/Soundbank;"
};

$InnerClassInfo _SoftSynthesizer$4_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftSynthesizer$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SoftSynthesizer$4_FieldInfo_,
	_SoftSynthesizer$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_SoftSynthesizer$4_EnclosingMethodInfo_,
	_SoftSynthesizer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer"
};

$Object* allocate$SoftSynthesizer$4($Class* clazz) {
	return $of($alloc(SoftSynthesizer$4));
}

void SoftSynthesizer$4::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$4::run() {
	$useLocalCurrentObjectStackCache();
	$var($File, userhome, $new($File, $($System::getProperty("user.home"_s)), ".gervill"_s));
	$var($File, emg_soundbank_file, $new($File, userhome, "soundbank-emg.sf2"_s));
	if (emg_soundbank_file->isFile()) {
		try {
			return $of($new($FileInputStream, emg_soundbank_file));
		} catch ($IOException&) {
			$catch();
		}
	}
	return $of(nullptr);
}

SoftSynthesizer$4::SoftSynthesizer$4() {
}

$Class* SoftSynthesizer$4::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$4, name, initialize, &_SoftSynthesizer$4_ClassInfo_, allocate$SoftSynthesizer$4);
	return class$;
}

$Class* SoftSynthesizer$4::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com