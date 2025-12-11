#include <sun/font/SunFontManager$7.h>

#include <java/io/File.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$7_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$7, this$0)},
	{"val$fFile", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$7, val$fFile)},
	{"val$_tracker", "Lsun/font/CreatedFontTracker;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$7, val$_tracker)},
	{}
};

$MethodInfo _SunFontManager$7_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;Lsun/font/CreatedFontTracker;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(SunFontManager$7::*)($SunFontManager*,$CreatedFontTracker*,$File*)>(&SunFontManager$7::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$7_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"createFont2D",
	"(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;"
};

$InnerClassInfo _SunFontManager$7_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$7",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$7_FieldInfo_,
	_SunFontManager$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$7_EnclosingMethodInfo_,
	_SunFontManager$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$7($Class* clazz) {
	return $of($alloc(SunFontManager$7));
}

void SunFontManager$7::init$($SunFontManager* this$0, $CreatedFontTracker* val$_tracker, $File* val$fFile) {
	$set(this, this$0, this$0);
	$set(this, val$_tracker, val$_tracker);
	$set(this, val$fFile, val$fFile);
}

$Object* SunFontManager$7::run() {
	if (this->val$_tracker != nullptr) {
		$nc(this->val$_tracker)->subBytes((int32_t)$nc(this->val$fFile)->length());
	}
	$nc(this->val$fFile)->delete$();
	return $of(nullptr);
}

SunFontManager$7::SunFontManager$7() {
}

$Class* SunFontManager$7::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$7, name, initialize, &_SunFontManager$7_ClassInfo_, allocate$SunFontManager$7);
	return class$;
}

$Class* SunFontManager$7::class$ = nullptr;

	} // font
} // sun