#include <sun/awt/Win32FontManager$4.h>

#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/Win32FontManager.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

$FieldInfo _Win32FontManager$4_FieldInfo_[] = {
	{"val$pathName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$4, val$pathName)},
	{}
};

$MethodInfo _Win32FontManager$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Win32FontManager$4::*)($String*)>(&Win32FontManager$4::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32FontManager$4_EnclosingMethodInfo_ = {
	"sun.awt.Win32FontManager",
	"registerJREFontsForPrinting",
	"()V"
};

$InnerClassInfo _Win32FontManager$4_InnerClassesInfo_[] = {
	{"sun.awt.Win32FontManager$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32FontManager$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Win32FontManager$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Win32FontManager$4_FieldInfo_,
	_Win32FontManager$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Win32FontManager$4_EnclosingMethodInfo_,
	_Win32FontManager$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Win32FontManager"
};

$Object* allocate$Win32FontManager$4($Class* clazz) {
	return $of($alloc(Win32FontManager$4));
}

void Win32FontManager$4::init$($String* val$pathName) {
	$set(this, val$pathName, val$pathName);
}

$Object* Win32FontManager$4::run() {
	$var($File, f1, $new($File, this->val$pathName));
	$var($StringArray, ls, f1->list($($nc($($SunFontManager::getInstance()))->getTrueTypeFilter())));
	if (ls == nullptr) {
		return $of(nullptr);
	}
	for (int32_t i = 0; i < $nc(ls)->length; ++i) {
		$var($File, fontFile, $new($File, f1, ls->get(i)));
		$Win32FontManager::registerFontWithPlatform($(fontFile->getAbsolutePath()));
	}
	return $of(nullptr);
}

Win32FontManager$4::Win32FontManager$4() {
}

$Class* Win32FontManager$4::load$($String* name, bool initialize) {
	$loadClass(Win32FontManager$4, name, initialize, &_Win32FontManager$4_ClassInfo_, allocate$Win32FontManager$4);
	return class$;
}

$Class* Win32FontManager$4::class$ = nullptr;

	} // awt
} // sun