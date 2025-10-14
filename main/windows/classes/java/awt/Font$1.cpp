#include <java/awt/Font$1.h>

#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace awt {

$MethodInfo _Font$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Font$1::*)()>(&Font$1::init$))},
	{"run", "()Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Font$1_EnclosingMethodInfo_ = {
	"java.awt.Font",
	"createFont0",
	"(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;"
};

$InnerClassInfo _Font$1_InnerClassesInfo_[] = {
	{"java.awt.Font$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Font$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Font$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_Font$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/File;>;",
	&_Font$1_EnclosingMethodInfo_,
	_Font$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Font"
};

$Object* allocate$Font$1($Class* clazz) {
	return $of($alloc(Font$1));
}

void Font$1::init$() {
}

$Object* Font$1::run() {
	return $of($nc($($Files::createTempFile("+~JF"_s, ".tmp"_s, $$new($FileAttributeArray, 0))))->toFile());
}

Font$1::Font$1() {
}

$Class* Font$1::load$($String* name, bool initialize) {
	$loadClass(Font$1, name, initialize, &_Font$1_ClassInfo_, allocate$Font$1);
	return class$;
}

$Class* Font$1::class$ = nullptr;

	} // awt
} // java