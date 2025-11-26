#include <sun/font/SunFontManager$4.h>

#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/util/ArrayList.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef STR_ARRAY

using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$4_FieldInfo_[] = {
	{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$4, this$0)},
	{"val$filter", "Ljava/io/FilenameFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$4, val$filter)},
	{}
};

$MethodInfo _SunFontManager$4_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;Ljava/io/FilenameFilter;)V", "()V", 0, $method(static_cast<void(SunFontManager$4::*)($SunFontManager*,$FilenameFilter*)>(&SunFontManager$4::init$))},
	{"run", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$4_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"getFontFilesFromPath",
	"(Z)[Ljava/lang/String;"
};

$InnerClassInfo _SunFontManager$4_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunFontManager$4_FieldInfo_,
	_SunFontManager$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/String;>;",
	&_SunFontManager$4_EnclosingMethodInfo_,
	_SunFontManager$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$4($Class* clazz) {
	return $of($alloc(SunFontManager$4));
}

void SunFontManager$4::init$($SunFontManager* this$0, $FilenameFilter* val$filter) {
	$set(this, this$0, this$0);
	$set(this, val$filter, val$filter);
}

$Object* SunFontManager$4::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->pathDirs)->length == 1) {
		$var($File, dir, $new($File, $nc(this->this$0->pathDirs)->get(0)));
		$var($StringArray, files, dir->list(this->val$filter));
		if (files == nullptr) {
			return $of($new($StringArray, 0));
		}
		for (int32_t f = 0; f < $nc(files)->length; ++f) {
			files->set(f, $($nc(files->get(f))->toLowerCase()));
		}
		return $of(files);
	} else {
		$var($ArrayList, fileList, $new($ArrayList));
		for (int32_t i = 0; i < $nc(this->this$0->pathDirs)->length; ++i) {
			$var($File, dir, $new($File, $nc(this->this$0->pathDirs)->get(i)));
			$var($StringArray, files, dir->list(this->val$filter));
			if (files == nullptr) {
				continue;
			}
			for (int32_t f = 0; f < $nc(files)->length; ++f) {
				fileList->add($($nc(files->get(f))->toLowerCase()));
			}
		}
		$init($SunFontManager);
		return $of($fcast($StringArray, fileList->toArray($SunFontManager::STR_ARRAY)));
	}
}

SunFontManager$4::SunFontManager$4() {
}

$Class* SunFontManager$4::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$4, name, initialize, &_SunFontManager$4_ClassInfo_, allocate$SunFontManager$4);
	return class$;
}

$Class* SunFontManager$4::class$ = nullptr;

	} // font
} // sun