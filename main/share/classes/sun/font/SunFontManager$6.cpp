#include <sun/font/SunFontManager$6.h>

#include <java/io/File.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$6_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$6, this$0)},
	{"val$s", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$6, val$s)},
	{}
};

$MethodInfo _SunFontManager$6_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(SunFontManager$6::*)($SunFontManager*,$String*)>(&SunFontManager$6::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$6_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"getPathName",
	"(Ljava/lang/String;)Ljava/lang/String;"
};

$InnerClassInfo _SunFontManager$6_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$6",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$6_FieldInfo_,
	_SunFontManager$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SunFontManager$6_EnclosingMethodInfo_,
	_SunFontManager$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$6($Class* clazz) {
	return $of($alloc(SunFontManager$6));
}

void SunFontManager$6::init$($SunFontManager* this$0, $String* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
}

$Object* SunFontManager$6::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t p = 0; p < $nc(this->this$0->pathDirs)->length; ++p) {
		$init($File);
		$var($File, f, $new($File, $$str({$nc(this->this$0->pathDirs)->get(p), $File::separator, this->val$s})));
		if (f->exists()) {
			return $of(f->getAbsolutePath());
		}
	}
	return $of(nullptr);
}

SunFontManager$6::SunFontManager$6() {
}

$Class* SunFontManager$6::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$6, name, initialize, &_SunFontManager$6_ClassInfo_, allocate$SunFontManager$6);
	return class$;
}

$Class* SunFontManager$6::class$ = nullptr;

	} // font
} // sun