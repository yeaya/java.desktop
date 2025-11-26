#include <sun/font/SunFontManager$5.h>

#include <java/io/File.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$5_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$5, this$0)},
	{"val$files", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$5, val$files)},
	{}
};

$MethodInfo _SunFontManager$5_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;[Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(SunFontManager$5::*)($SunFontManager*,$StringArray*)>(&SunFontManager$5::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$5_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"findFontFromPlatformMap",
	"(Ljava/lang/String;I)Lsun/font/Font2D;"
};

$InnerClassInfo _SunFontManager$5_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$5_FieldInfo_,
	_SunFontManager$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_SunFontManager$5_EnclosingMethodInfo_,
	_SunFontManager$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$5($Class* clazz) {
	return $of($alloc(SunFontManager$5));
}

void SunFontManager$5::init$($SunFontManager* this$0, $StringArray* val$files) {
	$set(this, this$0, this$0);
	$set(this, val$files, val$files);
}

$Object* SunFontManager$5::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->val$files)->length; ++i) {
		if ($nc(this->val$files)->get(i) == nullptr) {
			continue;
		}
		$var($File, f, $new($File, $nc(this->val$files)->get(i)));
		if (!f->exists()) {
			$init($Boolean);
			return $of($Boolean::TRUE);
		}
	}
	$init($Boolean);
	return $of($Boolean::FALSE);
}

SunFontManager$5::SunFontManager$5() {
}

$Class* SunFontManager$5::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$5, name, initialize, &_SunFontManager$5_ClassInfo_, allocate$SunFontManager$5);
	return class$;
}

$Class* SunFontManager$5::class$ = nullptr;

	} // font
} // sun